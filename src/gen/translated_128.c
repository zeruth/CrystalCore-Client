#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00b32b90 */
uint F_00b32b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb32b90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27a8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c27a8) != (code *)0x0) && (REFG(int, 0x14c27ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27a8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c27a8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c27a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x70d404ec)));
      REFG(int, 0x14c27ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27a8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c27a8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x70d404ec,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x70d404ec,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b32cf0 */
uint F_00b32cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb32cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27b0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c27b0) != (code *)0x0) && (REFG(int, 0x14c27b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27b0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c27b0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c27b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4b708b54)));
      REFG(int, 0x14c27b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27b0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c27b0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4b708b54,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4b708b54,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b32e50 */
uint F_00b32e50(unsigned int gen_a0)
{
  GEN_ENTER(0xb32e50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27b8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c27b8) != (code *)0x0) && (REFG(int, 0x14c27bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27b8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c27b8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c27b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa064bdfc)));
      REFG(int, 0x14c27bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27b8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c27b8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa064bdfc,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa064bdfc,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b32fa0 */
uint F_00b32fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xb32fa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27c0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c27c0) != (code *)0x0) && (REFG(int, 0x14c27c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27c0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c27c0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c27c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbb2b17aa)));
      REFG(int, 0x14c27c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27c0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c27c0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbb2b17aa,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbb2b17aa,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b330f0 */
uint F_00b330f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb330f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27c8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c27c8) != (code *)0x0) && (REFG(int, 0x14c27cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27c8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c27c8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c27c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe5ceae41)));
      REFG(int, 0x14c27cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27c8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c27c8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe5ceae41,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe5ceae41,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b33250 */
uint F_00b33250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb33250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27d0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c27d0) != (code *)0x0) && (REFG(int, 0x14c27d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27d0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c27d0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c27d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x22de03aa)));
      REFG(int, 0x14c27d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27d0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c27d0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x22de03aa,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x22de03aa,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b333c0 */
uint F_00b333c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb333c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27d8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c27d8) != (code *)0x0) && (REFG(int, 0x14c27dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27d8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c27d8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c27d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x332d3942)));
      REFG(int, 0x14c27dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27d8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c27d8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x332d3942,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x332d3942,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b33530 */
uint F_00b33530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb33530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27e0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c27e0) != (code *)0x0) && (REFG(int, 0x14c27e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27e0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c27e0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c27e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfceac864)));
      REFG(int, 0x14c27e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27e0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c27e0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfceac864,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfceac864,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b33690 */
uint F_00b33690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb33690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27e8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c27e8) != (code *)0x0) && (REFG(int, 0x14c27ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27e8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c27e8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c27e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6c0ed98c)));
      REFG(int, 0x14c27ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27e8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c27e8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6c0ed98c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6c0ed98c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b33800 */
uint F_00b33800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb33800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27f0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c27f0) != (code *)0x0) && (REFG(int, 0x14c27f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27f0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c27f0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c27f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x91123d6a)));
      REFG(int, 0x14c27f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27f0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c27f0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x91123d6a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x91123d6a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b33960 */
uint F_00b33960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb33960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27f8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c27f8) != (code *)0x0) && (REFG(int, 0x14c27fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27f8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c27f8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c27f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x37e7191c)));
      REFG(int, 0x14c27fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27f8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c27f8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x37e7191c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x37e7191c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b33ac0 */
uint F_00b33ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb33ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2800) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2800) != (code *)0x0) && (REFG(int, 0x14c2804) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2800) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2800) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2800) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5d19bca4)));
      REFG(int, 0x14c2804) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2800) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2800);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5d19bca4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5d19bca4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b33c20 */
uint F_00b33c20(unsigned int gen_a0)
{
  GEN_ENTER(0xb33c20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2808) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2808) != (code *)0x0) && (REFG(int, 0x14c280c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2808) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2808) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2808) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc8ff7258)));
      REFG(int, 0x14c280c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2808) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2808);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc8ff7258,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc8ff7258,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b33d70 */
uint F_00b33d70(unsigned int gen_a0)
{
  GEN_ENTER(0xb33d70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2810) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2810) != (code *)0x0) && (REFG(int, 0x14c2814) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2810) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2810) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2810) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe5a9aae0)));
      REFG(int, 0x14c2814) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2810) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2810);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe5a9aae0,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe5a9aae0,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b33ec0 */
uint F_00b33ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xb33ec0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2818) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2818) != (code *)0x0) && (REFG(int, 0x14c281c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2818) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2818) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2818) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2ac084fa)));
      REFG(int, 0x14c281c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2818) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2818);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2ac084fa,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2ac084fa,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34010 */
uint F_00b34010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb34010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2820) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2820) != (code *)0x0) && (REFG(int, 0x14c2824) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2820) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2820) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2820) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf8b53c69)));
      REFG(int, 0x14c2824) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2820) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2820);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf8b53c69,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf8b53c69,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34170 */
uint F_00b34170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb34170u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2828) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2828) != (code *)0x0) && (REFG(int, 0x14c282c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2828) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2828) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2828) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf2a54796)));
      REFG(int, 0x14c282c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2828) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2828);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf2a54796,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf2a54796,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b342d0 */
uint F_00b342d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb342d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2830) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2830) != (code *)0x0) && (REFG(int, 0x14c2834) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2830) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2830) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2830) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4aceeaf7)));
      REFG(int, 0x14c2834) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2830) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2830);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4aceeaf7,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4aceeaf7,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34430 */
uint F_00b34430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb34430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2838) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2838) != (code *)0x0) && (REFG(int, 0x14c283c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2838) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2838) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2838) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd44d3c4e)));
      REFG(int, 0x14c283c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2838) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2838);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd44d3c4e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd44d3c4e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34590 */
uint F_00b34590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb34590u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2840) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2840) != (code *)0x0) && (REFG(int, 0x14c2844) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2840) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2840) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2840) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa342f682)));
      REFG(int, 0x14c2844) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2840) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2840);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa342f682,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa342f682,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b346f0 */
uint F_00b346f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb346f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2848) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2848) != (code *)0x0) && (REFG(int, 0x14c284c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2848) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2848) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2848) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x667c2929)));
      REFG(int, 0x14c284c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2848) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2848);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x667c2929,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x667c2929,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34840 */
uint F_00b34840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb34840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2850) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2850) != (code *)0x0) && (REFG(int, 0x14c2854) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2850) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2850) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2850) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x71329df3)));
      REFG(int, 0x14c2854) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2850) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2850);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x71329df3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x71329df3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b349b0 */
uint F_00b349b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb349b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2858) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2858) != (code *)0x0) && (REFG(int, 0x14c285c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2858) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2858) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2858) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x73e0019a)));
      REFG(int, 0x14c285c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2858) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2858);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x73e0019a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x73e0019a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34b00 */
uint F_00b34b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb34b00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2860) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2860) != (code *)0x0) && (REFG(int, 0x14c2864) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2860) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2860) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2860) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc23df926)));
      REFG(int, 0x14c2864) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2860) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2860);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc23df926,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc23df926,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34c60 */
uint F_00b34c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb34c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2868) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2868) != (code *)0x0) && (REFG(int, 0x14c286c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2868) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2868) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2868) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf7ff00c1)));
      REFG(int, 0x14c286c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2868) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2868);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf7ff00c1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf7ff00c1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34dc0 */
uint F_00b34dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb34dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2870) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2870) != (code *)0x0) && (REFG(int, 0x14c2874) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2870) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2870) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2870) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfc31236c)));
      REFG(int, 0x14c2874) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2870) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2870);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfc31236c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfc31236c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34f20 */
uint F_00b34f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb34f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2878) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2878) != (code *)0x0) && (REFG(int, 0x14c287c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2878) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2878) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2878) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd2f6c499)));
      REFG(int, 0x14c287c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2878) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2878);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd2f6c499,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd2f6c499,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35080 */
uint F_00b35080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb35080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2880) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2880) != (code *)0x0) && (REFG(int, 0x14c2884) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2880) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2880) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2880) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfcb16330)));
      REFG(int, 0x14c2884) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2880) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2880);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfcb16330,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfcb16330,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b351e0 */
uint F_00b351e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb351e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2888) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2888) != (code *)0x0) && (REFG(int, 0x14c288c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2888) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2888) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2888) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x157e45c4)));
      REFG(int, 0x14c288c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2888) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2888);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x157e45c4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x157e45c4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35600 */
uint F_00b35600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb35600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28a0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c28a0) != (code *)0x0) && (REFG(int, 0x14c28a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28a0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c28a0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c28a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x13199b3d)));
      REFG(int, 0x14c28a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28a0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c28a0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x13199b3d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x13199b3d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35760 */
uint F_00b35760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb35760u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28a8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c28a8) != (code *)0x0) && (REFG(int, 0x14c28ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28a8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c28a8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c28a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf2dd3f2)));
      REFG(int, 0x14c28ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28a8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c28a8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf2dd3f2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf2dd3f2,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b358c0 */
uint F_00b358c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb358c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28b0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c28b0) != (code *)0x0) && (REFG(int, 0x14c28b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28b0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c28b0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c28b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6800f5fc)));
      REFG(int, 0x14c28b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28b0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c28b0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6800f5fc,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6800f5fc,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35a20 */
uint F_00b35a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb35a20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28b8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c28b8) != (code *)0x0) && (REFG(int, 0x14c28bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28b8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c28b8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c28b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc7985ed5)));
      REFG(int, 0x14c28bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28b8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c28b8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc7985ed5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc7985ed5,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35b80 */
uint F_00b35b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb35b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28c0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c28c0) != (code *)0x0) && (REFG(int, 0x14c28c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28c0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c28c0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c28c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x80c9fd3b)));
      REFG(int, 0x14c28c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28c0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c28c0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x80c9fd3b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x80c9fd3b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35ce0 */
uint F_00b35ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb35ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28c8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c28c8) != (code *)0x0) && (REFG(int, 0x14c28cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28c8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c28c8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c28c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6d6fdad4)));
      REFG(int, 0x14c28cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28c8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c28c8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6d6fdad4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6d6fdad4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35e40 */
uint F_00b35e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb35e40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28d0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c28d0) != (code *)0x0) && (REFG(int, 0x14c28d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28d0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c28d0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c28d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x754033f0)));
      REFG(int, 0x14c28d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28d0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c28d0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x754033f0,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x754033f0,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35fa0 */
uint F_00b35fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb35fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28d8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c28d8) != (code *)0x0) && (REFG(int, 0x14c28dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28d8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c28d8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c28d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcde4a28a)));
      REFG(int, 0x14c28dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28d8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c28d8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcde4a28a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcde4a28a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36100 */
uint F_00b36100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb36100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28e0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c28e0) != (code *)0x0) && (REFG(int, 0x14c28e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28e0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c28e0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c28e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2ab714ab)));
      REFG(int, 0x14c28e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28e0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c28e0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2ab714ab,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2ab714ab,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36260 */
uint F_00b36260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb36260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28e8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c28e8) != (code *)0x0) && (REFG(int, 0x14c28ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28e8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c28e8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c28e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdbc803ec)));
      REFG(int, 0x14c28ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28e8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c28e8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdbc803ec,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdbc803ec,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b363c0 */
uint F_00b363c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb363c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28f0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c28f0) != (code *)0x0) && (REFG(int, 0x14c28f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28f0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c28f0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c28f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x12ee68f2)));
      REFG(int, 0x14c28f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28f0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c28f0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x12ee68f2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x12ee68f2,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36520 */
uint F_00b36520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb36520u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28f8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c28f8) != (code *)0x0) && (REFG(int, 0x14c28fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28f8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c28f8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c28f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x18cdf365)));
      REFG(int, 0x14c28fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28f8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c28f8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x18cdf365,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x18cdf365,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36680 */
uint F_00b36680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb36680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2900) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2900) != (code *)0x0) && (REFG(int, 0x14c2904) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2900) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2900) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2900) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd00b8317)));
      REFG(int, 0x14c2904) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2900) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2900);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd00b8317,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd00b8317,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b367e0 */
uint F_00b367e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb367e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2908) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2908) != (code *)0x0) && (REFG(int, 0x14c290c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2908) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2908) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2908) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3d7a86bb)));
      REFG(int, 0x14c290c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2908) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2908);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3d7a86bb,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3d7a86bb,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36940 */
uint F_00b36940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb36940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2910) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2910) != (code *)0x0) && (REFG(int, 0x14c2914) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2910) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2910) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2910) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x22cad61)));
      REFG(int, 0x14c2914) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2910) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2910);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x22cad61,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x22cad61,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36aa0 */
uint F_00b36aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb36aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2918) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2918) != (code *)0x0) && (REFG(int, 0x14c291c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2918) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2918) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2918) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb380f218)));
      REFG(int, 0x14c291c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2918) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2918);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb380f218,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb380f218,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36c00 */
uint F_00b36c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb36c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2920) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2920) != (code *)0x0) && (REFG(int, 0x14c2924) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2920) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2920) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2920) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfc5a155b)));
      REFG(int, 0x14c2924) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2920) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2920);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfc5a155b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfc5a155b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36d60 */
uint F_00b36d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb36d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2928) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2928) != (code *)0x0) && (REFG(int, 0x14c292c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2928) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2928) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2928) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x72b19155)));
      REFG(int, 0x14c292c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2928) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2928);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x72b19155,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x72b19155,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36ec0 */
uint F_00b36ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xb36ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2930) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2930) != (code *)0x0) && (REFG(int, 0x14c2934) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2930) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2930) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2930) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd5e13573)));
      REFG(int, 0x14c2934) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2930) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2930);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd5e13573,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd5e13573,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37030 */
uint F_00b37030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb37030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2938) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2938) != (code *)0x0) && (REFG(int, 0x14c293c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2938) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2938) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2938) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x13c7112e)));
      REFG(int, 0x14c293c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2938) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2938);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x13c7112e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x13c7112e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37190 */
uint F_00b37190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb37190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2940) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2940) != (code *)0x0) && (REFG(int, 0x14c2944) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2940) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2940) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2940) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf7029c5)));
      REFG(int, 0x14c2944) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2940) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2940);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf7029c5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf7029c5,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b372f0 */
uint F_00b372f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb372f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2948) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2948) != (code *)0x0) && (REFG(int, 0x14c294c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2948) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2948) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2948) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x84c9d553)));
      REFG(int, 0x14c294c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2948) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2948);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x84c9d553,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x84c9d553,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37440 */
uint F_00b37440(unsigned int gen_a0)
{
  GEN_ENTER(0xb37440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2950) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2950) != (code *)0x0) && (REFG(int, 0x14c2954) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2950) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2950) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2950) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb476bf61)));
      REFG(int, 0x14c2954) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2950) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2950);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb476bf61,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb476bf61,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37590 */
uint F_00b37590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb37590u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2958) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2958) != (code *)0x0) && (REFG(int, 0x14c295c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2958) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2958) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2958) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x89ffd9a3)));
      REFG(int, 0x14c295c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2958) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2958);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x89ffd9a3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x89ffd9a3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b376f0 */
uint F_00b376f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb376f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2960) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2960) != (code *)0x0) && (REFG(int, 0x14c2964) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2960) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2960) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2960) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3111bed1)));
      REFG(int, 0x14c2964) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2960) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2960);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3111bed1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3111bed1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37840 */
uint F_00b37840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb37840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2968) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2968) != (code *)0x0) && (REFG(int, 0x14c296c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2968) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2968) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2968) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5cf7f862)));
      REFG(int, 0x14c296c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2968) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2968);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5cf7f862,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5cf7f862,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b379a0 */
uint F_00b379a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb379a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2970) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2970) != (code *)0x0) && (REFG(int, 0x14c2974) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2970) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2970) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2970) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb852f4db)));
      REFG(int, 0x14c2974) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2970) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2970);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb852f4db,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb852f4db,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37b00 */
uint F_00b37b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb37b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2978) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2978) != (code *)0x0) && (REFG(int, 0x14c297c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2978) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2978) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2978) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2bbda32e)));
      REFG(int, 0x14c297c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2978) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2978);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2bbda32e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2bbda32e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37c60 */
uint F_00b37c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb37c60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2980) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2980) != (code *)0x0) && (REFG(int, 0x14c2984) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2980) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2980) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2980) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5609b86a)));
      REFG(int, 0x14c2984) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2980) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2980);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5609b86a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5609b86a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37dc0 */
uint F_00b37dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb37dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2988) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2988) != (code *)0x0) && (REFG(int, 0x14c298c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2988) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2988) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2988) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3d596b93)));
      REFG(int, 0x14c298c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2988) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2988);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3d596b93,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3d596b93,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37f20 */
uint F_00b37f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb37f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2990) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2990) != (code *)0x0) && (REFG(int, 0x14c2994) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2990) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2990) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2990) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1e6634b3)));
      REFG(int, 0x14c2994) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2990) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2990);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1e6634b3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1e6634b3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38080 */
uint F_00b38080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb38080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2998) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2998) != (code *)0x0) && (REFG(int, 0x14c299c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2998) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2998) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2998) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7c20c5be)));
      REFG(int, 0x14c299c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2998) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2998);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7c20c5be,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7c20c5be,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b381f0 */
uint F_00b381f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb381f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29a0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c29a0) != (code *)0x0) && (REFG(int, 0x14c29a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29a0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c29a0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c29a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x905f5c27)));
      REFG(int, 0x14c29a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29a0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c29a0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x905f5c27,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x905f5c27,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38360 */
uint F_00b38360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb38360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29a8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c29a8) != (code *)0x0) && (REFG(int, 0x14c29ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29a8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c29a8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c29a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6317345c)));
      REFG(int, 0x14c29ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29a8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c29a8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6317345c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6317345c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b384d0 */
uint F_00b384d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb384d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29b0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c29b0) != (code *)0x0) && (REFG(int, 0x14c29b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29b0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c29b0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c29b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc182027e)));
      REFG(int, 0x14c29b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29b0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c29b0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc182027e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc182027e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38630 */
uint F_00b38630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb38630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29b8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c29b8) != (code *)0x0) && (REFG(int, 0x14c29bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29b8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c29b8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c29b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa4527bf8)));
      REFG(int, 0x14c29bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29b8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c29b8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa4527bf8,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa4527bf8,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38790 */
uint F_00b38790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb38790u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29c0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c29c0) != (code *)0x0) && (REFG(int, 0x14c29c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29c0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c29c0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c29c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbd4bc56f)));
      REFG(int, 0x14c29c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29c0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c29c0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbd4bc56f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbd4bc56f,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b388f0 */
uint F_00b388f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb388f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29c8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c29c8) != (code *)0x0) && (REFG(int, 0x14c29cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29c8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c29c8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c29c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1db7c52c)));
      REFG(int, 0x14c29cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29c8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c29c8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1db7c52c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1db7c52c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38a50 */
uint F_00b38a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb38a50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29d0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c29d0) != (code *)0x0) && (REFG(int, 0x14c29d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29d0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c29d0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c29d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x694bff4d)));
      REFG(int, 0x14c29d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29d0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c29d0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x694bff4d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x694bff4d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38bb0 */
uint F_00b38bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb38bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29d8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c29d8) != (code *)0x0) && (REFG(int, 0x14c29dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29d8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c29d8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c29d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbfdc062c)));
      REFG(int, 0x14c29dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29d8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c29d8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbfdc062c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbfdc062c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38d10 */
uint F_00b38d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb38d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29e0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c29e0) != (code *)0x0) && (REFG(int, 0x14c29e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29e0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c29e0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c29e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xddf5643c)));
      REFG(int, 0x14c29e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29e0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c29e0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xddf5643c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xddf5643c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38e70 */
uint F_00b38e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb38e70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29e8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c29e8) != (code *)0x0) && (REFG(int, 0x14c29ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29e8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c29e8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c29e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9d2509ef)));
      REFG(int, 0x14c29ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29e8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c29e8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9d2509ef,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9d2509ef,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38fd0 */
uint F_00b38fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb38fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29f0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c29f0) != (code *)0x0) && (REFG(int, 0x14c29f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29f0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c29f0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c29f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x962b8af6)));
      REFG(int, 0x14c29f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29f0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c29f0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x962b8af6,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x962b8af6,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39130 */
uint F_00b39130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb39130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29f8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c29f8) != (code *)0x0) && (REFG(int, 0x14c29fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29f8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c29f8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c29f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x492a6954)));
      REFG(int, 0x14c29fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29f8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c29f8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x492a6954,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x492a6954,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39290 */
uint F_00b39290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb39290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a00) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a00) != (code *)0x0) && (REFG(int, 0x14c2a04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a00) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a00) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xaeaecd41)));
      REFG(int, 0x14c2a04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a00) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a00);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xaeaecd41,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xaeaecd41,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39400 */
uint F_00b39400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xb39400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a08) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a08) != (code *)0x0) && (REFG(int, 0x14c2a0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a08) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a08) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb3827c8)));
      REFG(int, 0x14c2a0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a08) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a08);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb3827c8,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb3827c8,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39580 */
uint F_00b39580(unsigned int gen_a0)
{
  GEN_ENTER(0xb39580u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a10) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a10) != (code *)0x0) && (REFG(int, 0x14c2a14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a10) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a10) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbd3eb475)));
      REFG(int, 0x14c2a14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a10) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a10);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbd3eb475,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbd3eb475,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b396d0 */
uint F_00b396d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb396d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a18) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a18) != (code *)0x0) && (REFG(int, 0x14c2a1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a18) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a18) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x55255d05)));
      REFG(int, 0x14c2a1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a18) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a18);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x55255d05,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x55255d05,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39830 */
uint F_00b39830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb39830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a20) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a20) != (code *)0x0) && (REFG(int, 0x14c2a24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a20) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a20) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd504dda7)));
      REFG(int, 0x14c2a24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a20) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a20);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd504dda7,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd504dda7,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39990 */
uint F_00b39990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb39990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a28) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a28) != (code *)0x0) && (REFG(int, 0x14c2a2c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a28) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a28) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a28) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xab7c2dc)));
      REFG(int, 0x14c2a2c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a28) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a28);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xab7c2dc,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xab7c2dc,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39b00 */
uint F_00b39b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb39b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a30) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a30) != (code *)0x0) && (REFG(int, 0x14c2a34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a30) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a30) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcfc92c15)));
      REFG(int, 0x14c2a34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a30) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a30);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcfc92c15,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcfc92c15,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39c70 */
uint F_00b39c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb39c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a38) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a38) != (code *)0x0) && (REFG(int, 0x14c2a3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a38) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a38) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5fe72f64)));
      REFG(int, 0x14c2a3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a38) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a38);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5fe72f64,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5fe72f64,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39dd0 */
uint F_00b39dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb39dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a40) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a40) != (code *)0x0) && (REFG(int, 0x14c2a44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a40) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a40) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8aac133d)));
      REFG(int, 0x14c2a44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a40) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a40);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8aac133d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8aac133d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39f30 */
uint F_00b39f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb39f30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a48) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a48) != (code *)0x0) && (REFG(int, 0x14c2a4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a48) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a48) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x73eb9329)));
      REFG(int, 0x14c2a4c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a48) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a48);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x73eb9329,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x73eb9329,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3a090 */
uint F_00b3a090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3a090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a50) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a50) != (code *)0x0) && (REFG(int, 0x14c2a54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a50) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a50) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xae9c2019)));
      REFG(int, 0x14c2a54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a50) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a50);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xae9c2019,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xae9c2019,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3a1f0 */
uint F_00b3a1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3a1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a58) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a58) != (code *)0x0) && (REFG(int, 0x14c2a5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a58) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a58) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcac3ce5d)));
      REFG(int, 0x14c2a5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a58) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a58);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcac3ce5d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcac3ce5d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3a350 */
uint F_00b3a350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3a350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a60) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a60) != (code *)0x0) && (REFG(int, 0x14c2a64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a60) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a60) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x35233210)));
      REFG(int, 0x14c2a64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a60) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a60);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x35233210,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x35233210,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3a4b0 */
uint F_00b3a4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb3a4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a68) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a68) != (code *)0x0) && (REFG(int, 0x14c2a6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a68) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a68) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xef303a9d)));
      REFG(int, 0x14c2a6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a68) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a68);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xef303a9d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xef303a9d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3a610 */
uint F_00b3a610(unsigned int gen_a0)
{
  GEN_ENTER(0xb3a610u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a70) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a70) != (code *)0x0) && (REFG(int, 0x14c2a74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a70) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a70) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe9c5853)));
      REFG(int, 0x14c2a74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a70) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a70);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe9c5853,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe9c5853,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3a760 */
uint F_00b3a760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb3a760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a78) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a78) != (code *)0x0) && (REFG(int, 0x14c2a7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a78) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a78) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4eadf5d2)));
      REFG(int, 0x14c2a7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a78) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a78);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4eadf5d2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4eadf5d2,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3a8c0 */
uint F_00b3a8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xb3a8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a80) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a80) != (code *)0x0) && (REFG(int, 0x14c2a84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a80) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a80) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2de11d61)));
      REFG(int, 0x14c2a84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a80) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a80);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2de11d61,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2de11d61,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3aa30 */
uint F_00b3aa30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xb3aa30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a88) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a88) != (code *)0x0) && (REFG(int, 0x14c2a8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a88) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a88) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5b803daf)));
      REFG(int, 0x14c2a8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a88) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a88);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5b803daf,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5b803daf,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3abb0 */
uint F_00b3abb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xb3abb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a90) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a90) != (code *)0x0) && (REFG(int, 0x14c2a94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a90) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a90) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6a16d3a0)));
      REFG(int, 0x14c2a94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a90) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a90);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6a16d3a0,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6a16d3a0,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3ad30 */
uint F_00b3ad30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0xb3ad30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a98) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2a98) != (code *)0x0) && (REFG(int, 0x14c2a9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a98) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2a98) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2a98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbb939ee5)));
      REFG(int, 0x14c2a9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a98) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2a98);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbb939ee5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_13);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbb939ee5,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3aec0 */
uint F_00b3aec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb3aec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2aa0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2aa0) != (code *)0x0) && (REFG(int, 0x14c2aa4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2aa0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2aa0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2aa0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(
                                            "5_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3079_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3080_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3081_LEGACYRETAINERCHARACTERI\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3082_CHARACTERID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3083_ITEMID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3084_STACK\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3085_CATALOGID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3086_TYPE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3087_REFINE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3088_MATERIA_0\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3089_MATERIA_1\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3090_MATERIA_2\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3091_MATERIA_3\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3092_MATERIA_4\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3093_STAIN\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3094_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3095_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_..." 
                                            )));
      REFG(int, 0x14c2aa4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2aa0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2aa0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))("5_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3079_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3080_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3081_LEGACYRETAINERCHARACTERI\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3082_CHARACTERID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3083_ITEMID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3084_STACK\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3085_CATALOGID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3086_TYPE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3087_REFINE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3088_MATERIA_0\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3089_MATERIA_1\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3090_MATERIA_2\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3091_MATERIA_3\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3092_MATERIA_4\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3093_STAIN\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3094_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3095_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_..." 
                        ,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))("5_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3079_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3080_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3081_LEGACYRETAINERCHARACTERI\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3082_CHARACTERID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3083_ITEMID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3084_STACK\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3085_CATALOGID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3086_TYPE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3087_REFINE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3088_MATERIA_0\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3089_MATERIA_1\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3090_MATERIA_2\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3091_MATERIA_3\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3092_MATERIA_4\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3093_STAIN\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3094_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3095_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_..." 
                        ,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b020 */
uint F_00b3b020(unsigned int gen_a0)
{
  GEN_ENTER(0xb3b020u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2aa8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2aa8) != (code *)0x0) && (REFG(int, 0x14c2aac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2aa8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2aa8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2aa8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8ffb8e26)));
      REFG(int, 0x14c2aac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2aa8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2aa8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8ffb8e26,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8ffb8e26,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b170 */
uint F_00b3b170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb3b170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ab0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ab0) != (code *)0x0) && (REFG(int, 0x14c2ab4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ab0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ab0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ab0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7aaf7a04)));
      REFG(int, 0x14c2ab4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ab0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ab0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7aaf7a04,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7aaf7a04,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b430 */
uint F_00b3b430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb3b430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ac0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ac0) != (code *)0x0) && (REFG(int, 0x14c2ac4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ac0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ac0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ac0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5650beb)));
      REFG(int, 0x14c2ac4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ac0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ac0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5650beb,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5650beb,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b5a0 */
uint F_00b3b5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3b5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ac8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ac8) != (code *)0x0) && (REFG(int, 0x14c2acc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ac8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ac8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ac8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9083e53a)));
      REFG(int, 0x14c2acc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ac8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ac8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9083e53a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9083e53a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b700 */
uint F_00b3b700(unsigned int gen_a0)
{
  GEN_ENTER(0xb3b700u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ad0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ad0) != (code *)0x0) && (REFG(int, 0x14c2ad4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ad0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ad0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ad0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfa6a0675)));
      REFG(int, 0x14c2ad4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ad0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ad0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfa6a0675,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfa6a0675,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b850 */
uint F_00b3b850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb3b850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ad8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ad8) != (code *)0x0) && (REFG(int, 0x14c2adc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ad8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ad8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ad8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5995410d)));
      REFG(int, 0x14c2adc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ad8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ad8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5995410d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5995410d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b9b0 */
uint F_00b3b9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb3b9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ae0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ae0) != (code *)0x0) && (REFG(int, 0x14c2ae4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ae0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ae0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ae0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xeba4d232)));
      REFG(int, 0x14c2ae4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ae0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ae0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xeba4d232,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xeba4d232,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3bb10 */
uint F_00b3bb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb3bb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ae8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ae8) != (code *)0x0) && (REFG(int, 0x14c2aec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ae8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ae8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ae8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7d44bb54)));
      REFG(int, 0x14c2aec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ae8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ae8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7d44bb54,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7d44bb54,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3bc70 */
uint F_00b3bc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb3bc70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2af0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2af0) != (code *)0x0) && (REFG(int, 0x14c2af4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2af0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2af0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2af0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9c39c246)));
      REFG(int, 0x14c2af4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2af0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2af0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9c39c246,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9c39c246,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3bdd0 */
uint F_00b3bdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3bdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2af8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2af8) != (code *)0x0) && (REFG(int, 0x14c2afc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2af8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2af8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2af8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5526cfd1)));
      REFG(int, 0x14c2afc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2af8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2af8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5526cfd1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5526cfd1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3bf30 */
uint F_00b3bf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb3bf30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b00) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b00) != (code *)0x0) && (REFG(int, 0x14c2b04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b00) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b00) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3b845a1)));
      REFG(int, 0x14c2b04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b00) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b00);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3b845a1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3b845a1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3c090 */
uint F_00b3c090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3c090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b08) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b08) != (code *)0x0) && (REFG(int, 0x14c2b0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b08) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b08) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9152e055)));
      REFG(int, 0x14c2b0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b08) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b08);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9152e055,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9152e055,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3c1f0 */
uint F_00b3c1f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb3c1f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b10) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b10) != (code *)0x0) && (REFG(int, 0x14c2b14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b10) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b10) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfbbb031a)));
      REFG(int, 0x14c2b14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b10) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b10);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfbbb031a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfbbb031a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3c340 */
uint F_00b3c340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb3c340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b18) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b18) != (code *)0x0) && (REFG(int, 0x14c2b1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b18) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b18) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9bb9d68f)));
      REFG(int, 0x14c2b1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b18) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b18);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9bb9d68f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9bb9d68f,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3c4a0 */
uint F_00b3c4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb3c4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b20) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b20) != (code *)0x0) && (REFG(int, 0x14c2b24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b20) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b20) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x407f67aa)));
      REFG(int, 0x14c2b24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b20) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b20);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x407f67aa,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x407f67aa,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3c600 */
uint F_00b3c600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb3c600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b28) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b28) != (code *)0x0) && (REFG(int, 0x14c2b2c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b28) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b28) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b28) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x14610cd7)));
      REFG(int, 0x14c2b2c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b28) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b28);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x14610cd7,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x14610cd7,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3c760 */
uint F_00b3c760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb3c760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b30) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b30) != (code *)0x0) && (REFG(int, 0x14c2b34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b30) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b30) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9de8c729)));
      REFG(int, 0x14c2b34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b30) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b30);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9de8c729,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9de8c729,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3c8c0 */
uint F_00b3c8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb3c8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b38) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b38) != (code *)0x0) && (REFG(int, 0x14c2b3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b38) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b38) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x473f7828)));
      REFG(int, 0x14c2b3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b38) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b38);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x473f7828,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x473f7828,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3ca20 */
uint F_00b3ca20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb3ca20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b40) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b40) != (code *)0x0) && (REFG(int, 0x14c2b44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b40) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b40) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9fbae4eb)));
      REFG(int, 0x14c2b44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b40) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b40);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9fbae4eb,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9fbae4eb,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3cb90 */
uint F_00b3cb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb3cb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b48) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b48) != (code *)0x0) && (REFG(int, 0x14c2b4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b48) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b48) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb2e98ab8)));
      REFG(int, 0x14c2b4c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b48) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b48);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb2e98ab8,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb2e98ab8,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3cd00 */
uint F_00b3cd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb3cd00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b50) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b50) != (code *)0x0) && (REFG(int, 0x14c2b54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b50) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b50) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6126010d)));
      REFG(int, 0x14c2b54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b50) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b50);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6126010d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6126010d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3ce70 */
uint F_00b3ce70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3ce70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b58) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b58) != (code *)0x0) && (REFG(int, 0x14c2b5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b58) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b58) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1dc91303)));
      REFG(int, 0x14c2b5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b58) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b58);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1dc91303,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1dc91303,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3cfd0 */
uint F_00b3cfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb3cfd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b60) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b60) != (code *)0x0) && (REFG(int, 0x14c2b64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b60) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b60) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x44ee4841)));
      REFG(int, 0x14c2b64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b60) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b60);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x44ee4841,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x44ee4841,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3d130 */
uint F_00b3d130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3d130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b68) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b68) != (code *)0x0) && (REFG(int, 0x14c2b6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b68) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b68) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd01bd237)));
      REFG(int, 0x14c2b6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b68) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b68);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd01bd237,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd01bd237,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3d290 */
uint F_00b3d290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3d290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b70) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b70) != (code *)0x0) && (REFG(int, 0x14c2b74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b70) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b70) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe6ce4f1)));
      REFG(int, 0x14c2b74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b70) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b70);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe6ce4f1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe6ce4f1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3d3f0 */
uint F_00b3d3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3d3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b78) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b78) != (code *)0x0) && (REFG(int, 0x14c2b7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b78) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b78) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x118d48a3)));
      REFG(int, 0x14c2b7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b78) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b78);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x118d48a3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x118d48a3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3d550 */
uint F_00b3d550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3d550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b80) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b80) != (code *)0x0) && (REFG(int, 0x14c2b84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b80) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b80) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd34a789b)));
      REFG(int, 0x14c2b84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b80) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b80);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd34a789b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd34a789b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3d6b0 */
uint F_00b3d6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3d6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b88) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b88) != (code *)0x0) && (REFG(int, 0x14c2b8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b88) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b88) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe4eec07)));
      REFG(int, 0x14c2b8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b88) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b88);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe4eec07,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe4eec07,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3d810 */
uint F_00b3d810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3d810u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b90) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b90) != (code *)0x0) && (REFG(int, 0x14c2b94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b90) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b90) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa1ec8d74)));
      REFG(int, 0x14c2b94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b90) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b90);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa1ec8d74,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa1ec8d74,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3d970 */
uint F_00b3d970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3d970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b98) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2b98) != (code *)0x0) && (REFG(int, 0x14c2b9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b98) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2b98) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2b98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7b0d72a3)));
      REFG(int, 0x14c2b9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b98) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2b98);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7b0d72a3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7b0d72a3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3dad0 */
uint F_00b3dad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3dad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ba0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ba0) != (code *)0x0) && (REFG(int, 0x14c2ba4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ba0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ba0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ba0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x964bf452)));
      REFG(int, 0x14c2ba4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ba0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ba0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x964bf452,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x964bf452,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3dc30 */
uint F_00b3dc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3dc30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ba8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ba8) != (code *)0x0) && (REFG(int, 0x14c2bac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ba8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ba8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ba8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x51d53d06)));
      REFG(int, 0x14c2bac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ba8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ba8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x51d53d06,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x51d53d06,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3dd90 */
uint F_00b3dd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3dd90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bb0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2bb0) != (code *)0x0) && (REFG(int, 0x14c2bb4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bb0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2bb0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2bb0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2697a8d1)));
      REFG(int, 0x14c2bb4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bb0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2bb0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2697a8d1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2697a8d1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3def0 */
uint F_00b3def0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3def0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bb8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2bb8) != (code *)0x0) && (REFG(int, 0x14c2bbc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bb8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2bb8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2bb8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x462214a9)));
      REFG(int, 0x14c2bbc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bb8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2bb8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x462214a9,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x462214a9,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e050 */
uint F_00b3e050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3e050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bc0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2bc0) != (code *)0x0) && (REFG(int, 0x14c2bc4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bc0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2bc0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2bc0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb981d935)));
      REFG(int, 0x14c2bc4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bc0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2bc0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb981d935,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb981d935,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e1b0 */
uint F_00b3e1b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb3e1b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bc8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2bc8) != (code *)0x0) && (REFG(int, 0x14c2bcc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bc8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2bc8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2bc8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x96bd040e)));
      REFG(int, 0x14c2bcc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bc8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2bc8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x96bd040e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x96bd040e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e300 */
uint F_00b3e300(unsigned int gen_a0)
{
  GEN_ENTER(0xb3e300u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bd0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2bd0) != (code *)0x0) && (REFG(int, 0x14c2bd4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bd0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2bd0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2bd0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcde8e1a3)));
      REFG(int, 0x14c2bd4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bd0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2bd0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcde8e1a3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcde8e1a3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e450 */
uint F_00b3e450(unsigned int gen_a0)
{
  GEN_ENTER(0xb3e450u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bd8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2bd8) != (code *)0x0) && (REFG(int, 0x14c2bdc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bd8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2bd8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2bd8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6ba2a5d6)));
      REFG(int, 0x14c2bdc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bd8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2bd8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6ba2a5d6,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6ba2a5d6,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e5a0 */
uint F_00b3e5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb3e5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2be0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2be0) != (code *)0x0) && (REFG(int, 0x14c2be4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2be0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2be0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2be0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7bf0a94d)));
      REFG(int, 0x14c2be4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2be0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2be0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7bf0a94d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7bf0a94d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e700 */
uint F_00b3e700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3e700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2be8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2be8) != (code *)0x0) && (REFG(int, 0x14c2bec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2be8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2be8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2be8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfd7c5557)));
      REFG(int, 0x14c2bec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2be8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2be8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfd7c5557,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfd7c5557,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e860 */
uint F_00b3e860(unsigned int gen_a0)
{
  GEN_ENTER(0xb3e860u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bf0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2bf0) != (code *)0x0) && (REFG(int, 0x14c2bf4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bf0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2bf0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2bf0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x869534e2)));
      REFG(int, 0x14c2bf4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bf0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2bf0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x869534e2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x869534e2,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e9b0 */
uint F_00b3e9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb3e9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bf8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2bf8) != (code *)0x0) && (REFG(int, 0x14c2bfc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bf8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2bf8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2bf8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xead72fe4)));
      REFG(int, 0x14c2bfc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bf8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2bf8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xead72fe4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xead72fe4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3eb10 */
uint F_00b3eb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb3eb10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c00) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c00) != (code *)0x0) && (REFG(int, 0x14c2c04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c00) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c00) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x221fa8e8)));
      REFG(int, 0x14c2c04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c00) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c00);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x221fa8e8,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x221fa8e8,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3ec70 */
uint F_00b3ec70(unsigned int gen_a0)
{
  GEN_ENTER(0xb3ec70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c08) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c08) != (code *)0x0) && (REFG(int, 0x14c2c0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c08) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c08) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbe7692ec)));
      REFG(int, 0x14c2c0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c08) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c08);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbe7692ec,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbe7692ec,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3edc0 */
uint F_00b3edc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb3edc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c10) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c10) != (code *)0x0) && (REFG(int, 0x14c2c14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c10) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c10) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf117b834)));
      REFG(int, 0x14c2c14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c10) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c10);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf117b834,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf117b834,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3ef10 */
uint F_00b3ef10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb3ef10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c18) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c18) != (code *)0x0) && (REFG(int, 0x14c2c1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c18) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c18) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x24409f48)));
      REFG(int, 0x14c2c1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c18) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c18);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x24409f48,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x24409f48,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f070 */
uint F_00b3f070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3f070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c20) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c20) != (code *)0x0) && (REFG(int, 0x14c2c24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c20) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c20) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x49bceecf)));
      REFG(int, 0x14c2c24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c20) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c20);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x49bceecf,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x49bceecf,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f1d0 */
uint F_00b3f1d0(void)
{
  GEN_ENTER(0xb3f1d0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c28) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c28) != (code *)0x0) && (REFG(int, 0x14c2c2c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c28) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c28) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c28) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x239c4545)));
      REFG(int, 0x14c2c2c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c28) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c28);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x239c4545,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))();
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x239c4545,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f320 */
uint F_00b3f320(void)
{
  GEN_ENTER(0xb3f320u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c30) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c30) != (code *)0x0) && (REFG(int, 0x14c2c34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c30) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c30) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2ec50c2b)));
      REFG(int, 0x14c2c34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c30) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c30);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2ec50c2b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))();
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2ec50c2b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f470 */
uint F_00b3f470(unsigned int gen_a0)
{
  GEN_ENTER(0xb3f470u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c38) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c38) != (code *)0x0) && (REFG(int, 0x14c2c3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c38) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c38) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x348ff8e1)));
      REFG(int, 0x14c2c3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c38) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c38);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x348ff8e1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x348ff8e1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f5c0 */
uint F_00b3f5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3f5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c40) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c40) != (code *)0x0) && (REFG(int, 0x14c2c44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c40) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c40) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x296c434d)));
      REFG(int, 0x14c2c44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c40) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c40);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x296c434d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x296c434d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f720 */
uint F_00b3f720(unsigned int gen_a0)
{
  GEN_ENTER(0xb3f720u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c48) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c48) != (code *)0x0) && (REFG(int, 0x14c2c4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c48) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c48) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdfc063b7)));
      REFG(int, 0x14c2c4c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c48) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c48);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdfc063b7,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdfc063b7,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f870 */
uint F_00b3f870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3f870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c50) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c50) != (code *)0x0) && (REFG(int, 0x14c2c54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c50) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c50) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xac7e37f4)));
      REFG(int, 0x14c2c54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c50) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c50);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xac7e37f4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xac7e37f4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f9d0 */
uint F_00b3f9d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb3f9d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c58) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c58) != (code *)0x0) && (REFG(int, 0x14c2c5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c58) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c58) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3a153134)));
      REFG(int, 0x14c2c5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c58) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c58);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3a153134,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3a153134,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3fb20 */
uint F_00b3fb20(unsigned int gen_a0)
{
  GEN_ENTER(0xb3fb20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c60) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c60) != (code *)0x0) && (REFG(int, 0x14c2c64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c60) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c60) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf6a1ad68)));
      REFG(int, 0x14c2c64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c60) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c60);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf6a1ad68,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf6a1ad68,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3fc70 */
uint F_00b3fc70(unsigned int gen_a0)
{
  GEN_ENTER(0xb3fc70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c68) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c68) != (code *)0x0) && (REFG(int, 0x14c2c6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c68) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c68) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2d68de96)));
      REFG(int, 0x14c2c6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c68) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c68);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2d68de96,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2d68de96,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3fdc0 */
uint F_00b3fdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3fdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c70) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c70) != (code *)0x0) && (REFG(int, 0x14c2c74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c70) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c70) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1fb0bc30)));
      REFG(int, 0x14c2c74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c70) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c70);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1fb0bc30,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1fb0bc30,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3ff20 */
uint F_00b3ff20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb3ff20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c78) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c78) != (code *)0x0) && (REFG(int, 0x14c2c7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c78) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c78) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x451f2134)));
      REFG(int, 0x14c2c7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c78) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c78);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x451f2134,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x451f2134,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40080 */
uint F_00b40080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb40080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c80) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c80) != (code *)0x0) && (REFG(int, 0x14c2c84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c80) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c80) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5c069fa3)));
      REFG(int, 0x14c2c84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c80) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c80);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5c069fa3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5c069fa3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b401e0 */
uint F_00b401e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb401e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c88) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c88) != (code *)0x0) && (REFG(int, 0x14c2c8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c88) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c88) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xda044458)));
      REFG(int, 0x14c2c8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c88) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c88);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xda044458,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xda044458,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40330 */
uint F_00b40330(unsigned int gen_a0)
{
  GEN_ENTER(0xb40330u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c90) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c90) != (code *)0x0) && (REFG(int, 0x14c2c94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c90) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c90) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc9a8ecec)));
      REFG(int, 0x14c2c94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c90) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c90);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc9a8ecec,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc9a8ecec,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40480 */
uint F_00b40480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb40480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c98) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2c98) != (code *)0x0) && (REFG(int, 0x14c2c9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c98) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2c98) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2c98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4ab00934)));
      REFG(int, 0x14c2c9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c98) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2c98);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4ab00934,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4ab00934,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b405e0 */
uint F_00b405e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb405e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ca0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ca0) != (code *)0x0) && (REFG(int, 0x14c2ca4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ca0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ca0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ca0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3dd6b54b)));
      REFG(int, 0x14c2ca4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ca0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ca0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3dd6b54b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3dd6b54b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40740 */
uint F_00b40740(unsigned int gen_a0)
{
  GEN_ENTER(0xb40740u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ca8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ca8) != (code *)0x0) && (REFG(int, 0x14c2cac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ca8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ca8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ca8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4c87e317)));
      REFG(int, 0x14c2cac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ca8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ca8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4c87e317,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4c87e317,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40890 */
uint F_00b40890(unsigned int gen_a0)
{
  GEN_ENTER(0xb40890u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cb0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2cb0) != (code *)0x0) && (REFG(int, 0x14c2cb4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cb0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2cb0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2cb0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa17daabe)));
      REFG(int, 0x14c2cb4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cb0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2cb0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa17daabe,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa17daabe,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b409e0 */
uint F_00b409e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb409e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cb8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2cb8) != (code *)0x0) && (REFG(int, 0x14c2cbc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cb8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2cb8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2cb8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe6839b43)));
      REFG(int, 0x14c2cbc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cb8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2cb8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe6839b43,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe6839b43,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40b40 */
uint F_00b40b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb40b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cc0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2cc0) != (code *)0x0) && (REFG(int, 0x14c2cc4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cc0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2cc0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2cc0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7be27fa2)));
      REFG(int, 0x14c2cc4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cc0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2cc0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7be27fa2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7be27fa2,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40ca0 */
uint F_00b40ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb40ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cc8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2cc8) != (code *)0x0) && (REFG(int, 0x14c2ccc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cc8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2cc8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2cc8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x932cb140)));
      REFG(int, 0x14c2ccc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cc8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2cc8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x932cb140,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x932cb140,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40e00 */
uint F_00b40e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb40e00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cd0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2cd0) != (code *)0x0) && (REFG(int, 0x14c2cd4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cd0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2cd0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2cd0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc7177702)));
      REFG(int, 0x14c2cd4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cd0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2cd0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc7177702,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc7177702,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40f60 */
uint F_00b40f60(unsigned int gen_a0)
{
  GEN_ENTER(0xb40f60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cd8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2cd8) != (code *)0x0) && (REFG(int, 0x14c2cdc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cd8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2cd8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2cd8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd6c6cd2)));
      REFG(int, 0x14c2cdc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cd8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2cd8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd6c6cd2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd6c6cd2,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b410b0 */
uint F_00b410b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb410b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ce0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ce0) != (code *)0x0) && (REFG(int, 0x14c2ce4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ce0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ce0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ce0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8b7e99b5)));
      REFG(int, 0x14c2ce4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ce0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ce0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8b7e99b5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8b7e99b5,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41360 */
uint F_00b41360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb41360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cf0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2cf0) != (code *)0x0) && (REFG(int, 0x14c2cf4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cf0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2cf0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2cf0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6b9b409e)));
      REFG(int, 0x14c2cf4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cf0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2cf0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6b9b409e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6b9b409e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b414d0 */
uint F_00b414d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb414d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cf8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2cf8) != (code *)0x0) && (REFG(int, 0x14c2cfc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cf8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2cf8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2cf8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x96eea9f8)));
      REFG(int, 0x14c2cfc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cf8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2cf8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x96eea9f8,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x96eea9f8,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41630 */
uint F_00b41630(unsigned int gen_a0)
{
  GEN_ENTER(0xb41630u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d00) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d00) != (code *)0x0) && (REFG(int, 0x14c2d04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d00) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d00) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5e8f0bec)));
      REFG(int, 0x14c2d04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d00) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d00);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5e8f0bec,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5e8f0bec,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41780 */
uint F_00b41780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb41780u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d08) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d08) != (code *)0x0) && (REFG(int, 0x14c2d0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d08) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d08) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xce653127)));
      REFG(int, 0x14c2d0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d08) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d08);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xce653127,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xce653127,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b418e0 */
uint F_00b418e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb418e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d10) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d10) != (code *)0x0) && (REFG(int, 0x14c2d14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d10) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d10) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x40c8ed5e)));
      REFG(int, 0x14c2d14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d10) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d10);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x40c8ed5e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x40c8ed5e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41a30 */
uint F_00b41a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb41a30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d18) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d18) != (code *)0x0) && (REFG(int, 0x14c2d1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d18) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d18) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8c610bda)));
      REFG(int, 0x14c2d1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d18) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d18);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8c610bda,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8c610bda,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41b90 */
uint F_00b41b90(unsigned int gen_a0)
{
  GEN_ENTER(0xb41b90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d20) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d20) != (code *)0x0) && (REFG(int, 0x14c2d24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d20) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d20) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb30cd1a7)));
      REFG(int, 0x14c2d24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d20) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d20);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb30cd1a7,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb30cd1a7,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41e40 */
uint F_00b41e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb41e40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d30) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d30) != (code *)0x0) && (REFG(int, 0x14c2d34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d30) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d30) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf5dcfcba)));
      REFG(int, 0x14c2d34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d30) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d30);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf5dcfcba,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf5dcfcba,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41fa0 */
uint F_00b41fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb41fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d38) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d38) != (code *)0x0) && (REFG(int, 0x14c2d3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d38) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d38) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x36f1c736)));
      REFG(int, 0x14c2d3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d38) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d38);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x36f1c736,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x36f1c736,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42100 */
uint F_00b42100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb42100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d40) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d40) != (code *)0x0) && (REFG(int, 0x14c2d44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d40) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d40) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xed4416c5)));
      REFG(int, 0x14c2d44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d40) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d40);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xed4416c5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xed4416c5,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b423c0 */
uint F_00b423c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb423c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d50) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d50) != (code *)0x0) && (REFG(int, 0x14c2d54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d50) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d50) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x416c07b3)));
      REFG(int, 0x14c2d54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d50) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d50);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x416c07b3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x416c07b3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42530 */
uint F_00b42530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb42530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d58) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d58) != (code *)0x0) && (REFG(int, 0x14c2d5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d58) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d58) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5268716f)));
      REFG(int, 0x14c2d5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d58) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d58);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5268716f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5268716f,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b426a0 */
uint F_00b426a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb426a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d60) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d60) != (code *)0x0) && (REFG(int, 0x14c2d64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d60) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d60) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7923ba0e)));
      REFG(int, 0x14c2d64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d60) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d60);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7923ba0e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7923ba0e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42810 */
uint F_00b42810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb42810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d68) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d68) != (code *)0x0) && (REFG(int, 0x14c2d6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d68) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d68) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x622fdc87)));
      REFG(int, 0x14c2d6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d68) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d68);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x622fdc87,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x622fdc87,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42980 */
uint F_00b42980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb42980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d70) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d70) != (code *)0x0) && (REFG(int, 0x14c2d74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d70) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d70) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x712baa5b)));
      REFG(int, 0x14c2d74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d70) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d70);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x712baa5b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x712baa5b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42af0 */
uint F_00b42af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb42af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d78) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d78) != (code *)0x0) && (REFG(int, 0x14c2d7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d78) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d78) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5a60613a)));
      REFG(int, 0x14c2d7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d78) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d78);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5a60613a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5a60613a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42c60 */
uint F_00b42c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb42c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d80) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d80) != (code *)0x0) && (REFG(int, 0x14c2d84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d80) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d80) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa9657f32)));
      REFG(int, 0x14c2d84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d80) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d80);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa9657f32,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa9657f32,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42dd0 */
uint F_00b42dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb42dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d88) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d88) != (code *)0x0) && (REFG(int, 0x14c2d8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d88) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d88) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xba6109ee)));
      REFG(int, 0x14c2d8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d88) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d88);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xba6109ee,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xba6109ee,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42f40 */
uint F_00b42f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb42f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d90) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d90) != (code *)0x0) && (REFG(int, 0x14c2d94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d90) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d90) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x912ac28f)));
      REFG(int, 0x14c2d94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d90) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d90);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x912ac28f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x912ac28f,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b430b0 */
uint F_00b430b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb430b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d98) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2d98) != (code *)0x0) && (REFG(int, 0x14c2d9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d98) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2d98) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2d98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd4974572)));
      REFG(int, 0x14c2d9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d98) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2d98);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd4974572,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd4974572,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43220 */
uint F_00b43220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb43220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2da0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2da0) != (code *)0x0) && (REFG(int, 0x14c2da4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2da0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2da0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2da0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc79333ae)));
      REFG(int, 0x14c2da4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2da0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2da0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc79333ae,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc79333ae,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43390 */
uint F_00b43390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb43390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2da8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2da8) != (code *)0x0) && (REFG(int, 0x14c2dac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2da8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2da8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2da8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xecd8f8cf)));
      REFG(int, 0x14c2dac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2da8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2da8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xecd8f8cf,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xecd8f8cf,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43500 */
uint F_00b43500(unsigned int gen_a0)
{
  GEN_ENTER(0xb43500u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2db0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2db0) != (code *)0x0) && (REFG(int, 0x14c2db4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2db0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2db0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2db0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x44f0ecd1)));
      REFG(int, 0x14c2db4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2db0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2db0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x44f0ecd1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x44f0ecd1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43650 */
uint F_00b43650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb43650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2db8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2db8) != (code *)0x0) && (REFG(int, 0x14c2dbc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2db8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2db8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2db8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x624e21c2)));
      REFG(int, 0x14c2dbc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2db8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2db8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x624e21c2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x624e21c2,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b437b0 */
uint F_00b437b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb437b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2dc0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2dc0) != (code *)0x0) && (REFG(int, 0x14c2dc4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2dc0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2dc0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2dc0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd7c9ec09)));
      REFG(int, 0x14c2dc4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2dc0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2dc0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd7c9ec09,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd7c9ec09,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43910 */
uint F_00b43910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb43910u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2dc8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2dc8) != (code *)0x0) && (REFG(int, 0x14c2dcc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2dc8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2dc8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2dc8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x72162b35)));
      REFG(int, 0x14c2dcc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2dc8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2dc8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x72162b35,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x72162b35,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43a70 */
uint F_00b43a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb43a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2dd0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2dd0) != (code *)0x0) && (REFG(int, 0x14c2dd4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2dd0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2dd0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2dd0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfbc08fc1)));
      REFG(int, 0x14c2dd4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2dd0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2dd0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfbc08fc1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfbc08fc1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43bd0 */
uint F_00b43bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb43bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2dd8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2dd8) != (code *)0x0) && (REFG(int, 0x14c2ddc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2dd8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2dd8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2dd8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1bc21b66)));
      REFG(int, 0x14c2ddc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2dd8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2dd8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1bc21b66,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1bc21b66,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43d30 */
uint F_00b43d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb43d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2de0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2de0) != (code *)0x0) && (REFG(int, 0x14c2de4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2de0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2de0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2de0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1a131e09)));
      REFG(int, 0x14c2de4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2de0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2de0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1a131e09,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1a131e09,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43e90 */
uint F_00b43e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb43e90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2de8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2de8) != (code *)0x0) && (REFG(int, 0x14c2dec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2de8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2de8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2de8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1c5659cd)));
      REFG(int, 0x14c2dec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2de8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2de8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1c5659cd,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1c5659cd,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43ff0 */
uint F_00b43ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb43ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2df0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2df0) != (code *)0x0) && (REFG(int, 0x14c2df4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2df0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2df0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2df0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x54fe75a)));
      REFG(int, 0x14c2df4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2df0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2df0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x54fe75a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x54fe75a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44150 */
uint F_00b44150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb44150u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2df8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2df8) != (code *)0x0) && (REFG(int, 0x14c2dfc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2df8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2df8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2df8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x18919887)));
      REFG(int, 0x14c2dfc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2df8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2df8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x18919887,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x18919887,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b442b0 */
uint F_00b442b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb442b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e00) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e00) != (code *)0x0) && (REFG(int, 0x14c2e04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e00) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e00) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4feeb498)));
      REFG(int, 0x14c2e04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e00) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e00);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4feeb498,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4feeb498,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44410 */
uint F_00b44410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb44410u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e08) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e08) != (code *)0x0) && (REFG(int, 0x14c2e0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e08) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e08) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2f5b08e0)));
      REFG(int, 0x14c2e0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e08) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e08);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2f5b08e0,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2f5b08e0,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44570 */
uint F_00b44570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb44570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e10) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e10) != (code *)0x0) && (REFG(int, 0x14c2e14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e10) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e10) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8354a8f4)));
      REFG(int, 0x14c2e14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e10) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e10);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8354a8f4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8354a8f4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b446d0 */
uint F_00b446d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb446d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e18) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e18) != (code *)0x0) && (REFG(int, 0x14c2e1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e18) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e18) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1b1b9a16)));
      REFG(int, 0x14c2e1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e18) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e18);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1b1b9a16,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1b1b9a16,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44830 */
uint F_00b44830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb44830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e20) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e20) != (code *)0x0) && (REFG(int, 0x14c2e24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e20) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e20) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x97063269)));
      REFG(int, 0x14c2e24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e20) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e20);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x97063269,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x97063269,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44990 */
uint F_00b44990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb44990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e28) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e28) != (code *)0x0) && (REFG(int, 0x14c2e2c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e28) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e28) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e28) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8e1f8cfe)));
      REFG(int, 0x14c2e2c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e28) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e28);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8e1f8cfe,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8e1f8cfe,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44af0 */
uint F_00b44af0(unsigned int gen_a0)
{
  GEN_ENTER(0xb44af0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e30) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e30) != (code *)0x0) && (REFG(int, 0x14c2e34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e30) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e30) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdf1f8f1b)));
      REFG(int, 0x14c2e34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e30) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e30);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdf1f8f1b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdf1f8f1b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44c40 */
uint F_00b44c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb44c40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e38) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e38) != (code *)0x0) && (REFG(int, 0x14c2e3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e38) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e38) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x467819d6)));
      REFG(int, 0x14c2e3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e38) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e38);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x467819d6,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x467819d6,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44da0 */
uint F_00b44da0(unsigned int gen_a0)
{
  GEN_ENTER(0xb44da0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e40) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e40) != (code *)0x0) && (REFG(int, 0x14c2e44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e40) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e40) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x74fe99ff)));
      REFG(int, 0x14c2e44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e40) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e40);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x74fe99ff,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x74fe99ff,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44ef0 */
uint F_00b44ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb44ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e48) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e48) != (code *)0x0) && (REFG(int, 0x14c2e4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e48) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e48) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2afd7dc7)));
      REFG(int, 0x14c2e4c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e48) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e48);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2afd7dc7,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2afd7dc7,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45050 */
uint F_00b45050(unsigned int gen_a0)
{
  GEN_ENTER(0xb45050u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e50) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e50) != (code *)0x0) && (REFG(int, 0x14c2e54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e50) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e50) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xece87388)));
      REFG(int, 0x14c2e54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e50) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e50);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xece87388,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xece87388,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b451a0 */
uint F_00b451a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb451a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e58) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e58) != (code *)0x0) && (REFG(int, 0x14c2e5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e58) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e58) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x694d52e)));
      REFG(int, 0x14c2e5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e58) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e58);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x694d52e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x694d52e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b452f0 */
uint F_00b452f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb452f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e60) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e60) != (code *)0x0) && (REFG(int, 0x14c2e64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e60) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e60) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdad9cff8)));
      REFG(int, 0x14c2e64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e60) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e60);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdad9cff8,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdad9cff8,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45440 */
uint F_00b45440(unsigned int gen_a0)
{
  GEN_ENTER(0xb45440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e68) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e68) != (code *)0x0) && (REFG(int, 0x14c2e6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e68) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e68) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x375dbd6b)));
      REFG(int, 0x14c2e6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e68) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e68);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x375dbd6b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x375dbd6b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45590 */
uint F_00b45590(unsigned int gen_a0)
{
  GEN_ENTER(0xb45590u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e70) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e70) != (code *)0x0) && (REFG(int, 0x14c2e74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e70) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e70) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfcbc7e14)));
      REFG(int, 0x14c2e74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e70) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e70);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfcbc7e14,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfcbc7e14,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b456e0 */
uint F_00b456e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb456e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e78) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e78) != (code *)0x0) && (REFG(int, 0x14c2e7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e78) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e78) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd3ede889)));
      REFG(int, 0x14c2e7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e78) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e78);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd3ede889,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd3ede889,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45840 */
uint F_00b45840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb45840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e80) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e80) != (code *)0x0) && (REFG(int, 0x14c2e84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e80) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e80) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2be25df8)));
      REFG(int, 0x14c2e84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e80) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e80);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2be25df8,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2be25df8,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b459a0 */
uint F_00b459a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb459a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e88) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e88) != (code *)0x0) && (REFG(int, 0x14c2e8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e88) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e88) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcc176068)));
      REFG(int, 0x14c2e8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e88) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e88);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcc176068,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcc176068,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45b00 */
uint F_00b45b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb45b00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e90) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e90) != (code *)0x0) && (REFG(int, 0x14c2e94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e90) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e90) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x17093206)));
      REFG(int, 0x14c2e94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e90) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e90);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x17093206,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x17093206,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45c60 */
uint F_00b45c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb45c60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e98) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2e98) != (code *)0x0) && (REFG(int, 0x14c2e9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e98) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2e98) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2e98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1c89c5df)));
      REFG(int, 0x14c2e9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e98) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2e98);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1c89c5df,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1c89c5df,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45dc0 */
uint F_00b45dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb45dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ea0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ea0) != (code *)0x0) && (REFG(int, 0x14c2ea4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ea0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ea0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ea0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x617bff9f)));
      REFG(int, 0x14c2ea4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ea0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ea0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x617bff9f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x617bff9f,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45f20 */
uint F_00b45f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb45f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ea8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ea8) != (code *)0x0) && (REFG(int, 0x14c2eac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ea8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ea8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ea8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x61cd6fd6)));
      REFG(int, 0x14c2eac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ea8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ea8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x61cd6fd6,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x61cd6fd6,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46080 */
uint F_00b46080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb46080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2eb0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2eb0) != (code *)0x0) && (REFG(int, 0x14c2eb4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2eb0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2eb0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2eb0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x16abd3a9)));
      REFG(int, 0x14c2eb4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2eb0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2eb0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x16abd3a9,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x16abd3a9,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b461e0 */
uint F_00b461e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb461e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2eb8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2eb8) != (code *)0x0) && (REFG(int, 0x14c2ebc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2eb8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2eb8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2eb8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7e4a9a0b)));
      REFG(int, 0x14c2ebc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2eb8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2eb8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7e4a9a0b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7e4a9a0b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46340 */
uint F_00b46340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb46340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ec0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ec0) != (code *)0x0) && (REFG(int, 0x14c2ec4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ec0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ec0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ec0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbc371ee0)));
      REFG(int, 0x14c2ec4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ec0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ec0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbc371ee0,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbc371ee0,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b464a0 */
uint F_00b464a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb464a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ec8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ec8) != (code *)0x0) && (REFG(int, 0x14c2ecc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ec8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ec8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ec8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1dae4fbc)));
      REFG(int, 0x14c2ecc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ec8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ec8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1dae4fbc,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1dae4fbc,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46600 */
uint F_00b46600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb46600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ed0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ed0) != (code *)0x0) && (REFG(int, 0x14c2ed4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ed0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ed0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ed0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4347a9de)));
      REFG(int, 0x14c2ed4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ed0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ed0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4347a9de,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4347a9de,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46760 */
uint F_00b46760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb46760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ed8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ed8) != (code *)0x0) && (REFG(int, 0x14c2edc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ed8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ed8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ed8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc5ea85a1)));
      REFG(int, 0x14c2edc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ed8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ed8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc5ea85a1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc5ea85a1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b468c0 */
uint F_00b468c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb468c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ee0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ee0) != (code *)0x0) && (REFG(int, 0x14c2ee4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ee0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ee0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ee0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2c694bc6)));
      REFG(int, 0x14c2ee4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ee0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ee0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2c694bc6,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2c694bc6,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46a20 */
uint F_00b46a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb46a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ee8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ee8) != (code *)0x0) && (REFG(int, 0x14c2eec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ee8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ee8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ee8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xed1f8c69)));
      REFG(int, 0x14c2eec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ee8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ee8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xed1f8c69,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xed1f8c69,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46b80 */
uint F_00b46b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb46b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ef0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ef0) != (code *)0x0) && (REFG(int, 0x14c2ef4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ef0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ef0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ef0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7fa2173a)));
      REFG(int, 0x14c2ef4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ef0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ef0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7fa2173a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7fa2173a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46cf0 */
uint F_00b46cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb46cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ef8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2ef8) != (code *)0x0) && (REFG(int, 0x14c2efc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ef8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2ef8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2ef8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xeee566b2)));
      REFG(int, 0x14c2efc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ef8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2ef8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xeee566b2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xeee566b2,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46e50 */
uint F_00b46e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb46e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f00) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f00) != (code *)0x0) && (REFG(int, 0x14c2f04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f00) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f00) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x577dd202)));
      REFG(int, 0x14c2f04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f00) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f00);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x577dd202,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x577dd202,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46fb0 */
uint F_00b46fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb46fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f08) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f08) != (code *)0x0) && (REFG(int, 0x14c2f0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f08) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f08) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x73bf8338)));
      REFG(int, 0x14c2f0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f08) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f08);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x73bf8338,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x73bf8338,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47110 */
uint F_00b47110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb47110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f10) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f10) != (code *)0x0) && (REFG(int, 0x14c2f14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f10) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f10) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xae3039da)));
      REFG(int, 0x14c2f14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f10) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f10);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xae3039da,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xae3039da,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47280 */
uint F_00b47280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb47280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f18) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f18) != (code *)0x0) && (REFG(int, 0x14c2f1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f18) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f18) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf020614a)));
      REFG(int, 0x14c2f1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f18) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f18);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf020614a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf020614a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b473e0 */
uint F_00b473e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb473e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f20) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f20) != (code *)0x0) && (REFG(int, 0x14c2f24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f20) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f20) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2ec39f90)));
      REFG(int, 0x14c2f24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f20) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f20);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2ec39f90,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2ec39f90,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47540 */
uint F_00b47540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb47540u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f28) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f28) != (code *)0x0) && (REFG(int, 0x14c2f2c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f28) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f28) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f28) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcb7309cd)));
      REFG(int, 0x14c2f2c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f28) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f28);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcb7309cd,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcb7309cd,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b476a0 */
uint F_00b476a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb476a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f30) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f30) != (code *)0x0) && (REFG(int, 0x14c2f34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f30) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f30) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd61cbe6e)));
      REFG(int, 0x14c2f34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f30) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f30);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd61cbe6e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd61cbe6e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47800 */
uint F_00b47800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb47800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f38) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f38) != (code *)0x0) && (REFG(int, 0x14c2f3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f38) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f38) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe4a26362)));
      REFG(int, 0x14c2f3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f38) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f38);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe4a26362,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe4a26362,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47960 */
uint F_00b47960(unsigned int gen_a0)
{
  GEN_ENTER(0xb47960u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f40) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f40) != (code *)0x0) && (REFG(int, 0x14c2f44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f40) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f40) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5927b094)));
      REFG(int, 0x14c2f44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f40) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f40);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5927b094,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5927b094,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47ab0 */
uint F_00b47ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb47ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f48) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f48) != (code *)0x0) && (REFG(int, 0x14c2f4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f48) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f48) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfa5f6134)));
      REFG(int, 0x14c2f4c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f48) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f48);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfa5f6134,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfa5f6134,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47c10 */
uint F_00b47c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb47c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f50) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f50) != (code *)0x0) && (REFG(int, 0x14c2f54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f50) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f50) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x53f0381e)));
      REFG(int, 0x14c2f54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f50) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f50);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x53f0381e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x53f0381e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47d70 */
uint F_00b47d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb47d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f58) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f58) != (code *)0x0) && (REFG(int, 0x14c2f5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f58) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f58) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xda8466a0)));
      REFG(int, 0x14c2f5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f58) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f58);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xda8466a0,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xda8466a0,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47ed0 */
uint F_00b47ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xb47ed0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f60) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f60) != (code *)0x0) && (REFG(int, 0x14c2f64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f60) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f60) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x53dabbca)));
      REFG(int, 0x14c2f64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f60) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f60);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x53dabbca,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x53dabbca,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48020 */
uint F_00b48020(unsigned int gen_a0)
{
  GEN_ENTER(0xb48020u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f68) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f68) != (code *)0x0) && (REFG(int, 0x14c2f6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f68) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f68) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcda14d8a)));
      REFG(int, 0x14c2f6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f68) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f68);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcda14d8a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcda14d8a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48170 */
uint F_00b48170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb48170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f70) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f70) != (code *)0x0) && (REFG(int, 0x14c2f74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f70) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f70) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8f2bab4)));
      REFG(int, 0x14c2f74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f70) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f70);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8f2bab4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8f2bab4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b482d0 */
uint F_00b482d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb482d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f78) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f78) != (code *)0x0) && (REFG(int, 0x14c2f7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f78) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f78) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x112ba1a5)));
      REFG(int, 0x14c2f7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f78) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f78);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x112ba1a5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x112ba1a5,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48430 */
uint F_00b48430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb48430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f80) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f80) != (code *)0x0) && (REFG(int, 0x14c2f84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f80) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f80) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9ea74659)));
      REFG(int, 0x14c2f84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f80) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f80);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9ea74659,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9ea74659,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48590 */
uint F_00b48590(unsigned int gen_a0)
{
  GEN_ENTER(0xb48590u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f88) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f88) != (code *)0x0) && (REFG(int, 0x14c2f8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f88) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f88) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcb7c208d)));
      REFG(int, 0x14c2f8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f88) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f88);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcb7c208d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcb7c208d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b486e0 */
uint F_00b486e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb486e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f90) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f90) != (code *)0x0) && (REFG(int, 0x14c2f94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f90) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f90) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xce2e9d9)));
      REFG(int, 0x14c2f94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f90) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f90);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xce2e9d9,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xce2e9d9,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48830 */
uint F_00b48830(unsigned int gen_a0)
{
  GEN_ENTER(0xb48830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f98) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2f98) != (code *)0x0) && (REFG(int, 0x14c2f9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f98) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2f98) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2f98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc9d86e33)));
      REFG(int, 0x14c2f9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f98) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2f98);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc9d86e33,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc9d86e33,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48980 */
uint F_00b48980(unsigned int gen_a0)
{
  GEN_ENTER(0xb48980u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2fa0) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2fa0) != (code *)0x0) && (REFG(int, 0x14c2fa4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2fa0) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2fa0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2fa0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x85ff5a15)));
      REFG(int, 0x14c2fa4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2fa0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2fa0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x85ff5a15,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x85ff5a15,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48ad0 */
uint F_00b48ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb48ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2fa8) = (code *)0x0;
    }
    if ((REFG(undefined * PTR32, 0x14c2fa8) != (code *)0x0) && (REFG(int, 0x14c2fac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2fa8) = (code *)0x0;
    }
    if (((REFG(undefined * PTR32, 0x14c2fa8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined * PTR32, 0x14c2fa8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x63685979)));
      REFG(int, 0x14c2fac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2fa8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined * PTR32, 0x14c2fa8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x63685979,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x63685979,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48c30 */
uint F_00b48c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb48c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_004f8a90(*(undefined * PTR32 *)((int)this + 0xa98),param_1,param_2,0,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b48c60 */
uint F_00b48c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb48c60u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 != (byte *)0x0) {
    uVar2 = 0xffffffff;
    pbVar3 = param_1;
    uVar6 = param_2;
    if (7 < param_2) {
      uVar5 = param_2 >> 3;
      do {
        bVar1 = *pbVar3;
        if ((bVar1 < 0x41) || (0x5a < bVar1)) {
          uVar4 = (uint)bVar1;
        }
        else {
          uVar4 = bVar1 + 0x20;
        }
        uVar2 = uVar2 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0030) + ((uVar4 ^ uVar2) & 0xff) * 4);
        bVar1 = pbVar3[1];
        if ((bVar1 < 0x41) || (0x5a < bVar1)) {
          uVar4 = (uint)bVar1;
        }
        else {
          uVar4 = bVar1 + 0x20;
        }
        uVar2 = uVar2 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0030) + ((uVar4 ^ uVar2) & 0xff) * 4);
        bVar1 = pbVar3[2];
        if ((bVar1 < 0x41) || (0x5a < bVar1)) {
          uVar4 = (uint)bVar1;
        }
        else {
          uVar4 = bVar1 + 0x20;
        }
        uVar2 = uVar2 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0030) + ((uVar4 ^ uVar2) & 0xff) * 4);
        bVar1 = pbVar3[3];
        if ((bVar1 < 0x41) || (0x5a < bVar1)) {
          uVar4 = (uint)bVar1;
        }
        else {
          uVar4 = bVar1 + 0x20;
        }
        uVar2 = uVar2 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0030) + ((uVar4 ^ uVar2) & 0xff) * 4);
        bVar1 = pbVar3[4];
        if ((bVar1 < 0x41) || (0x5a < bVar1)) {
          uVar4 = (uint)bVar1;
        }
        else {
          uVar4 = bVar1 + 0x20;
        }
        uVar2 = uVar2 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0030) + ((uVar4 ^ uVar2) & 0xff) * 4);
        bVar1 = pbVar3[5];
        if ((bVar1 < 0x41) || (0x5a < bVar1)) {
          uVar4 = (uint)bVar1;
        }
        else {
          uVar4 = bVar1 + 0x20;
        }
        uVar2 = uVar2 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0030) + ((uVar4 ^ uVar2) & 0xff) * 4);
        bVar1 = pbVar3[6];
        if ((bVar1 < 0x41) || (0x5a < bVar1)) {
          uVar4 = (uint)bVar1;
        }
        else {
          uVar4 = bVar1 + 0x20;
        }
        uVar2 = uVar2 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0030) + ((uVar4 ^ uVar2) & 0xff) * 4);
        bVar1 = pbVar3[7];
        if ((bVar1 < 0x41) || (0x5a < bVar1)) {
          uVar4 = (uint)bVar1;
        }
        else {
          uVar4 = bVar1 + 0x20;
        }
        uVar2 = uVar2 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0030) + ((uVar4 ^ uVar2) & 0xff) * 4);
        pbVar3 = pbVar3 + 8;
        uVar6 = uVar6 - 8;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      bVar1 = *pbVar3;
      if ((bVar1 < 0x41) || (0x5a < bVar1)) {
        uVar5 = (uint)bVar1;
      }
      else {
        uVar5 = bVar1 + 0x20;
      }
      uVar2 = uVar2 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0030) + ((uVar5 ^ uVar2) & 0xff) * 4);
      pbVar3 = pbVar3 + 1;
    }
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00b48e20 */
ulonglong F_00b48e20(unsigned int gen_a0)
{
  GEN_ENTER(0xb48e20u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int iVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  pcVar3 = param_1;
  iVar8 = 0;
  pcVar4 = param_1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  iVar5 = (int)pcVar4 - (int)(param_1 + 1);
  cVar2 = *param_1;
  iVar9 = iVar5;
  iVar10 = iVar5;
  while (cVar2 != '\0') {
    iVar10 = iVar10 + -1;
    if (cVar2 == '/') {
      param_1 = pcVar3 + iVar8 + 1;
      iVar5 = iVar8;
      iVar9 = iVar10;
    }
    iVar1 = iVar8 + 1;
    iVar8 = iVar8 + 1;
    cVar2 = pcVar3[iVar1];
  }
  uVar6 = F_00b48c60(pcVar3,iVar5);
  uVar7 = F_00b48c60(param_1,iVar9);
  return CONCAT44(uVar6,uVar7);
}

/* ref: FUN_00b48e90 */
uint F_00b48e90(unsigned int gen_a0)
{
  GEN_ENTER(0xb48e90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (-(uint)(param_1 != 0) & 0xfffffc18) + 1000;
}

/* ref: FUN_00b48eb0 */
uint F_00b48eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb48eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  param_3 = param_3 + -1;
  local_8 = 0;
  do {
    iVar3 = (param_3 + local_8) / 2;
    uVar2 = iVar3 * param_4 + param_2;
    uVar1 = (*param_5)(param_1,uVar2);
    if (uVar1 == 0) {
      if (param_2 < uVar2) {
        iVar3 = uVar2 - param_4;
        do {
          uVar1 = (*param_5)(param_1,iVar3);
          if (uVar1 != 0) {
            return uVar2;
          }
          uVar2 = uVar2 - param_4;
          iVar3 = iVar3 - param_4;
        } while (param_2 < uVar2);
      }
      return uVar2;
    }
    if ((int)uVar1 < 0) {
      param_3 = iVar3 + -1;
    }
    else {
      local_8 = iVar3 + 1;
    }
  } while (local_8 <= param_3);
  return 0;
}

/* ref: FUN_00b48f50 */
byte F_00b48f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb48f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 == *(int *)((int)this + 0xc);
}

/* ref: FUN_00b48f70 */
uint F_00b48f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb48f70u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  if ((*param_1 == *param_2) && (uVar1 == uVar2)) {
    return 0;
  }
  if ((uVar2 <= uVar1) && ((uVar1 != uVar2 || (*param_2 < *param_1)))) {
    return 1;
  }
  return 0xffffffff;
}

/* ref: FUN_00b48fb0 */
uint F_00b48fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb48fb0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  if ((*param_1 == *param_2) && (uVar2 == uVar1)) {
    return param_1[3] - param_2[3];
  }
  if ((uVar1 <= uVar2) && ((uVar2 != uVar1 || (*param_2 < *param_1)))) {
    return 1;
  }
  return 0xffffffff;
}

/* ref: FUN_00b49000 */
uint F_00b49000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb49000u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  if (*param_2 == *param_1) {
    return 0;
  }
  return (-(uint)(*param_2 < *param_1) & 2) - 1;
}

/* ref: FUN_00b49020 */
uint F_00b49020(unsigned int gen_a0)
{
  GEN_ENTER(0xb49020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x133a840) + param_1 * 4);
}

/* ref: FUN_00b49060 */
uint F_00b49060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb49060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x320];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  wchar_t * pwVar3;
  
  this_00 = REFG(void * PTR32, 0x137104c);
  (*(uint *)(gen_frame + 0x318)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x31c);
  F_00429f90(((wchar_t *)(gen_frame + 0x4)));
  if (param_2 == -1) {
    F_00c49908(((undefined1 *)(gen_frame + 0x30c)),10,"index");
  }
  else {
    F_00c49908(((undefined1 *)(gen_frame + 0x30c)),10,(*(undefined * PTR32 (*)[1])REFP(0x10f0438)));
    (*(char *)(gen_frame + 0x30f)) = (char)param_2 + '0';
    (*(undefined1 *)(gen_frame + 0x310)) = 0;
  }
  *param_6 = 1;
  if (*(int *)((int)this + 0x818) == 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x20c)),0x100,"ffxiv/%02x%04x.%s.%s.sdat",param_3,param_4,param_5,((undefined1 *)(gen_frame + 0x30c)));
    uVar2 = F_00424730(this_00,*(undefined4 *)((int)this + 0x814));
    pwVar3 = (wchar_t *)F_004306f0(this_00,uVar2);
    F_00c4a8e0(((wchar_t *)(gen_frame + 0x4)),0x104,pwVar3);
    F_0042a2a0(((wchar_t *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x20c)));
    bVar1 = F_004fc9e0(((wchar_t *)(gen_frame + 0x4)));
    if (bVar1 != 0) goto LAB_00b49279;
    *param_6 = 0;
    F_00c472af(((undefined1 *)(gen_frame + 0x20c)),0x100,"ffxiv/%02x%04x.%s.%s",param_3,param_4,param_5,((undefined1 *)(gen_frame + 0x30c)));
  }
  else {
    F_00c472af(((undefined1 *)(gen_frame + 0x20c)),0x100,"ex%d/%02x%04x.%s.%s",param_4,param_3,param_4,param_5,((undefined1 *)(gen_frame + 0x30c)));
    uVar2 = F_00424730(this_00,*(undefined4 *)((int)this + 0x814));
    pwVar3 = (wchar_t *)F_004306f0(this_00,uVar2);
    F_00c4a8e0(((wchar_t *)(gen_frame + 0x4)),0x104,pwVar3);
    F_0042a2a0(((wchar_t *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x20c)));
    bVar1 = F_004fc9e0(((wchar_t *)(gen_frame + 0x4)));
    if (bVar1 != 0) goto LAB_00b49279;
    *param_6 = 0;
    F_00c472af(((undefined1 *)(gen_frame + 0x20c)),0x100,"ex%d/%02x%04x.%s.%s",param_4,param_3,param_4,param_5,((undefined1 *)(gen_frame + 0x30c)));
  }
  uVar2 = F_00424730(this_00,*(undefined4 *)((int)this + 0x814));
  pwVar3 = (wchar_t *)F_004306f0(this_00,uVar2);
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x4)),0x104,pwVar3);
  F_0042a2a0(((wchar_t *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x20c)));
LAB_00b49279: ;
  pwVar3 = param_1;
  if (((wchar_t *)(gen_frame + 0x4)) != param_1) {
    pwVar3 = (wchar_t *)F_00c4a8e0(param_1,0x104,((wchar_t *)(gen_frame + 0x4)));
  }
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x318)) ^ (uint)(uint)(gen_frame + 0x31c));
  return (uint)pwVar3;
}

/* ref: FUN_00b492c0 */
uint F_00b492c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb492c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x530];
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  undefined * puVar5;
  byte bVar6;
  uint uVar7;
  wchar_t * pwVar8;
  uint uVar9;
  
  puVar5 = REFG(undefined * PTR32, 0x133a890);
  (*(uint *)(gen_frame + 0x528)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x52c);
  uVar1 = *(uint *)((int)this + 100);
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar7 = 0;
  if (uVar1 != 0) {
    do {
      if (*(int *)((int)this + (*(uint *)(gen_frame + 0x4)) * 4 + 0xa70) == 0) {
        uVar7 = F_00406b90(0x20,0,0);
        if (uVar7 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = F_004f88e0(uVar7);
        }
        *(uint *)((int)this + (*(uint *)(gen_frame + 0x4)) * 4 + 0xa70) = uVar7;
      }
      F_00429f90(((wchar_t *)(gen_frame + 0xc)));
      pvVar4 = REFG(void * PTR32, 0x137104c);
      uVar2 = *(undefined4 *)((int)this + 0x814);
      uVar3 = *(undefined4 *)((int)this + 0x818);
      F_00429f90(((wchar_t *)(gen_frame + 0x214)));
      if ((*(uint *)(gen_frame + 0x4)) == 0xffffffff) {
        F_00c49908(((undefined1 *)(gen_frame + 0x51c)),10,"index");
      }
      else {
        F_00c49908(((undefined1 *)(gen_frame + 0x51c)),10,(*(undefined * PTR32 (*)[1])REFP(0x10f0438)));
        (*(char *)(gen_frame + 0x51f)) = (char)(*(uint *)(gen_frame + 0x4)) + '0';
        (*(undefined1 *)(gen_frame + 0x520)) = 0;
      }
      (*(undefined1 *)(gen_frame + 0xb)) = 1;
      if (*(int *)((int)this + 0x818) == 0) {
        F_00c472af(((char *)(gen_frame + 0x41c)),0x100,"ffxiv/%02x%04x.%s.%s.sdat",uVar2,uVar3,puVar5,((undefined1 *)(gen_frame + 0x51c)));
        uVar7 = F_00424730(pvVar4,*(undefined4 *)((int)this + 0x814));
        pwVar8 = (wchar_t *)F_004306f0(pvVar4,uVar7);
        F_00c4a8e0(((wchar_t *)(gen_frame + 0x214)),0x104,pwVar8);
        F_0042a2a0(((wchar_t *)(gen_frame + 0x214)),((char *)(gen_frame + 0x41c)));
        bVar6 = F_004fc9e0(((wchar_t *)(gen_frame + 0x214)));
        if (bVar6 == 0) {
          F_00c472af(((char *)(gen_frame + 0x41c)),0x100,"ffxiv/%02x%04x.%s.%s",uVar2,uVar3,puVar5,((undefined1 *)(gen_frame + 0x51c)));
LAB_00b49503: ;
          (*(undefined1 *)(gen_frame + 0xb)) = 0;
          uVar7 = F_00424730(pvVar4,*(undefined4 *)((int)this + 0x814));
          pwVar8 = (wchar_t *)F_004306f0(pvVar4,uVar7);
          F_00c4a8e0(((wchar_t *)(gen_frame + 0x214)),0x104,pwVar8);
          F_0042a2a0(((wchar_t *)(gen_frame + 0x214)),((char *)(gen_frame + 0x41c)));
        }
      }
      else {
        F_00c472af(((char *)(gen_frame + 0x41c)),0x100,"ex%d/%02x%04x.%s.%s",uVar3);
        uVar7 = F_00424730(pvVar4,*(undefined4 *)((int)this + 0x814));
        pwVar8 = (wchar_t *)F_004306f0(pvVar4,uVar7);
        F_00c4a8e0(((wchar_t *)(gen_frame + 0x214)),0x104,pwVar8);
        F_0042a2a0(((wchar_t *)(gen_frame + 0x214)),((char *)(gen_frame + 0x41c)));
        bVar6 = F_004fc9e0(((wchar_t *)(gen_frame + 0x214)));
        if (bVar6 == 0) {
          F_00c472af(((char *)(gen_frame + 0x41c)),0x100,"ex%d/%02x%04x.%s.%s",uVar3,uVar2,uVar3,puVar5,((undefined1 *)(gen_frame + 0x51c)));
          goto LAB_00b49503;
        }
      }
      F_00c4a8e0(((wchar_t *)(gen_frame + 0xc)),0x104,((wchar_t *)(gen_frame + 0x214)));
      F_00429fa0();
      *(undefined1 *)((int)this + 0xa9c) = (*(undefined1 *)(gen_frame + 0xb));
      pvVar4 = *(undefined * PTR32 *)((int)this + (*(uint *)(gen_frame + 0x4)) * 4 + 0xa70);
      if (*(char *)((int)pvVar4 + 0x18) != '\0') {
        F_004f8b30(pvVar4);
      }
      uVar9 = F_004f8900(*(undefined * PTR32 *)((int)this + (*(uint *)(gen_frame + 0x4)) * 4 + 0xa70),((wchar_t *)(gen_frame + 0xc)),0);
      uVar7 = 1;
      if (uVar9 != 1) {
        uVar7 = F_00429940(3,1,*(int *)((int)this + 0x814) * 0x10000 + *(int *)((int)this + 0xc),
                             0xffffffff);
      }
      F_00429fa0();
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    } while ((*(uint *)(gen_frame + 0x4)) < uVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x528)) ^ (uint)(uint)(gen_frame + 0x52c));
  return uVar7;
}

/* ref: FUN_00b495f0 */
uint F_00b495f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb495f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0xa54)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0xa54)) {
    do {
      *(int *)((int)this + 0x838) = *(int *)((int)this + 0x838) + -4;
      F_00406b30(piVar5[10]);
      if (*(char *)((int)piVar5 + 0x31) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x31) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x31);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x31);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x31);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x31);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0xa54));
  }
  F_00b4b2b0((undefined *)((int)this + 0xa50));
  uVar4 = F_00b4b310((undefined *)((int)this + 0xa60));
  *(undefined4 *)((int)this + 0x838) = 0;
  return uVar4;
}

/* ref: FUN_00b49690 */
uint F_00b49690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb49690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(int *)((int)this + 0x814) = param_1;
  *(int *)((int)this + 0x818) = param_2;
  if (*(int *)((int)this + 0xa98) == 0) {
    uVar2 = F_00406b90(0x20,0,0);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_004f88e0(uVar2);
    }
    *(uint *)((int)this + 0xa98) = uVar2;
  }
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  F_00b49060(this,(int)this + 0x83c,0xffffffff,param_1,param_2,REFG(undefined * PTR32, 0x133a890),
               (int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if (*((char *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0xa98) + 0x18))) != '\0') {
    F_004f8b30(*(undefined * PTR32 *)((int)this + 0xa98));
  }
  uVar2 = F_004f8900(*(undefined * PTR32 *)((int)this + 0xa98),(int)this + 0x83c,0);
  if (uVar2 != 1) {
    F_00429940(3,1,param_1 * 0x10000 + param_2,0xffffffff);
  }
  uVar3 = F_004f7900(*(undefined * PTR32 *)((int)this + 0xa98));
  *(int *)((int)this + 0x834) = (int)uVar3;
  *(undefined4 *)((int)this + 0x81c) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  if (*(int *)((int)this + 0xa44) != 0) {
    F_00406b30(*(int *)((int)this + 0xa44));
    *(undefined4 *)((int)this + 0xa44) = 0;
  }
  if (*(int *)((int)this + 0xa48) != 0) {
    F_00406b30(*(int *)((int)this + 0xa48));
    *(undefined4 *)((int)this + 0xa48) = 0;
  }
  if (*(int *)((int)this + 0xa4c) != 0) {
    F_00406b30(*(int *)((int)this + 0xa4c));
    *(undefined4 *)((int)this + 0xa4c) = 0;
  }
  F_00b495f0(this);
  F_004f77b0(*(undefined * PTR32 *)((int)this + 0xa98),(int)this + 0x414,0x400,0);
  F_004f77b0(*(undefined * PTR32 *)((int)this + 0xa98),(int)this + 0x14,0x400,0);
  *(int *)((int)this + 0x830) = *(int *)((int)this + 0x830) + 2;
  if (*(int *)((int)this + 0x6c) != 0) {
    uVar2 = F_00406bb0(*(int *)((int)this + 0x6c),0,0);
    *(uint *)((int)this + 0xa48) = uVar2;
    F_004f8a90(*(undefined * PTR32 *)((int)this + 0xa98),uVar2,*(undefined4 *)((int)this + 0x6c),0,
                 *(undefined4 *)((int)this + 0x68),0);
    *(int *)((int)this + 0x830) = *(int *)((int)this + 0x830) + 1;
    *(uint *)((int)this + 0x820) = *(uint *)((int)this + 0x6c) >> 8;
  }
  if ((*(int *)(&REFG(undefined, 0x133a840) + param_1 * 4) != 0) && (*(int *)((int)this + 0xfc) != 0)) {
    uVar2 = F_00406bb0(*(int *)((int)this + 0xfc),0,0);
    *(uint *)((int)this + 0xa4c) = uVar2;
    F_004f8a90(*(undefined * PTR32 *)((int)this + 0xa98),uVar2,*(undefined4 *)((int)this + 0xfc),0,
                 *(undefined4 *)((int)this + 0xf8),0);
    *(int *)((int)this + 0x830) = *(int *)((int)this + 0x830) + 1;
    *(uint *)((int)this + 0x824) = *(uint *)((int)this + 0xfc) >> 4;
    *(undefined1 *)((int)this + 5) = 1;
  }
  if ((*(char *)((int)this + 5) == '\0') && (iVar1 = *(int *)((int)this + 0x20), iVar1 != 0)) {
    *(int *)((int)this + 0x838) = *(int *)((int)this + 0x838) + iVar1;
    uVar2 = F_00406bb0(iVar1,0,0);
    *(uint *)((int)this + 0xa44) = uVar2;
    F_004f8a90(*(undefined * PTR32 *)((int)this + 0xa98),uVar2,*(undefined4 *)((int)this + 0x20),0,
                 *(undefined4 *)((int)this + 0x1c),0);
    *(int *)((int)this + 0x830) = *(int *)((int)this + 0x830) + 1;
    *(uint *)((int)this + 0x81c) = *(uint *)((int)this + 0x20) >> 4;
  }
  uVar2 = F_00b492c0(this);
  *(undefined1 *)((int)this + 4) = 1;
  *(int *)((int)this + 8) = param_1;
  *(int *)((int)this + 0xc) = param_2;
  return uVar2;
}

/* ref: FUN_00b498f0 */
uint F_00b498f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb498f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * PTR32 * ppuVar5;
  int * piVar6;
  undefined4 * puVar7;
  int * piVar8;
  
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x838)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[1]) < piVar6) {
    piVar8 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa64)))));
    if (piVar8 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa64)))) {
      do {
        piVar6 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x838);
        if (piVar6 <= (*(int * PTR32 *)&gen_args[1])) break;
        this_00 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xa50);
        puVar7 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xa54);
        if (*(char *)((int)puVar7[1] + 0x31) == '\0') {
          puVar3 = (undefined4 *)puVar7[1];
          do {
            if ((uint)puVar3[4] < (uint)piVar8[6]) {
              puVar4 = (undefined4 *)puVar3[2];
            }
            else {
              puVar4 = (undefined4 *)*puVar3;
              puVar7 = puVar3;
            }
            puVar3 = puVar4;
          } while (*(char *)((int)puVar4 + 0x31) == '\0');
        }
        puVar3 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xa54);
        (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar7;
        if ((puVar7 == puVar3) || ((uint)piVar8[6] < (uint)puVar7[4])) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar3;
          ppuVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
        }
        else {
          ppuVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x14));
        }
        puVar7 = *ppuVar5;
        *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x838) = (int)piVar6 - puVar7[8];
        F_00406b30(puVar7[10]);
        F_00b4b9f0(this_00,((undefined1 *)(gen_frame + 0xc)),puVar7);
        if (*(char *)((int)piVar8 + 0x21) == '\0') {
          piVar6 = (int *)piVar8[2];
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x21);
            piVar8 = piVar6;
            piVar6 = (int *)*piVar6;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar6 + 0x21);
              piVar8 = piVar6;
              piVar6 = (int *)*piVar6;
            }
          }
          else {
            cVar1 = *(char *)(piVar8[1] + 0x21);
            piVar2 = (int *)piVar8[1];
            piVar6 = piVar8;
            while ((piVar8 = piVar2, cVar1 == '\0' && (piVar6 == (int *)piVar8[2]))) {
              cVar1 = *(char *)(piVar8[1] + 0x21);
              piVar2 = (int *)piVar8[1];
              piVar6 = piVar8;
            }
          }
        }
      } while (piVar8 != *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xa64));
    }
    piVar6 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xa64)));
    if (piVar8 != piVar6) {
      piVar6 = (int *)F_00b4c320((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xa60),&(*(int * PTR32 *)&gen_args[1]),piVar6,piVar8);
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_00b49a20 */
uint F_00b49a20(unsigned int gen_a0)
{
  GEN_ENTER(0xb49a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  ulonglong uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0xa44) != 0) {
    F_00406b30(*(int *)((int)this + 0xa44));
    *(undefined4 *)((int)this + 0xa44) = 0;
  }
  if (*(int *)((int)this + 0xa48) != 0) {
    F_00406b30(*(int *)((int)this + 0xa48));
    *(undefined4 *)((int)this + 0xa48) = 0;
  }
  if (*(int *)((int)this + 0xa4c) != 0) {
    F_00406b30(*(int *)((int)this + 0xa4c));
    *(undefined4 *)((int)this + 0xa4c) = 0;
  }
  *(undefined4 *)((int)this + 0x81c) = 0;
  F_00b495f0(this);
  piVar3 = (int *)((int)this + 0xa70);
  iVar2 = 10;
  do {
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xa98);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0xa98) = 0;
  }
  F_00b4c320((undefined *)((int)this + 0xa60),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xa64),
               *(undefined4 * PTR32 *)((int)this + 0xa64));
  F_00429760(*(undefined4 *)((int)this + 0xa64),0x28,0x2be);
  F_00b4bf40((undefined *)((int)this + 0xa50),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xa54),
               *(undefined4 * PTR32 *)((int)this + 0xa54));
  uVar4 = F_00429760(*(undefined4 *)((int)this + 0xa54),0x38,0x2be);
  F_00429fa0();
  return (uint)uVar4;
}

/* ref: FUN_00b49b40 */
byte F_00b49b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb49b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  int * piVar1;
  uint * puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined * this_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  byte * pbVar9;
  int iVar10;
  undefined4 uVar11;
  byte * pbVar12;
  uint uVar13;
  bool bVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x188)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18c);
  (*(byte * PTR32 *)(gen_frame + 0x64)) = param_1;
  (*(uint * PTR32 *)(gen_frame + 0x3c)) = param_2;
  (*(uint * PTR32 *)(gen_frame + 0x40)) = param_3;
  if ((*(uint *)((int)this + 0x828) & *(uint *)((int)this + 0x82c)) == 0xffffffff) {
    F_00b495f0(this);
    *(undefined4 *)((int)this + 0x828) = 0;
    *(undefined4 *)((int)this + 0x82c) = 0;
  }
  uVar15 = F_00b48e20(param_1);
  uVar11 = (undefined4)(uVar15 >> 0x20);
  uVar16 = *(undefined4 *)((int)this + 0x824);
  uVar4 = *(undefined4 *)((int)this + 0xa4c);
  (*(ulonglong *)(gen_frame + 0x68)) = uVar15;
  (*(undefined4 *)(gen_frame + 0x70)) = uVar11;
  ((undefined4 *)(gen_frame + 0x178))[0] = uVar11;
  uVar5 = F_00b48eb0(((undefined4 *)(gen_frame + 0x178)),uVar4,uVar16,0x10,((code *)REFP(0xb49000)));
  if (uVar5 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
    return 0;
  }
  F_00b4c2b0((undefined *)((int)this + 0xa50),&(*(uint *)(gen_frame + 0x74)),&(*(undefined4 *)(gen_frame + 0x70)));
  uVar6 = (*(uint *)(gen_frame + 0x74));
  if ((*(uint *)(gen_frame + 0x74)) == *(uint *)((int)this + 0xa54)) {
    uVar6 = *(uint *)(&REFG(undefined, 0x133a840) + *(int *)((int)this + 8) * 4);
    if (*(uint *)(uVar5 + 8) < uVar6) {
      uVar6 = uVar6 - *(uint *)(uVar5 + 8);
    }
    F_00b498f0(this,uVar6);
    *(int *)((int)this + 0x838) = *(int *)((int)this + 0x838) + *(int *)(uVar5 + 8);
    uVar7 = F_00406bb0(*(undefined4 *)(uVar5 + 8),0,0);
    uVar16 = *(undefined4 *)(uVar5 + 4);
    uVar6 = *(uint *)(uVar5 + 8);
    this_00 = *(undefined * PTR32 *)((int)this + 0xa98);
    (*(uint *)(gen_frame + 0x74)) = uVar7;
    uVar13 = uVar6 >> 4;
    F_004f8a90(this_00,uVar7,uVar6,0,uVar16,0);
    *(int *)((int)this + 0x830) = *(int *)((int)this + 0x830) + 1;
    uVar16 = *(undefined4 *)(uVar5 + 8);
    iVar10 = *(int *)((int)this + 0x82c);
    ((byte *)(gen_frame + 0xc))[0x18] = (byte)uVar16;
    ((byte *)(gen_frame + 0xc))[0x19] = SUB41(uVar16,1);
    ((byte *)(gen_frame + 0xc))[0x1a] = SUB41(uVar16,2);
    ((byte *)(gen_frame + 0xc))[0x1b] = SUB41(uVar16,3);
    uVar5 = *(uint *)((int)this + 0x828);
    *(uint *)((int)this + 0x82c) = iVar10 + (uint)(0xfffffffe < uVar5);
    ((byte *)(gen_frame + 0xc))[0x10] = (char)uVar5;
    ((byte *)(gen_frame + 0xc))[0x11] = (char)(uVar5 >> 8);
    ((byte *)(gen_frame + 0xc))[0x12] = (char)(uVar5 >> 0x10);
    ((byte *)(gen_frame + 0xc))[0x13] = (char)(uVar5 >> 0x18);
    (*(uint *)(gen_frame + 0x4c)) = uVar5;
    ((undefined4 *)(gen_frame + 0x44))[0] = (*(undefined4 *)(gen_frame + 0x70));
    ((byte *)(gen_frame + 0x54))[0] = (byte)uVar16;
    ((byte *)(gen_frame + 0x54))[1] = SUB41(uVar16,1);
    ((byte *)(gen_frame + 0x54))[2] = SUB41(uVar16,2);
    ((byte *)(gen_frame + 0x54))[3] = SUB41(uVar16,3);
    *(uint *)((int)this + 0x828) = uVar5 + 1;
    uVar16 = 0;
    ((byte *)(gen_frame + 0x60))[0] = ((byte *)(gen_frame + 0xc))[0x24];
    ((byte *)(gen_frame + 0x60))[1] = ((byte *)(gen_frame + 0xc))[0x25];
    ((byte *)(gen_frame + 0x60))[2] = ((byte *)(gen_frame + 0xc))[0x26];
    ((byte *)(gen_frame + 0x60))[3] = ((byte *)(gen_frame + 0xc))[0x27];
    ((byte *)(gen_frame + 0xc))[0x14] = (char)iVar10;
    ((byte *)(gen_frame + 0xc))[0x15] = (char)((uint)iVar10 >> 8);
    ((byte *)(gen_frame + 0xc))[0x16] = (char)((uint)iVar10 >> 0x10);
    ((byte *)(gen_frame + 0xc))[0x17] = (char)((uint)iVar10 >> 0x18);
    (*(int *)(gen_frame + 0x50)) = iVar10;
    (*(uint *)(gen_frame + 0x58)) = uVar13;
    (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x74));
    uVar5 = F_00b4c1e0((undefined *)((int)this + 0xa50),((undefined4 *)(gen_frame + 0x44)));
    F_00b4bfe0((undefined *)((int)this + 0xa50),((undefined1 *)(gen_frame + 0x34)),uVar5,uVar16);
    uVar16 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16));
  }
  else {
    uVar13 = *(uint *)((*(uint *)(gen_frame + 0x74)) + 0x24);
    pbVar9 = (byte *)((*(uint *)(gen_frame + 0x74)) + 0x18);
    (*(uint *)(gen_frame + 0x74)) = *(uint *)((*(uint *)(gen_frame + 0x74)) + 0x28);
    F_00b4c3c0((undefined *)((int)this + 0xa60),pbVar9);
    *(undefined4 *)pbVar9 = *(undefined4 *)((int)this + 0x828);
    *(undefined4 *)(uVar6 + 0x1c) = *(undefined4 *)((int)this + 0x82c);
    puVar2 = (uint *)((int)this + 0x828);
    uVar5 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)((int)this + 0x82c) = *(int *)((int)this + 0x82c) + (uint)(0xfffffffe < uVar5);
    uVar16 = *(undefined4 *)pbVar9;
    iVar10 = *(int *)(uVar6 + 0x1c);
  }
  ((byte *)(gen_frame + 0x54))[0] = (byte)uVar16;
  ((byte *)(gen_frame + 0x54))[1] = SUB41(uVar16,1);
  ((byte *)(gen_frame + 0x54))[2] = SUB41(uVar16,2);
  ((byte *)(gen_frame + 0x54))[3] = SUB41(uVar16,3);
  (*(uint *)(gen_frame + 0x58)) = iVar10;
  (*(uint *)(gen_frame + 0x5c)) = (*(undefined4 *)(gen_frame + 0x70));
  F_00b4c490((undefined *)((int)this + 0xa60),((undefined1 *)(gen_frame + 0x34)),((byte *)(gen_frame + 0x54)));
  uVar15 = (*(ulonglong *)(gen_frame + 0x68));
  uVar16 = *(undefined4 *)((int)this + 0xa48);
  ((byte *)(gen_frame + 0xc))[0] = (byte)(*(ulonglong *)(gen_frame + 0x68));
  ((byte *)(gen_frame + 0xc))[1] = (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x68)) + 1));
  ((byte *)(gen_frame + 0xc))[2] = (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x68)) + 2));
  ((byte *)(gen_frame + 0xc))[3] = (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x68)) + 3));
  ((byte *)(gen_frame + 0xc))[4] = (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x68)) + 4));
  ((byte *)(gen_frame + 0xc))[5] = (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x68)) + 5));
  ((byte *)(gen_frame + 0xc))[6] = (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x68)) + 6));
  ((byte *)(gen_frame + 0xc))[7] = (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x68)) + 7));
  ((byte *)(gen_frame + 0xc))[0xc] = 0;
  ((byte *)(gen_frame + 0xc))[0xd] = 0;
  ((byte *)(gen_frame + 0xc))[0xe] = 0;
  ((byte *)(gen_frame + 0xc))[0xf] = 0;
  (*(ulonglong *)(gen_frame + 0x68)) = uVar15;
  piVar8 = (int *)F_00b48eb0(((byte *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x74)),uVar13,0x10,((code *)REFP(0xb48f70)));
  if (piVar8 != (int *)0x0) {
    if ((*(byte *)(piVar8 + 2) & 1) == 0) {
LAB_00b49ecc: ;
      uVar5 = piVar8[2];
      *(*(uint * PTR32 *)(gen_frame + 0x40)) = uVar5 >> 1 & 7;
      *(*(uint * PTR32 *)(gen_frame + 0x3c)) = uVar5 >> 4;
      F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
      return 1;
    }
    F_00c49908(((undefined1 *)(gen_frame + 0x88)),0xf0,(*(byte * PTR32 *)(gen_frame + 0x64)));
    uVar4 = *(undefined4 *)((int)this + 0x820);
    iVar10 = (int)(*(ulonglong *)(gen_frame + 0x68));
    (*(int *)(gen_frame + 0x78)) = (int)(*(ulonglong *)(gen_frame + 0x68));
    (*(undefined4 *)(gen_frame + 0x7c)) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x68)) + 4));
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    piVar8 = (int *)F_00b48eb0(&(*(int *)(gen_frame + 0x78)),uVar16,uVar4,0x100,((code *)REFP(0xb48fb0)));
    if (((piVar8 != (int *)0x0) && (*piVar8 == iVar10)) && (piVar8[1] == (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x68)) + 4)))) {
      while (pbVar9 = (byte *)(piVar8 + 4), pbVar12 = (*(byte * PTR32 *)(gen_frame + 0x64)), (char)piVar8[4] != '\0') {
        do {
          bVar3 = *pbVar9;
          bVar14 = bVar3 < *pbVar12;
          if (bVar3 != *pbVar12) {
LAB_00b49e90: ;
            iVar10 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_00b49e95;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar9[1];
          bVar14 = bVar3 < pbVar12[1];
          if (bVar3 != pbVar12[1]) goto LAB_00b49e90;
          pbVar9 = pbVar9 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar3 != 0);
        iVar10 = 0;
LAB_00b49e95: ;
        if (iVar10 == 0) goto LAB_00b49ecc;
        if ((piVar8[0x40] != (int)(*(ulonglong *)(gen_frame + 0x68))) ||
           (piVar1 = piVar8 + 0x41, piVar8 = piVar8 + 0x40, *piVar1 != (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x68)) + 4)))) break;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
  return 0;
}

/* ref: FUN_00b49f00 */
uint F_00b49f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb49f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x81c) = 0;
  *(undefined4 *)((int)this + 0x820) = 0;
  *(undefined4 *)((int)this + 0x824) = 0;
  *(undefined4 *)((int)this + 0x828) = 0;
  *(undefined4 *)((int)this + 0x82c) = 0;
  *(undefined4 *)((int)this + 0x830) = 0;
  *(undefined4 *)((int)this + 0x838) = 0;
  F_00429f90((int)this + 0x83c);
  *(undefined4 *)((int)this + 0xa58) = 0;
  uVar1 = F_004296a0(0x38,0,0x2be);
  *(uint *)((int)this + 0xa54) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0xa54) + 4))) = *(int *)((int)this + 0xa54);
  *((int *)GEN_TOP((*(int *)((int)this + 0xa54) + 8))) = *(int *)((int)this + 0xa54);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xa54) + 0x30))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xa54) + 0x31))) = 1;
  *(undefined4 *)((int)this + 0xa68) = 0;
  uVar1 = F_004296a0(0x28,0,0x2be);
  *(uint *)((int)this + 0xa64) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0xa64) + 4))) = *(int *)((int)this + 0xa64);
  *((int *)GEN_TOP((*(int *)((int)this + 0xa64) + 8))) = *(int *)((int)this + 0xa64);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xa64) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xa64) + 0x21))) = 1;
  *(undefined4 *)((int)this + 0xa98) = 0;
  *(undefined1 *)((int)this + 0xa9c) = 0;
  *(undefined4 *)((int)this + 0xa44) = 0;
  *(undefined4 *)((int)this + 0xa48) = 0;
  *(undefined4 *)((int)this + 0xa4c) = 0;
  *(undefined4 *)((int)this + 0xa70) = 0;
  *(undefined4 *)((int)this + 0xa74) = 0;
  *(undefined4 *)((int)this + 0xa78) = 0;
  *(undefined4 *)((int)this + 0xa7c) = 0;
  *(undefined4 *)((int)this + 0xa80) = 0;
  *(undefined4 *)((int)this + 0xa84) = 0;
  *(undefined4 *)((int)this + 0xa88) = 0;
  *(undefined4 *)((int)this + 0xa8c) = 0;
  *(undefined4 *)((int)this + 0xa90) = 0;
  *(undefined4 *)((int)this + 0xa94) = 0;
  return (uint)this;
}

/* ref: FUN_00b4a040 */
byte F_00b4a040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb4a040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  int * piVar8;
  int iVar9;
  byte * pbVar10;
  byte * pbVar11;
  bool bVar12;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = param_2;
  (*(uint * PTR32 *)(gen_frame + 0x18)) = param_3;
  if (*(char *)((int)this + 5) != '\0') {
    bVar6 = F_00b49b40(this,param_1,param_2,param_3);
    F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
    return bVar6;
  }
  (*(ulonglong *)(gen_frame + 0x20)) = F_00b48e20(param_1);
  uVar2 = *(undefined4 *)((int)this + 0x81c);
  uVar3 = *(undefined4 *)((int)this + 0xa48);
  uVar4 = *(undefined4 *)((int)this + 0xa44);
  (*(ulonglong *)(gen_frame + 0x8)) = (*(ulonglong *)(gen_frame + 0x20));
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  uVar7 = F_00b48eb0(&(*(ulonglong *)(gen_frame + 0x8)),uVar4,uVar2,0x10,((code *)REFP(0xb48f70)));
  uVar5 = (*(ulonglong *)(gen_frame + 0x20));
  if (uVar7 != 0) {
    if ((*(byte *)(uVar7 + 8) & 1) == 0) {
      uVar7 = *(uint *)(uVar7 + 8);
LAB_00b4a1df: ;
      *(*(uint * PTR32 *)(gen_frame + 0x18)) = uVar7 >> 1 & 7;
      *(*(uint * PTR32 *)(gen_frame + 0x1c)) = uVar7 >> 4;
      F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
      return 1;
    }
    F_00c49908(((undefined1 *)(gen_frame + 0x38)),0xf0,param_1);
    uVar2 = *(undefined4 *)((int)this + 0x820);
    (*(ulonglong *)(gen_frame + 0x28)) = (*(ulonglong *)(gen_frame + 0x20));
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    piVar8 = (int *)F_00b48eb0(&(*(ulonglong *)(gen_frame + 0x28)),uVar3,uVar2,0x100,((code *)REFP(0xb48fb0)));
    uVar5 = (*(ulonglong *)(gen_frame + 0x20));
    if (((piVar8 != (int *)0x0) && (*piVar8 == (int)(*(ulonglong *)(gen_frame + 0x20)))) && (piVar8[1] == (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)))) {
      while (pbVar10 = (byte *)(piVar8 + 4), pbVar11 = param_1, (char)piVar8[4] != '\0') {
        do {
          bVar6 = *pbVar10;
          bVar12 = bVar6 < *pbVar11;
          if (bVar6 != *pbVar11) {
LAB_00b4a1a0: ;
            iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_00b4a1a5;
          }
          if (bVar6 == 0) break;
          bVar6 = pbVar10[1];
          bVar12 = bVar6 < pbVar11[1];
          if (bVar6 != pbVar11[1]) goto LAB_00b4a1a0;
          pbVar10 = pbVar10 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar6 != 0);
        iVar9 = 0;
LAB_00b4a1a5: ;
        if (iVar9 == 0) {
          uVar7 = piVar8[2];
          goto LAB_00b4a1df;
        }
        if ((piVar8[0x40] != (int)(*(ulonglong *)(gen_frame + 0x20))) ||
           (piVar1 = piVar8 + 0x41, piVar8 = piVar8 + 0x40, *piVar1 != (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)))) break;
      }
    }
  }
  (*(ulonglong *)(gen_frame + 0x20)) = uVar5;
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return 0;
}

/* ref: FUN_00b4a210 */
byte F_00b4a210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4a210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b4a230 */
byte F_00b4a230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4a230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b4a250 */
uint F_00b4a250(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a250u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x30;
}

/* ref: FUN_00b4a260 */
uint F_00b4a260(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a260u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x31;
}

/* ref: FUN_00b4a270 */
uint F_00b4a270(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a270u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a280 */
uint F_00b4a280(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00b4a290 */
uint F_00b4a290(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a290u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00b4a2a0 */
uint F_00b4a2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a2a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00b4a2b0 */
uint F_00b4a2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a2b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x31)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x31);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00b4a2d0 */
uint F_00b4a2d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a2d0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x31);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x31);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00b4a310 */
uint F_00b4a310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4a310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x38,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00b4a370 */
byte F_00b4a370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4a370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b4a3b0 */
uint F_00b4a3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a3b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00b4a3c0 */
uint F_00b4a3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a3c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x21;
}

/* ref: FUN_00b4a3d0 */
uint F_00b4a3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a3d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a3e0 */
uint F_00b4a3e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a3e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00b4a3f0 */
uint F_00b4a3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a3f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00b4a400 */
uint F_00b4a400(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00b4a410 */
uint F_00b4a410(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x21)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x21);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00b4a430 */
uint F_00b4a430(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a430u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x21);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x21);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00b4a470 */
uint F_00b4a470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4a470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00b4a4b0 */
unsigned int F_00b4a4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x31) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x31) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x31);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x31);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x31);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x31);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00b4a510 */
unsigned int F_00b4a510(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x21) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x21);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x21);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x21);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00b4a570 */
uint F_00b4a570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4a570u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x38,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00b4a5a0 */
uint F_00b4a5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4a5a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00b4a5f0 */
uint F_00b4a5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a5f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a600 */
uint F_00b4a600(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a610 */
uint F_00b4a610(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a610u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a630 */
uint F_00b4a630(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a630u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a690 */
uint F_00b4a690(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x31) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x31) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x31) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x31) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x31);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x31);
    }
    if (*(char *)(*(int *)this + 0x31) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00b4a6f0 */
uint F_00b4a6f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x21) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x21) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x21);
    }
    if (*(char *)(*(int *)this + 0x21) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00b4a750 */
uint F_00b4a750(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a760 */
uint F_00b4a760(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a770 */
uint F_00b4a770(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a770u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a780 */
uint F_00b4a780(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a790 */
uint F_00b4a790(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a790u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a7a0 */
uint F_00b4a7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4a7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4a7c0 */
uint F_00b4a7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a7c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a7d0 */
uint F_00b4a7d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a7d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a840 */
uint F_00b4a840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4a840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = *param_2;
  *(undefined4 *)((int)this + 0xc) = param_2[1];
  *(undefined4 *)((int)this + 0x10) = param_2[2];
  *(undefined4 *)((int)this + 0x14) = param_2[3];
  *(undefined4 *)((int)this + 0x18) = param_2[4];
  *(undefined4 *)((int)this + 0x1c) = param_2[5];
  return (uint)this;
}

/* ref: FUN_00b4a880 */
uint F_00b4a880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4a880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4a8a0 */
uint F_00b4a8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a8a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a8b0 */
uint F_00b4a8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4a8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4a8d0 */
uint F_00b4a8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4a8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4a8f0 */
uint F_00b4a8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4a8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return (uint)this;
}

/* ref: FUN_00b4a930 */
uint F_00b4a930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4a930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00b4a950 */
uint F_00b4a950(unsigned int gen_a0)
{
  GEN_ENTER(0xb4a950u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b4a960 */
uint F_00b4a960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4a960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = *param_2;
  *(undefined4 *)((int)this + 0xc) = param_2[1];
  *(undefined4 *)((int)this + 0x10) = param_2[2];
  *(undefined4 *)((int)this + 0x14) = param_2[3];
  *(undefined4 *)((int)this + 0x18) = param_2[4];
  *(undefined4 *)((int)this + 0x1c) = param_2[5];
  return (uint)this;
}

/* ref: FUN_00b4a9a0 */
uint F_00b4a9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4a9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4a9d0 */
uint F_00b4a9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4a9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00b4a9e0 */
uint F_00b4a9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4a9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4 + 0xa70);
  uVar1 = param_1;
  if (*(char *)((int)this_00 + 0x18) != '\0') {
    uVar1 = F_004f8b30(this_00);
  }
  return uVar1;
}

/* ref: FUN_00b4aa00 */
uint F_00b4aa00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4aa00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_004f8900(*(undefined * PTR32 *)((int)this + param_2 * 4 + 0xa70),param_1,0);
  return uVar1;
}

/* ref: FUN_00b4aa20 */
byte F_00b4aa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4aa20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b4aa70 */
uint F_00b4aa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4aa70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x31))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00b4aad0 */
uint F_00b4aad0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4aad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00b4ab20 */
uint F_00b4ab20(unsigned int gen_a0)
{
  GEN_ENTER(0xb4ab20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b4a4b0(this);
  return (uint)this;
}

/* ref: FUN_00b4ab40 */
uint F_00b4ab40(unsigned int gen_a0)
{
  GEN_ENTER(0xb4ab40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b4a510(this);
  return (uint)this;
}

/* ref: FUN_00b4ab50 */
uint F_00b4ab50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4ab50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00b4a510(this);
  return (uint)param_1;
}

/* ref: FUN_00b4ab90 */
undefined4 * F_00b4ab90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4ab90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x31) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[4] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x31) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00b4abc0 */
uint F_00b4abc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4abc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x21) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00b4ac20 */
uint F_00b4ac20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4ac20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x21))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00b4ac90 */
uint F_00b4ac90(unsigned int gen_a0)
{
  GEN_ENTER(0xb4ac90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00b4acb0 */
uint F_00b4acb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4acb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00b4a4b0(this);
  return (uint)param_1;
}

/* ref: FUN_00b4acd0 */
uint F_00b4acd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4acd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b4ace0 */
uint F_00b4ace0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4ace0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b4ad10 */
uint F_00b4ad10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4ad10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4ad50 */
uint F_00b4ad50(unsigned int gen_a0)
{
  GEN_ENTER(0xb4ad50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b4a690(this);
  return (uint)this;
}

/* ref: FUN_00b4ad60 */
uint F_00b4ad60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4ad60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4ad80 */
uint F_00b4ad80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4ad80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4ada0 */
uint F_00b4ada0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4ada0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b4a6f0(this);
  return (uint)this;
}

/* ref: FUN_00b4adb0 */
uint F_00b4adb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4adb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = *param_2;
  *(undefined4 *)((int)this + 0xc) = param_2[1];
  *(undefined4 *)((int)this + 0x10) = param_2[2];
  *(undefined4 *)((int)this + 0x14) = param_2[3];
  *(undefined4 *)((int)this + 0x18) = param_2[4];
  *(undefined4 *)((int)this + 0x1c) = param_2[5];
  return (uint)this;
}

/* ref: FUN_00b4adf0 */
uint F_00b4adf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4adf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4ae10 */
uint F_00b4ae10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4ae10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4ae30 */
uint F_00b4ae30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4ae30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4ae50 */
uint F_00b4ae50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4ae50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return (uint)this;
}

/* ref: FUN_00b4ae90 */
uint F_00b4ae90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4ae90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00b4aeb0 */
uint F_00b4aeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4aeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return (uint)this;
}

/* ref: FUN_00b4aef0 */
uint F_00b4aef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4aef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00b4af20 */
uint F_00b4af20(unsigned int gen_a0)
{
  GEN_ENTER(0xb4af20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b4a4b0(this);
  return (uint)this;
}

/* ref: FUN_00b4af40 */
uint F_00b4af40(unsigned int gen_a0)
{
  GEN_ENTER(0xb4af40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b4a510(this);
  return (uint)this;
}

/* ref: FUN_00b4af50 */
unsigned int F_00b4af50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4af50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x31);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00b4af50(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x38,0x2be);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x31);
  }
  return 0;
}

/* ref: FUN_00b4af90 */
uint F_00b4af90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4af90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x31) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00b4b010 */
unsigned int F_00b4b010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4b010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00b4b010(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x28,0x2be);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return 0;
}

/* ref: FUN_00b4b0f0 */
uint F_00b4b0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4b0f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b4b100 */
uint F_00b4b100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4b100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b4b110 */
uint F_00b4b110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4b110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  *param_1 = *param_2;
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  param_1[4] = param_3[2];
  param_1[5] = param_3[3];
  uVar1 = param_3[5];
  param_1[6] = param_3[4];
  param_1[7] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b4b150 */
uint F_00b4b150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4b150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00b4b170 */
uint F_00b4b170(unsigned int gen_a0)
{
  GEN_ENTER(0xb4b170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b4a690(this);
  return (uint)this;
}

/* ref: FUN_00b4b180 */
uint F_00b4b180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4b180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4b1a0 */
uint F_00b4b1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4b1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4b1c0 */
uint F_00b4b1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4b1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b4a6f0(this);
  return (uint)this;
}

/* ref: FUN_00b4b1d0 */
unsigned int F_00b4b1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb4b1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = *param_3;
    piVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      *param_3 = iVar5;
      if (*(char *)((int)piVar4 + 0x21) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x21) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x21);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x21);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x21);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return 0;
}

/* ref: FUN_00b4b240 */
unsigned int F_00b4b240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4b240u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
  }
  return 0;
}

/* ref: FUN_00b4b280 */
uint F_00b4b280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4b280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_00b4b2b0 */
uint F_00b4b2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4b2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x31);
  while (cVar1 == '\0') {
    F_00b4af50(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x38,0x2be);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x31);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00b4b310 */
uint F_00b4b310(unsigned int gen_a0)
{
  GEN_ENTER(0xb4b310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x21);
  while (cVar1 == '\0') {
    F_00b4b010(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x28,0x2be);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x21);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00b4b3f0 */
uint F_00b4b3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4b3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b4b400 */
uint F_00b4b400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4b400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b4b410 */
uint F_00b4b410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4b410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * local_8;
  
  puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
  local_8 = puVar5;
  if (*(char *)((int)puVar5[1] + 0x21) == '\0') {
    uVar1 = param_2[1];
    puVar3 = (undefined4 *)puVar5[1];
    do {
      uVar2 = puVar3[5];
      if ((uVar1 < uVar2) || ((uVar1 <= uVar2 && (*param_2 <= (uint)puVar3[4])))) {
        if ((*(char *)((int)puVar5 + 0x21) != '\0') &&
           ((uVar1 <= uVar2 && ((uVar1 < uVar2 || (*param_2 < (uint)puVar3[4])))))) {
          puVar5 = puVar3;
        }
        puVar4 = (undefined4 *)*puVar3;
        local_8 = puVar3;
      }
      else {
        puVar4 = (undefined4 *)puVar3[2];
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0x21) == '\0');
  }
  if (*(char *)((int)puVar5 + 0x21) == '\0') {
    puVar3 = (undefined4 *)*puVar5;
  }
  else {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar3 + 0x21) == '\0') {
    do {
      if (((uint)puVar3[5] < param_2[1]) ||
         (((uint)puVar3[5] <= param_2[1] && ((uint)puVar3[4] <= *param_2)))) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0x21) == '\0');
  }
  *param_1 = (int)local_8;
  param_1[1] = (int)puVar5;
  return (uint)param_1;
}

/* ref: FUN_00b4b4c0 */
unsigned int F_00b4b4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4b4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00b4b1d0(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_00b4b4e0 */
uint F_00b4b4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb4b4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x38,0x2be);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x30);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x30) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x30) == '\0') {
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(iVar2 + 0x30) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x30))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x31) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x30) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x30))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x31) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00b4b6dd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x30) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x31))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x30) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x30))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x31) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00b4b6dd;
      }
      *(undefined1 *)(piVar5 + 0xc) = 1;
      *(undefined1 *)(iVar2 + 0x30) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x30))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x30);
  } while( true );
}

/* ref: FUN_00b4b710 */
uint F_00b4b710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb4b710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x28,0x2be);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x20);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x20) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x20) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *(undefined1 *)(iVar2 + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x21) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x21) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00b4b90d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x20) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x21) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00b4b90d;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *(undefined1 *)(iVar2 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x20);
  } while( true );
}

/* ref: FUN_00b4b940 */
uint F_00b4b940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4b940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *param_3;
  uVar2 = param_3[5];
  uVar3 = param_3[3];
  uVar4 = param_3[4];
  uVar5 = param_3[6];
  uVar6 = param_3[7];
  if (param_2 != (undefined4 *)0x0) {
    param_2[2] = param_3[2];
    param_2[3] = uVar3;
    *param_2 = uVar1;
    param_2[4] = uVar4;
    param_2[5] = uVar2;
    param_2[6] = uVar5;
    param_2[7] = uVar6;
  }
  return (uint)param_2;
}

/* ref: FUN_00b4b990 */
uint F_00b4b990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4b990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
  }
  return (uint)param_2;
}

/* ref: FUN_00b4b9c0 */
uint F_00b4b9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4b9c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b4b9e0 */
uint F_00b4b9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4b9e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b4b9f0 */
uint F_00b4b9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4b9f0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x31))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00b4a4b0(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x31) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x31) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x31) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0xc];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0xc))) = (char)piVar3[0xc];
      *(char *)(piVar3 + 0xc) = (char)iVar1;
      goto LAB_00b4bb0a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x31) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x31) == '\0') {
      piVar4 = (int *)F_00b4a2d0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x31) == '\0') {
      uVar5 = F_00b4a2b0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00b4bb0a: ;
  if ((char)piVar3[0xc] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0xc] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0xc] == '\0') {
            *(undefined1 *)(piVar6 + 0xc) = 1;
            *(undefined1 *)(piVar4 + 0xc) = 0;
            F_00b4af90((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x31) == '\0') {
            if ((*(char *)(*piVar6 + 0x30) != '\x01') || (*(char *)(piVar6[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x30) = 1;
                *(undefined1 *)(piVar6 + 0xc) = 0;
                F_00b4aa70((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0xc) = (char)piVar4[0xc];
              *(undefined1 *)(piVar4 + 0xc) = 1;
              *(undefined1 *)(piVar6[2] + 0x30) = 1;
              F_00b4af90((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00b4bbc8: ;
            *(undefined1 *)(piVar6 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar6[0xc] == '\0') {
            *(undefined1 *)(piVar6 + 0xc) = 1;
            *(undefined1 *)(piVar4 + 0xc) = 0;
            F_00b4aa70((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x31) == '\0') {
            if ((*(char *)(piVar6[2] + 0x30) == '\x01') && (*(char *)(*piVar6 + 0x30) == '\x01'))
            goto LAB_00b4bbc8;
            if (*(char *)(*piVar6 + 0x30) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x30) = 1;
              *(undefined1 *)(piVar6 + 0xc) = 0;
              F_00b4af90((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0xc) = (char)piVar4[0xc];
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(*piVar6 + 0x30) = 1;
            F_00b4aa70((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0xc) = 1;
  }
  F_00429760(piVar3,0x38,0x2be);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00b4bc50 */
uint F_00b4bc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4bc50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b4bc70 */
uint F_00b4bc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4bc70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b4bc80 */
uint F_00b4bc80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4bc80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x31) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[4] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x31) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00b4bcc0 */
uint F_00b4bcc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4bcc0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x21))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00b4a510(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x21) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x21) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 8))) = (char)piVar3[8];
      *(char *)(piVar3 + 8) = (char)iVar1;
      goto LAB_00b4bdda;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x21) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      piVar4 = (int *)F_00b4a430(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar5 = F_00b4a410(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00b4bdda: ;
  if ((char)piVar3[8] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[8] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00b4abc0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(*piVar6 + 0x20) != '\x01') || (*(char *)(piVar6[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x20) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_00b4ac20((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              F_00b4abc0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00b4be98: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00b4ac20((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(piVar6[2] + 0x20) == '\x01') && (*(char *)(*piVar6 + 0x20) == '\x01'))
            goto LAB_00b4be98;
            if (*(char *)(*piVar6 + 0x20) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_00b4abc0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *(undefined1 *)(*piVar6 + 0x20) = 1;
            F_00b4ac20((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  F_00429760(piVar3,0x28,0x2be);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00b4bf20 */
uint F_00b4bf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4bf20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b4b410(this,param_1,param_2);
  return param_1;
}

/* ref: FUN_00b4bf40 */
uint F_00b4bf40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb4bf40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00b4b2b0(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x31) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x31) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x31);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x31);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x31);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x31);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00b4b9f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00b4bfe0 */
uint F_00b4bfe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb4bfe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x31) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0x10) < (uint)puVar2[4];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0x10) <= (uint)puVar2[4];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x31) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00b4b4e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00b4a690(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[4] < *(uint *)((*(int *)&gen_args[2]) + 0x10)) {
    puVar2 = (undefined4 *)F_00b4b4e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x38,0x2be);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00b4c0c0 */
uint F_00b4c0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb4c0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  bool bVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar6 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  cVar1 = *(char *)((int)puVar6 + 0x21);
  bVar2 = true;
  gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar4 = (*(int *)(gen_frame + 0x8));
  do {
    if (cVar1 != '\0') {
      (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
      if (bVar2) {
        if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
          puVar6 = (undefined4 *)F_00b4b710((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,(*(int *)&gen_args[2]));
          *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
          *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00b4a6f0(&(*(undefined4 * PTR32 *)&gen_args[3]));
      }
      puVar6 = (*(undefined4 * PTR32 *)&gen_args[3]);
      if (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14)) &&
         (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14) ||
          ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[4] < *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        puVar6 = (undefined4 *)F_00b4b710((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),iVar4,puVar3,(*(int *)&gen_args[2]));
        *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
        *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
      F_00429760((*(int *)&gen_args[2]),0x28,0x2be);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar6;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)iVar4 >> 8)));
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      if (((uint)puVar6[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14)) ||
         (((uint)puVar6[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14) &&
          ((uint)puVar6[4] <= *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        bVar2 = false;
        (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
        goto LAB_00b4c133;
      }
      puVar5 = (undefined4 *)*puVar6;
      bVar2 = true;
      (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
    }
    else {
      if ((*(uint *)((*(int *)&gen_args[2]) + 0x14) < (uint)puVar6[5]) ||
         ((*(uint *)((*(int *)&gen_args[2]) + 0x14) <= (uint)puVar6[5] &&
          (*(uint *)((*(int *)&gen_args[2]) + 0x10) <= (uint)puVar6[4])))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      bVar2 = !bVar2;
      (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (bVar2) {
        puVar5 = (undefined4 *)*puVar6;
      }
      else {
LAB_00b4c133: ;
        puVar5 = (undefined4 *)puVar6[2];
      }
    }
    cVar1 = *(char *)((int)puVar5 + 0x21);
    puVar3 = puVar6;
    puVar6 = puVar5;
    iVar4 = (*(int *)(gen_frame + 0x8));
  } while( true );
}

/* ref: FUN_00b4c1e0 */
uint F_00b4c1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4c1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  
  puVar7 = (undefined4 *)F_004296a0(0x38,0,0x2be);
  *puVar7 = *(undefined4 *)((int)this + 4);
  puVar7[1] = *(undefined4 *)((int)this + 4);
  puVar7[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar7 + 0xc) = 0;
  uVar1 = param_1[4];
  uVar2 = *param_1;
  uVar3 = param_1[3];
  uVar4 = param_1[5];
  uVar5 = param_1[6];
  uVar6 = param_1[7];
  if (puVar7 + 4 != (undefined4 *)0x0) {
    puVar7[6] = param_1[2];
    puVar7[4] = uVar2;
    puVar7[7] = uVar3;
    puVar7[8] = uVar1;
    puVar7[9] = uVar4;
    puVar7[10] = uVar5;
    puVar7[0xb] = uVar6;
  }
  return (uint)puVar7;
}

/* ref: FUN_00b4c260 */
uint F_00b4c260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4c260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)F_004296a0(0x28,0,0x2be);
  *puVar3 = *(undefined4 *)((int)this + 4);
  puVar3[1] = *(undefined4 *)((int)this + 4);
  puVar3[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar3 + 8) = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  if (puVar3 + 4 != (undefined4 *)0x0) {
    puVar3[4] = *param_1;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
  }
  return (uint)puVar3;
}

/* ref: FUN_00b4c2b0 */
uint F_00b4c2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4c2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x31) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[4] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x31) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[4] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00b4c320 */
uint F_00b4c320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb4c320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00b4b310(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x21);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x21);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x21);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00b4bcc0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00b4c3c0 */
uint F_00b4c3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb4c3c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00b4b410((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_00b4b1d0((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00b4c320((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b4c420 */
uint F_00b4c420(unsigned int gen_a0)
{
  GEN_ENTER(0xb4c420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00b4bf40(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00b4c440 */
uint F_00b4c440(unsigned int gen_a0)
{
  GEN_ENTER(0xb4c440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00b4c320(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00b4c460 */
uint F_00b4c460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4c460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00b4c1e0(this,param_2);
  F_00b4bfe0(this,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_00b4c490 */
uint F_00b4c490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4c490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)F_004296a0(0x28,0,0x2be);
  *puVar3 = *(undefined4 *)((int)this + 4);
  puVar3[1] = *(undefined4 *)((int)this + 4);
  puVar3[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar3 + 8) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (puVar3 + 4 != (undefined4 *)0x0) {
    puVar3[4] = *param_2;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
  }
  F_00b4c0c0(this,param_1,puVar3,0);
  return param_1;
}

/* ref: FUN_00b4c500 */
uint F_00b4c500(unsigned int gen_a0)
{
  GEN_ENTER(0xb4c500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00b4bf40(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x38,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00b4c540 */
uint F_00b4c540(unsigned int gen_a0)
{
  GEN_ENTER(0xb4c540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00b4c320(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00b4c580 */
uint F_00b4c580(unsigned int gen_a0)
{
  GEN_ENTER(0xb4c580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00b4bf40(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x38,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00b4c5c0 */
uint F_00b4c5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb4c5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00b4c320(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00b4c680 */
uint F_00b4c680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4c680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c49908(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00b4c6b0 */
uint F_00b4c6b0(void)
{
  GEN_ENTER(0xb4c6b0u, 0u, 0u, 0u, 0u);
  undefined * puVar1;
  undefined4 * puVar2;
  
  if (REFG(char, 0x14c3dc8) == '\0') {
    F_00c49908(&REFG(undefined, 0x14c3148),0x104,&REFG(undefined, 0x10f04a4));
    F_00c473c8(&REFG(undefined, 0x14c3148),0x104,REFG(undefined * PTR32, 0x133a898));
    REFG(undefined4, 0x14c3168) = 0;
    puVar2 = &REFG(undefined4, 0x14c2fb8);
    puVar1 = &REFG(undefined, 0x14c3148);
    do {
      *puVar2 = puVar1;
      puVar1 = puVar1 + 0x20;
      puVar2 = puVar2 + 1;
    } while ((int)puVar1 < 0x14c3dc8);
    REFG(char, 0x14c3dc8) = '\x01';
  }
  return 0x14c2fb8;
}

