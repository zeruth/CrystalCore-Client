#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00ebcf20 */
unsigned int F_00ebcf20(unsigned int gen_a0)
{
  GEN_ENTER(0xebcf20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x28c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x290) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28c) + iVar3))))))
                  (*(int *)((int)this + 0x28c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x290));
    }
    iVar3 = *(int *)((int)this + 0x294);
    iVar1 = *(int *)((int)this + 0x28c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb1c90(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebcfb0 */
unsigned int F_00ebcfb0(unsigned int gen_a0)
{
  GEN_ENTER(0xebcfb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x40c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x410) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x40c) + iVar3))))))
                  (*(int *)((int)this + 0x40c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x410));
    }
    iVar3 = *(int *)((int)this + 0x414);
    iVar1 = *(int *)((int)this + 0x40c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb1ce0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd040 */
unsigned int F_00ebd040(unsigned int gen_a0)
{
  GEN_ENTER(0xebd040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x3ac) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x3b0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x3ac) + iVar3))))))
                  (*(int *)((int)this + 0x3ac) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x3b0));
    }
    iVar3 = *(int *)((int)this + 0x3b4);
    iVar1 = *(int *)((int)this + 0x3ac);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb1d30(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd0d0 */
unsigned int F_00ebd0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x2ec) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x2f0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2ec) + iVar3))))))
                  (*(int *)((int)this + 0x2ec) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x2f0));
    }
    iVar3 = *(int *)((int)this + 0x2f4);
    iVar1 = *(int *)((int)this + 0x2ec);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb1d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd160 */
unsigned int F_00ebd160(unsigned int gen_a0)
{
  GEN_ENTER(0xebd160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x46c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x470) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x46c) + iVar3))))))
                  (*(int *)((int)this + 0x46c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x470));
    }
    iVar3 = *(int *)((int)this + 0x474);
    iVar1 = *(int *)((int)this + 0x46c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb1dd0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd1f0 */
unsigned int F_00ebd1f0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x79c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x7a0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x79c) + iVar3))))))
                  (*(int *)((int)this + 0x79c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x7a0));
    }
    iVar3 = *(int *)((int)this + 0x7a4);
    iVar1 = *(int *)((int)this + 0x79c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb1e20(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd280 */
unsigned int F_00ebd280(unsigned int gen_a0)
{
  GEN_ENTER(0xebd280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x49c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x4a0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x49c) + iVar3))))))
                  (*(int *)((int)this + 0x49c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x4a0));
    }
    iVar3 = *(int *)((int)this + 0x4a4);
    iVar1 = *(int *)((int)this + 0x49c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb1e70(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd310 */
unsigned int F_00ebd310(unsigned int gen_a0)
{
  GEN_ENTER(0xebd310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0xa9c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0xaa0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xa9c) + iVar3))))))
                  (*(int *)((int)this + 0xa9c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0xaa0));
    }
    iVar3 = *(int *)((int)this + 0xaa4);
    iVar1 = *(int *)((int)this + 0xa9c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb1ec0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd3a0 */
unsigned int F_00ebd3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x88c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x890) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x88c) + iVar3))))))
                  (*(int *)((int)this + 0x88c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x890));
    }
    iVar3 = *(int *)((int)this + 0x894);
    iVar1 = *(int *)((int)this + 0x88c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb1f10(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd430 */
unsigned int F_00ebd430(unsigned int gen_a0)
{
  GEN_ENTER(0xebd430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0xbbc) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0xbc0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xbbc) + iVar3))))))
                  (*(int *)((int)this + 0xbbc) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0xbc0));
    }
    iVar3 = *(int *)((int)this + 0xbc4);
    iVar1 = *(int *)((int)this + 0xbbc);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb1f60(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd4c0 */
unsigned int F_00ebd4c0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x31c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 800) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x31c) + iVar3))))))
                  (*(int *)((int)this + 0x31c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 800));
    }
    iVar3 = *(int *)((int)this + 0x324);
    iVar1 = *(int *)((int)this + 0x31c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb1fb0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd550 */
unsigned int F_00ebd550(unsigned int gen_a0)
{
  GEN_ENTER(0xebd550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x28c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x294);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb2000(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd5b0 */
unsigned int F_00ebd5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x9ac) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x9b0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x9ac) + iVar3))))))
                  (*(int *)((int)this + 0x9ac) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x9b0));
    }
    iVar3 = *(int *)((int)this + 0x9b4);
    iVar1 = *(int *)((int)this + 0x9ac);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb2050(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd640 */
unsigned int F_00ebd640(unsigned int gen_a0)
{
  GEN_ENTER(0xebd640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x4ec);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x4f4);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb20a0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd6a0 */
unsigned int F_00ebd6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x196c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x1970) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x196c) + iVar3))))))
                  (*(int *)((int)this + 0x196c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x1970));
    }
    iVar3 = *(int *)((int)this + 0x1974);
    iVar1 = *(int *)((int)this + 0x196c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb20f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd730 */
uint F_00ebd730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebd730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a17030(this,1,param_1);
  return uVar1;
}

/* ref: FUN_00ebd750 */
uint F_00ebd750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebd750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  
  F_004797a0(this);
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  uVar1 = F_00eba500(this,0x20);
  *(short *)((int)this + 0x40) = (short)uVar1;
  if (*(int *)((int)this + 0x38) == 0) {
    uVar1 = *(uint *)((int)this + 0xc) & 0x17 | 4;
    uVar2 = *(uint *)((int)this + 0x10) & uVar1;
    *(uint *)((int)this + 0xc) = uVar1;
    if (uVar2 != 0) {
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 2) == 0) {
          uVar1 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
        }
        else {
          uVar1 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
        }
      }
      else {
        uVar1 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x14)) = 1;
      (*(uint *)(gen_frame + 0x18)) = uVar1;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  if ((char)param_2 != '\0') {
    F_00c463fe(this);
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ebd800 */
uint F_00ebd800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebd800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined1 * puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return (uint)(param_1 + param_2);
}

/* ref: FUN_00ebd830 */
uint F_00ebd830(unsigned int gen_a0)
{
  GEN_ENTER(0xebd830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00eba5b0(this);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 1;
  uVar1 = F_00eba620(this,1,0);
  *(uint *)((int)this + 0x6c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebd860 */
uint F_00ebd860(unsigned int gen_a0)
{
  GEN_ENTER(0xebd860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d114));
  F_00eb2e90(this);
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 4;
  uVar1 = F_00eba6b0(this,4,0);
  *(uint *)((int)this + 0x10c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebd8a0 */
uint F_00ebd8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb3050(this);
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 2;
  uVar1 = F_00eba750(this,2,0);
  *(uint *)((int)this + 0xac) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebd8e0 */
uint F_00ebd8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb3200(this);
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 7;
  uVar1 = F_00eba7f0(this,7,0);
  *(uint *)((int)this + 0x19c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebd920 */
uint F_00ebd920(unsigned int gen_a0)
{
  GEN_ENTER(0xebd920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb33c0(this);
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 3;
  uVar1 = F_00eba890(this,3,0);
  *(uint *)((int)this + 0xdc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebd960 */
uint F_00ebd960(unsigned int gen_a0)
{
  GEN_ENTER(0xebd960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb3580(this);
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 9;
  uVar1 = F_00eba930(this,9,0);
  *(uint *)((int)this + 0x1fc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebd9a0 */
uint F_00ebd9a0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb3740(this);
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 10;
  uVar1 = F_00eba9d0(this,10,0);
  *(uint *)((int)this + 0x22c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebd9e0 */
uint F_00ebd9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb3900(this);
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 3;
  uVar1 = F_00ebaa70(this,3,0);
  *(uint *)((int)this + 0xac) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebda20 */
uint F_00ebda20(unsigned int gen_a0)
{
  GEN_ENTER(0xebda20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb3ac0(this);
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 8;
  uVar1 = F_00ebab10(this,8,0);
  *(uint *)((int)this + 0x1cc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebda60 */
uint F_00ebda60(unsigned int gen_a0)
{
  GEN_ENTER(0xebda60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb3c80(this);
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 6;
  uVar1 = F_00ebabb0(this,6,0);
  *(uint *)((int)this + 0x16c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdaa0 */
uint F_00ebdaa0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdaa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb3e40(this);
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 4;
  uVar1 = F_00ebac50(this,4,0);
  *(uint *)((int)this + 0xcc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdae0 */
uint F_00ebdae0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb4000(this);
  *(undefined4 *)((int)this + 0x97c) = 0;
  *(undefined4 *)((int)this + 0x980) = 0;
  *(undefined4 *)((int)this + 0x984) = 0x31;
  uVar1 = F_00ebacf0(this,0x31,0);
  *(uint *)((int)this + 0x97c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdb20 */
uint F_00ebdb20(unsigned int gen_a0)
{
  GEN_ENTER(0xebdb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(this);
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 2;
  uVar1 = F_00ebad90(this,2,0);
  *(uint *)((int)this + 0x8c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdb60 */
uint F_00ebdb60(unsigned int gen_a0)
{
  GEN_ENTER(0xebdb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb4380(this);
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0x10;
  uVar1 = F_00ebae30(this,0x10,0);
  *(uint *)((int)this + 0x34c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdba0 */
uint F_00ebdba0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb4540(this);
  *(undefined4 *)((int)this + 0x5bc) = 0;
  *(undefined4 *)((int)this + 0x5c0) = 0;
  *(undefined4 *)((int)this + 0x5c4) = 0x1d;
  uVar1 = F_00ebaed0(this,0x1d,0);
  *(uint *)((int)this + 0x5bc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdbe0 */
uint F_00ebdbe0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdbe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb4700(this);
  *(undefined4 *)((int)this + 0x250c) = 0;
  *(undefined4 *)((int)this + 0x2510) = 0;
  *(undefined4 *)((int)this + 0x2514) = 0xc4;
  uVar1 = F_00ebaf70(this,0xc4,0);
  *(uint *)((int)this + 0x250c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdc20 */
uint F_00ebdc20(unsigned int gen_a0)
{
  GEN_ENTER(0xebdc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb48c0(this);
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0xc;
  uVar1 = F_00ebb010(this,0xc,0);
  *(uint *)((int)this + 0x28c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdc60 */
uint F_00ebdc60(unsigned int gen_a0)
{
  GEN_ENTER(0xebdc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb4a80(this);
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x414) = 0x14;
  uVar1 = F_00ebb0b0(this,0x14,0);
  *(uint *)((int)this + 0x40c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdca0 */
uint F_00ebdca0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb4c40(this);
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0x12;
  uVar1 = F_00ebb150(this,0x12,0);
  *(uint *)((int)this + 0x3ac) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdce0 */
uint F_00ebdce0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb4e00(this);
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0xe;
  uVar1 = F_00ebb1f0(this,0xe,0);
  *(uint *)((int)this + 0x2ec) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdd20 */
uint F_00ebdd20(unsigned int gen_a0)
{
  GEN_ENTER(0xebdd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb4fc0(this);
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0x16;
  uVar1 = F_00ebb290(this,0x16,0);
  *(uint *)((int)this + 0x46c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdd60 */
uint F_00ebdd60(unsigned int gen_a0)
{
  GEN_ENTER(0xebdd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb5180(this);
  *(undefined4 *)((int)this + 0x79c) = 0;
  *(undefined4 *)((int)this + 0x7a0) = 0;
  *(undefined4 *)((int)this + 0x7a4) = 0x27;
  uVar1 = F_00ebb330(this,0x27,0);
  *(uint *)((int)this + 0x79c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdda0 */
uint F_00ebdda0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb5340(this);
  *(undefined4 *)((int)this + 0x49c) = 0;
  *(undefined4 *)((int)this + 0x4a0) = 0;
  *(undefined4 *)((int)this + 0x4a4) = 0x17;
  uVar1 = F_00ebb3d0(this,0x17,0);
  *(uint *)((int)this + 0x49c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdde0 */
uint F_00ebdde0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb5500(this);
  *(undefined4 *)((int)this + 0xa9c) = 0;
  *(undefined4 *)((int)this + 0xaa0) = 0;
  *(undefined4 *)((int)this + 0xaa4) = 0x37;
  uVar1 = F_00ebb470(this,0x37,0);
  *(uint *)((int)this + 0xa9c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebde20 */
uint F_00ebde20(unsigned int gen_a0)
{
  GEN_ENTER(0xebde20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb56c0(this);
  *(undefined4 *)((int)this + 0x88c) = 0;
  *(undefined4 *)((int)this + 0x890) = 0;
  *(undefined4 *)((int)this + 0x894) = 0x2c;
  uVar1 = F_00ebb510(this,0x2c,0);
  *(uint *)((int)this + 0x88c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebde60 */
uint F_00ebde60(unsigned int gen_a0)
{
  GEN_ENTER(0xebde60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb5880(this);
  *(undefined4 *)((int)this + 0xbbc) = 0;
  *(undefined4 *)((int)this + 0xbc0) = 0;
  *(undefined4 *)((int)this + 0xbc4) = 0x3d;
  uVar1 = F_00ebb5b0(this,0x3d,0);
  *(uint *)((int)this + 0xbbc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdea0 */
uint F_00ebdea0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb5a40(this);
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x324) = 0xf;
  uVar1 = F_00ebb650(this,0xf,0);
  *(uint *)((int)this + 0x31c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdee0 */
uint F_00ebdee0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb5c00(this);
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0x12;
  uVar1 = F_00ebb6f0(this,0x12,0);
  *(uint *)((int)this + 0x28c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdf20 */
uint F_00ebdf20(unsigned int gen_a0)
{
  GEN_ENTER(0xebdf20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb5dd0(this);
  *(undefined4 *)((int)this + 0x9ac) = 0;
  *(undefined4 *)((int)this + 0x9b0) = 0;
  *(undefined4 *)((int)this + 0x9b4) = 0x32;
  uVar1 = F_00ebb790(this,0x32,0);
  *(uint *)((int)this + 0x9ac) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdf60 */
uint F_00ebdf60(unsigned int gen_a0)
{
  GEN_ENTER(0xebdf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb5f90(this);
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4f4) = 0x25;
  uVar1 = F_00ebb830(this,0x25,0);
  *(uint *)((int)this + 0x4ec) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdfa0 */
uint F_00ebdfa0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb6150(this);
  *(undefined4 *)((int)this + 0x196c) = 0;
  *(undefined4 *)((int)this + 0x1970) = 0;
  *(undefined4 *)((int)this + 0x1974) = 0x86;
  uVar1 = F_00ebb8d0(this,0x86,0);
  *(uint *)((int)this + 0x196c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdfe0 */
uint F_00ebdfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebdfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1);
  return param_1;
}

/* ref: FUN_00ebe000 */
uint F_00ebe000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebe000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,param_1);
  return param_1;
}

/* ref: FUN_00ebe020 */
uint F_00ebe020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebe020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  return param_1;
}

/* ref: FUN_00ebe040 */
uint F_00ebe040(unsigned int gen_a0)
{
  GEN_ENTER(0xebe040u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint in_edi;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)),0);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x15e38fc);
  if (REFG(undefined4, 0x15e3a34) == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)),0);
    if (REFG(undefined4, 0x15e3a34) == 0) {
      REFG(undefined4, 0x15d6788) = REFG(undefined4, 0x15d6788) + 1;
      REFG(undefined4, 0x15e3a34) = REFG(undefined4, 0x15d6788);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  in_edi = REFG(undefined4, 0x15e3a34);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  if (REFG(undefined4, 0x15e3a34) < *(uint *)(iVar1 + 0xc)) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + REFG(undefined4, 0x15e3a34) * 4)));
    if (uVar3 != 0) goto LAB_00ebe141;
  }
  else {
    uVar3 = 0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_00ebe0c3: ;
    if (uVar3 != 0) goto LAB_00ebe141;
  }
  else {
    uVar3 = F_00c45d58();
    if (in_edi < *(uint *)(uVar3 + 0xc)) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(uVar3 + 8) + in_edi * 4)));
      goto LAB_00ebe0c3;
    }
  }
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
    return uVar3;
  }
  uVar4 = F_00ebbbf0(&(*(uint *)(gen_frame + 0x8)),piVar2);
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (uVar4 == 0xffffffff) {
                    
    F_00c4c6c9(0,in_edi);
  }
  REFG(undefined4, 0x15e38fc) = (*(uint *)(gen_frame + 0x8));
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]),0);
  if (*(int *)(uVar3 + 4) != -1) {
    *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]));
  F_00c45ce1(uVar3);
LAB_00ebe141: ;
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00ebe160 */
uint F_00ebe160(unsigned int gen_a0)
{
  GEN_ENTER(0xebe160u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint in_edi;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)),0);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x15e3900);
  if (REFG(undefined4, 0x15e3a30) == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)),0);
    if (REFG(undefined4, 0x15e3a30) == 0) {
      REFG(undefined4, 0x15d6788) = REFG(undefined4, 0x15d6788) + 1;
      REFG(undefined4, 0x15e3a30) = REFG(undefined4, 0x15d6788);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  in_edi = REFG(undefined4, 0x15e3a30);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  if (REFG(undefined4, 0x15e3a30) < *(uint *)(iVar1 + 0xc)) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + REFG(undefined4, 0x15e3a30) * 4)));
    if (uVar3 != 0) goto LAB_00ebe261;
  }
  else {
    uVar3 = 0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_00ebe1e3: ;
    if (uVar3 != 0) goto LAB_00ebe261;
  }
  else {
    uVar3 = F_00c45d58();
    if (in_edi < *(uint *)(uVar3 + 0xc)) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(uVar3 + 8) + in_edi * 4)));
      goto LAB_00ebe1e3;
    }
  }
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
    return uVar3;
  }
  uVar4 = F_00ebbc70(&(*(uint *)(gen_frame + 0x8)),piVar2);
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (uVar4 == 0xffffffff) {
                    
    F_00c4c6c9(0,in_edi);
  }
  REFG(undefined4, 0x15e3900) = (*(uint *)(gen_frame + 0x8));
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]),0);
  if (*(int *)(uVar3 + 4) != -1) {
    *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]));
  F_00c45ce1(uVar3);
LAB_00ebe261: ;
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00ebe280 */
uint F_00ebe280(unsigned int gen_a0)
{
  GEN_ENTER(0xebe280u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint in_edi;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)),0);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x15e3904);
  if (REFG(undefined4, 0x15e3a2c) == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)),0);
    if (REFG(undefined4, 0x15e3a2c) == 0) {
      REFG(undefined4, 0x15d6788) = REFG(undefined4, 0x15d6788) + 1;
      REFG(undefined4, 0x15e3a2c) = REFG(undefined4, 0x15d6788);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  in_edi = REFG(undefined4, 0x15e3a2c);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  if (REFG(undefined4, 0x15e3a2c) < *(uint *)(iVar1 + 0xc)) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + REFG(undefined4, 0x15e3a2c) * 4)));
    if (uVar3 != 0) goto LAB_00ebe381;
  }
  else {
    uVar3 = 0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_00ebe303: ;
    if (uVar3 != 0) goto LAB_00ebe381;
  }
  else {
    uVar3 = F_00c45d58();
    if (in_edi < *(uint *)(uVar3 + 0xc)) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(uVar3 + 8) + in_edi * 4)));
      goto LAB_00ebe303;
    }
  }
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
    return uVar3;
  }
  uVar4 = F_00ebbcf0(&(*(uint *)(gen_frame + 0x8)),piVar2);
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (uVar4 == 0xffffffff) {
                    
    F_00c4c6c9(0,in_edi);
  }
  REFG(undefined4, 0x15e3904) = (*(uint *)(gen_frame + 0x8));
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]),0);
  if (*(int *)(uVar3 + 4) != -1) {
    *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]));
  F_00c45ce1(uVar3);
LAB_00ebe381: ;
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00ebe3a0 */
uint F_00ebe3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebe3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x88);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 0x20) = 0;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      F_0042cbc0(puVar1 + 4,param_1);
      puVar1[0x1a] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
      puVar1[0x1c] = 0;
      puVar1[0x1e] = 0;
      F_00ea7d20(puVar1 + 0x1a,param_1 + 0x58);
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00ebe430 */
uint F_00ebe430(unsigned int gen_a0)
{
  GEN_ENTER(0xebe430u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)param_1 + 0x54));
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00ebe450 */
uint F_00ebe450(unsigned int gen_a0)
{
  GEN_ENTER(0xebe450u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined4 *)((int)param_1 + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20((undefined4 *)((int)param_1 + 0x58));
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00ebe480 */
unsigned int F_00ebe480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebe480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 6) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
  }
  return 0;
}

/* ref: FUN_00ebe4b0 */
uint F_00ebe4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xebe4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 * this;
  int iVar1;
  
  this = param_3;
  iVar1 = param_1;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined4 *)0x0) {
      *this = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
      this[2] = 0;
      this[4] = 0;
      F_00ea7d20(this,iVar1);
    }
    iVar1 = iVar1 + 0x18;
    this = this + 6;
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ebe500 */
unsigned int F_00ebe500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebe500u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    F_0042cbc0((undefined *)((int)param_1 + 0x54),param_2 + 0x54);
  }
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::StringToken::vf8 */
uint F_00ebe550(unsigned int gen_a0)
{
  GEN_ENTER(0xebe550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: FUN_00ebe560 */
uint F_00ebe560(unsigned int gen_a0)
{
  GEN_ENTER(0xebe560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x115d4d4));
  if (0xf < *(uint *)((int)this + 0x1c)) {
    F_00406ad0(*(undefined4 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::SimpleJsonToken::vf8 */
uint F_00ebe5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xebe5c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: FUN_00ebe5d0 */
uint F_00ebe5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xebe5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x115d4fc));
  if (0xf < *(uint *)((int)this + 0x1c)) {
    F_00406ad0(*(undefined4 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::StringToken::vf0 */
uint F_00ebe610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebe610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x115d4d4));
  if (0xf < *(uint *)(this + 0x1c)) {
    F_00406ad0(*(undefined4 *)(this + 8));
  }
  *(undefined4 *)(this + 0x1c) = 0xf;
  *(undefined4 *)(this + 0x18) = 0;
  this[8] = (undefined1)0x0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::ServerFramework::JsonParser::SimpleJsonToken::vf0 */
uint F_00ebe660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebe660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x115d4fc));
  if (0xf < *(uint *)(this + 0x1c)) {
    F_00406ad0(*(undefined4 *)(this + 8));
  }
  *(undefined4 *)(this + 0x1c) = 0xf;
  *(undefined4 *)(this + 0x18) = 0;
  this[8] = (undefined1)0x0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ebe6b0 */
uint F_00ebe6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xebe6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = *(int * PTR32 *)this;
  if ((*((byte *)GEN_TOP((*(int *)(*piVar1 + 4) + 0x14 + (int)piVar1))) & 2) != 0) {
    F_00ebbf30(piVar1);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)this + 4))) + 0x38 + (int)*(int * PTR32 *)this)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00ebe6e0 */
uint F_00ebe6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebe6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  byte bVar2;
  
  *(int * PTR32 *)this = param_1;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  bVar2 = F_00ebc060(*(undefined * PTR32 *)this,param_2);
  *(byte *)((int)this + 4) = bVar2;
  return (uint)this;
}

/* ref: FUN_00ebe720 */
uint F_00ebe720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xebe720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if (uVar2 < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  if (-uVar2 - 1 <= param_2) {
                    
    F_00c4579a("string too long");
  }
  if (param_2 != 0) {
    uVar1 = uVar2 + param_2;
    if (uVar1 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar1) {
      F_00a16590(this,uVar1,uVar2);
      if (uVar1 == 0) {
        return (uint)this;
      }
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (*(uint *)((int)this + 0x14) < 0x10) {
        *(undefined1 *)this = 0;
        return (uint)this;
      }
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    pvVar4 = this;
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar4 + param_2 + param_1,(int)pvVar3 + param_1,
               *(int *)((int)this + 0x10) - param_1);
    F_00a14a80(this,param_1,param_2,param_3);
    *(uint *)((int)this + 0x10) = uVar1;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar1) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar1) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00ebe820 */
uint F_00ebe820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebe820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 != (undefined *)0x0) {
    uVar2 = *(uint *)((int)this + 0x14);
    pvVar3 = this;
    if (7 < uVar2) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    if (pvVar3 <= param_1) {
      pvVar3 = this;
      if (7 < uVar2) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP(((int)pvVar3 + *(int *)((int)this + 0x10) * 2)))) {
        pvVar3 = this;
        if (7 < uVar2) {
          pvVar3 = *(undefined * PTR32 *)this;
        }
        uVar2 = F_00b123c0(this,this,(int)param_1 - (int)((int)(uintptr_t)pvVar3) >> 1,param_2);
        return uVar2;
      }
    }
  }
  if (0x7ffffffe < param_2) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    F_00b11fc0(this,param_2,*(undefined4 *)((int)this + 0x10));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (7 < *(uint *)((int)this + 0x14)) {
      **(undefined2 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined2 *)this = 0;
    return (uint)this;
  }
  pvVar3 = this;
  if (7 < *(uint *)((int)this + 0x14)) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  iVar1 = param_2 * 2;
  F_00c46aa0(pvVar3,param_1,iVar1);
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 8) {
    *(undefined2 *)(iVar1 + (int)this) = 0;
    return (uint)this;
  }
  *(undefined2 *)(iVar1 + *(int *)this) = 0;
  return (uint)this;
}

/* ref: FUN_00ebe910 */
uint F_00ebe910(unsigned int gen_a0)
{
  GEN_ENTER(0xebe910u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint in_edi;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)),0);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x15e3908);
  if (REFG(undefined4, 0x1370b94) == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)),0);
    if (REFG(undefined4, 0x1370b94) == 0) {
      REFG(undefined4, 0x1370b94) = REFG(undefined4, 0x15d6788) + 1;
      REFG(undefined4, 0x15d6788) = REFG(undefined4, 0x1370b94);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  in_edi = REFG(undefined4, 0x1370b94);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  if (REFG(undefined4, 0x1370b94) < *(uint *)(iVar1 + 0xc)) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + REFG(undefined4, 0x1370b94) * 4)));
    if (uVar3 != 0) goto LAB_00ebea11;
  }
  else {
    uVar3 = 0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_00ebe993: ;
    if (uVar3 != 0) goto LAB_00ebea11;
  }
  else {
    uVar3 = F_00c45d58();
    if (in_edi < *(uint *)(uVar3 + 0xc)) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(uVar3 + 8) + in_edi * 4)));
      goto LAB_00ebe993;
    }
  }
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
    return uVar3;
  }
  uVar4 = F_00ebc370(&(*(uint *)(gen_frame + 0x8)),piVar2);
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (uVar4 == 0xffffffff) {
                    
    F_00c4c6c9(0,in_edi);
  }
  REFG(undefined4, 0x15e3908) = (*(uint *)(gen_frame + 0x8));
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]),0);
  if (*(int *)(uVar3 + 4) != -1) {
    *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]));
  F_00c45ce1(uVar3);
LAB_00ebea11: ;
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00ebea30 */
uint F_00ebea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if ((*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x3c + (int)this))), this_00 != (undefined *)0x0))
  {
    F_00a16e10(this_00);
  }
  if (*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) {
    piVar1 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x30 + (int)this)))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)),0);
    if (piVar1[1] != -1) {
      piVar1[1] = piVar1[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)));
    piVar4 = (int *)F_00ebc250(&(*(int * PTR32 *)(gen_frame + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar4;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)),0);
    iVar2 = piVar1[1];
    if ((iVar2 != 0) && (iVar2 != -1)) {
      piVar1[1] = iVar2 + -1;
    }
    iVar2 = piVar1[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)));
    puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & (uint)piVar1)));
    if (puVar6 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
    }
    uVar5 = (*(uint *)(gen_frame + 0x8));
    iVar2 = *(int *)this;
    iVar3 = *(int *)(iVar2 + 4);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x8)) = uVar5 & 0xffffff00;
    iVar2 = *(int *)(iVar2 + 4);
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x18))
              ((*(int * PTR32 *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x8)),*(undefined4 *)(iVar2 + 0x38 + (int)this),
               iVar3 + (int)this,(uint)*(byte *)(iVar2 + 0x40 + (int)this),param_1);
    if ((char)(*(uint *)(gen_frame + 0x8)) != '\0') {
      (*(uint *)(gen_frame + 0x14)) = 4;
    }
  }
  iVar2 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x14)) != 0) {
    uVar5 = *(uint *)((int)this + iVar2 + 0xc) | (*(uint *)(gen_frame + 0x14));
    if (*(int *)((int)this + iVar2 + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    *(uint *)((int)this + iVar2 + 0xc) = uVar5 & 0x17;
    uVar5 = *(uint *)((int)this + iVar2 + 0x10) & uVar5 & 0x17;
    if (uVar5 != 0) {
      if ((uVar5 & 4) == 0) {
        if ((uVar5 & 2) == 0) {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::eofbit set";
        }
        else {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::failbit set";
        }
      }
      else {
        uVar5 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::badbit set";
      }
      (*(uint *)(gen_frame + 0x8)) = 1;
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) = uVar5;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x14 + (int)this))) & 2) != 0) {
    F_00a16e10(this);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00ebebe0 */
uint F_00ebebe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebebe0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if ((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0])))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x3c + (int)(*(undefined * PTR32 *)&gen_args[0])))), this_00 != (undefined *)0x0))
  {
    F_00ebbf30(this_00);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0])))) == 0) {
    piVar1 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x30 + (int)(*(undefined * PTR32 *)&gen_args[0]))))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)),0);
    if (piVar1[1] != -1) {
      piVar1[1] = piVar1[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)));
    piVar3 = (int *)F_00ebe040(&(*(int * PTR32 *)(gen_frame + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)),0);
    iVar2 = piVar1[1];
    if ((iVar2 != 0) && (iVar2 != -1)) {
      piVar1[1] = iVar2 + -1;
    }
    iVar2 = piVar1[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)));
    puVar5 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & (uint)piVar1)));
    if (puVar5 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
    }
    uVar4 = (*(uint *)(gen_frame + 0x8));
    iVar2 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x8)) = uVar4 & 0xffffff00;
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x14))
              ((*(int * PTR32 *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[1]),(*(uint *)(gen_frame + 0x8)),*((undefined4 *)GEN_TOP((iVar2 + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0])))),
               *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + (int)(*(undefined * PTR32 *)&gen_args[0]),(uint)*((ushort *)GEN_TOP((iVar2 + 0x40 + (int)(*(undefined * PTR32 *)&gen_args[0])))),
               (*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
      (*(uint *)(gen_frame + 0x14)) = 4;
    }
  }
  iVar2 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((*(uint *)(gen_frame + 0x14)) != 0) {
    uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0xc))) | (*(uint *)(gen_frame + 0x14));
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0x38))) == 0) {
      uVar4 = uVar4 | 4;
    }
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0xc))) = uVar4 & 0x17;
    uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0x10))) & uVar4 & 0x17;
    if (uVar4 != 0) {
      if ((uVar4 & 4) == 0) {
        if ((uVar4 & 2) == 0) {
          uVar4 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::eofbit set";
        }
        else {
          uVar4 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::failbit set";
        }
      }
      else {
        uVar4 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::badbit set";
      }
      (*(uint *)(gen_frame + 0x8)) = 1;
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) = uVar4;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    }
  }
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x14 + (int)(*(undefined * PTR32 *)&gen_args[0])))) & 2) != 0) {
    F_00ebbf30((*(undefined * PTR32 *)&gen_args[0]));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ebed90 */
uint F_00ebed90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebed90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if ((*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x3c + (int)this))), this_00 != (undefined *)0x0))
  {
    F_00a16e10(this_00);
  }
  if (*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) {
    piVar1 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x30 + (int)this)))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)),0);
    if (piVar1[1] != -1) {
      piVar1[1] = piVar1[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)));
    piVar4 = (int *)F_00ebc250(&(*(int * PTR32 *)(gen_frame + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar4;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)),0);
    iVar2 = piVar1[1];
    if ((iVar2 != 0) && (iVar2 != -1)) {
      piVar1[1] = iVar2 + -1;
    }
    iVar2 = piVar1[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)));
    puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & (uint)piVar1)));
    if (puVar6 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
    }
    uVar5 = (*(uint *)(gen_frame + 0x8));
    iVar2 = *(int *)this;
    iVar3 = *(int *)(iVar2 + 4);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x8)) = uVar5 & 0xffffff00;
    iVar2 = *(int *)(iVar2 + 4);
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x20))
              ((*(int * PTR32 *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x8)),*(undefined4 *)(iVar2 + 0x38 + (int)this),
               iVar3 + (int)this,(uint)*(byte *)(iVar2 + 0x40 + (int)this),param_1);
    if ((char)(*(uint *)(gen_frame + 0x8)) != '\0') {
      (*(uint *)(gen_frame + 0x14)) = 4;
    }
  }
  iVar2 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x14)) != 0) {
    uVar5 = *(uint *)((int)this + iVar2 + 0xc) | (*(uint *)(gen_frame + 0x14));
    if (*(int *)((int)this + iVar2 + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    *(uint *)((int)this + iVar2 + 0xc) = uVar5 & 0x17;
    uVar5 = *(uint *)((int)this + iVar2 + 0x10) & uVar5 & 0x17;
    if (uVar5 != 0) {
      if ((uVar5 & 4) == 0) {
        if ((uVar5 & 2) == 0) {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::eofbit set";
        }
        else {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::failbit set";
        }
      }
      else {
        uVar5 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::badbit set";
      }
      (*(uint *)(gen_frame + 0x8)) = 1;
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) = uVar5;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x14 + (int)this))) & 2) != 0) {
    F_00a16e10(this);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00ebef40 */
uint F_00ebef40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebef40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if ((*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x3c + (int)this))), this_00 != (undefined *)0x0))
  {
    F_00a16e10(this_00);
  }
  if (*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) {
    piVar1 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x30 + (int)this)))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)),0);
    if (piVar1[1] != -1) {
      piVar1[1] = piVar1[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)));
    piVar4 = (int *)F_00ebc250(&(*(int * PTR32 *)(gen_frame + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar4;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)),0);
    iVar2 = piVar1[1];
    if ((iVar2 != 0) && (iVar2 != -1)) {
      piVar1[1] = iVar2 + -1;
    }
    iVar2 = piVar1[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)));
    puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & (uint)piVar1)));
    if (puVar6 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
    }
    uVar5 = (*(uint *)(gen_frame + 0x8));
    iVar2 = *(int *)this;
    iVar3 = *(int *)(iVar2 + 4);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x8)) = uVar5 & 0xffffff00;
    iVar2 = *(int *)(iVar2 + 4);
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x1c))
              ((*(int * PTR32 *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x8)),*(undefined4 *)(iVar2 + 0x38 + (int)this),
               iVar3 + (int)this,(uint)*(byte *)(iVar2 + 0x40 + (int)this),param_1);
    if ((char)(*(uint *)(gen_frame + 0x8)) != '\0') {
      (*(uint *)(gen_frame + 0x14)) = 4;
    }
  }
  iVar2 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x14)) != 0) {
    uVar5 = *(uint *)((int)this + iVar2 + 0xc) | (*(uint *)(gen_frame + 0x14));
    if (*(int *)((int)this + iVar2 + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    *(uint *)((int)this + iVar2 + 0xc) = uVar5 & 0x17;
    uVar5 = *(uint *)((int)this + iVar2 + 0x10) & uVar5 & 0x17;
    if (uVar5 != 0) {
      if ((uVar5 & 4) == 0) {
        if ((uVar5 & 2) == 0) {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::eofbit set";
        }
        else {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::failbit set";
        }
      }
      else {
        uVar5 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::badbit set";
      }
      (*(uint *)(gen_frame + 0x8)) = 1;
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) = uVar5;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x14 + (int)this))) & 2) != 0) {
    F_00a16e10(this);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00ebf0f0 */
uint F_00ebf0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebf0f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if ((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0])))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x3c + (int)(*(undefined * PTR32 *)&gen_args[0])))), this_00 != (undefined *)0x0))
  {
    F_00a16e10(this_00);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0])))) == 0) {
    piVar1 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x30 + (int)(*(undefined * PTR32 *)&gen_args[0]))))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)),0);
    if (piVar1[1] != -1) {
      piVar1[1] = piVar1[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)));
    piVar3 = (int *)F_00ebc250(&(*(int * PTR32 *)(gen_frame + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)),0);
    iVar2 = piVar1[1];
    if ((iVar2 != 0) && (iVar2 != -1)) {
      piVar1[1] = iVar2 + -1;
    }
    iVar2 = piVar1[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)));
    puVar5 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & (uint)piVar1)));
    if (puVar5 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
    }
    uVar4 = (*(uint *)(gen_frame + 0x8));
    iVar2 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x8)) = uVar4 & 0xffffff00;
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x14))
              ((*(int * PTR32 *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[1]),(*(uint *)(gen_frame + 0x8)),*((undefined4 *)GEN_TOP((iVar2 + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0])))),
               *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + (int)(*(undefined * PTR32 *)&gen_args[0]),(uint)*((byte *)GEN_TOP((iVar2 + 0x40 + (int)(*(undefined * PTR32 *)&gen_args[0])))),
               (*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
      (*(uint *)(gen_frame + 0x14)) = 4;
    }
  }
  iVar2 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((*(uint *)(gen_frame + 0x14)) != 0) {
    uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0xc))) | (*(uint *)(gen_frame + 0x14));
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0x38))) == 0) {
      uVar4 = uVar4 | 4;
    }
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0xc))) = uVar4 & 0x17;
    uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0x10))) & uVar4 & 0x17;
    if (uVar4 != 0) {
      if ((uVar4 & 4) == 0) {
        if ((uVar4 & 2) == 0) {
          uVar4 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::eofbit set";
        }
        else {
          uVar4 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::failbit set";
        }
      }
      else {
        uVar4 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::badbit set";
      }
      (*(uint *)(gen_frame + 0x8)) = 1;
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) = uVar4;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    }
  }
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x14 + (int)(*(undefined * PTR32 *)&gen_args[0])))) & 2) != 0) {
    F_00a16e10((*(undefined * PTR32 *)&gen_args[0]));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ebf2a0 */
uint F_00ebf2a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xebf2a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  (*(uint *)(gen_frame + 0x28)) = 0;
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  if ((*((int *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) == 0) &&
     (this = *((undefined * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x3c + (int)param_1))), this != (undefined *)0x0)) {
    F_00a16e10(this);
  }
  if (*((int *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) == 0) {
    uVar3 = **((uint * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x30 + (int)param_1)));
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x20))))) = uVar3;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x24)),0);
    if (*(int *)(uVar3 + 4) != -1) {
      *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x24)));
    piVar2 = (int *)F_00ebc250(&(*(undefined4 *)(gen_frame + 0x20)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x20)),0);
    iVar1 = *(int *)(uVar3 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(uVar3 + 4) = iVar1 + -1;
    }
    iVar1 = *(int *)(uVar3 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x20)));
    puVar4 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & uVar3)));
    if (puVar4 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    }
    uVar3 = (*(uint *)(gen_frame + 0x1c));
    iVar1 = *(int *)(*param_1 + 4);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = uVar3 & 0xffffff00;
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0xc))
              ((*(int * PTR32 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0x1c)),*(undefined4 *)(iVar1 + 0x38 + (int)param_1),
               *(int *)(*param_1 + 4) + (int)param_1,(uint)*(byte *)(iVar1 + 0x40 + (int)param_1));
    if ((char)(*(undefined4 *)(gen_frame + 0x14)) != '\0') {
      (*(uint *)(gen_frame + 0x28)) = 4;
    }
  }
  iVar1 = *(int *)(*param_1 + 4);
  if ((*(uint *)(gen_frame + 0x28)) != 0) {
    uVar3 = *(uint *)((int)param_1 + iVar1 + 0xc) | (*(uint *)(gen_frame + 0x28));
    if (*(int *)((int)param_1 + iVar1 + 0x38) == 0) {
      uVar3 = uVar3 | 4;
    }
    *(uint *)((int)param_1 + iVar1 + 0xc) = uVar3 & 0x17;
    uVar3 = *(uint *)((int)param_1 + iVar1 + 0x10) & uVar3 & 0x17;
    if (uVar3 != 0) {
      if ((uVar3 & 4) == 0) {
        if ((uVar3 & 2) == 0) {
          uVar3 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
        }
        else {
          uVar3 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
        }
      }
      else {
        uVar3 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x14)) = 1;
      (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)uVar3;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)(*param_1 + 4) + 0x14 + (int)param_1))) & 2) != 0) {
    F_00a16e10(param_1);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  return (uint)param_1;
}

/* ref: FUN_00ebf460 */
uint F_00ebf460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebf460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int * piVar2;
  int iVar3;
  byte bVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  iVar1 = *(int *)this;
  (*(uint *)(gen_frame + 0x28)) = 0;
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  bVar4 = F_00ebc060(this,0);
  if (bVar4 != 0) {
    iVar1 = *(int *)this;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    piVar2 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x30 + (int)this)))));
    (*(int * PTR32 *)(gen_frame + 0x24)) = piVar2;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x1c)),0);
    if (piVar2[1] != -1) {
      piVar2[1] = piVar2[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x1c)));
    piVar5 = (int *)F_00ebe160(&(*(int * PTR32 *)(gen_frame + 0x24)));
    (*(int * PTR32 *)(gen_frame + 0x24)) = piVar5;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x18)),0);
    iVar1 = piVar2[1];
    if ((iVar1 != 0) && (iVar1 != -1)) {
      piVar2[1] = iVar1 + -1;
    }
    iVar1 = piVar2[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x18)));
    puVar7 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & (uint)piVar2)));
    if (puVar7 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar7)(puVar7,1);
    }
    iVar1 = *(int *)(*(int *)this + 4);
    iVar3 = *(int *)(iVar1 + 0x38 + (int)this);
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))) + 0)) = 1;
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))) + 0)) = 1;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = iVar3 == 0;
    (*(uint *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x10)), 1, 3),iVar3 == 0);
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 0x20))
              ((*(int * PTR32 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0xc)),iVar3,(*(uint *)(gen_frame + 0x10)),0,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))),iVar1 + (int)this,&(*(uint *)(gen_frame + 0x28)),
               &(*(undefined4 *)(gen_frame + 0x20)));
    if (((*(uint *)(gen_frame + 0x28)) & 2) == 0) {
      *param_1 = (*(undefined4 *)(gen_frame + 0x20));
    }
    else {
      (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) | 2;
    }
  }
  iVar1 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x28)) != 0) {
    uVar6 = *(uint *)((int)this + iVar1 + 0xc) | (*(uint *)(gen_frame + 0x28));
    if (*(int *)((int)this + iVar1 + 0x38) == 0) {
      uVar6 = uVar6 | 4;
    }
    *(uint *)((int)this + iVar1 + 0xc) = uVar6 & 0x17;
    uVar6 = *(uint *)((int)this + iVar1 + 0x10) & uVar6 & 0x17;
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
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  return (uint)this;
}

/* ref: FUN_00ebf600 */
uint F_00ebf600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebf600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  iVar1 = *(int *)this;
  (*(uint *)(gen_frame + 0x24)) = 0;
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  bVar5 = F_00ebc060(this,0);
  if (bVar5 != 0) {
    piVar2 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x30 + (int)this)))));
    (*(int * PTR32 *)(gen_frame + 0x28)) = piVar2;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x20)),0);
    if (piVar2[1] != -1) {
      piVar2[1] = piVar2[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x20)));
    piVar6 = (int *)F_00ebe160(&(*(int * PTR32 *)(gen_frame + 0x28)));
    (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x1c)),0);
    iVar1 = piVar2[1];
    if ((iVar1 != 0) && (iVar1 != -1)) {
      piVar2[1] = iVar1 + -1;
    }
    iVar1 = piVar2[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x1c)));
    puVar8 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & (uint)piVar2)));
    if (puVar8 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
    }
    iVar1 = *(int *)(*(int *)this + 4);
    iVar3 = *(int *)(iVar1 + 0x38 + (int)this);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = iVar3 == 0;
    (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),iVar3 == 0);
    iVar4 = *(*(int * PTR32 *)(gen_frame + 0x28));
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 0)) = 1;
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 0)) = 1;
    ((code *)*(gen_code32 *)(iVar4 + 0x24))
              ((*(int * PTR32 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x10)),iVar3,(*(uint *)(gen_frame + 0x14)),0,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))),iVar1 + (int)this,&(*(uint *)(gen_frame + 0x24)),
               param_1);
  }
  iVar1 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x24)) != 0) {
    uVar7 = *(uint *)((int)this + iVar1 + 0xc) | (*(uint *)(gen_frame + 0x24));
    if (*(int *)((int)this + iVar1 + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    *(uint *)((int)this + iVar1 + 0xc) = uVar7 & 0x17;
    uVar7 = *(uint *)((int)this + iVar1 + 0x10) & uVar7 & 0x17;
    if (uVar7 != 0) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 2) == 0) {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::eofbit set";
        }
        else {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::failbit set";
        }
      }
      else {
        uVar7 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      (*(uint *)(gen_frame + 0x14)) = uVar7;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  return (uint)this;
}

/* ref: FUN_00ebf780 */
uint F_00ebf780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebf780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  iVar1 = *(int *)this;
  (*(uint *)(gen_frame + 0x24)) = 0;
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  bVar5 = F_00ebc060(this,0);
  if (bVar5 != 0) {
    piVar2 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x30 + (int)this)))));
    (*(int * PTR32 *)(gen_frame + 0x28)) = piVar2;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x20)),0);
    if (piVar2[1] != -1) {
      piVar2[1] = piVar2[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x20)));
    piVar6 = (int *)F_00ebe160(&(*(int * PTR32 *)(gen_frame + 0x28)));
    (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x1c)),0);
    iVar1 = piVar2[1];
    if ((iVar1 != 0) && (iVar1 != -1)) {
      piVar2[1] = iVar1 + -1;
    }
    iVar1 = piVar2[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x1c)));
    puVar8 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & (uint)piVar2)));
    if (puVar8 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
    }
    iVar1 = *(int *)(*(int *)this + 4);
    iVar3 = *(int *)(iVar1 + 0x38 + (int)this);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = iVar3 == 0;
    (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),iVar3 == 0);
    iVar4 = *(*(int * PTR32 *)(gen_frame + 0x28));
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 0)) = 1;
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 0)) = 1;
    ((code *)*(gen_code32 *)(iVar4 + 0x18))
              ((*(int * PTR32 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x10)),iVar3,(*(uint *)(gen_frame + 0x14)),0,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))),iVar1 + (int)this,&(*(uint *)(gen_frame + 0x24)),
               param_1);
  }
  iVar1 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x24)) != 0) {
    uVar7 = *(uint *)((int)this + iVar1 + 0xc) | (*(uint *)(gen_frame + 0x24));
    if (*(int *)((int)this + iVar1 + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    *(uint *)((int)this + iVar1 + 0xc) = uVar7 & 0x17;
    uVar7 = *(uint *)((int)this + iVar1 + 0x10) & uVar7 & 0x17;
    if (uVar7 != 0) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 2) == 0) {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::eofbit set";
        }
        else {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::failbit set";
        }
      }
      else {
        uVar7 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      (*(uint *)(gen_frame + 0x14)) = uVar7;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  return (uint)this;
}

/* ref: FUN_00ebf900 */
uint F_00ebf900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebf900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  iVar1 = *(int *)this;
  (*(uint *)(gen_frame + 0x24)) = 0;
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  bVar5 = F_00ebc060(this,0);
  if (bVar5 != 0) {
    piVar2 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x30 + (int)this)))));
    (*(int * PTR32 *)(gen_frame + 0x28)) = piVar2;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x20)),0);
    if (piVar2[1] != -1) {
      piVar2[1] = piVar2[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x20)));
    piVar6 = (int *)F_00ebe160(&(*(int * PTR32 *)(gen_frame + 0x28)));
    (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x1c)),0);
    iVar1 = piVar2[1];
    if ((iVar1 != 0) && (iVar1 != -1)) {
      piVar2[1] = iVar1 + -1;
    }
    iVar1 = piVar2[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x1c)));
    puVar8 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & (uint)piVar2)));
    if (puVar8 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
    }
    iVar1 = *(int *)(*(int *)this + 4);
    iVar3 = *(int *)(iVar1 + 0x38 + (int)this);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = iVar3 == 0;
    (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),iVar3 == 0);
    iVar4 = *(*(int * PTR32 *)(gen_frame + 0x28));
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 0)) = 1;
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 0)) = 1;
    ((code *)*(gen_code32 *)(iVar4 + 0x10))
              ((*(int * PTR32 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x10)),iVar3,(*(uint *)(gen_frame + 0x14)),0,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))),iVar1 + (int)this,&(*(uint *)(gen_frame + 0x24)),
               param_1);
  }
  iVar1 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x24)) != 0) {
    uVar7 = *(uint *)((int)this + iVar1 + 0xc) | (*(uint *)(gen_frame + 0x24));
    if (*(int *)((int)this + iVar1 + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    *(uint *)((int)this + iVar1 + 0xc) = uVar7 & 0x17;
    uVar7 = *(uint *)((int)this + iVar1 + 0x10) & uVar7 & 0x17;
    if (uVar7 != 0) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 2) == 0) {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::eofbit set";
        }
        else {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::failbit set";
        }
      }
      else {
        uVar7 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      (*(uint *)(gen_frame + 0x14)) = uVar7;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  return (uint)this;
}

/* ref: FUN_00ebfa80 */
uint F_00ebfa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xebfa80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  int * piVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  bVar4 = F_00ebc060(this,1);
  if (bVar4 != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
    lVar6 = ((gen_lcode *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2,param_1,param_2,param_3);
    puVar1 = (uint *)((int)this + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + (uint)lVar6;
    *(int *)((int)this + 0xc) =
         *(int *)((int)this + 0xc) + (int)((ulonglong)lVar6 >> 0x20) +
         (uint)CARRY4(uVar5,(uint)lVar6);
    if (lVar6 != (longlong)CONCAT44(param_3,param_2)) {
      (*(uint *)(gen_frame + 0x18)) = 3;
    }
  }
  iVar3 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x18)) != 0) {
    uVar5 = *(uint *)((int)this + iVar3 + 0xc) | (*(uint *)(gen_frame + 0x18));
    if (*(int *)((int)this + iVar3 + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    *(uint *)((int)this + iVar3 + 0xc) = uVar5 & 0x17;
    uVar5 = *(uint *)((int)this + iVar3 + 0x10) & uVar5 & 0x17;
    if (uVar5 != 0) {
      if ((uVar5 & 4) == 0) {
        if ((uVar5 & 2) == 0) {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::eofbit set";
        }
        else {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::failbit set";
        }
      }
      else {
        uVar5 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      (*(uint *)(gen_frame + 0x14)) = uVar5;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  return (uint)this;
}

/* ref: FUN_00ebfb80 */
uint F_00ebfb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebfb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  byte bVar3;
  byte * pbVar4;
  uint uVar5;
  uint uVar6;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  uVar6 = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  bVar3 = F_00ebc060(this,1);
  if (bVar3 != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
    uVar5 = *(uint *)piVar1[8];
    if (((uVar5 == 0) || (uVar5 <= *(uint *)piVar1[4])) || ((byte)param_1 != *(byte *)(uVar5 - 1)))
    {
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,(uint)(byte)param_1);
    }
    else {
      *(int *)piVar1[0xc] = *(int *)piVar1[0xc] + 1;
      pbVar4 = (byte *)(*(int *)piVar1[8] + -1);
      *(int *)piVar1[8] = (int)pbVar4;
      uVar5 = (uint)*pbVar4;
    }
    if (uVar5 == 0xffffffff) {
      uVar6 = 4;
    }
  }
  iVar2 = *(int *)(*(int *)this + 4);
  if (uVar6 != 0) {
    uVar6 = *(uint *)((int)this + iVar2 + 0xc) | uVar6;
    if (*(int *)((int)this + iVar2 + 0x38) == 0) {
      uVar6 = uVar6 | 4;
    }
    *(uint *)((int)this + iVar2 + 0xc) = uVar6 & 0x17;
    uVar6 = *(uint *)((int)this + iVar2 + 0x10) & uVar6 & 0x17;
    if (uVar6 != 0) {
      if ((uVar6 & 4) == 0) {
        if ((uVar6 & 2) == 0) {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
        }
        else {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
        }
      }
      else {
        uVar6 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x14)) = 1;
      (*(uint *)(gen_frame + 0x18)) = uVar6;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00ebfc90 */
uint F_00ebfc90(unsigned int gen_a0)
{
  GEN_ENTER(0xebfc90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  byte bVar3;
  byte * pbVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  bVar3 = F_00ebc060(this,1);
  if (bVar3 != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
    if ((*(uint *)piVar1[8] == 0) || (*(uint *)piVar1[8] <= *(uint *)piVar1[4])) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0xffffffff);
    }
    else {
      *(int *)piVar1[0xc] = *(int *)piVar1[0xc] + 1;
      pbVar4 = (byte *)(*(int *)piVar1[8] + -1);
      *(int *)piVar1[8] = (int)pbVar4;
      uVar5 = (uint)*pbVar4;
    }
    if (uVar5 == 0xffffffff) {
      uVar6 = 4;
    }
  }
  iVar2 = *(int *)(*(int *)this + 4);
  if (uVar6 != 0) {
    uVar6 = *(uint *)((int)this + iVar2 + 0xc) | uVar6;
    if (*(int *)((int)this + iVar2 + 0x38) == 0) {
      uVar6 = uVar6 | 4;
    }
    *(uint *)((int)this + iVar2 + 0xc) = uVar6 & 0x17;
    uVar6 = *(uint *)((int)this + iVar2 + 0x10) & uVar6 & 0x17;
    if (uVar6 != 0) {
      if ((uVar6 & 4) == 0) {
        if ((uVar6 & 2) == 0) {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
        }
        else {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
        }
      }
      else {
        uVar6 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x14)) = 1;
      (*(uint *)(gen_frame + 0x18)) = uVar6;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00ebfd90 */
uint F_00ebfd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebfd90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x81);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 4,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x81);
  }
  if ((puVar2 != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar3 = F_0042c7c0(param_2,puVar2 + 4), bVar3 == 0)) {
    *param_1 = puVar2;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00ebfe20 */
uint F_00ebfe20(unsigned int gen_a0)
{
  GEN_ENTER(0xebfe20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = (int *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  iVar1 = *(int *)((int)this + 0x70);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x78);
    uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x115d0f4));
  uVar4 = F_00eb1780(this_00);
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return uVar4;
}

/* ref: FUN_00ebfee0 */
uint F_00ebfee0(unsigned int gen_a0)
{
  GEN_ENTER(0xebfee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = (int *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d55c));
  iVar1 = *(int *)((int)this + 0xb0);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0xb8);
    uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  uVar4 = F_00eb19b0(this_00);
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return uVar4;
}

/* ref: FUN_00ebff60 */
unsigned int F_00ebff60(unsigned int gen_a0)
{
  GEN_ENTER(0xebff60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = (int *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d574));
  iVar1 = *(int *)((int)this + 0xd0);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0xd8);
    uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb1aa0(this_00);
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebffd0 */
unsigned int F_00ebffd0(unsigned int gen_a0)
{
  GEN_ENTER(0xebffd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = (int *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  iVar1 = *(int *)((int)this + 0x90);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x98);
    uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb1b40(this_00);
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ec0110 */
unsigned int F_00ec0110(unsigned int gen_a0)
{
  GEN_ENTER(0xec0110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = (int *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5fc));
  iVar1 = *(int *)((int)this + 0x290);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x298);
    uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb2000(this_00);
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ec0180 */
unsigned int F_00ec0180(unsigned int gen_a0)
{
  GEN_ENTER(0xec0180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = (int *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d60c));
  iVar1 = *(int *)((int)this + 0x4f0);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x4f8);
    uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb20a0(this_00);
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: Array_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0 */
uint F_00ec01f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec01f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ebfe20(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0 */
uint F_00ec0220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec0250 */
uint F_00ec0250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec0280 */
uint F_00ec0280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec02b0 */
uint F_00ec02b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec02b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec02e0 */
uint F_00ec02e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec02e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d54c));
  F_00ebc980((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec0310 */
uint F_00ec0310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec0340 */
uint F_00ec0340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ebfee0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec0370 */
uint F_00ec0370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec03a0 */
uint F_00ec03a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec03a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec03d0 */
uint F_00ec03d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec03d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ebff60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf0 */
uint F_00ec0400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d57c));
  F_00ebcc80((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00ec0430 */
uint F_00ec0430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ebffd0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf0 */
uint F_00ec0460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf0 */
uint F_00ec0490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d594));
  F_00ebce00((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf0 */
uint F_00ec04c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec04c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d59c));
  F_00ebce90((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_M::vf0 */
uint F_00ec04f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec04f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5a4));
  F_00ebcf20((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf0 */
uint F_00ec0520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf0 */
uint F_00ec0550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5b4));
  F_00ebd040((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_O::vf0 */
uint F_00ec0580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  F_00ebd0d0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf0 */
uint F_00ec05b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec05b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5c4));
  F_00ebd160((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf0 */
uint F_00ec05e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec05e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5cc));
  F_00ebd1f0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf0 */
uint F_00ec0610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5d4));
  F_00ebd280((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf0 */
uint F_00ec0640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5dc));
  F_00ebd310((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf0 */
uint F_00ec0670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5e4));
  F_00ebd3a0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf0 */
uint F_00ec06a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec06a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ec));
  F_00ebd430((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_P::vf0 */
uint F_00ec06d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec06d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5f4));
  F_00ebd4c0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_PAVBase_WorkDefinitions_Network_Application_BC::vf0 */
uint F_00ec0700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ec0110(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf0 */
uint F_00ec0730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d604));
  F_00ebd5b0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_PAVBase_WorkDefinitions_Network_Application_CF::vf0 */
uint F_00ec0760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ec0180(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Array_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf0 */
uint F_00ec0790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec0790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d614));
  F_00ebd6a0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ec07c0 */
uint F_00ec07c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xec07c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x115d618);
    *(undefined * PTR32 * PTR32 *)((int)this + 8) =
         (*(undefined * PTR32 (*)[1])REFP(0x115cab0));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a60));
  F_00ebd750(((undefined *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))),param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00ec0810 */
uint F_00ec0810(unsigned int gen_a0)
{
  GEN_ENTER(0xec0810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  bVar5 = F_00ebc060(this,1);
  if (bVar5 == 0) {
    (*(uint *)(gen_frame + 0x18)) = 0xffffffff;
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
    if ((*(int *)piVar2[8] == 0) || (*(int *)piVar2[0xc] < 1)) {
      uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
      (*(uint *)(gen_frame + 0x18)) = uVar6;
    }
    else {
      (*(uint *)(gen_frame + 0x18)) = (uint)**(byte * PTR32 *)piVar2[8];
    }
    if ((*(uint *)(gen_frame + 0x18)) == 0xffffffff) {
      uVar7 = 3;
    }
    else {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
      if ((*(int *)piVar2[8] == 0) || (piVar3 = (int *)piVar2[0xc], *piVar3 < 1)) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
      }
      else {
        *piVar3 = *piVar3 + -1;
        *(int *)piVar2[8] = *(int *)piVar2[8] + 1;
      }
      puVar1 = (uint *)((int)this + 8);
      uVar6 = *puVar1;
      *puVar1 = *puVar1 + 1;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + (uint)(0xfffffffe < uVar6);
    }
  }
  iVar4 = *(int *)(*(int *)this + 4);
  if (uVar7 != 0) {
    uVar7 = *(uint *)((int)this + iVar4 + 0xc) | uVar7;
    if (*(int *)((int)this + iVar4 + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    *(uint *)((int)this + iVar4 + 0xc) = uVar7 & 0x17;
    uVar7 = *(uint *)((int)this + iVar4 + 0x10) & uVar7 & 0x17;
    if (uVar7 != 0) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 2) == 0) {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::eofbit set";
        }
        else {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::failbit set";
        }
      }
      else {
        uVar7 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      (*(uint *)(gen_frame + 0x14)) = uVar7;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  return (*(uint *)(gen_frame + 0x18));
}

/* ref: FUN_00ec0950 */
unsigned int F_00ec0950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xec0950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 * puVar1;
  undefined1 * puVar2;
  int iVar3;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    puVar2 = (undefined1 *)0x0;
    if ((param_1 != 0) &&
       (puVar2 = (undefined1 *)F_004069f0(param_1), puVar2 == (undefined1 *)0x0)) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    }
    puVar1 = puVar2 + param_1;
    *(undefined1 * PTR32 *)this = puVar2;
    *(undefined1 * PTR32 *)((int)this + 4) = puVar2;
    *(undefined1 * PTR32 *)((int)this + 8) = puVar1;
    for (iVar3 = param_1; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    *(undefined1 * PTR32 *)((int)this + 4) = puVar1;
  }
  return 0;
}

/* ref: FUN_00ec09d0 */
uint F_00ec09d0(unsigned int gen_a0)
{
  GEN_ENTER(0xec09d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00eba5b0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 4),1,0);
  *(uint *)((int)this + 0x70) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  return (uint)this;
}

/* ref: FUN_00ec0a10 */
uint F_00ec0a10(unsigned int gen_a0)
{
  GEN_ENTER(0xec0a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d114));
  F_00eb2e90((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 4;
  uVar1 = F_00eba6b0((undefined *)((int)this + 4),4,0);
  *(uint *)((int)this + 0x110) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  return (uint)this;
}

/* ref: FUN_00ec0a60 */
uint F_00ec0a60(unsigned int gen_a0)
{
  GEN_ENTER(0xec0a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb3050((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 2;
  uVar1 = F_00eba750((undefined *)((int)this + 4),2,0);
  *(uint *)((int)this + 0xb0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  return (uint)this;
}

/* ref: FUN_00ec0ab0 */
uint F_00ec0ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xec0ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb3200((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 7;
  uVar1 = F_00eba7f0((undefined *)((int)this + 4),7,0);
  *(uint *)((int)this + 0x1a0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  return (uint)this;
}

/* ref: FUN_00ec0b00 */
uint F_00ec0b00(unsigned int gen_a0)
{
  GEN_ENTER(0xec0b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb33c0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 3;
  uVar1 = F_00eba890((undefined *)((int)this + 4),3,0);
  *(uint *)((int)this + 0xe0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  return (uint)this;
}

/* ref: FUN_00ec0b50 */
uint F_00ec0b50(unsigned int gen_a0)
{
  GEN_ENTER(0xec0b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb3580((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 9;
  uVar1 = F_00eba930((undefined *)((int)this + 4),9,0);
  *(uint *)((int)this + 0x200) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d54c));
  return (uint)this;
}

/* ref: FUN_00ec0ba0 */
uint F_00ec0ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xec0ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb3740((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 10;
  uVar1 = F_00eba9d0((undefined *)((int)this + 4),10,0);
  *(uint *)((int)this + 0x230) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  return (uint)this;
}

/* ref: FUN_00ec0bf0 */
uint F_00ec0bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xec0bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb3900((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 3;
  uVar1 = F_00ebaa70((undefined *)((int)this + 4),3,0);
  *(uint *)((int)this + 0xb0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d55c));
  return (uint)this;
}

/* ref: FUN_00ec0c40 */
uint F_00ec0c40(unsigned int gen_a0)
{
  GEN_ENTER(0xec0c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb3ac0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 8;
  uVar1 = F_00ebab10((undefined *)((int)this + 4),8,0);
  *(uint *)((int)this + 0x1d0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  return (uint)this;
}

/* ref: FUN_00ec0c90 */
uint F_00ec0c90(unsigned int gen_a0)
{
  GEN_ENTER(0xec0c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb3c80((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 6;
  uVar1 = F_00ebabb0((undefined *)((int)this + 4),6,0);
  *(uint *)((int)this + 0x170) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  return (uint)this;
}

/* ref: FUN_00ec0ce0 */
uint F_00ec0ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xec0ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb3e40((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 4;
  uVar1 = F_00ebac50((undefined *)((int)this + 4),4,0);
  *(uint *)((int)this + 0xd0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d574));
  return (uint)this;
}

/* ref: FUN_00ec0d30 */
uint F_00ec0d30(unsigned int gen_a0)
{
  GEN_ENTER(0xec0d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb4000((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x980) = 0;
  *(undefined4 *)((int)this + 0x984) = 0;
  *(undefined4 *)((int)this + 0x988) = 0x31;
  uVar1 = F_00ebacf0((undefined *)((int)this + 4),0x31,0);
  *(uint *)((int)this + 0x980) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d57c));
  return (uint)this;
}

/* ref: FUN_00ec0d80 */
uint F_00ec0d80(unsigned int gen_a0)
{
  GEN_ENTER(0xec0d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 4),2,0);
  *(uint *)((int)this + 0x90) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  return (uint)this;
}

/* ref: FUN_00ec0dd0 */
uint F_00ec0dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xec0dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb4380((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x358) = 0x10;
  uVar1 = F_00ebae30((undefined *)((int)this + 4),0x10,0);
  *(uint *)((int)this + 0x350) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  return (uint)this;
}

/* ref: FUN_00ec0e20 */
uint F_00ec0e20(unsigned int gen_a0)
{
  GEN_ENTER(0xec0e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb4540((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x5c0) = 0;
  *(undefined4 *)((int)this + 0x5c4) = 0;
  *(undefined4 *)((int)this + 0x5c8) = 0x1d;
  uVar1 = F_00ebaed0((undefined *)((int)this + 4),0x1d,0);
  *(uint *)((int)this + 0x5c0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d594));
  return (uint)this;
}

/* ref: FUN_00ec0e70 */
uint F_00ec0e70(unsigned int gen_a0)
{
  GEN_ENTER(0xec0e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb4700((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x2510) = 0;
  *(undefined4 *)((int)this + 0x2514) = 0;
  *(undefined4 *)((int)this + 0x2518) = 0xc4;
  uVar1 = F_00ebaf70((undefined *)((int)this + 4),0xc4,0);
  *(uint *)((int)this + 0x2510) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d59c));
  return (uint)this;
}

/* ref: FUN_00ec0ec0 */
uint F_00ec0ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xec0ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb48c0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0xc;
  uVar1 = F_00ebb010((undefined *)((int)this + 4),0xc,0);
  *(uint *)((int)this + 0x290) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5a4));
  return (uint)this;
}

/* ref: FUN_00ec0f10 */
uint F_00ec0f10(unsigned int gen_a0)
{
  GEN_ENTER(0xec0f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb4a80((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  *(undefined4 *)((int)this + 0x418) = 0x14;
  uVar1 = F_00ebb0b0((undefined *)((int)this + 4),0x14,0);
  *(uint *)((int)this + 0x410) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  return (uint)this;
}

/* ref: FUN_00ec0f60 */
uint F_00ec0f60(unsigned int gen_a0)
{
  GEN_ENTER(0xec0f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb4c40((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0x12;
  uVar1 = F_00ebb150((undefined *)((int)this + 4),0x12,0);
  *(uint *)((int)this + 0x3b0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5b4));
  return (uint)this;
}

/* ref: FUN_00ec0fb0 */
uint F_00ec0fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xec0fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb4e00((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0xe;
  uVar1 = F_00ebb1f0((undefined *)((int)this + 4),0xe,0);
  *(uint *)((int)this + 0x2f0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  return (uint)this;
}

/* ref: FUN_00ec1000 */
uint F_00ec1000(unsigned int gen_a0)
{
  GEN_ENTER(0xec1000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb4fc0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0x16;
  uVar1 = F_00ebb290((undefined *)((int)this + 4),0x16,0);
  *(uint *)((int)this + 0x470) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5c4));
  return (uint)this;
}

/* ref: FUN_00ec1050 */
uint F_00ec1050(unsigned int gen_a0)
{
  GEN_ENTER(0xec1050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb5180((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x7a0) = 0;
  *(undefined4 *)((int)this + 0x7a4) = 0;
  *(undefined4 *)((int)this + 0x7a8) = 0x27;
  uVar1 = F_00ebb330((undefined *)((int)this + 4),0x27,0);
  *(uint *)((int)this + 0x7a0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5cc));
  return (uint)this;
}

/* ref: FUN_00ec10a0 */
uint F_00ec10a0(unsigned int gen_a0)
{
  GEN_ENTER(0xec10a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb5340((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x4a0) = 0;
  *(undefined4 *)((int)this + 0x4a4) = 0;
  *(undefined4 *)((int)this + 0x4a8) = 0x17;
  uVar1 = F_00ebb3d0((undefined *)((int)this + 4),0x17,0);
  *(uint *)((int)this + 0x4a0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5d4));
  return (uint)this;
}

/* ref: FUN_00ec10f0 */
uint F_00ec10f0(unsigned int gen_a0)
{
  GEN_ENTER(0xec10f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb5500((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0xaa0) = 0;
  *(undefined4 *)((int)this + 0xaa4) = 0;
  *(undefined4 *)((int)this + 0xaa8) = 0x37;
  uVar1 = F_00ebb470((undefined *)((int)this + 4),0x37,0);
  *(uint *)((int)this + 0xaa0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5dc));
  return (uint)this;
}

/* ref: FUN_00ec1140 */
uint F_00ec1140(unsigned int gen_a0)
{
  GEN_ENTER(0xec1140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb56c0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x890) = 0;
  *(undefined4 *)((int)this + 0x894) = 0;
  *(undefined4 *)((int)this + 0x898) = 0x2c;
  uVar1 = F_00ebb510((undefined *)((int)this + 4),0x2c,0);
  *(uint *)((int)this + 0x890) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5e4));
  return (uint)this;
}

/* ref: FUN_00ec1190 */
uint F_00ec1190(unsigned int gen_a0)
{
  GEN_ENTER(0xec1190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb5880((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0xbc0) = 0;
  *(undefined4 *)((int)this + 0xbc4) = 0;
  *(undefined4 *)((int)this + 0xbc8) = 0x3d;
  uVar1 = F_00ebb5b0((undefined *)((int)this + 4),0x3d,0);
  *(uint *)((int)this + 0xbc0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ec));
  return (uint)this;
}

/* ref: FUN_00ec11e0 */
uint F_00ec11e0(unsigned int gen_a0)
{
  GEN_ENTER(0xec11e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb5a40((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x328) = 0xf;
  uVar1 = F_00ebb650((undefined *)((int)this + 4),0xf,0);
  *(uint *)((int)this + 800) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5f4));
  return (uint)this;
}

/* ref: FUN_00ec1230 */
uint F_00ec1230(unsigned int gen_a0)
{
  GEN_ENTER(0xec1230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb5c00((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0x12;
  uVar1 = F_00ebb6f0((undefined *)((int)this + 4),0x12,0);
  *(uint *)((int)this + 0x290) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5fc));
  return (uint)this;
}

/* ref: FUN_00ec1280 */
uint F_00ec1280(unsigned int gen_a0)
{
  GEN_ENTER(0xec1280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb5dd0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x9b0) = 0;
  *(undefined4 *)((int)this + 0x9b4) = 0;
  *(undefined4 *)((int)this + 0x9b8) = 0x32;
  uVar1 = F_00ebb790((undefined *)((int)this + 4),0x32,0);
  *(uint *)((int)this + 0x9b0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d604));
  return (uint)this;
}

/* ref: FUN_00ec12d0 */
uint F_00ec12d0(unsigned int gen_a0)
{
  GEN_ENTER(0xec12d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb5f90((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4f4) = 0;
  *(undefined4 *)((int)this + 0x4f8) = 0x25;
  uVar1 = F_00ebb830((undefined *)((int)this + 4),0x25,0);
  *(uint *)((int)this + 0x4f0) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d60c));
  return (uint)this;
}

/* ref: FUN_00ec1320 */
uint F_00ec1320(unsigned int gen_a0)
{
  GEN_ENTER(0xec1320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb6150((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x1970) = 0;
  *(undefined4 *)((int)this + 0x1974) = 0;
  *(undefined4 *)((int)this + 0x1978) = 0x86;
  uVar1 = F_00ebb8d0((undefined *)((int)this + 4),0x86,0);
  *(uint *)((int)this + 0x1970) = uVar1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d614));
  return (uint)this;
}

/* ref: FUN_00ec1370 */
uint F_00ec1370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xec1370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  F_00ebe820(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00ec13a0 */
uint F_00ec13a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xec13a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  char * PTR32 * PTR32 * PTR32 * PTR32 * param_7 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  int param_9 = (int)gen_a8;
  undefined * param_10 = (undefined *)(uintptr_t)gen_a9;
  gen_size32 param_11 = (gen_size32)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char * PTR32 * PTR32 * PTR32 * ppppcVar5;
  int * piVar6;
  uint uVar7;
  undefined * plVar8;
  undefined * pvVar9;
  gen_size32 sVar10;
  uint uVar11;
  undefined4 * puVar12;
  undefined * puVar13;
  int iVar14;
  char * PTR32 * PTR32 * PTR32 * PTR32 * pppppcVar15;
  gen_size32 _MaxCount;
  char * PTR32 * PTR32 * PTR32 * PTR32 * pppppcVar16;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(uint *)(gen_frame + 0x4)) = param_2;
  (*(int *)(gen_frame + 0x24)) = param_8;
  (*(int *)(gen_frame + 0x8)) = param_5;
  piVar2 = ((int *)GEN_TOP(**(uint * PTR32 *)(param_5 + 0x30)));
  (*(int *)(gen_frame + 0xc)) = param_9;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = param_10;
  (*(gen_size32 *)(gen_frame + 0x3c)) = param_11;
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar2;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)),0);
  if (piVar2[1] != -1) {
    piVar2[1] = piVar2[1] + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
  piVar6 = (int *)F_00ebe280(&(*(int * PTR32 *)(gen_frame + 0x10)));
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x18)),0);
  iVar14 = piVar2[1];
  if ((iVar14 != 0) && (iVar14 != -1)) {
    piVar2[1] = iVar14 + -1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = ((undefined4 *)GEN_TOP((~-(uint)(piVar2[1] != 0) & (uint)piVar2)));
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x18)));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x30)))((*(undefined4 * PTR32 *)(gen_frame + 0x30)),1);
  }
  piVar2 = (*(int * PTR32 *)(gen_frame + 0x10));
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x10)),((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40)));
  uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  ppppcVar5 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))) = uVar7 & 0xffff;
  (*(uint *)(gen_frame + 0x70)) = 0xf;
  (*(gen_size32 *)(gen_frame + 0x6c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (char * PTR32 * PTR32 * PTR32 *)((uint)ppppcVar5 & 0xffffff00);
  ((char *)(gen_frame + 0x2c))[0] = '0';
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)0x0;
  F_010512d7((wchar_t *)&(*(undefined4 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x2c)),1,(int *)&(*(undefined4 * PTR32 *)(gen_frame + 0x30)),(undefined *)(param_1 + 8));
  cVar1 = *(char *)param_7;
  if ((cVar1 == '+') || ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)0x0, cVar1 == '-')) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)0x1;
  }
  plVar8 = F_00c527f9();
  _MaxCount = (*(gen_size32 *)(gen_frame + 0x3c));
  (*(char *)(gen_frame + 0x28)) = *(*(char * PTR32 *)((char *)(plVar8)));
  (*(undefined2 *)(gen_frame + 0x29)) = 0x65;
  pvVar9 = F_00c48f80(param_7,0x65,(*(gen_size32 *)(gen_frame + 0x3c)));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar9;
  pvVar9 = F_00c48f80(param_7,(int)(*(char *)(gen_frame + 0x28)),_MaxCount);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = pvVar9;
  if (pvVar9 == (undefined *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar9;
  }
  pppppcVar15 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
  if ((*(uint *)(gen_frame + 0x54)) < 0x10) {
    pppppcVar15 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
  }
  pppppcVar16 = param_7;
  if (*(char *)pppppcVar15 != '\x7f') {
    pppppcVar15 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
    if ((*(uint *)(gen_frame + 0x54)) < 0x10) {
      pppppcVar15 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
    }
    if ('\0' < *(char *)pppppcVar15) {
      F_00e69490(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),param_7,_MaxCount);
      pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x20));
      if ((*(undefined * PTR32 *)(gen_frame + 0x20)) == (undefined *)0x0) {
        F_00a17030(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),(*(undefined * PTR32 *)(gen_frame + 0x34)),0x30);
      }
      else {
        if ((*(undefined * PTR32 *)(gen_frame + 0x38)) == (undefined *)0x0) {
          F_00a17030(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),(*(int *)(gen_frame + 0x24)),0x30);
          (*(int *)(gen_frame + 0x24)) = 0;
        }
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),(int)pvVar9 - (int)param_7,(*(undefined * PTR32 *)(gen_frame + 0x34)),0x30);
      }
      if ((*(undefined * PTR32 *)(gen_frame + 0x38)) == (undefined *)0x0) {
        F_00a17030(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),(*(int *)(gen_frame + 0x24)),0x30);
      }
      else {
        iVar14 = (int)(*(undefined * PTR32 *)(gen_frame + 0x38)) - (int)param_7;
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),iVar14 + 1,(*(int *)(gen_frame + 0xc)),0x30);
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),iVar14,(*(int *)(gen_frame + 0x24)),0x30);
        (*(int *)(gen_frame + 0xc)) = 0;
      }
      (*(int *)(gen_frame + 0x24)) = 0;
      pppppcVar15 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
      if ((*(uint *)(gen_frame + 0x54)) < 0x10) {
        pppppcVar15 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
      }
      pppppcVar16 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
      if ((*(uint *)(gen_frame + 0x70)) < 0x10) {
        pppppcVar16 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c));
      }
      sVar10 = F_00c525d0((char *)pppppcVar16,&(*(char *)(gen_frame + 0x28)));
      cVar1 = *(char *)pppppcVar15;
      _MaxCount = (*(gen_size32 *)(gen_frame + 0x6c));
      while ((((*(gen_size32 *)(gen_frame + 0x6c)) = _MaxCount, cVar1 != '\x7f' && ('\0' < cVar1)) &&
             ((uint)(int)cVar1 < sVar10 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x30))))) {
        sVar10 = sVar10 - (int)cVar1;
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),sVar10,1,0);
        if ('\0' < *(char *)((int)pppppcVar15 + 1)) {
          pppppcVar15 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((int)pppppcVar15 + 1);
        }
        _MaxCount = (*(gen_size32 *)(gen_frame + 0x6c));
        cVar1 = *(char *)pppppcVar15;
      }
      pppppcVar16 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
      if ((*(uint *)(gen_frame + 0x70)) < 0x10) {
        pppppcVar16 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
      (*(gen_size32 *)(gen_frame + 0x3c)) = _MaxCount;
    }
  }
  uVar7 = *(uint *)((*(int *)(gen_frame + 0x8)) + 0x20);
  uVar11 = (int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0xc)) + _MaxCount;
  if (((*(int *)((*(int *)(gen_frame + 0x8)) + 0x24) < 0) || ((*(int *)((*(int *)(gen_frame + 0x8)) + 0x24) < 1 && (uVar7 == 0)))) ||
     (uVar7 <= uVar11)) {
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)(uVar7 - uVar11);
  }
  uVar7 = *(uint *)((*(int *)(gen_frame + 0x8)) + 0x14) & 0x1c0;
  if (uVar7 != 0x40) {
    if (uVar7 == 0x100) {
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != (undefined4 *)0x0) {
        puVar12 = (undefined4 *)F_00ebb950(param_1,((undefined1 *)(gen_frame + 0x1c)),param_3,param_4,pppppcVar16,1);
        param_3 = *puVar12;
        param_4 = puVar12[1];
        pppppcVar16 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((int)pppppcVar16 + 1);
        _MaxCount = _MaxCount - 1;
        (*(gen_size32 *)(gen_frame + 0x3c)) = _MaxCount;
      }
      puVar12 = (undefined4 *)F_00eba490(param_1,((undefined1 *)(gen_frame + 0x1c)),param_3,param_4,param_6,(*(undefined * PTR32 *)(gen_frame + 0x38)));
      param_3 = *puVar12;
      param_4 = puVar12[1];
    }
    else {
      puVar12 = (undefined4 *)F_00eba490(param_1,((undefined1 *)(gen_frame + 0x1c)),param_3,param_4,param_6,(*(undefined * PTR32 *)(gen_frame + 0x38)));
      param_3 = *puVar12;
      param_4 = puVar12[1];
    }
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
  }
  pvVar9 = F_00c48f80(pppppcVar16,(int)(*(char *)(gen_frame + 0x28)),_MaxCount);
  if (pvVar9 != (undefined *)0x0) {
    iVar14 = ((int)pvVar9 - (int)pppppcVar16) + 1;
    puVar12 = (undefined4 *)
              F_00ebba20(param_1,((undefined1 *)(gen_frame + 0x1c)),param_3,param_4,pppppcVar16,
                           (int)pvVar9 - (int)pppppcVar16,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))));
    puVar12 = (undefined4 *)F_00eba490(param_1,((undefined1 *)(gen_frame + 0x1c)),*puVar12,puVar12[1],(*(undefined4 *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x24)));
    uVar3 = *puVar12;
    uVar4 = puVar12[1];
    uVar7 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))((*(int * PTR32 *)(gen_frame + 0x10)));
    puVar12 = (undefined4 *)F_00eba490(param_1,((undefined1 *)(gen_frame + 0x1c)),uVar3,uVar4,uVar7 & 0xffff,1);
    puVar12 = (undefined4 *)F_00eba490(param_1,((undefined1 *)(gen_frame + 0x1c)),*puVar12,puVar12[1],(*(undefined4 *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0xc)));
    param_3 = *puVar12;
    pppppcVar16 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((int)pppppcVar16 + iVar14);
    _MaxCount = (*(gen_size32 *)(gen_frame + 0x3c)) - iVar14;
    (*(gen_size32 *)(gen_frame + 0x3c)) = _MaxCount;
    param_4 = puVar12[1];
  }
  pvVar9 = F_00c48f80(pppppcVar16,0x65,_MaxCount);
  if (pvVar9 != (undefined *)0x0) {
    iVar14 = ((int)pvVar9 - (int)pppppcVar16) + 1;
    puVar12 = (undefined4 *)
              F_00ebba20(param_1,((undefined1 *)(gen_frame + 0x1c)),param_3,param_4,pppppcVar16,
                           (int)pvVar9 - (int)pppppcVar16,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))));
    puVar12 = (undefined4 *)F_00eba490(param_1,((undefined1 *)(gen_frame + 0x1c)),*puVar12,puVar12[1],(*(undefined4 *)(gen_frame + 0x14)),(*(undefined * PTR32 *)(gen_frame + 0x34)));
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
    puVar13 = &REFG(undefined, 0x115d624);
    if ((*(byte *)((*(int *)(gen_frame + 0x8)) + 0x14) & 4) == 0) {
      puVar13 = &REFG(undefined, 0x115d620);
    }
    puVar12 = (undefined4 *)F_00ebb950(param_1,((undefined1 *)(gen_frame + 0x1c)),*puVar12,puVar12[1],puVar13,1);
    param_3 = *puVar12;
    pppppcVar16 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((int)pppppcVar16 + iVar14);
    _MaxCount = (*(gen_size32 *)(gen_frame + 0x3c)) - iVar14;
    (*(gen_size32 *)(gen_frame + 0x3c)) = _MaxCount;
    param_4 = puVar12[1];
  }
  puVar12 = (undefined4 *)
            F_00ebba20(param_1,((undefined1 *)(gen_frame + 0x1c)),param_3,param_4,pppppcVar16,_MaxCount,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))));
  puVar12 = (undefined4 *)F_00eba490(param_1,((undefined1 *)(gen_frame + 0x1c)),*puVar12,puVar12[1],(*(undefined4 *)(gen_frame + 0x14)),(*(undefined * PTR32 *)(gen_frame + 0x34)));
  uVar7 = (*(uint *)(gen_frame + 0x4));
  uVar3 = *puVar12;
  uVar4 = puVar12[1];
  *(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0x20) = 0;
  *(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0x24) = 0;
  F_00eba490(param_1,(*(uint *)(gen_frame + 0x4)),uVar3,uVar4,param_6,(*(undefined * PTR32 *)(gen_frame + 0x38)));
  if (0xf < (*(uint *)(gen_frame + 0x70))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0]);
  }
  ppppcVar5 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
  (*(uint *)(gen_frame + 0x70)) = 0xf;
  (*(gen_size32 *)(gen_frame + 0x6c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (char * PTR32 * PTR32 * PTR32 *)((uint)ppppcVar5 & 0xffffff00);
  if (0xf < (*(uint *)(gen_frame + 0x54))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar7;
}

/* ref: FUN_00ec1920 */
uint F_00ec1920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xec1920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  char * param_7 = (char *)(uintptr_t)gen_a6;
  uint param_8 = (uint)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  char * PTR32 * PTR32 * PTR32 * PTR32 * pppppcVar7;
  char * pcVar8;
  undefined4 * puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_1;
  (*(int *)(gen_frame + 0x8)) = param_5;
  piVar2 = ((int *)GEN_TOP(**(uint * PTR32 *)(param_5 + 0x30)));
  (*(uint *)(gen_frame + 0x4)) = param_2;
  (*(uint *)(gen_frame + 0x28)) = param_8;
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar2;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)),0);
  if (piVar2[1] != -1) {
    piVar2[1] = piVar2[1] + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
  piVar6 = (int *)F_00ebe280(&(*(int * PTR32 *)(gen_frame + 0x10)));
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x24)),0);
  iVar11 = piVar2[1];
  if ((iVar11 != 0) && (iVar11 != -1)) {
    piVar2[1] = iVar11 + -1;
  }
  iVar11 = piVar2[1];
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x24)));
  puVar9 = ((undefined4 *)GEN_TOP((~-(uint)(iVar11 != 0) & (uint)piVar2)));
  if (puVar9 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
  }
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x10)),((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)));
  cVar1 = *param_7;
  if ((cVar1 == '+') || (cVar1 == '-')) {
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))) = 1;
  }
  else if ((cVar1 == '0') && ((param_7[1] == 'x' || (param_7[1] == 'X')))) {
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))) = 2;
  }
  else {
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))) = 0;
  }
  pppppcVar7 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
  if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
    pppppcVar7 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  }
  if (*(char *)pppppcVar7 != '\x7f') {
    pppppcVar7 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
    if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
      pppppcVar7 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
    }
    if ('\0' < *(char *)pppppcVar7) {
      if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
        (*(char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)) = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
      }
      else {
        (*(char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
      }
      cVar1 = *(char *)(*(char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18));
      uVar10 = (*(uint *)(gen_frame + 0x28));
      while (((cVar1 != '\x7f' && ('\0' < cVar1)) &&
             ((uint)(int)cVar1 < uVar10 - (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24)))))))) {
        uVar10 = uVar10 - (int)cVar1;
        iVar11 = ((*(uint *)(gen_frame + 0x28)) - uVar10) + 1;
        F_01051df1(param_7 + uVar10 + 1,iVar11,param_7 + uVar10,iVar11);
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
        param_7[uVar10] = '\0';
        if ('\0' < *(char *)((int)(*(char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)) + 1)) {
          (*(char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)) = (char * PTR32 * PTR32 * PTR32 *)((int)(*(char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)) + 1);
        }
        cVar1 = *(char *)(*(char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18));
      }
    }
  }
  uVar12 = (*(uint *)(gen_frame + 0x28));
  uVar10 = *(uint *)((*(int *)(gen_frame + 0x8)) + 0x20);
  if (((*(int *)((*(int *)(gen_frame + 0x8)) + 0x24) < 0) || ((*(int *)((*(int *)(gen_frame + 0x8)) + 0x24) < 1 && (uVar10 == 0)))) ||
     (uVar10 <= (*(uint *)(gen_frame + 0x28)))) {
    iVar11 = 0;
  }
  else {
    iVar11 = uVar10 - (*(uint *)(gen_frame + 0x28));
  }
  uVar10 = *(uint *)((*(int *)(gen_frame + 0x8)) + 0x14) & 0x1c0;
  pcVar8 = param_7;
  if (uVar10 != 0x40) {
    if (uVar10 == 0x100) {
      puVar9 = (undefined4 *)
               F_00ebb950((*(undefined4 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x14)),param_3,param_4,param_7,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))));
      pcVar8 = param_7 + (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24)))));
      uVar12 = uVar12 - (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24)))));
      puVar9 = (undefined4 *)F_00eba490((*(undefined4 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x20)),*puVar9,puVar9[1],param_6,iVar11);
      param_3 = *puVar9;
      param_4 = puVar9[1];
    }
    else {
      puVar9 = (undefined4 *)F_00eba490((*(undefined4 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x20)),param_3,param_4,param_6,iVar11);
      param_3 = *puVar9;
      param_4 = puVar9[1];
    }
    iVar11 = 0;
  }
  uVar10 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 8))((*(int * PTR32 *)(gen_frame + 0x10)));
  uVar5 = (*(undefined4 *)(gen_frame + 0x1c));
  puVar9 = (undefined4 *)
           F_00ebba20((*(undefined4 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0xc)),param_3,param_4,pcVar8,uVar12,uVar10 & 0xffff);
  uVar10 = (*(uint *)(gen_frame + 0x4));
  uVar3 = *puVar9;
  uVar4 = puVar9[1];
  *(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0x20) = 0;
  *(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0x24) = 0;
  F_00eba490(uVar5,(*(uint *)(gen_frame + 0x4)),uVar3,uVar4,param_6,iVar11);
  if (0xf < (*(uint *)(gen_frame + 0x40))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar10;
}

/* ref: FUN_00ec1bc0 */
uint F_00ec1bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xec1bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  byte * pbVar3;
  bool bVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined * pvVar8;
  char * pcVar9;
  char * pcVar10;
  char * PTR32 * PTR32 * PTR32 * ppppcVar11;
  gen_size32 _MaxCount;
  int iVar12;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar6 = (int *)F_00ebe910(param_6);
  ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6,((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10)));
  if ((*(int *)(gen_frame + 0x20)) == 0) {
    (*(char *)(gen_frame + 0xd)) = '\0';
  }
  else {
    uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
    (*(char *)(gen_frame + 0xd)) = (char)uVar7;
  }
  (*(char * PTR32 *)(gen_frame + 0x8)) = param_2;
  bVar5 = F_00eb6af0(param_3,param_4);
  if (bVar5 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar6 = (int *)*param_3;
      if (piVar6 == (int *)0x0) {
LAB_00ec1c5a: ;
        *param_3 = 0;
      }
      else {
        if ((*(int *)piVar6[8] == 0) || (*(int *)piVar6[0xc] < 1)) {
          uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6);
        }
        else {
          uVar7 = (uint)**(byte * PTR32 *)piVar6[8];
        }
        if (uVar7 == 0xffffffff) goto LAB_00ec1c5a;
        *(char *)((int)param_3 + 5) = (char)uVar7;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((int)param_3 + 5) == '+') {
      *param_2 = '+';
    }
    else {
      bVar5 = F_00ebbac0(param_3);
      if (bVar5 != 0x2d) goto LAB_00ec1c87;
      *param_2 = '-';
    }
    (*(char * PTR32 *)(gen_frame + 0x8)) = param_2 + 1;
    F_00ebbb10(param_3);
  }
LAB_00ec1c87: ;
  uVar7 = param_5 & 0xe00;
  if (uVar7 == 0x400) {
    (*(uint *)(gen_frame + 0x4)) = 8;
  }
  else if (uVar7 == 0x800) {
    (*(uint *)(gen_frame + 0x4)) = 0x10;
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = -(uint)(uVar7 != 0) & 10;
  }
  (*(byte *)(gen_frame + 0xf)) = 0;
  bVar4 = false;
  bVar5 = F_00eb6af0(param_3,param_4);
  if (bVar5 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar6 = (int *)*param_3;
      if (piVar6 == (int *)0x0) {
LAB_00ec1d08: ;
        *param_3 = 0;
      }
      else {
        if ((*(int *)piVar6[8] == 0) || (*(int *)piVar6[0xc] < 1)) {
          uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6);
        }
        else {
          uVar7 = (uint)**(byte * PTR32 *)piVar6[8];
        }
        if (uVar7 == 0xffffffff) goto LAB_00ec1d08;
        *(char *)((int)param_3 + 5) = (char)uVar7;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((int)param_3 + 5) != '0') goto LAB_00ec1d6f;
    (*(byte *)(gen_frame + 0xf)) = 1;
    F_00ebbb10(param_3);
    bVar5 = F_00eb6af0(param_3,param_4);
    if (((bVar5 != 0) ||
        ((bVar5 = F_00ebbac0(param_3), bVar5 != 0x78 &&
         (bVar5 = F_00ebbac0(param_3), bVar5 != 0x58)))) ||
       (((*(uint *)(gen_frame + 0x4)) != 0 && ((*(uint *)(gen_frame + 0x4)) != 0x10)))) {
      if ((*(uint *)(gen_frame + 0x4)) == 0) {
        (*(uint *)(gen_frame + 0x4)) = 8;
        goto LAB_00ec1d78;
      }
      goto LAB_00ec1d73;
    }
    (*(uint *)(gen_frame + 0x4)) = 0x10;
    (*(byte *)(gen_frame + 0xf)) = 0;
    F_00ebbb10(param_3);
LAB_00ec1d78: ;
    _MaxCount = (-(uint)((*(uint *)(gen_frame + 0x4)) != 8) & 0xe) + 8;
  }
  else {
LAB_00ec1d6f: ;
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
LAB_00ec1d73: ;
      if ((*(uint *)(gen_frame + 0x4)) != 10) goto LAB_00ec1d78;
    }
    _MaxCount = 10;
  }
  (*(undefined1 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x2c)) + 0)) = (*(byte *)(gen_frame + 0xf));
  (*(uint *)(gen_frame + 0x40)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x3c)) = 1;
  (*(undefined1 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x2c)) + 1)) = 0;
  (*(undefined2 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x2c)) + 0)) = (ushort)(*(byte *)(gen_frame + 0xf));
  iVar12 = 0;
  bVar5 = F_00eb6af0(param_3,param_4);
  if (bVar5 == 0) {
    do {
      if ((char)param_3[1] == '\0') {
        piVar6 = (int *)*param_3;
        if (piVar6 == (int *)0x0) {
LAB_00ec1df4: ;
          *param_3 = 0;
        }
        else {
          if ((*(int *)piVar6[8] == 0) || (*(int *)piVar6[0xc] < 1)) {
            uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6);
          }
          else {
            uVar7 = (uint)**(byte * PTR32 *)piVar6[8];
          }
          if (uVar7 == 0xffffffff) goto LAB_00ec1df4;
          *(char *)((int)param_3 + 5) = (char)uVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      cVar1 = *(char *)((int)param_3 + 5);
      *(*(char * PTR32 *)(gen_frame + 0x8)) = cVar1;
      pvVar8 = F_00c48f80("0123456789abcdefABCDEF",(int)cVar1,_MaxCount);
      if (pvVar8 == (undefined *)0x0) {
        pcVar10 = (*(char * PTR32 *)(gen_frame + 0x2c));
        if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
          pcVar10 = (char *)&(*(char * PTR32 *)(gen_frame + 0x2c));
        }
        if ((pcVar10[iVar12] == '\0') || ((*(char *)(gen_frame + 0xd)) == '\0')) break;
        if ((char)param_3[1] == '\0') {
          piVar6 = (int *)*param_3;
          if (piVar6 == (int *)0x0) {
LAB_00ec1ebc: ;
            *param_3 = 0;
          }
          else {
            if ((*(int *)piVar6[8] == 0) || (*(int *)piVar6[0xc] < 1)) {
              uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6);
            }
            else {
              uVar7 = (uint)**(byte * PTR32 *)piVar6[8];
            }
            if (uVar7 == 0xffffffff) goto LAB_00ec1ebc;
            *(char *)((int)param_3 + 5) = (char)uVar7;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(char *)((int)param_3 + 5) != (*(char *)(gen_frame + 0xd))) break;
        F_00a17030(&(*(char * PTR32 *)(gen_frame + 0x2c)),1,0);
        iVar12 = iVar12 + 1;
      }
      else {
        if (((bVar4) || (*(*(char * PTR32 *)(gen_frame + 0x8)) != '0')) && ((*(char * PTR32 *)(gen_frame + 0x8)) < param_2 + 0x1f)) {
          (*(char * PTR32 *)(gen_frame + 0x8)) = (*(char * PTR32 *)(gen_frame + 0x8)) + 1;
          bVar4 = true;
        }
        (*(byte *)(gen_frame + 0xf)) = 1;
        pcVar10 = (*(char * PTR32 *)(gen_frame + 0x2c));
        if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
          pcVar10 = (char *)&(*(char * PTR32 *)(gen_frame + 0x2c));
        }
        if (pcVar10[iVar12] != '\x7f') {
          pcVar10 = (*(char * PTR32 *)(gen_frame + 0x2c));
          if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
            pcVar10 = (char *)&(*(char * PTR32 *)(gen_frame + 0x2c));
          }
          pcVar10[iVar12] = pcVar10[iVar12] + '\x01';
        }
      }
      piVar6 = (int *)*param_3;
      if (piVar6 == (int *)0x0) {
LAB_00ec1f14: ;
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if ((*(int *)piVar6[8] == 0) || (piVar2 = (int *)piVar6[0xc], *piVar2 < 1)) {
          uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6);
        }
        else {
          *piVar2 = *piVar2 + -1;
          pbVar3 = *(byte * PTR32 *)piVar6[8];
          *(byte * PTR32 *)piVar6[8] = pbVar3 + 1;
          uVar7 = (uint)*pbVar3;
        }
        if (uVar7 == 0xffffffff) goto LAB_00ec1f14;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      bVar5 = F_00eb6af0(param_3,param_4);
    } while (bVar5 == 0);
    if (iVar12 != 0) {
      pcVar10 = (*(char * PTR32 *)(gen_frame + 0x2c));
      if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
        pcVar10 = (char *)&(*(char * PTR32 *)(gen_frame + 0x2c));
      }
      if (pcVar10[iVar12] < '\x01') {
        (*(byte *)(gen_frame + 0xf)) = 0;
      }
      else {
        iVar12 = iVar12 + 1;
      }
    }
  }
  ppppcVar11 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10))[0];
  if ((*(uint *)(gen_frame + 0x24)) < 0x10) {
    ppppcVar11 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10));
  }
  pcVar10 = param_2;
  if ((*(byte *)(gen_frame + 0xf)) != 0) {
    while ((iVar12 != 0 && (cVar1 = *(char *)ppppcVar11, cVar1 != '\x7f'))) {
      iVar12 = iVar12 + -1;
      if (iVar12 != 0) {
        pcVar9 = (*(char * PTR32 *)(gen_frame + 0x2c));
        if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
          pcVar9 = (char *)&(*(char * PTR32 *)(gen_frame + 0x2c));
        }
        if (cVar1 != pcVar9[iVar12]) goto LAB_00ec1fb0;
      }
      if (iVar12 == 0) {
        pcVar9 = (*(char * PTR32 *)(gen_frame + 0x2c));
        if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
          pcVar9 = (char *)&(*(char * PTR32 *)(gen_frame + 0x2c));
        }
        if (cVar1 < *pcVar9) goto LAB_00ec1fb0;
      }
      if ('\0' < *(char *)((int)ppppcVar11 + 1)) {
        ppppcVar11 = (char * PTR32 * PTR32 * PTR32 *)((int)ppppcVar11 + 1);
      }
    }
    pcVar10 = (*(char * PTR32 *)(gen_frame + 0x8));
    if (!bVar4) {
      *(*(char * PTR32 *)(gen_frame + 0x8)) = '0';
      pcVar10 = (*(char * PTR32 *)(gen_frame + 0x8)) + 1;
    }
  }
LAB_00ec1fb0: ;
  *pcVar10 = '\0';
  if (0xf < (*(uint *)(gen_frame + 0x40))) {
    F_00406ad0((*(char * PTR32 *)(gen_frame + 0x2c)));
  }
  if (0xf < (*(uint *)(gen_frame + 0x24))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10))[0]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (*(uint *)(gen_frame + 0x4));
}

/* ref: FUN_00ec2c10 */
uint F_00ec2c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec2c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b123c0(this,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00ec3090 */
uint F_00ec3090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec3090u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  undefined * this;
  int iVar3;
  int * piVar4;
  byte * pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  if ((*((int *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) == 0) &&
     (this = *((undefined * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x3c + (int)param_1))), this != (undefined *)0x0)) {
    F_00a16e10(this);
  }
  iVar3 = *(int *)(*param_1 + 4);
  if (*(int *)((int)param_1 + iVar3 + 0xc) == 0) {
    iVar6 = *(int *)((int)param_1 + iVar3 + 0x24);
    uVar7 = *(uint *)((int)param_1 + iVar3 + 0x20);
    if ((iVar6 < 1) && ((iVar6 < 0 || (uVar7 < 2)))) {
      (*(longlong *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = 0;
      iVar9 = (int)(*(longlong *)(gen_frame + 0x10));
    }
    else {
      iVar9 = uVar7 - 1;
      iVar6 = iVar6 - (uint)(uVar7 == 0);
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = iVar6;
      (*(longlong *)(gen_frame + 0x10)) = CONCAT44(iVar6,(int)(*(longlong *)(gen_frame + 0x10)));
    }
    if ((*(uint *)((int)param_1 + iVar3 + 0x14) & 0x1c0) == 0x40) {
LAB_00ec318d: ;
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
      if ((*(int *)piVar2[9] == 0) || (piVar4 = (int *)piVar2[0xd], *piVar4 < 1)) {
        uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,(uint)(byte)param_2);
      }
      else {
        *piVar4 = *piVar4 + -1;
        pbVar5 = *(byte * PTR32 *)piVar2[9];
        *(byte * PTR32 *)piVar2[9] = pbVar5 + 1;
        *pbVar5 = (byte)param_2;
        uVar7 = (uint)(byte)param_2;
      }
      if (uVar7 == 0xffffffff) {
        uVar8 = 4;
      }
      else {
        do {
          if (((*(longlong *)(gen_frame + 0x10)) < 0) || (((int)(*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) < 1 && (iVar9 == 0)))) break;
          piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
          bVar1 = *((byte *)GEN_TOP(((int)param_1 + *(int *)(*param_1 + 4) + 0x40)));
          if ((*(int *)piVar2[9] == 0) || (piVar4 = (int *)piVar2[0xd], *piVar4 < 1)) {
            uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,(uint)bVar1);
          }
          else {
            *piVar4 = *piVar4 + -1;
            pbVar5 = *(byte * PTR32 *)piVar2[9];
            *(byte * PTR32 *)piVar2[9] = pbVar5 + 1;
            *pbVar5 = bVar1;
            uVar7 = (uint)bVar1;
            uVar8 = (*(uint *)(gen_frame + 0x18));
          }
          if (uVar7 == 0xffffffff) {
            uVar8 = uVar8 | 4;
            (*(uint *)(gen_frame + 0x18)) = uVar8;
          }
          bVar10 = iVar9 != 0;
          iVar9 = iVar9 + -1;
          iVar3 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) + -1 + (uint)bVar10;
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = iVar3;
          (*(longlong *)(gen_frame + 0x10)) = CONCAT44(iVar3,(int)(*(longlong *)(gen_frame + 0x10)));
        } while (uVar8 == 0);
      }
    }
    else {
      do {
        if (((*(longlong *)(gen_frame + 0x10)) < 0) || (((int)(*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) < 1 && (iVar9 == 0)))) {
          if (uVar8 == 0) goto LAB_00ec318d;
          break;
        }
        piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
        bVar1 = *((byte *)GEN_TOP((*(int *)(*param_1 + 4) + 0x40 + (int)param_1)));
        if ((*(int *)piVar2[9] == 0) || (piVar4 = (int *)piVar2[0xd], *piVar4 < 1)) {
          uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,(uint)bVar1);
        }
        else {
          *piVar4 = *piVar4 + -1;
          pbVar5 = *(byte * PTR32 *)piVar2[9];
          *(byte * PTR32 *)piVar2[9] = pbVar5 + 1;
          *pbVar5 = bVar1;
          uVar7 = (uint)bVar1;
          uVar8 = (*(uint *)(gen_frame + 0x18));
        }
        if (uVar7 == 0xffffffff) {
          uVar8 = uVar8 | 4;
          (*(uint *)(gen_frame + 0x18)) = uVar8;
        }
        bVar10 = iVar9 != 0;
        iVar9 = iVar9 + -1;
        iVar3 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) + -1 + (uint)bVar10;
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = iVar3;
        (*(longlong *)(gen_frame + 0x10)) = CONCAT44(iVar3,(int)(*(longlong *)(gen_frame + 0x10)));
      } while (uVar8 == 0);
    }
  }
  iVar3 = *(int *)(*param_1 + 4);
  *(undefined4 *)(iVar3 + 0x20 + (int)param_1) = 0;
  *(undefined4 *)(iVar3 + 0x24 + (int)param_1) = 0;
  iVar3 = *(int *)(*param_1 + 4);
  if (uVar8 != 0) {
    uVar8 = *(uint *)((int)param_1 + iVar3 + 0xc) | uVar8;
    if (*(int *)((int)param_1 + iVar3 + 0x38) == 0) {
      uVar8 = uVar8 | 4;
    }
    *(uint *)((int)param_1 + iVar3 + 0xc) = uVar8 & 0x17;
    uVar8 = *(uint *)((int)param_1 + iVar3 + 0x10) & uVar8 & 0x17;
    if (uVar8 != 0) {
      if ((uVar8 & 4) == 0) {
        if ((uVar8 & 2) == 0) {
          uVar8 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::eofbit set";
        }
        else {
          uVar8 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::failbit set";
        }
      }
      else {
        uVar8 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::badbit set";
      }
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = 1;
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = uVar8;
      (*(longlong *)(gen_frame + 0x10)) = CONCAT44(uVar8,1);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)(*param_1 + 4) + 0x14 + (int)param_1))) & 2) != 0) {
    F_00a16e10(param_1);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec32f0 */
uint F_00ec32f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec32f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  *(undefined4 *)((int)param_2 + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20((undefined4 *)((int)param_2 + 0x58));
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00ec3310 */
uint F_00ec3310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec3310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)param_2 + 0x54));
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00ec3330 */
unsigned int F_00ec3330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec3330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 6) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
  }
  return 0;
}

/* ref: FUN_00ec3360 */
uint F_00ec3360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xec3360u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char * pcVar1;
  int * piVar2;
  int * piVar3;
  byte * pbVar4;
  bool bVar5;
  undefined4 * PTR32 * PTR32 * pppuVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar10;
  undefined1 uVar11;
  char * pcVar12;
  int iVar13;
  uint uVar14;
  
  pppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  cVar7 = *param_4;
  pcVar12 = param_4;
  while (cVar7 != '\0') {
    if (cVar7 == *param_4) {
      param_3 = param_3 + 1;
    }
    pcVar1 = pcVar12 + 1;
    pcVar12 = pcVar12 + 1;
    cVar7 = *pcVar1;
  }
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar6 & 0xffffff00);
  F_00a17190(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)),param_3,0);
  (*(uint *)(gen_frame + 0xc)) = 0xfffffffe;
  (*(uint *)(gen_frame + 0x10)) = 1;
  while( true ) {
    iVar13 = 0;
    uVar14 = 0;
    bVar5 = false;
    if (param_3 == 0) break;
    do {
      cVar7 = param_4[iVar13];
      if (cVar7 != '\0') {
        do {
          if (cVar7 == *param_4) break;
          cVar7 = param_4[iVar13 + 1];
          iVar13 = iVar13 + 1;
        } while (cVar7 != '\0');
      }
      ppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0];
      if ((*(uint *)(gen_frame + 0x30)) < 0x10) {
        ppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c));
      }
      if (*(char *)((int)ppppuVar10 + uVar14) == '\0') {
        iVar13 = iVar13 + (*(uint *)(gen_frame + 0x10));
        if ((param_4[iVar13] == *param_4) || (param_4[iVar13] == '\0')) {
          uVar9 = (*(uint *)(gen_frame + 0x10));
          if (0x7e < (*(uint *)(gen_frame + 0x10))) {
            uVar9 = 0x7f;
          }
          uVar11 = (undefined1)uVar9;
          ppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0];
          (*(uint *)(gen_frame + 0xc)) = uVar14;
          if ((*(uint *)(gen_frame + 0x30)) < 0x10) {
            ppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c));
          }
        }
        else {
          bVar8 = F_00eb6af0(param_1,param_2);
          if (bVar8 == 0) {
            if ((char)param_1[1] == '\0') {
              piVar2 = (int *)*param_1;
              if (piVar2 == (int *)0x0) {
LAB_00ec348e: ;
                *param_1 = 0;
              }
              else {
                if ((*(int *)piVar2[8] == 0) || (*(int *)piVar2[0xc] < 1)) {
                  uVar9 = ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
                }
                else {
                  uVar9 = (uint)**(byte * PTR32 *)piVar2[8];
                }
                if (uVar9 == 0xffffffff) goto LAB_00ec348e;
                *(char *)((int)param_1 + 5) = (char)uVar9;
              }
              *(undefined1 *)(param_1 + 1) = 1;
            }
            if (param_4[iVar13] == *(char *)((int)param_1 + 5)) {
              bVar5 = true;
              goto LAB_00ec34dc;
            }
          }
          uVar9 = (*(uint *)(gen_frame + 0x10));
          if (0x7e < (*(uint *)(gen_frame + 0x10))) {
            uVar9 = 0x7f;
          }
          uVar11 = (undefined1)uVar9;
          ppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0];
          if ((*(uint *)(gen_frame + 0x30)) < 0x10) {
            ppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c));
          }
        }
        *(undefined1 *)((int)ppppuVar10 + uVar14) = uVar11;
      }
      else {
        ppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0];
        if ((*(uint *)(gen_frame + 0x30)) < 0x10) {
          ppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c));
        }
        iVar13 = iVar13 + *(char *)((int)ppppuVar10 + uVar14);
      }
LAB_00ec34dc: ;
      uVar14 = uVar14 + 1;
    } while (uVar14 < param_3);
    if ((!bVar5) || (bVar8 = F_00eb6af0(param_1,param_2), bVar8 != 0)) break;
    piVar2 = (int *)*param_1;
    (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
    if (piVar2 == (int *)0x0) {
LAB_00ec3544: ;
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      (*(uint *)(gen_frame + 0xc)) = 0xffffffff;
    }
    else {
      if ((*(int *)piVar2[8] == 0) || (piVar3 = (int *)piVar2[0xc], *piVar3 < 1)) {
        uVar14 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
      }
      else {
        *piVar3 = *piVar3 + -1;
        pbVar4 = *(byte * PTR32 *)piVar2[8];
        *(byte * PTR32 *)piVar2[8] = pbVar4 + 1;
        uVar14 = (uint)*pbVar4;
      }
      if (uVar14 == 0xffffffff) goto LAB_00ec3544;
      *(undefined1 *)(param_1 + 1) = 0;
      (*(uint *)(gen_frame + 0xc)) = 0xffffffff;
    }
  }
  if (0xf < (*(uint *)(gen_frame + 0x30))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (*(uint *)(gen_frame + 0xc));
}

/* ref: FUN_00ec3580 */
uint F_00ec3580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xec3580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0x186185f < *(uint *)((int)this + 8)) {
    F_0042c880(param_4 + 0x18);
    F_0042c880(param_4 + 3);
    F_00406ad0(param_4);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    iVar4 = *(int *)((int)this + 4);
  }
  else {
    if ((char)param_2 != '\0') {
      *param_3 = param_4;
      if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
        **(int * PTR32 *)((int)this + 4) = (int)param_4;
      }
      goto LAB_00ec35fa;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00ec35fa;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00ec35fa: ;
  cVar1 = *(char *)(param_4[1] + 0xb4);
  piVar6 = param_4;
  do {
    if (cVar1 != '\0') {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0xb4))) = 1;
      *param_1 = param_4;
      return (uint)param_1;
    }
    piVar3 = (int *)piVar6[1];
    piVar5 = (int *)piVar3[1];
    if (piVar3 == (int *)*piVar5) {
      iVar4 = piVar5[2];
      if (*(char *)(iVar4 + 0xb4) != '\0') {
        if (piVar6 == (int *)piVar3[2]) {
          piVar6 = (int *)piVar3[2];
          piVar3[2] = *piVar6;
          if (*(char *)(*piVar6 + 0xb5) == '\0') {
            *(int * PTR32 *)(*piVar6 + 4) = piVar3;
          }
          piVar6[1] = piVar3[1];
          if (piVar3 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          }
          else {
            piVar5 = (int *)piVar3[1];
            if (piVar3 == (int *)*piVar5) {
              *piVar5 = (int)piVar6;
            }
            else {
              piVar5[2] = (int)piVar6;
            }
          }
          *piVar6 = (int)piVar3;
          piVar3[1] = (int)piVar6;
          piVar6 = piVar3;
        }
        *(undefined1 *)(piVar6[1] + 0xb4) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0xb4))) = 0;
        piVar3 = *(int * PTR32 *)(piVar6[1] + 4);
        piVar5 = (int *)*piVar3;
        *piVar3 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xb5) == '\0') {
          *(int * PTR32 *)(piVar5[2] + 4) = piVar3;
        }
        piVar5[1] = piVar3[1];
        if (piVar3 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar5;
          piVar5[2] = (int)piVar3;
        }
        else {
          piVar2 = (int *)piVar3[1];
          if (piVar3 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar3;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar3;
          }
        }
        goto LAB_00ec3768;
      }
LAB_00ec36e4: ;
      *(undefined1 *)(piVar3 + 0x2d) = 1;
      *(undefined1 *)(iVar4 + 0xb4) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0xb4))) = 0;
      piVar6 = *(int * PTR32 *)(piVar6[1] + 4);
    }
    else {
      iVar4 = *piVar5;
      if (*(char *)(iVar4 + 0xb4) == '\0') goto LAB_00ec36e4;
      if (piVar6 == (int *)*piVar3) {
        F_00eb2c90(this,piVar3);
        piVar6 = piVar3;
      }
      *(undefined1 *)(piVar6[1] + 0xb4) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0xb4))) = 0;
      piVar3 = *(int * PTR32 *)(piVar6[1] + 4);
      piVar5 = (int *)piVar3[2];
      piVar3[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xb5) == '\0') {
        *(int * PTR32 *)(*piVar5 + 4) = piVar3;
      }
      piVar5[1] = piVar3[1];
      if (piVar3 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
        *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar5;
      }
      else {
        piVar2 = (int *)piVar3[1];
        if (piVar3 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar3;
LAB_00ec3768: ;
      piVar3[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar6[1] + 0xb4);
  } while( true );
}

/* ref: FUN_00ec37a0 */
uint F_00ec37a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xec37a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0x2492490 < *(uint *)((int)this + 8)) {
    param_4[0x1a] = (int)(*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    F_00ea7c20(param_4 + 0x1a);
    F_0042c880(param_4 + 4);
    F_00406ad0(param_4);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    iVar4 = *(int *)((int)this + 4);
  }
  else {
    if ((char)param_2 != '\0') {
      *param_3 = param_4;
      if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
        **(int * PTR32 *)((int)this + 4) = (int)param_4;
      }
      goto LAB_00ec3820;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00ec3820;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00ec3820: ;
  cVar1 = *(char *)(param_4[1] + 0x80);
  piVar6 = param_4;
  do {
    if (cVar1 != '\0') {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 0x80))) = 1;
      *param_1 = param_4;
      return (uint)param_1;
    }
    piVar3 = (int *)piVar6[1];
    piVar5 = (int *)piVar3[1];
    if (piVar3 == (int *)*piVar5) {
      iVar4 = piVar5[2];
      if (*(char *)(iVar4 + 0x80) == '\0') goto LAB_00ec3908;
      if (piVar6 == (int *)piVar3[2]) {
        piVar6 = (int *)piVar3[2];
        piVar3[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x81) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar3;
        }
        piVar6[1] = piVar3[1];
        if (piVar3 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar5 = (int *)piVar3[1];
          if (piVar3 == (int *)*piVar5) {
            *piVar5 = (int)piVar6;
          }
          else {
            piVar5[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar3;
        piVar3[1] = (int)piVar6;
        piVar6 = piVar3;
      }
      *(undefined1 *)(piVar6[1] + 0x80) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0x80))) = 0;
      piVar3 = *(int * PTR32 *)(piVar6[1] + 4);
      piVar5 = (int *)*piVar3;
      *piVar3 = piVar5[2];
      if (*(char *)(piVar5[2] + 0x81) == '\0') {
        *(int * PTR32 *)(piVar5[2] + 4) = piVar3;
      }
      piVar5[1] = piVar3[1];
      if (piVar3 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
        *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar5;
        piVar5[2] = (int)piVar3;
      }
      else {
        piVar2 = (int *)piVar3[1];
        if (piVar3 == (int *)piVar2[2]) {
          piVar2[2] = (int)piVar5;
          piVar5[2] = (int)piVar3;
        }
        else {
          *piVar2 = (int)piVar5;
          piVar5[2] = (int)piVar3;
        }
      }
LAB_00ec398c: ;
      piVar3[1] = (int)piVar5;
    }
    else {
      iVar4 = *piVar5;
      if (*(char *)(iVar4 + 0x80) != '\0') {
        if (piVar6 == (int *)*piVar3) {
          F_00eb1690(this,piVar3);
          piVar6 = piVar3;
        }
        *(undefined1 *)(piVar6[1] + 0x80) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0x80))) = 0;
        piVar3 = *(int * PTR32 *)(piVar6[1] + 4);
        piVar5 = (int *)piVar3[2];
        piVar3[2] = *piVar5;
        if (*(char *)(*piVar5 + 0x81) == '\0') {
          *(int * PTR32 *)(*piVar5 + 4) = piVar3;
        }
        piVar5[1] = piVar3[1];
        if (piVar3 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar5;
        }
        else {
          piVar2 = (int *)piVar3[1];
          if (piVar3 == (int *)*piVar2) {
            *piVar2 = (int)piVar5;
          }
          else {
            piVar2[2] = (int)piVar5;
          }
        }
        *piVar5 = (int)piVar3;
        goto LAB_00ec398c;
      }
LAB_00ec3908: ;
      *(undefined1 *)(piVar3 + 0x20) = 1;
      *(undefined1 *)(iVar4 + 0x80) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0x80))) = 0;
      piVar6 = *(int * PTR32 *)(piVar6[1] + 4);
    }
    cVar1 = *(char *)(piVar6[1] + 0x80);
  } while( true );
}

/* ref: FUN_00ec39c0 */
unsigned int F_00ec39c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xec39c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  (*(undefined4 *)&gen_args[2]) = CONCAT13((undefined1)(*(undefined4 *)&gen_args[2]),(undefined3)(*(undefined4 *)&gen_args[2]));
  F_00ec0950((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(int)&(*(undefined4 *)&gen_args[2]) + 3);
  return 0;
}

/* ref: FUN_00ec39e0 */
uint F_00ec39e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec39e0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  byte * pbVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  uVar7 = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  bVar5 = F_00ebc060(param_1,0);
  if (bVar5 != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
    if ((*(int *)piVar1[8] == 0) || (piVar2 = (int *)piVar1[0xc], *piVar2 < 1)) {
      uVar6 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
    }
    else {
      *piVar2 = *piVar2 + -1;
      pbVar3 = *(byte * PTR32 *)piVar1[8];
      *(byte * PTR32 *)piVar1[8] = pbVar3 + 1;
      uVar6 = (uint)*pbVar3;
    }
    if (uVar6 == 0xffffffff) {
      uVar7 = 3;
    }
    else {
      *param_2 = (char)uVar6;
    }
  }
  iVar4 = *(int *)(*param_1 + 4);
  if (uVar7 != 0) {
    uVar7 = *(uint *)((int)param_1 + iVar4 + 0xc) | uVar7;
    if (*(int *)((int)param_1 + iVar4 + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    *(uint *)((int)param_1 + iVar4 + 0xc) = uVar7 & 0x17;
    uVar7 = *(uint *)((int)param_1 + iVar4 + 0x10) & uVar7 & 0x17;
    if (uVar7 != 0) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 2) == 0) {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
        }
        else {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
        }
      }
      else {
        uVar7 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x14)) = 1;
      (*(uint *)(gen_frame + 0x18)) = uVar7;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec3ae0 */
uint F_00ec3ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xec3ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ebe4b0(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00ec3b10 */
unsigned int F_00ec3b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xec3b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_0042cbc0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
  }
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf8 */
uint F_00ec3b40(void)
{
  GEN_ENTER(0xec3b40u, 0u, 0u, 0u, 0u);
  if ((*(uint *)&REFG(undefined, 0x15e3928) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e3928) = *(uint *)&REFG(undefined, 0x15e3928) | 1;
    REFG(undefined4, 0x15e3920) = 0xf;
    *(undefined4 *)&REFG(undefined, 0x15e391c) = 0;
    (*(undefined1 *)((char *)&REFG(undefined4, 0x15e390c) + 0)) = 0;
    F_00c47de6(((code *)REFP(0x107d300)));
  }
  return 0x15e390c;
}

/* ref: FUN_00ec3b80 */
uint F_00ec3b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec3b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int * piVar2;
  short * psVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  uVar7 = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if ((*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x3c + (int)this))), this_00 != (undefined *)0x0))
  {
    F_00ebbf30(this_00);
  }
  if (*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
    if ((*(int *)piVar1[9] == 0) || (piVar2 = (int *)piVar1[0xd], *piVar2 < 1)) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_1);
      sVar6 = (short)uVar5;
    }
    else {
      *piVar2 = *piVar2 + -1;
      psVar3 = *(short * PTR32 *)piVar1[9];
      *(short * PTR32 *)piVar1[9] = psVar3 + 1;
      sVar6 = (short)param_1;
      *psVar3 = sVar6;
    }
    if (sVar6 != -1) goto LAB_00ec3c10;
  }
  uVar7 = 4;
LAB_00ec3c10: ;
  iVar4 = *(int *)(*(int *)this + 4);
  if (uVar7 != 0) {
    uVar7 = *(uint *)((int)this + iVar4 + 0xc) | uVar7;
    if (*(int *)((int)this + iVar4 + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    *(uint *)((int)this + iVar4 + 0xc) = uVar7 & 0x17;
    uVar7 = *(uint *)((int)this + iVar4 + 0x10) & uVar7 & 0x17;
    if (uVar7 != 0) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 2) == 0) {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
        }
        else {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
        }
      }
      else {
        uVar7 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x14)) = 1;
      (*(uint *)(gen_frame + 0x18)) = uVar7;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x14 + (int)this))) & 2) != 0) {
    F_00ebbf30(this);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00ec3cc0 */
uint F_00ec3cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec3cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int * piVar2;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  uVar6 = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if ((*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x3c + (int)this))), this_00 != (undefined *)0x0))
  {
    F_00a16e10(this_00);
  }
  if (*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
    if ((*(int *)piVar1[9] == 0) || (piVar2 = (int *)piVar1[0xd], *piVar2 < 1)) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,(uint)(byte)param_1);
    }
    else {
      *piVar2 = *piVar2 + -1;
      pbVar3 = *(byte * PTR32 *)piVar1[9];
      *(byte * PTR32 *)piVar1[9] = pbVar3 + 1;
      *pbVar3 = (byte)param_1;
      uVar5 = (uint)(byte)param_1;
    }
    if (uVar5 != 0xffffffff) goto LAB_00ec3d48;
  }
  uVar6 = 4;
LAB_00ec3d48: ;
  iVar4 = *(int *)(*(int *)this + 4);
  if (uVar6 != 0) {
    uVar6 = *(uint *)((int)this + iVar4 + 0xc) | uVar6;
    if (*(int *)((int)this + iVar4 + 0x38) == 0) {
      uVar6 = uVar6 | 4;
    }
    *(uint *)((int)this + iVar4 + 0xc) = uVar6 & 0x17;
    uVar6 = *(uint *)((int)this + iVar4 + 0x10) & uVar6 & 0x17;
    if (uVar6 != 0) {
      if ((uVar6 & 4) == 0) {
        if ((uVar6 & 2) == 0) {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
        }
        else {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
        }
      }
      else {
        uVar6 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x14)) = 1;
      (*(uint *)(gen_frame + 0x18)) = uVar6;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x14 + (int)this))) & 2) != 0) {
    F_00a16e10(this);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00ec3df0 */
uint F_00ec3df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xec3df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x115d65c);
    *(undefined * PTR32 *)((int)this + 0x10) = &REFG(undefined, 0x115d654);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  F_00483f60(((undefined *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))),param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a68));
  return (uint)this;
}

/* ref: FUN_00ec3e60 */
uint F_00ec3e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xec3e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_2 - (int)pvVar1;
  }
  F_00ebe720(this,iVar2,1,param_3);
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  *param_1 = (int)this + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00ec3eb0 */
uint F_00ec3eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec3eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short sVar1;
  short * psVar2;
  uint uVar3;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  uVar3 = F_00ebe820(this,param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return uVar3;
}

/* ref: FUN_00ec3ee0 */
uint F_00ec3ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xec3ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  char * PTR32 * PTR32 * PTR32 * PTR32 * param_7 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a6;
  undefined * param_8 = (undefined *)(uintptr_t)gen_a7;
  int param_9 = (int)gen_a8;
  undefined * param_10 = (undefined *)(uintptr_t)gen_a9;
  gen_size32 param_11 = (gen_size32)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  int * piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char * PTR32 * PTR32 * PTR32 * ppppcVar6;
  int * piVar7;
  uint uVar8;
  undefined * plVar9;
  undefined * pvVar10;
  undefined * pvVar11;
  gen_size32 sVar12;
  uint uVar13;
  undefined * puVar14;
  undefined4 * puVar15;
  char * PTR32 * PTR32 * PTR32 * PTR32 * pppppcVar16;
  gen_size32 _MaxCount;
  char * PTR32 * PTR32 * PTR32 * PTR32 * pppppcVar17;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = param_8;
  (*(int *)(gen_frame + 0x10)) = param_5;
  piVar2 = ((int *)GEN_TOP(**(uint * PTR32 *)(param_5 + 0x30)));
  (*(int *)(gen_frame + 0x1c)) = param_9;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = param_10;
  (*(gen_size32 *)(gen_frame + 0x3c)) = param_11;
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar2;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x24)),0);
  if (piVar2[1] != -1) {
    piVar2[1] = piVar2[1] + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x24)));
  piVar7 = (int *)F_00ebe910(&(*(int * PTR32 *)(gen_frame + 0xc)));
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar7;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x28)),0);
  iVar3 = piVar2[1];
  if ((iVar3 != 0) && (iVar3 != -1)) {
    piVar2[1] = iVar3 + -1;
  }
  puVar15 = ((undefined4 *)GEN_TOP((~-(uint)(piVar2[1] != 0) & (uint)piVar2)));
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x28)));
  if (puVar15 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar15)(puVar15,1);
  }
  piVar2 = (*(int * PTR32 *)(gen_frame + 0xc));
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0xc))((*(int * PTR32 *)(gen_frame + 0xc)),((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40)));
  uVar8 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  ppppcVar6 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
  (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x28))))) + 0)) = (char)uVar8;
  cVar1 = *(char *)param_7;
  (*(uint *)(gen_frame + 0x70)) = 0xf;
  (*(gen_size32 *)(gen_frame + 0x6c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (char * PTR32 * PTR32 * PTR32 *)((uint)ppppcVar6 & 0xffffff00);
  if ((cVar1 == '+') || ((*(int *)(gen_frame + 0x18)) = 0, cVar1 == '-')) {
    (*(int *)(gen_frame + 0x18)) = 1;
  }
  plVar9 = F_00c527f9();
  _MaxCount = (*(gen_size32 *)(gen_frame + 0x3c));
  (*(char *)(gen_frame + 0x30)) = *(*(char * PTR32 *)((char *)(plVar9)));
  (*(undefined2 *)(gen_frame + 0x31)) = 0x65;
  pvVar10 = F_00c48f80(param_7,0x65,(*(gen_size32 *)(gen_frame + 0x3c)));
  pvVar11 = F_00c48f80(param_7,(int)(*(char *)(gen_frame + 0x30)),_MaxCount);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = pvVar11;
  if (pvVar11 == (undefined *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar11;
  }
  pppppcVar16 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
  if ((*(uint *)(gen_frame + 0x54)) < 0x10) {
    pppppcVar16 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
  }
  pppppcVar17 = param_7;
  if (*(char *)pppppcVar16 != '\x7f') {
    pppppcVar16 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
    if ((*(uint *)(gen_frame + 0x54)) < 0x10) {
      pppppcVar16 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
    }
    if ('\0' < *(char *)pppppcVar16) {
      F_00e69490(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),param_7,_MaxCount);
      pvVar11 = (*(undefined * PTR32 *)(gen_frame + 0x38));
      if (pvVar10 == (undefined *)0x0) {
        F_00a17030(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),(*(undefined * PTR32 *)(gen_frame + 0x34)),0x30);
        pvVar11 = (*(undefined * PTR32 *)(gen_frame + 0x38));
      }
      else {
        if ((*(undefined * PTR32 *)(gen_frame + 0x38)) == (undefined *)0x0) {
          F_00a17030(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),(*(undefined * PTR32 *)(gen_frame + 0x2c)),0x30);
          (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pvVar11;
        }
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),(int)pvVar10 - (int)param_7,(*(undefined * PTR32 *)(gen_frame + 0x34)),0x30);
      }
      if (pvVar11 == (undefined *)0x0) {
        F_00a17030(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),(*(undefined * PTR32 *)(gen_frame + 0x2c)),0x30);
      }
      else {
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),((int)pvVar11 - (int)param_7) + 1,(*(int *)(gen_frame + 0x1c)),0x30);
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),(int)pvVar11 - (int)param_7,(*(undefined * PTR32 *)(gen_frame + 0x2c)),0x30);
        (*(int *)(gen_frame + 0x1c)) = 0;
      }
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)0x0;
      pppppcVar16 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0];
      if ((*(uint *)(gen_frame + 0x54)) < 0x10) {
        pppppcVar16 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
      }
      pppppcVar17 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
      if ((*(uint *)(gen_frame + 0x70)) < 0x10) {
        pppppcVar17 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c));
      }
      sVar12 = F_00c525d0((char *)pppppcVar17,&(*(char *)(gen_frame + 0x30)));
      cVar1 = *(char *)pppppcVar16;
      _MaxCount = (*(gen_size32 *)(gen_frame + 0x6c));
      while ((((*(gen_size32 *)(gen_frame + 0x6c)) = _MaxCount, cVar1 != '\x7f' && ('\0' < cVar1)) &&
             ((uint)(int)cVar1 < sVar12 - (*(int *)(gen_frame + 0x18))))) {
        sVar12 = sVar12 - (int)cVar1;
        F_00ebe720(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)),sVar12,1,0);
        if ('\0' < *(char *)((int)pppppcVar16 + 1)) {
          pppppcVar16 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((int)pppppcVar16 + 1);
        }
        _MaxCount = (*(gen_size32 *)(gen_frame + 0x6c));
        cVar1 = *(char *)pppppcVar16;
      }
      pppppcVar17 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
      if ((*(uint *)(gen_frame + 0x70)) < 0x10) {
        pppppcVar17 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
      (*(gen_size32 *)(gen_frame + 0x3c)) = _MaxCount;
    }
  }
  uVar8 = *(uint *)((*(int *)(gen_frame + 0x10)) + 0x20);
  uVar13 = (int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + (*(int *)(gen_frame + 0x1c)) + _MaxCount + (int)(*(undefined * PTR32 *)(gen_frame + 0x2c));
  if (((*(int *)((*(int *)(gen_frame + 0x10)) + 0x24) < 0) || ((*(int *)((*(int *)(gen_frame + 0x10)) + 0x24) < 1 && (uVar8 == 0)))) ||
     (uVar8 <= uVar13)) {
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)(uVar8 - uVar13);
  }
  uVar8 = *(uint *)((*(int *)(gen_frame + 0x10)) + 0x14) & 0x1c0;
  if (uVar8 != 0x40) {
    if (uVar8 == 0x100) {
      if ((*(int *)(gen_frame + 0x18)) != 0) {
        puVar15 = (undefined4 *)F_00eb72c0(param_1,((undefined1 *)(gen_frame + 0x14)),param_3,param_4,pppppcVar17,1);
        param_3 = *puVar15;
        param_4 = puVar15[1];
        pppppcVar17 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((int)pppppcVar17 + 1);
        _MaxCount = _MaxCount - 1;
        (*(gen_size32 *)(gen_frame + 0x3c)) = _MaxCount;
      }
      puVar15 = (undefined4 *)F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x14)),param_3,param_4,param_6,(*(undefined * PTR32 *)(gen_frame + 0x38)));
      param_3 = *puVar15;
      param_4 = puVar15[1];
    }
    else {
      puVar15 = (undefined4 *)F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x14)),param_3,param_4,param_6,(*(undefined * PTR32 *)(gen_frame + 0x38)));
      param_3 = *puVar15;
      param_4 = puVar15[1];
    }
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
  }
  pvVar10 = F_00c48f80(pppppcVar17,(int)(*(char *)(gen_frame + 0x30)),_MaxCount);
  if (pvVar10 != (undefined *)0x0) {
    iVar3 = ((int)pvVar10 - (int)pppppcVar17) + 1;
    puVar15 = (undefined4 *)
              F_00eb7330(param_1,((undefined1 *)(gen_frame + 0x14)),param_3,param_4,pppppcVar17,
                           (int)pvVar10 - (int)pppppcVar17,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x28))))));
    puVar15 = (undefined4 *)F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x14)),*puVar15,puVar15[1],0x30,(*(undefined * PTR32 *)(gen_frame + 0x2c)));
    uVar4 = *puVar15;
    uVar5 = puVar15[1];
    uVar8 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 4))((*(int * PTR32 *)(gen_frame + 0xc)));
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))) + 0)) = (char)uVar8;
    puVar15 = (undefined4 *)F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x8)),uVar4,uVar5,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))),1);
    puVar15 = (undefined4 *)F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x20)),*puVar15,puVar15[1],0x30,(*(int *)(gen_frame + 0x1c)));
    param_3 = *puVar15;
    pppppcVar17 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((int)pppppcVar17 + iVar3);
    _MaxCount = (*(gen_size32 *)(gen_frame + 0x3c)) - iVar3;
    (*(gen_size32 *)(gen_frame + 0x3c)) = _MaxCount;
    param_4 = puVar15[1];
  }
  pvVar10 = F_00c48f80(pppppcVar17,0x65,_MaxCount);
  if (pvVar10 != (undefined *)0x0) {
    iVar3 = ((int)pvVar10 - (int)pppppcVar17) + 1;
    puVar15 = (undefined4 *)
              F_00eb7330(param_1,((undefined1 *)(gen_frame + 0x20)),param_3,param_4,pppppcVar17,
                           (int)pvVar10 - (int)pppppcVar17,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x28))))));
    puVar15 = (undefined4 *)F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x20)),*puVar15,puVar15[1],0x30,(*(undefined * PTR32 *)(gen_frame + 0x34)));
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
    puVar14 = &REFG(undefined, 0x115d624);
    if ((*(byte *)((*(int *)(gen_frame + 0x10)) + 0x14) & 4) == 0) {
      puVar14 = &REFG(undefined, 0x115d620);
    }
    puVar15 = (undefined4 *)F_00eb72c0(param_1,((undefined1 *)(gen_frame + 0x20)),*puVar15,puVar15[1],puVar14,1);
    param_3 = *puVar15;
    pppppcVar17 = (char * PTR32 * PTR32 * PTR32 * PTR32 *)((int)pppppcVar17 + iVar3);
    _MaxCount = (*(gen_size32 *)(gen_frame + 0x3c)) - iVar3;
    (*(gen_size32 *)(gen_frame + 0x3c)) = _MaxCount;
    param_4 = puVar15[1];
  }
  puVar15 = (undefined4 *)
            F_00eb7330(param_1,((undefined1 *)(gen_frame + 0x20)),param_3,param_4,pppppcVar17,_MaxCount,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x28))))));
  puVar15 = (undefined4 *)F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x20)),*puVar15,puVar15[1],0x30,(*(undefined * PTR32 *)(gen_frame + 0x34)));
  uVar4 = *puVar15;
  uVar5 = puVar15[1];
  *(undefined4 *)((*(int *)(gen_frame + 0x10)) + 0x20) = 0;
  *(undefined4 *)((*(int *)(gen_frame + 0x10)) + 0x24) = 0;
  F_00eb7250(param_1,param_2,uVar4,uVar5,param_6,(*(undefined * PTR32 *)(gen_frame + 0x38)));
  if (0xf < (*(uint *)(gen_frame + 0x70))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0]);
  }
  ppppcVar6 = ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
  (*(uint *)(gen_frame + 0x70)) = 0xf;
  (*(gen_size32 *)(gen_frame + 0x6c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (char * PTR32 * PTR32 * PTR32 *)((uint)ppppcVar6 & 0xffffff00);
  if (0xf < (*(uint *)(gen_frame + 0x54))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40))[0]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return param_2;
}

/* ref: FUN_00ec4420 */
uint F_00ec4420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xec4420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  char * param_7 = (char *)(uintptr_t)gen_a6;
  uint param_8 = (uint)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int * piVar5;
  char * PTR32 * PTR32 * PTR32 * ppppcVar6;
  int iVar7;
  char * pcVar8;
  undefined4 * puVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(**(uint * PTR32 *)(param_5 + 0x30)));
  (*(uint *)(gen_frame + 0x28)) = param_8;
  (*(int *)(gen_frame + 0x1c)) = param_5;
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar2;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x18)),0);
  if (piVar2[1] != -1) {
    piVar2[1] = piVar2[1] + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x18)));
  piVar5 = (int *)F_00ebe910(&(*(int * PTR32 *)(gen_frame + 0xc)));
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar5;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x24)),0);
  iVar7 = piVar2[1];
  if ((iVar7 != 0) && (iVar7 != -1)) {
    piVar2[1] = iVar7 + -1;
  }
  iVar7 = piVar2[1];
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x24)));
  puVar9 = ((undefined4 *)GEN_TOP((~-(uint)(iVar7 != 0) & (uint)piVar2)));
  if (puVar9 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
  }
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0xc))((*(int * PTR32 *)(gen_frame + 0xc)),((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)));
  cVar1 = *param_7;
  if ((cVar1 == '+') || (cVar1 == '-')) {
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))) = 1;
  }
  else if ((cVar1 == '0') && ((param_7[1] == 'x' || (param_7[1] == 'X')))) {
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))) = 2;
  }
  else {
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))) = 0;
  }
  ppppcVar6 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
  if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
    ppppcVar6 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  }
  if (*(char *)ppppcVar6 != '\x7f') {
    ppppcVar6 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
    if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
      ppppcVar6 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
    }
    if ('\0' < *(char *)ppppcVar6) {
      if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
        (*(char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
      }
      else {
        (*(char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14)) = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
      }
      cVar1 = *(char *)(*(char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14));
      uVar10 = (*(uint *)(gen_frame + 0x28));
      while (((cVar1 != '\x7f' && ('\0' < cVar1)) &&
             ((uint)(int)cVar1 < uVar10 - (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24)))))))) {
        uVar10 = uVar10 - (int)cVar1;
        iVar7 = ((*(uint *)(gen_frame + 0x28)) - uVar10) + 1;
        F_01051df1(param_7 + uVar10 + 1,iVar7,param_7 + uVar10,iVar7);
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
        param_7[uVar10] = '\0';
        if ('\0' < *(char *)((int)(*(char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14)) + 1)) {
          (*(char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 * PTR32 *)((int)(*(char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14)) + 1);
        }
        cVar1 = *(char *)(*(char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14));
      }
    }
  }
  uVar10 = *(uint *)((*(int *)(gen_frame + 0x1c)) + 0x20);
  if (((*(int *)((*(int *)(gen_frame + 0x1c)) + 0x24) < 0) || ((*(int *)((*(int *)(gen_frame + 0x1c)) + 0x24) < 1 && (uVar10 == 0)))) ||
     (uVar10 <= (*(uint *)(gen_frame + 0x28)))) {
    iVar7 = 0;
  }
  else {
    iVar7 = uVar10 - (*(uint *)(gen_frame + 0x28));
  }
  uVar10 = *(uint *)((*(int *)(gen_frame + 0x1c)) + 0x14) & 0x1c0;
  pcVar8 = param_7;
  if (uVar10 != 0x40) {
    if (uVar10 == 0x100) {
      puVar9 = (undefined4 *)
               F_00eb72c0(param_1,((undefined1 *)(gen_frame + 0x10)),param_3,param_4,param_7,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))));
      (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24)))));
      pcVar8 = param_7 + (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24)))));
      puVar9 = (undefined4 *)F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x20)),*puVar9,puVar9[1],param_6,iVar7);
      param_3 = *puVar9;
      param_4 = puVar9[1];
    }
    else {
      puVar9 = (undefined4 *)F_00eb7250(param_1,((undefined1 *)(gen_frame + 0x20)),param_3,param_4,param_6,iVar7);
      param_3 = *puVar9;
      param_4 = puVar9[1];
    }
    iVar7 = 0;
  }
  uVar10 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 8))((*(int * PTR32 *)(gen_frame + 0xc)));
  (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))) + 0)) = (char)uVar10;
  puVar9 = (undefined4 *)
           F_00eb7330(param_1,((undefined1 *)(gen_frame + 0x8)),param_3,param_4,pcVar8,(*(uint *)(gen_frame + 0x28)),(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))));
  uVar3 = *puVar9;
  uVar4 = puVar9[1];
  *(undefined4 *)((*(int *)(gen_frame + 0x1c)) + 0x20) = 0;
  *(undefined4 *)((*(int *)(gen_frame + 0x1c)) + 0x24) = 0;
  F_00eb7250(param_1,param_2,uVar3,uVar4,param_6,iVar7);
  if (0xf < (*(uint *)(gen_frame + 0x40))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return param_2;
}

/* ref: FUN_00ec46b0 */
uint F_00ec46b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec46b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ec0810(this);
  if (uVar1 != 0xffffffff) {
    *param_1 = (char)uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00ec46d0 */
uint F_00ec46d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xec46d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x81))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00eacb60(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x81) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x81) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x81) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x20];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x20))) = (char)piVar3[0x20];
      *(char *)(piVar3 + 0x20) = (char)iVar1;
      goto LAB_00ec480f;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x81) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x81) == '\0') {
      piVar4 = (int *)F_00eaca60(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x81) == '\0') {
      uVar5 = F_00eaca30(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00ec480f: ;
  if ((char)piVar3[0x20] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x20] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0x20] == '\0') {
            *(undefined1 *)(piVar6 + 0x20) = 1;
            *(undefined1 *)(piVar4 + 0x20) = 0;
            F_00eb99e0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x81) == '\0') {
            if ((*(char *)(*piVar6 + 0x80) != '\x01') || (*(char *)(piVar6[2] + 0x80) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x80) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x80) = 1;
                *(undefined1 *)(piVar6 + 0x20) = 0;
                F_00eb1690((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0x20) = (char)piVar4[0x20];
              *(undefined1 *)(piVar4 + 0x20) = 1;
              *(undefined1 *)(piVar6[2] + 0x80) = 1;
              F_00eb99e0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00ec491c: ;
            *(undefined1 *)(piVar6 + 0x20) = 0;
          }
        }
        else {
          if ((char)piVar6[0x20] == '\0') {
            *(undefined1 *)(piVar6 + 0x20) = 1;
            *(undefined1 *)(piVar4 + 0x20) = 0;
            F_00eb1690((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x81) == '\0') {
            if ((*(char *)(piVar6[2] + 0x80) == '\x01') && (*(char *)(*piVar6 + 0x80) == '\x01'))
            goto LAB_00ec491c;
            if (*(char *)(*piVar6 + 0x80) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x80) = 1;
              *(undefined1 *)(piVar6 + 0x20) = 0;
              F_00eb99e0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0x20) = (char)piVar4[0x20];
            *(undefined1 *)(piVar4 + 0x20) = 1;
            *(undefined1 *)(*piVar6 + 0x80) = 1;
            F_00eb1690((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x20) = 1;
  }
  piVar3[0x1a] = (int)(*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20(piVar3 + 0x1a);
  F_0042c880(piVar3 + 4);
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00ec49d0 */
uint F_00ec49d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xec49d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * this_00;
  uint uVar1;
  
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x115d664);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x50) =
         (*(undefined * PTR32 (*)[1])REFP(0x115cab0));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a60));
  this_00 = (undefined4 *)((int)this + 4);
  F_00ebd750(((undefined *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))),this_00,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d0ec));
  F_00eb2150(this_00);
  uVar1 = 0;
  *this_00 = (*(undefined * PTR32 (*)[15])REFP(0x115cfd4));
  if ((param_1 & 1) == 0) {
    uVar1 = 4;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  *(uint *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x40) = 0;
  return (uint)this;
}

/* ref: FUN_00ec4a70 */
uint F_00ec4a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xec4a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * this_00;
  uint uVar1;
  
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x115d674);
    *(undefined * PTR32 *)((int)this + 0x10) = &REFG(undefined, 0x115d66c);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  this_00 = (undefined4 *)((int)this + 0x18);
  F_00483f60(((undefined *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))),this_00,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a68));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d014));
  F_00479880(this_00);
  uVar1 = 0;
  *this_00 = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  if ((param_1 & 1) == 0) {
    uVar1 = 4;
  }
  if ((param_1 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  *(uint *)((int)this + 0x58) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ec4b30 */
uint F_00ec4b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xec4b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_00ec0950(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00ec4b60 */
uint F_00ec4b60(unsigned int gen_a0)
{
  GEN_ENTER(0xec4b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 8));
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 8),1,0);
  *(uint *)((int)this + 0x74) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  return (uint)this;
}

/* ref: FUN_00ec4ba0 */
uint F_00ec4ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec4ba0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x6c) + param_2 * 4;
}

/* ref: FUN_00ec4bd0 */
uint F_00ec4bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec4bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf2 */
uint F_00ec4bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec4bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + 0x78);
  if (*(int *)((int)this + 0x78) != 0) {
    return *(uint *)((int)this + 0x74);
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf4 */
uint F_00ec4c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec4c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x78) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x74) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x78));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf3 */
uint F_00ec4c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec4c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x78) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x74) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x78));
  }
  return 0;
}

/* ref: FUN_00ec4cb0 */
uint F_00ec4cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec4cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*(uint *)((int)this + 0x74) < param_1) {
    puVar4 = (undefined4 *)F_00eba620(this,param_1,0);
    uVar5 = 0;
    puVar6 = puVar4;
    if (*(int *)((int)this + 0x70) != 0) {
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x6c) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *(uint *)((int)this + 0x70));
    }
    iVar1 = *(int *)((int)this + 0x6c);
    iVar2 = *(int *)((int)this + 0x74);
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
    *(undefined4 * PTR32 *)((int)this + 0x6c) = puVar4;
    *(uint *)((int)this + 0x74) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec4d40 */
uint F_00ec4d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec4d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x70) == *(int *)((int)this + 0x74)) {
    F_00ec4cb0(this,*(int *)((int)this + 0x74) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x6c) + *(int *)((int)this + 0x70) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x70) = *(int *)((int)this + 0x70) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec4d80 */
uint F_00ec4d80(unsigned int gen_a0)
{
  GEN_ENTER(0xec4d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return uVar1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf1 */
uint F_00ec4da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec4da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x78) == *(int *)((int)this + 0x7c)) {
    F_00ec4cb0((undefined *)((int)this + 8),*(int *)((int)this + 0x7c) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x74) + *(int *)((int)this + 0x78) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  *(int *)((int)this + 0x78) = *(int *)((int)this + 0x78) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec4de0 */
uint F_00ec4de0(unsigned int gen_a0)
{
  GEN_ENTER(0xec4de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d114));
  F_00eb2e90((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 4;
  uVar1 = F_00eba6b0((undefined *)((int)this + 4),4,0);
  *(uint *)((int)this + 0x110) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d6a8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11c) = (*(undefined * PTR32 (*)[3])REFP(0x115d698));
  return (uint)this;
}

/* ref: FUN_00ec4e80 */
uint F_00ec4e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec4e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return (uint)this;
}

/* ref: FUN_00ec4ec0 */
uint F_00ec4ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec4ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca220((undefined *)((int)this + -0x11c),param_1);
  return uVar1;
}

/* ref: FUN_00ec4ed0 */
uint F_00ec4ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec4ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec4ef0 */
uint F_00ec4ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec4ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec4f30 */
uint F_00ec4f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec4f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x114) < param_1) {
    uVar4 = F_00eba6b0(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x110) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x10c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x10c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x110));
    }
    iVar1 = *(int *)((int)this + 0x114);
    iVar2 = *(int *)((int)this + 0x10c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x10c) = uVar4;
    *(uint *)((int)this + 0x114) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec5020 */
uint F_00ec5020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x110) == *(int *)((int)this + 0x114)) {
    F_00ec4f30(this,*(int *)((int)this + 0x114) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10c) + *(int *)((int)this + 0x110) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x110) = *(int *)((int)this + 0x110) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec50b0 */
uint F_00ec50b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec50b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec5020((undefined *)((int)this + -0x118),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec50e0 */
uint F_00ec50e0(unsigned int gen_a0)
{
  GEN_ENTER(0xec50e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb3050((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 2;
  uVar1 = F_00eba750((undefined *)((int)this + 4),2,0);
  *(uint *)((int)this + 0xb0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d6c0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbc) = (*(undefined * PTR32 (*)[3])REFP(0x115d6b0));
  return (uint)this;
}

/* ref: FUN_00ec5180 */
uint F_00ec5180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca260((undefined *)((int)this + -0xbc),param_1);
  return uVar1;
}

/* ref: FUN_00ec5190 */
uint F_00ec5190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec51b0 */
uint F_00ec51b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec51b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec51f0 */
uint F_00ec51f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec51f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0xb4) < param_1) {
    uVar4 = F_00eba750(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0xb0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0xac) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0xac) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0xb0));
    }
    iVar1 = *(int *)((int)this + 0xb4);
    iVar2 = *(int *)((int)this + 0xac);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0xac) = uVar4;
    *(uint *)((int)this + 0xb4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec52e0 */
uint F_00ec52e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec52e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xb0) == *(int *)((int)this + 0xb4)) {
    F_00ec51f0(this,*(int *)((int)this + 0xb4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xac) + *(int *)((int)this + 0xb0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec5370 */
uint F_00ec5370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec52e0((undefined *)((int)this + -0xb8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec53a0 */
uint F_00ec53a0(unsigned int gen_a0)
{
  GEN_ENTER(0xec53a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb3200((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 7;
  uVar1 = F_00eba7f0((undefined *)((int)this + 4),7,0);
  *(uint *)((int)this + 0x1a0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d6d8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ac) = (*(undefined * PTR32 (*)[3])REFP(0x115d6c8));
  return (uint)this;
}

/* ref: FUN_00ec5440 */
uint F_00ec5440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca2a0((undefined *)((int)this + -0x1ac),param_1);
  return uVar1;
}

/* ref: FUN_00ec5450 */
uint F_00ec5450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec5470 */
uint F_00ec5470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec54b0 */
uint F_00ec54b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec54b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x1a4) < param_1) {
    uVar4 = F_00eba7f0(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x1a0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x19c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x19c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x1a0));
    }
    iVar1 = *(int *)((int)this + 0x1a4);
    iVar2 = *(int *)((int)this + 0x19c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x19c) = uVar4;
    *(uint *)((int)this + 0x1a4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec55a0 */
uint F_00ec55a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec55a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x1a0) == *(int *)((int)this + 0x1a4)) {
    F_00ec54b0(this,*(int *)((int)this + 0x1a4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x19c) + *(int *)((int)this + 0x1a0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x1a0) = *(int *)((int)this + 0x1a0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec5630 */
uint F_00ec5630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec55a0((undefined *)((int)this + -0x1a8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec5660 */
uint F_00ec5660(unsigned int gen_a0)
{
  GEN_ENTER(0xec5660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb33c0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 3;
  uVar1 = F_00eba890((undefined *)((int)this + 4),3,0);
  *(uint *)((int)this + 0xe0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d6f0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[3])REFP(0x115d6e0));
  return (uint)this;
}

/* ref: FUN_00ec5700 */
uint F_00ec5700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca2e0((undefined *)((int)this + -0xec),param_1);
  return uVar1;
}

/* ref: FUN_00ec5710 */
uint F_00ec5710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec5730 */
uint F_00ec5730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec5770 */
uint F_00ec5770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0xe4) < param_1) {
    uVar4 = F_00eba890(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0xe0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0xdc) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0xdc) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0xe0));
    }
    iVar1 = *(int *)((int)this + 0xe4);
    iVar2 = *(int *)((int)this + 0xdc);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0xdc) = uVar4;
    *(uint *)((int)this + 0xe4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec5860 */
uint F_00ec5860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xe0) == *(int *)((int)this + 0xe4)) {
    F_00ec5770(this,*(int *)((int)this + 0xe4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + *(int *)((int)this + 0xe0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0xe0) = *(int *)((int)this + 0xe0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec58f0 */
uint F_00ec58f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec58f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec5860((undefined *)((int)this + -0xe8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec5920 */
uint F_00ec5920(unsigned int gen_a0)
{
  GEN_ENTER(0xec5920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb3580((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 9;
  uVar1 = F_00eba930((undefined *)((int)this + 4),9,0);
  *(uint *)((int)this + 0x200) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d708));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20c) = (*(undefined * PTR32 (*)[3])REFP(0x115d6f8));
  return (uint)this;
}

/* ref: FUN_00ec59c0 */
uint F_00ec59c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec59c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca320((undefined *)((int)this + -0x20c),param_1);
  return uVar1;
}

/* ref: FUN_00ec59d0 */
uint F_00ec59d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec59d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec59f0 */
uint F_00ec59f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec59f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec5a30 */
uint F_00ec5a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x204) < param_1) {
    uVar4 = F_00eba930(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x200) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x1fc) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x1fc) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x200));
    }
    iVar1 = *(int *)((int)this + 0x204);
    iVar2 = *(int *)((int)this + 0x1fc);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x1fc) = uVar4;
    *(uint *)((int)this + 0x204) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec5b20 */
uint F_00ec5b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x200) == *(int *)((int)this + 0x204)) {
    F_00ec5a30(this,*(int *)((int)this + 0x204) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1fc) + *(int *)((int)this + 0x200) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec5bb0 */
uint F_00ec5bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec5b20((undefined *)((int)this + -0x208),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec5be0 */
uint F_00ec5be0(unsigned int gen_a0)
{
  GEN_ENTER(0xec5be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb3740((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 10;
  uVar1 = F_00eba9d0((undefined *)((int)this + 4),10,0);
  *(uint *)((int)this + 0x230) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x23c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d720));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x23c) = (*(undefined * PTR32 (*)[3])REFP(0x115d710));
  return (uint)this;
}

/* ref: FUN_00ec5c80 */
uint F_00ec5c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca360((undefined *)((int)this + -0x23c),param_1);
  return uVar1;
}

/* ref: FUN_00ec5c90 */
uint F_00ec5c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec5cb0 */
uint F_00ec5cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec5cf0 */
uint F_00ec5cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x234) < param_1) {
    uVar4 = F_00eba9d0(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x230) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x22c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x22c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x230));
    }
    iVar1 = *(int *)((int)this + 0x234);
    iVar2 = *(int *)((int)this + 0x22c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x22c) = uVar4;
    *(uint *)((int)this + 0x234) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec5de0 */
uint F_00ec5de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x230) == *(int *)((int)this + 0x234)) {
    F_00ec5cf0(this,*(int *)((int)this + 0x234) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x22c) + *(int *)((int)this + 0x230) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x230) = *(int *)((int)this + 0x230) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec5e70 */
uint F_00ec5e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec5de0((undefined *)((int)this + -0x238),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec5ea0 */
uint F_00ec5ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xec5ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb3900((undefined *)((int)this + 8));
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 3;
  uVar1 = F_00ebaa70((undefined *)((int)this + 8),3,0);
  *(uint *)((int)this + 0xb4) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d55c));
  return (uint)this;
}

/* ref: FUN_00ec5ef0 */
uint F_00ec5ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5ef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xac) + param_2 * 4;
}

/* ref: FUN_00ec5f30 */
uint F_00ec5f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5f30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf2_00ec5f50 */
uint F_00ec5f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + 0xb8);
  if (*(int *)((int)this + 0xb8) != 0) {
    return *(uint *)((int)this + 0xb4);
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf4_00ec5f80 */
uint F_00ec5f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0xb8) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xb4) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0xb8));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf3_00ec5fe0 */
uint F_00ec5fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0xb8) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xb4) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0xb8));
  }
  return 0;
}

/* ref: FUN_00ec6040 */
uint F_00ec6040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*(uint *)((int)this + 0xb4) < param_1) {
    puVar4 = (undefined4 *)F_00ebaa70(this,param_1,0);
    uVar5 = 0;
    puVar6 = puVar4;
    if (*(int *)((int)this + 0xb0) != 0) {
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xac) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *(uint *)((int)this + 0xb0));
    }
    iVar1 = *(int *)((int)this + 0xac);
    iVar2 = *(int *)((int)this + 0xb4);
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
    *(undefined4 * PTR32 *)((int)this + 0xac) = puVar4;
    *(uint *)((int)this + 0xb4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec60e0 */
uint F_00ec60e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec60e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xb0) == *(int *)((int)this + 0xb4)) {
    F_00ec6040(this,*(int *)((int)this + 0xb4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xac) + *(int *)((int)this + 0xb0) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6130 */
uint F_00ec6130(unsigned int gen_a0)
{
  GEN_ENTER(0xec6130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  uVar1 = F_00ebfee0((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return uVar1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf1_00ec6150 */
uint F_00ec6150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xb8) == *(int *)((int)this + 0xbc)) {
    F_00ec6040((undefined *)((int)this + 8),*(int *)((int)this + 0xbc) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xb4) + *(int *)((int)this + 0xb8) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  *(int *)((int)this + 0xb8) = *(int *)((int)this + 0xb8) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec61a0 */
uint F_00ec61a0(unsigned int gen_a0)
{
  GEN_ENTER(0xec61a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb3ac0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 8;
  uVar1 = F_00ebab10((undefined *)((int)this + 4),8,0);
  *(uint *)((int)this + 0x1d0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1dc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d750));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1dc) = (*(undefined * PTR32 (*)[3])REFP(0x115d740));
  return (uint)this;
}

/* ref: FUN_00ec6240 */
uint F_00ec6240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca3d0((undefined *)((int)this + -0x1dc),param_1);
  return uVar1;
}

/* ref: FUN_00ec6250 */
uint F_00ec6250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec6270 */
uint F_00ec6270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6270u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec62b0 */
uint F_00ec62b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec62b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x1d4) < param_1) {
    uVar4 = F_00ebab10(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x1d0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x1cc) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x1cc) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x1d0));
    }
    iVar1 = *(int *)((int)this + 0x1d4);
    iVar2 = *(int *)((int)this + 0x1cc);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x1cc) = uVar4;
    *(uint *)((int)this + 0x1d4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec63a0 */
uint F_00ec63a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec63a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x1d0) == *(int *)((int)this + 0x1d4)) {
    F_00ec62b0(this,*(int *)((int)this + 0x1d4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1cc) + *(int *)((int)this + 0x1d0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6430 */
uint F_00ec6430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec63a0((undefined *)((int)this + -0x1d8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec6460 */
uint F_00ec6460(unsigned int gen_a0)
{
  GEN_ENTER(0xec6460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb3c80((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 6;
  uVar1 = F_00ebabb0((undefined *)((int)this + 4),6,0);
  *(uint *)((int)this + 0x170) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x17c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d768));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x17c) = (*(undefined * PTR32 (*)[3])REFP(0x115d758));
  return (uint)this;
}

/* ref: FUN_00ec6500 */
uint F_00ec6500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca410((undefined *)((int)this + -0x17c),param_1);
  return uVar1;
}

/* ref: FUN_00ec6510 */
uint F_00ec6510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec6530 */
uint F_00ec6530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6530u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec6570 */
uint F_00ec6570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x174) < param_1) {
    uVar4 = F_00ebabb0(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x170) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x16c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x16c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x170));
    }
    iVar1 = *(int *)((int)this + 0x174);
    iVar2 = *(int *)((int)this + 0x16c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x16c) = uVar4;
    *(uint *)((int)this + 0x174) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec6660 */
uint F_00ec6660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x170) == *(int *)((int)this + 0x174)) {
    F_00ec6570(this,*(int *)((int)this + 0x174) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x16c) + *(int *)((int)this + 0x170) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x170) = *(int *)((int)this + 0x170) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec66f0 */
uint F_00ec66f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec66f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec6660((undefined *)((int)this + -0x178),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec6720 */
uint F_00ec6720(unsigned int gen_a0)
{
  GEN_ENTER(0xec6720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb3e40((undefined *)((int)this + 8));
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 4;
  uVar1 = F_00ebac50((undefined *)((int)this + 8),4,0);
  *(uint *)((int)this + 0xd4) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d574));
  return (uint)this;
}

/* ref: FUN_00ec6770 */
uint F_00ec6770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xcc) + param_2 * 4;
}

/* ref: FUN_00ec67b0 */
uint F_00ec67b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec67b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf2_00ec67d0 */
uint F_00ec67d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec67d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + 0xd8);
  if (*(int *)((int)this + 0xd8) != 0) {
    return *(uint *)((int)this + 0xd4);
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf4_00ec6800 */
uint F_00ec6800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0xd8) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xd4) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0xd4) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0xd8));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf3_00ec6860 */
uint F_00ec6860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0xd8) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xd4) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0xd4) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0xd8));
  }
  return 0;
}

/* ref: FUN_00ec68c0 */
uint F_00ec68c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec68c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*(uint *)((int)this + 0xd4) < param_1) {
    puVar4 = (undefined4 *)F_00ebac50(this,param_1,0);
    uVar5 = 0;
    puVar6 = puVar4;
    if (*(int *)((int)this + 0xd0) != 0) {
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xcc) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *(uint *)((int)this + 0xd0));
    }
    iVar1 = *(int *)((int)this + 0xcc);
    iVar2 = *(int *)((int)this + 0xd4);
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
    *(undefined4 * PTR32 *)((int)this + 0xcc) = puVar4;
    *(uint *)((int)this + 0xd4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec6960 */
uint F_00ec6960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xd0) == *(int *)((int)this + 0xd4)) {
    F_00ec68c0(this,*(int *)((int)this + 0xd4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xcc) + *(int *)((int)this + 0xd0) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0xd0) = *(int *)((int)this + 0xd0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec69b0 */
unsigned int F_00ec69b0(unsigned int gen_a0)
{
  GEN_ENTER(0xec69b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  F_00ebff60((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf1_00ec69d0 */
uint F_00ec69d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec69d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xd8) == *(int *)((int)this + 0xdc)) {
    F_00ec68c0((undefined *)((int)this + 8),*(int *)((int)this + 0xdc) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd4) + *(int *)((int)this + 0xd8) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6a20 */
uint F_00ec6a20(unsigned int gen_a0)
{
  GEN_ENTER(0xec6a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb4000((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x980) = 0;
  *(undefined4 *)((int)this + 0x984) = 0;
  *(undefined4 *)((int)this + 0x988) = 0x31;
  uVar1 = F_00ebacf0((undefined *)((int)this + 4),0x31,0);
  *(uint *)((int)this + 0x980) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d798));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98c) = (*(undefined * PTR32 (*)[3])REFP(0x115d788));
  return (uint)this;
}

/* ref: FUN_00ec6ac0 */
uint F_00ec6ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca480((undefined *)((int)this + -0x98c),param_1);
  return uVar1;
}

/* ref: FUN_00ec6ad0 */
uint F_00ec6ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec6af0 */
uint F_00ec6af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec6b30 */
uint F_00ec6b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x984) < param_1) {
    uVar4 = F_00ebacf0(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x980) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x97c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x97c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x980));
    }
    iVar1 = *(int *)((int)this + 0x984);
    iVar2 = *(int *)((int)this + 0x97c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x97c) = uVar4;
    *(uint *)((int)this + 0x984) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec6c20 */
uint F_00ec6c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x980) == *(int *)((int)this + 0x984)) {
    F_00ec6b30(this,*(int *)((int)this + 0x984) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x97c) + *(int *)((int)this + 0x980) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x980) = *(int *)((int)this + 0x980) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6cb0 */
uint F_00ec6cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec6c20((undefined *)((int)this + -0x988),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec6ce0 */
uint F_00ec6ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xec6ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 8));
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 8),2,0);
  *(uint *)((int)this + 0x94) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  return (uint)this;
}

/* ref: FUN_00ec6d30 */
uint F_00ec6d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6d30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x8c) + param_2 * 4;
}

/* ref: FUN_00ec6d70 */
uint F_00ec6d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf2_00ec6d90 */
uint F_00ec6d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + 0x98);
  if (*(int *)((int)this + 0x98) != 0) {
    return *(uint *)((int)this + 0x94);
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf4_00ec6dc0 */
uint F_00ec6dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x98) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x94) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x98));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf3_00ec6e20 */
uint F_00ec6e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x98) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x94) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x98));
  }
  return 0;
}

/* ref: FUN_00ec6e80 */
uint F_00ec6e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*(uint *)((int)this + 0x94) < param_1) {
    puVar4 = (undefined4 *)F_00ebad90(this,param_1,0);
    uVar5 = 0;
    puVar6 = puVar4;
    if (*(int *)((int)this + 0x90) != 0) {
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *(uint *)((int)this + 0x90));
    }
    iVar1 = *(int *)((int)this + 0x8c);
    iVar2 = *(int *)((int)this + 0x94);
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
    *(undefined4 * PTR32 *)((int)this + 0x8c) = puVar4;
    *(uint *)((int)this + 0x94) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec6f20 */
uint F_00ec6f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x90) == *(int *)((int)this + 0x94)) {
    F_00ec6e80(this,*(int *)((int)this + 0x94) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + *(int *)((int)this + 0x90) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x90) = *(int *)((int)this + 0x90) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6f70 */
unsigned int F_00ec6f70(unsigned int gen_a0)
{
  GEN_ENTER(0xec6f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf1_00ec6f90 */
uint F_00ec6f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x98) == *(int *)((int)this + 0x9c)) {
    F_00ec6e80((undefined *)((int)this + 8),*(int *)((int)this + 0x9c) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + *(int *)((int)this + 0x98) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6fe0 */
uint F_00ec6fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xec6fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb4380((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x358) = 0x10;
  uVar1 = F_00ebae30((undefined *)((int)this + 4),0x10,0);
  *(uint *)((int)this + 0x350) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x35c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d7c8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x35c) = (*(undefined * PTR32 (*)[3])REFP(0x115d7b8));
  return (uint)this;
}

/* ref: FUN_00ec7080 */
uint F_00ec7080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca4f0((undefined *)((int)this + -0x35c),param_1);
  return uVar1;
}

/* ref: FUN_00ec7090 */
uint F_00ec7090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec70b0 */
uint F_00ec70b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec70b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec70f0 */
uint F_00ec70f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec70f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x354) < param_1) {
    uVar4 = F_00ebae30(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x350) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x34c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x34c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x350));
    }
    iVar1 = *(int *)((int)this + 0x354);
    iVar2 = *(int *)((int)this + 0x34c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x34c) = uVar4;
    *(uint *)((int)this + 0x354) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec71e0 */
uint F_00ec71e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec71e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x350) == *(int *)((int)this + 0x354)) {
    F_00ec70f0(this,*(int *)((int)this + 0x354) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34c) + *(int *)((int)this + 0x350) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x350) = *(int *)((int)this + 0x350) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec7270 */
uint F_00ec7270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec71e0((undefined *)((int)this + -0x358),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec72a0 */
uint F_00ec72a0(unsigned int gen_a0)
{
  GEN_ENTER(0xec72a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb4540((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x5c0) = 0;
  *(undefined4 *)((int)this + 0x5c4) = 0;
  *(undefined4 *)((int)this + 0x5c8) = 0x1d;
  uVar1 = F_00ebaed0((undefined *)((int)this + 4),0x1d,0);
  *(uint *)((int)this + 0x5c0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5cc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d7e0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5cc) = (*(undefined * PTR32 (*)[3])REFP(0x115d7d0));
  return (uint)this;
}

/* ref: FUN_00ec7340 */
uint F_00ec7340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca530((undefined *)((int)this + -0x5cc),param_1);
  return uVar1;
}

/* ref: FUN_00ec7350 */
uint F_00ec7350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec7370 */
uint F_00ec7370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec73b0 */
uint F_00ec73b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec73b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x5c4) < param_1) {
    uVar4 = F_00ebaed0(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x5c0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x5bc) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x5bc) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x5c0));
    }
    iVar1 = *(int *)((int)this + 0x5c4);
    iVar2 = *(int *)((int)this + 0x5bc);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x5bc) = uVar4;
    *(uint *)((int)this + 0x5c4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec74a0 */
uint F_00ec74a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec74a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x5c0) == *(int *)((int)this + 0x5c4)) {
    F_00ec73b0(this,*(int *)((int)this + 0x5c4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x5bc) + *(int *)((int)this + 0x5c0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x5c0) = *(int *)((int)this + 0x5c0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec7530 */
uint F_00ec7530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec74a0((undefined *)((int)this + -0x5c8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec7560 */
uint F_00ec7560(unsigned int gen_a0)
{
  GEN_ENTER(0xec7560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb4700((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x2510) = 0;
  *(undefined4 *)((int)this + 0x2514) = 0;
  *(undefined4 *)((int)this + 0x2518) = 0xc4;
  uVar1 = F_00ebaf70((undefined *)((int)this + 4),0xc4,0);
  *(uint *)((int)this + 0x2510) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x251c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d7f8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x251c) = (*(undefined * PTR32 (*)[3])REFP(0x115d7e8));
  return (uint)this;
}

/* ref: FUN_00ec7600 */
uint F_00ec7600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca570((undefined *)((int)this + -0x251c),param_1);
  return uVar1;
}

/* ref: FUN_00ec7610 */
uint F_00ec7610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec7630 */
uint F_00ec7630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec7670 */
uint F_00ec7670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x2514) < param_1) {
    uVar4 = F_00ebaf70(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x2510) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x250c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x250c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x2510));
    }
    iVar1 = *(int *)((int)this + 0x2514);
    iVar2 = *(int *)((int)this + 0x250c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x250c) = uVar4;
    *(uint *)((int)this + 0x2514) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec7760 */
uint F_00ec7760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x2510) == *(int *)((int)this + 0x2514)) {
    F_00ec7670(this,*(int *)((int)this + 0x2514) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x250c) + *(int *)((int)this + 0x2510) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x2510) = *(int *)((int)this + 0x2510) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec77f0 */
uint F_00ec77f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec77f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec7760((undefined *)((int)this + -0x2518),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec7820 */
uint F_00ec7820(unsigned int gen_a0)
{
  GEN_ENTER(0xec7820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb48c0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0xc;
  uVar1 = F_00ebb010((undefined *)((int)this + 4),0xc,0);
  *(uint *)((int)this + 0x290) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x29c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d810));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x29c) = (*(undefined * PTR32 (*)[3])REFP(0x115d800));
  return (uint)this;
}

/* ref: FUN_00ec78c0 */
uint F_00ec78c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec78c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca5b0((undefined *)((int)this + -0x29c),param_1);
  return uVar1;
}

/* ref: FUN_00ec78d0 */
uint F_00ec78d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec78d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec78f0 */
uint F_00ec78f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec78f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec7930 */
uint F_00ec7930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x294) < param_1) {
    uVar4 = F_00ebb010(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x290) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x28c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x28c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x290));
    }
    iVar1 = *(int *)((int)this + 0x294);
    iVar2 = *(int *)((int)this + 0x28c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x28c) = uVar4;
    *(uint *)((int)this + 0x294) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec7a20 */
uint F_00ec7a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x290) == *(int *)((int)this + 0x294)) {
    F_00ec7930(this,*(int *)((int)this + 0x294) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28c) + *(int *)((int)this + 0x290) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x290) = *(int *)((int)this + 0x290) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec7ab0 */
uint F_00ec7ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec7a20((undefined *)((int)this + -0x298),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec7ae0 */
uint F_00ec7ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xec7ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb4a80((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  *(undefined4 *)((int)this + 0x418) = 0x14;
  uVar1 = F_00ebb0b0((undefined *)((int)this + 4),0x14,0);
  *(uint *)((int)this + 0x410) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x41c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d828));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x41c) = (*(undefined * PTR32 (*)[3])REFP(0x115d818));
  return (uint)this;
}

/* ref: FUN_00ec7b80 */
uint F_00ec7b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca5f0((undefined *)((int)this + -0x41c),param_1);
  return uVar1;
}

/* ref: FUN_00ec7b90 */
uint F_00ec7b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec7bb0 */
uint F_00ec7bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec7bf0 */
uint F_00ec7bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x414) < param_1) {
    uVar4 = F_00ebb0b0(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x410) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x40c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x40c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x410));
    }
    iVar1 = *(int *)((int)this + 0x414);
    iVar2 = *(int *)((int)this + 0x40c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x40c) = uVar4;
    *(uint *)((int)this + 0x414) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec7ce0 */
uint F_00ec7ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x410) == *(int *)((int)this + 0x414)) {
    F_00ec7bf0(this,*(int *)((int)this + 0x414) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40c) + *(int *)((int)this + 0x410) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x410) = *(int *)((int)this + 0x410) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec7d70 */
uint F_00ec7d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec7ce0((undefined *)((int)this + -0x418),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec7da0 */
uint F_00ec7da0(unsigned int gen_a0)
{
  GEN_ENTER(0xec7da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb4c40((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0x12;
  uVar1 = F_00ebb150((undefined *)((int)this + 4),0x12,0);
  *(uint *)((int)this + 0x3b0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3bc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d840));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3bc) = (*(undefined * PTR32 (*)[3])REFP(0x115d830));
  return (uint)this;
}

/* ref: FUN_00ec7e40 */
uint F_00ec7e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca630((undefined *)((int)this + -0x3bc),param_1);
  return uVar1;
}

/* ref: FUN_00ec7e50 */
uint F_00ec7e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec7e70 */
uint F_00ec7e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7e70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec7eb0 */
uint F_00ec7eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x3b4) < param_1) {
    uVar4 = F_00ebb150(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x3b0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x3ac) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x3ac) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x3b0));
    }
    iVar1 = *(int *)((int)this + 0x3b4);
    iVar2 = *(int *)((int)this + 0x3ac);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x3ac) = uVar4;
    *(uint *)((int)this + 0x3b4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec7fa0 */
uint F_00ec7fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x3b0) == *(int *)((int)this + 0x3b4)) {
    F_00ec7eb0(this,*(int *)((int)this + 0x3b4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3ac) + *(int *)((int)this + 0x3b0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x3b0) = *(int *)((int)this + 0x3b0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec8030 */
uint F_00ec8030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec7fa0((undefined *)((int)this + -0x3b8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec8060 */
uint F_00ec8060(unsigned int gen_a0)
{
  GEN_ENTER(0xec8060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb4e00((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0xe;
  uVar1 = F_00ebb1f0((undefined *)((int)this + 4),0xe,0);
  *(uint *)((int)this + 0x2f0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2fc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d858));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2fc) = (*(undefined * PTR32 (*)[3])REFP(0x115d848));
  return (uint)this;
}

/* ref: FUN_00ec8100 */
uint F_00ec8100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca670((undefined *)((int)this + -0x2fc),param_1);
  return uVar1;
}

/* ref: FUN_00ec8110 */
uint F_00ec8110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec8130 */
uint F_00ec8130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec8170 */
uint F_00ec8170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x2f4) < param_1) {
    uVar4 = F_00ebb1f0(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x2f0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x2ec) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x2ec) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x2f0));
    }
    iVar1 = *(int *)((int)this + 0x2f4);
    iVar2 = *(int *)((int)this + 0x2ec);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x2ec) = uVar4;
    *(uint *)((int)this + 0x2f4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8260 */
uint F_00ec8260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x2f0) == *(int *)((int)this + 0x2f4)) {
    F_00ec8170(this,*(int *)((int)this + 0x2f4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2ec) + *(int *)((int)this + 0x2f0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x2f0) = *(int *)((int)this + 0x2f0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec82f0 */
uint F_00ec82f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec82f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec8260((undefined *)((int)this + -0x2f8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec8320 */
uint F_00ec8320(unsigned int gen_a0)
{
  GEN_ENTER(0xec8320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb4fc0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0x16;
  uVar1 = F_00ebb290((undefined *)((int)this + 4),0x16,0);
  *(uint *)((int)this + 0x470) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x47c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d870));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x47c) = (*(undefined * PTR32 (*)[3])REFP(0x115d860));
  return (uint)this;
}

/* ref: FUN_00ec83c0 */
uint F_00ec83c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec83c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca6b0((undefined *)((int)this + -0x47c),param_1);
  return uVar1;
}

/* ref: FUN_00ec83d0 */
uint F_00ec83d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec83d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec83f0 */
uint F_00ec83f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec83f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec8430 */
uint F_00ec8430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x474) < param_1) {
    uVar4 = F_00ebb290(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x470) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x46c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x46c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x470));
    }
    iVar1 = *(int *)((int)this + 0x474);
    iVar2 = *(int *)((int)this + 0x46c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x46c) = uVar4;
    *(uint *)((int)this + 0x474) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8520 */
uint F_00ec8520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x470) == *(int *)((int)this + 0x474)) {
    F_00ec8430(this,*(int *)((int)this + 0x474) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x46c) + *(int *)((int)this + 0x470) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x470) = *(int *)((int)this + 0x470) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec85b0 */
uint F_00ec85b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec85b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec8520((undefined *)((int)this + -0x478),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec85e0 */
uint F_00ec85e0(unsigned int gen_a0)
{
  GEN_ENTER(0xec85e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb5180((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x7a0) = 0;
  *(undefined4 *)((int)this + 0x7a4) = 0;
  *(undefined4 *)((int)this + 0x7a8) = 0x27;
  uVar1 = F_00ebb330((undefined *)((int)this + 4),0x27,0);
  *(uint *)((int)this + 0x7a0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7ac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d888));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7ac) = (*(undefined * PTR32 (*)[3])REFP(0x115d878));
  return (uint)this;
}

/* ref: FUN_00ec8680 */
uint F_00ec8680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca6f0((undefined *)((int)this + -0x7ac),param_1);
  return uVar1;
}

/* ref: FUN_00ec8690 */
uint F_00ec8690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec86b0 */
uint F_00ec86b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec86b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec86f0 */
uint F_00ec86f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec86f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x7a4) < param_1) {
    uVar4 = F_00ebb330(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x7a0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x79c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x79c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x7a0));
    }
    iVar1 = *(int *)((int)this + 0x7a4);
    iVar2 = *(int *)((int)this + 0x79c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x79c) = uVar4;
    *(uint *)((int)this + 0x7a4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec87e0 */
uint F_00ec87e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec87e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x7a0) == *(int *)((int)this + 0x7a4)) {
    F_00ec86f0(this,*(int *)((int)this + 0x7a4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x79c) + *(int *)((int)this + 0x7a0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x7a0) = *(int *)((int)this + 0x7a0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec8870 */
uint F_00ec8870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec87e0((undefined *)((int)this + -0x7a8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec88a0 */
uint F_00ec88a0(unsigned int gen_a0)
{
  GEN_ENTER(0xec88a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb5340((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x4a0) = 0;
  *(undefined4 *)((int)this + 0x4a4) = 0;
  *(undefined4 *)((int)this + 0x4a8) = 0x17;
  uVar1 = F_00ebb3d0((undefined *)((int)this + 4),0x17,0);
  *(uint *)((int)this + 0x4a0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4ac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4ac) = (*(undefined * PTR32 (*)[3])REFP(0x115d890));
  return (uint)this;
}

/* ref: FUN_00ec8940 */
uint F_00ec8940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca730((undefined *)((int)this + -0x4ac),param_1);
  return uVar1;
}

/* ref: FUN_00ec8950 */
uint F_00ec8950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec8970 */
uint F_00ec8970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec89b0 */
uint F_00ec89b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec89b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x4a4) < param_1) {
    uVar4 = F_00ebb3d0(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x4a0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x49c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x49c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x4a0));
    }
    iVar1 = *(int *)((int)this + 0x4a4);
    iVar2 = *(int *)((int)this + 0x49c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x49c) = uVar4;
    *(uint *)((int)this + 0x4a4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8aa0 */
uint F_00ec8aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x4a0) == *(int *)((int)this + 0x4a4)) {
    F_00ec89b0(this,*(int *)((int)this + 0x4a4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x49c) + *(int *)((int)this + 0x4a0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x4a0) = *(int *)((int)this + 0x4a0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec8b30 */
uint F_00ec8b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec8aa0((undefined *)((int)this + -0x4a8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec8b60 */
uint F_00ec8b60(unsigned int gen_a0)
{
  GEN_ENTER(0xec8b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb5500((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0xaa0) = 0;
  *(undefined4 *)((int)this + 0xaa4) = 0;
  *(undefined4 *)((int)this + 0xaa8) = 0x37;
  uVar1 = F_00ebb470((undefined *)((int)this + 4),0x37,0);
  *(uint *)((int)this + 0xaa0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xaac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8b8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xaac) = (*(undefined * PTR32 (*)[3])REFP(0x115d8a8));
  return (uint)this;
}

/* ref: FUN_00ec8c00 */
uint F_00ec8c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca770((undefined *)((int)this + -0xaac),param_1);
  return uVar1;
}

/* ref: FUN_00ec8c10 */
uint F_00ec8c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec8c30 */
uint F_00ec8c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec8c70 */
uint F_00ec8c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0xaa4) < param_1) {
    uVar4 = F_00ebb470(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0xaa0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0xa9c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0xa9c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0xaa0));
    }
    iVar1 = *(int *)((int)this + 0xaa4);
    iVar2 = *(int *)((int)this + 0xa9c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0xa9c) = uVar4;
    *(uint *)((int)this + 0xaa4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8d60 */
uint F_00ec8d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xaa0) == *(int *)((int)this + 0xaa4)) {
    F_00ec8c70(this,*(int *)((int)this + 0xaa4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa9c) + *(int *)((int)this + 0xaa0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0xaa0) = *(int *)((int)this + 0xaa0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec8df0 */
uint F_00ec8df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec8d60((undefined *)((int)this + -0xaa8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec8e20 */
uint F_00ec8e20(unsigned int gen_a0)
{
  GEN_ENTER(0xec8e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb56c0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x890) = 0;
  *(undefined4 *)((int)this + 0x894) = 0;
  *(undefined4 *)((int)this + 0x898) = 0x2c;
  uVar1 = F_00ebb510((undefined *)((int)this + 4),0x2c,0);
  *(uint *)((int)this + 0x890) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x89c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8d0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x89c) = (*(undefined * PTR32 (*)[3])REFP(0x115d8c0));
  return (uint)this;
}

/* ref: FUN_00ec8ec0 */
uint F_00ec8ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca7b0((undefined *)((int)this + -0x89c),param_1);
  return uVar1;
}

/* ref: FUN_00ec8ed0 */
uint F_00ec8ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec8ef0 */
uint F_00ec8ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec8f30 */
uint F_00ec8f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x894) < param_1) {
    uVar4 = F_00ebb510(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x890) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x88c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x88c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x890));
    }
    iVar1 = *(int *)((int)this + 0x894);
    iVar2 = *(int *)((int)this + 0x88c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x88c) = uVar4;
    *(uint *)((int)this + 0x894) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec9020 */
uint F_00ec9020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x890) == *(int *)((int)this + 0x894)) {
    F_00ec8f30(this,*(int *)((int)this + 0x894) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x88c) + *(int *)((int)this + 0x890) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x890) = *(int *)((int)this + 0x890) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec90b0 */
uint F_00ec90b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec90b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec9020((undefined *)((int)this + -0x898),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec90e0 */
uint F_00ec90e0(unsigned int gen_a0)
{
  GEN_ENTER(0xec90e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb5880((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0xbc0) = 0;
  *(undefined4 *)((int)this + 0xbc4) = 0;
  *(undefined4 *)((int)this + 0xbc8) = 0x3d;
  uVar1 = F_00ebb5b0((undefined *)((int)this + 4),0x3d,0);
  *(uint *)((int)this + 0xbc0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbcc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8e8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbcc) = (*(undefined * PTR32 (*)[3])REFP(0x115d8d8));
  return (uint)this;
}

/* ref: FUN_00ec9180 */
uint F_00ec9180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca7f0((undefined *)((int)this + -0xbcc),param_1);
  return uVar1;
}

/* ref: FUN_00ec9190 */
uint F_00ec9190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec91b0 */
uint F_00ec91b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec91b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec91f0 */
uint F_00ec91f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec91f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0xbc4) < param_1) {
    uVar4 = F_00ebb5b0(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0xbc0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0xbbc) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0xbbc) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0xbc0));
    }
    iVar1 = *(int *)((int)this + 0xbc4);
    iVar2 = *(int *)((int)this + 0xbbc);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0xbbc) = uVar4;
    *(uint *)((int)this + 0xbc4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec92e0 */
uint F_00ec92e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec92e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xbc0) == *(int *)((int)this + 0xbc4)) {
    F_00ec91f0(this,*(int *)((int)this + 0xbc4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xbbc) + *(int *)((int)this + 0xbc0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0xbc0) = *(int *)((int)this + 0xbc0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9370 */
uint F_00ec9370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec92e0((undefined *)((int)this + -0xbc8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec93a0 */
uint F_00ec93a0(unsigned int gen_a0)
{
  GEN_ENTER(0xec93a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb5a40((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x328) = 0xf;
  uVar1 = F_00ebb650((undefined *)((int)this + 4),0xf,0);
  *(uint *)((int)this + 800) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x32c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d900));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x32c) = (*(undefined * PTR32 (*)[3])REFP(0x115d8f0));
  return (uint)this;
}

/* ref: FUN_00ec9440 */
uint F_00ec9440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca830((undefined *)((int)this + -0x32c),param_1);
  return uVar1;
}

/* ref: FUN_00ec9450 */
uint F_00ec9450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec9470 */
uint F_00ec9470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec94b0 */
uint F_00ec94b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec94b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x324) < param_1) {
    uVar4 = F_00ebb650(this,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 800) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x31c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x31c) + (-0x10 - uVar4))));
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 800));
    }
    iVar1 = *(int *)((int)this + 0x324);
    iVar2 = *(int *)((int)this + 0x31c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x31c) = uVar4;
    *(uint *)((int)this + 0x324) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec95a0 */
uint F_00ec95a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec95a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 800) == *(int *)((int)this + 0x324)) {
    F_00ec94b0(this,*(int *)((int)this + 0x324) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x31c) + *(int *)((int)this + 800) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 800) = *(int *)((int)this + 800) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9630 */
uint F_00ec9630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec95a0((undefined *)((int)this + -0x328),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec9660 */
uint F_00ec9660(unsigned int gen_a0)
{
  GEN_ENTER(0xec9660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb5c00((undefined *)((int)this + 8));
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0x12;
  uVar1 = F_00ebb6f0((undefined *)((int)this + 8),0x12,0);
  *(uint *)((int)this + 0x294) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5fc));
  return (uint)this;
}

/* ref: FUN_00ec96b0 */
uint F_00ec96b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec96b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x28c) + param_2 * 4;
}

/* ref: FUN_00ec96f0 */
uint F_00ec96f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec96f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf2 */
uint F_00ec9710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + 0x298);
  if (*(int *)((int)this + 0x298) != 0) {
    return *(uint *)((int)this + 0x294);
  }
  return 0;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf4 */
uint F_00ec9740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x298) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x294) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x294) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x298));
  }
  return 0;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf3 */
uint F_00ec97a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec97a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x298) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x294) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x294) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x298));
  }
  return 0;
}

/* ref: FUN_00ec9800 */
uint F_00ec9800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*(uint *)((int)this + 0x294) < param_1) {
    puVar4 = (undefined4 *)F_00ebb6f0(this,param_1,0);
    uVar5 = 0;
    puVar6 = puVar4;
    if (*(int *)((int)this + 0x290) != 0) {
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28c) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *(uint *)((int)this + 0x290));
    }
    iVar1 = *(int *)((int)this + 0x28c);
    iVar2 = *(int *)((int)this + 0x294);
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
    *(undefined4 * PTR32 *)((int)this + 0x28c) = puVar4;
    *(uint *)((int)this + 0x294) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec98a0 */
uint F_00ec98a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec98a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x290) == *(int *)((int)this + 0x294)) {
    F_00ec9800(this,*(int *)((int)this + 0x294) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28c) + *(int *)((int)this + 0x290) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x290) = *(int *)((int)this + 0x290) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec98f0 */
unsigned int F_00ec98f0(unsigned int gen_a0)
{
  GEN_ENTER(0xec98f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  F_00ec0110((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return 0;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf1 */
uint F_00ec9910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x298) == *(int *)((int)this + 0x29c)) {
    F_00ec9800((undefined *)((int)this + 8),*(int *)((int)this + 0x29c) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x294) + *(int *)((int)this + 0x298) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  *(int *)((int)this + 0x298) = *(int *)((int)this + 0x298) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9960 */
uint F_00ec9960(unsigned int gen_a0)
{
  GEN_ENTER(0xec9960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb5dd0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x9b0) = 0;
  *(undefined4 *)((int)this + 0x9b4) = 0;
  *(undefined4 *)((int)this + 0x9b8) = 0x32;
  uVar1 = F_00ebb790((undefined *)((int)this + 4),0x32,0);
  *(uint *)((int)this + 0x9b0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9bc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d930));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9bc) = (*(undefined * PTR32 (*)[3])REFP(0x115d920));
  return (uint)this;
}

/* ref: FUN_00ec9a00 */
uint F_00ec9a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca8a0((undefined *)((int)this + -0x9bc),param_1);
  return uVar1;
}

