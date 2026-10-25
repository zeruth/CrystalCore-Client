#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00b1d370 */
uint F_00b1d370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1d370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1fd0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1fd0) != (code *)0x0) && (REFG(int, 0x14c1fd4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1fd0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1fd0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1fd0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xae921f12)));
      REFG(int, 0x14c1fd4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1fd0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1fd0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xae921f12,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xae921f12,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1d4d0 */
uint F_00b1d4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1d4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1fd8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1fd8) != (code *)0x0) && (REFG(int, 0x14c1fdc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1fd8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1fd8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1fd8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8061a4b1)));
      REFG(int, 0x14c1fdc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1fd8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1fd8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8061a4b1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8061a4b1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1d630 */
uint F_00b1d630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1d630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1fe0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1fe0) != (code *)0x0) && (REFG(int, 0x14c1fe4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1fe0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1fe0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1fe0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc9175e8d)));
      REFG(int, 0x14c1fe4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1fe0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1fe0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc9175e8d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc9175e8d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1d790 */
uint F_00b1d790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1d790u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1fe8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1fe8) != (code *)0x0) && (REFG(int, 0x14c1fec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1fe8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1fe8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1fe8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb85de27c)));
      REFG(int, 0x14c1fec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1fe8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1fe8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb85de27c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb85de27c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1d8f0 */
uint F_00b1d8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1d8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1ff0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1ff0) != (code *)0x0) && (REFG(int, 0x14c1ff4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1ff0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1ff0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1ff0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe5ac921f)));
      REFG(int, 0x14c1ff4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1ff0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1ff0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe5ac921f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe5ac921f,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1da50 */
uint F_00b1da50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1da50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c1ff8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c1ff8) != (code *)0x0) && (REFG(int, 0x14c1ffc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c1ff8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c1ff8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c1ff8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd9930b07)));
      REFG(int, 0x14c1ffc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c1ff8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c1ff8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd9930b07,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd9930b07,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1dbb0 */
uint F_00b1dbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1dbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2000) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2000) != (code *)0x0) && (REFG(int, 0x14c2004) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2000) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2000) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2000) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x48b3ea59)));
      REFG(int, 0x14c2004) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2000) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2000);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x48b3ea59,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x48b3ea59,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1dd10 */
uint F_00b1dd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1dd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2008) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2008) != (code *)0x0) && (REFG(int, 0x14c200c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2008) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2008) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2008) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x34ef9506)));
      REFG(int, 0x14c200c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2008) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2008);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x34ef9506,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x34ef9506,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1de70 */
uint F_00b1de70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1de70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2010) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2010) != (code *)0x0) && (REFG(int, 0x14c2014) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2010) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2010) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2010) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5018ed61)));
      REFG(int, 0x14c2014) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2010) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2010);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5018ed61,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5018ed61,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1dfd0 */
uint F_00b1dfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1dfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2018) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2018) != (code *)0x0) && (REFG(int, 0x14c201c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2018) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2018) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2018) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xee1370cf)));
      REFG(int, 0x14c201c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2018) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2018);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xee1370cf,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xee1370cf,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1e130 */
uint F_00b1e130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1e130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2020) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2020) != (code *)0x0) && (REFG(int, 0x14c2024) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2020) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2020) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2020) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xadd604d1)));
      REFG(int, 0x14c2024) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2020) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2020);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xadd604d1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xadd604d1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1e290 */
uint F_00b1e290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1e290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2028) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2028) != (code *)0x0) && (REFG(int, 0x14c202c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2028) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2028) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2028) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xaea3fa32)));
      REFG(int, 0x14c202c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2028) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2028);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xaea3fa32,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xaea3fa32,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1e3f0 */
uint F_00b1e3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1e3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2030) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2030) != (code *)0x0) && (REFG(int, 0x14c2034) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2030) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2030) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2030) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x63e2f56f)));
      REFG(int, 0x14c2034) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2030) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2030);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x63e2f56f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x63e2f56f,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1e550 */
uint F_00b1e550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1e550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2038) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2038) != (code *)0x0) && (REFG(int, 0x14c203c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2038) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2038) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2038) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbe17923)));
      REFG(int, 0x14c203c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2038) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2038);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbe17923,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbe17923,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1e6b0 */
uint F_00b1e6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1e6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2040) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2040) != (code *)0x0) && (REFG(int, 0x14c2044) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2040) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2040) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2040) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x86f05d7a)));
      REFG(int, 0x14c2044) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2040) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2040);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x86f05d7a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x86f05d7a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1e810 */
uint F_00b1e810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1e810u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2048) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2048) != (code *)0x0) && (REFG(int, 0x14c204c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2048) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2048) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2048) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x329d77cd)));
      REFG(int, 0x14c204c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2048) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2048);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x329d77cd,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x329d77cd,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1e970 */
uint F_00b1e970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1e970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2050) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2050) != (code *)0x0) && (REFG(int, 0x14c2054) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2050) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2050) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2050) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4a35df54)));
      REFG(int, 0x14c2054) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2050) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2050);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4a35df54,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4a35df54,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1ead0 */
uint F_00b1ead0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1ead0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2058) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2058) != (code *)0x0) && (REFG(int, 0x14c205c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2058) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2058) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2058) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xeb7af173)));
      REFG(int, 0x14c205c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2058) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2058);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xeb7af173,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xeb7af173,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1ec30 */
uint F_00b1ec30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1ec30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2060) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2060) != (code *)0x0) && (REFG(int, 0x14c2064) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2060) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2060) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2060) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4e2f76a8)));
      REFG(int, 0x14c2064) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2060) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2060);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4e2f76a8,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4e2f76a8,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1ed90 */
uint F_00b1ed90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1ed90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2068) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2068) != (code *)0x0) && (REFG(int, 0x14c206c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2068) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2068) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2068) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xae5fbcfe)));
      REFG(int, 0x14c206c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2068) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2068);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xae5fbcfe,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xae5fbcfe,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1eef0 */
uint F_00b1eef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1eef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2070) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2070) != (code *)0x0) && (REFG(int, 0x14c2074) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2070) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2070) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2070) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb6d62591)));
      REFG(int, 0x14c2074) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2070) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2070);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb6d62591,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb6d62591,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1f050 */
uint F_00b1f050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1f050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2078) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2078) != (code *)0x0) && (REFG(int, 0x14c207c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2078) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2078) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2078) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc7026a87)));
      REFG(int, 0x14c207c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2078) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2078);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc7026a87,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc7026a87,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1f1b0 */
uint F_00b1f1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1f1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2080) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2080) != (code *)0x0) && (REFG(int, 0x14c2084) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2080) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2080) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2080) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7d554f8e)));
      REFG(int, 0x14c2084) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2080) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2080);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7d554f8e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7d554f8e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1f310 */
uint F_00b1f310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1f310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2088) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2088) != (code *)0x0) && (REFG(int, 0x14c208c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2088) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2088) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2088) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1730bfc9)));
      REFG(int, 0x14c208c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2088) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2088);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1730bfc9,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1730bfc9,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1f470 */
uint F_00b1f470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1f470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2090) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2090) != (code *)0x0) && (REFG(int, 0x14c2094) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2090) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2090) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2090) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x680de09)));
      REFG(int, 0x14c2094) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2090) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2090);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x680de09,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x680de09,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1f5d0 */
uint F_00b1f5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb1f5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2098) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2098) != (code *)0x0) && (REFG(int, 0x14c209c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2098) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2098) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2098) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x78dba2)));
      REFG(int, 0x14c209c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2098) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2098);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x78dba2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x78dba2,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1f730 */
uint F_00b1f730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1f730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c20a0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c20a0) != (code *)0x0) && (REFG(int, 0x14c20a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c20a0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c20a0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c20a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x785210a2)));
      REFG(int, 0x14c20a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c20a0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c20a0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x785210a2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x785210a2,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1f890 */
uint F_00b1f890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1f890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c20a8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c20a8) != (code *)0x0) && (REFG(int, 0x14c20ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c20a8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c20a8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c20a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcf8caf39)));
      REFG(int, 0x14c20ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c20a8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c20a8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcf8caf39,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcf8caf39,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1f9f0 */
uint F_00b1f9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1f9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c20b0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c20b0) != (code *)0x0) && (REFG(int, 0x14c20b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c20b0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c20b0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c20b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x96043cc7)));
      REFG(int, 0x14c20b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c20b0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c20b0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x96043cc7,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x96043cc7,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1fb50 */
uint F_00b1fb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1fb50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c20b8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c20b8) != (code *)0x0) && (REFG(int, 0x14c20bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c20b8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c20b8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c20b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbaaabfcc)));
      REFG(int, 0x14c20bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c20b8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c20b8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbaaabfcc,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbaaabfcc,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1fcb0 */
uint F_00b1fcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb1fcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c20c0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c20c0) != (code *)0x0) && (REFG(int, 0x14c20c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c20c0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c20c0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c20c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe3e89b6f)));
      REFG(int, 0x14c20c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c20c0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c20c0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe3e89b6f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe3e89b6f,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1fe10 */
uint F_00b1fe10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1fe10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c20c8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c20c8) != (code *)0x0) && (REFG(int, 0x14c20cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c20c8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c20c8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c20c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe83d6456)));
      REFG(int, 0x14c20cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c20c8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c20c8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe83d6456,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe83d6456,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b1ff70 */
uint F_00b1ff70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb1ff70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c20d0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c20d0) != (code *)0x0) && (REFG(int, 0x14c20d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c20d0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c20d0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c20d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x40a505e4)));
      REFG(int, 0x14c20d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c20d0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c20d0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x40a505e4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x40a505e4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b200d0 */
uint F_00b200d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb200d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c20d8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c20d8) != (code *)0x0) && (REFG(int, 0x14c20dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c20d8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c20d8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c20d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd2277e3a)));
      REFG(int, 0x14c20dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c20d8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c20d8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd2277e3a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd2277e3a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b20230 */
uint F_00b20230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb20230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c20e0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c20e0) != (code *)0x0) && (REFG(int, 0x14c20e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c20e0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c20e0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c20e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x36cff969)));
      REFG(int, 0x14c20e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c20e0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c20e0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x36cff969,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x36cff969,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b20390 */
uint F_00b20390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb20390u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c20e8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c20e8) != (code *)0x0) && (REFG(int, 0x14c20ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c20e8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c20e8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c20e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x34c9c2d4)));
      REFG(int, 0x14c20ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c20e8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c20e8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x34c9c2d4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x34c9c2d4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b204f0 */
uint F_00b204f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb204f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c20f0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c20f0) != (code *)0x0) && (REFG(int, 0x14c20f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c20f0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c20f0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c20f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xceee8e9f)));
      REFG(int, 0x14c20f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c20f0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c20f0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xceee8e9f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xceee8e9f,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b20650 */
uint F_00b20650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb20650u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c20f8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c20f8) != (code *)0x0) && (REFG(int, 0x14c20fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c20f8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c20f8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c20f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2ddfb66e)));
      REFG(int, 0x14c20fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c20f8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c20f8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2ddfb66e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2ddfb66e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b207c0 */
uint F_00b207c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb207c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2100) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2100) != (code *)0x0) && (REFG(int, 0x14c2104) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2100) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2100) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2100) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc33baeb1)));
      REFG(int, 0x14c2104) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2100) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2100);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc33baeb1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc33baeb1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b20920 */
uint F_00b20920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb20920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2108) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2108) != (code *)0x0) && (REFG(int, 0x14c210c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2108) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2108) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2108) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1bb18724)));
      REFG(int, 0x14c210c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2108) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2108);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1bb18724,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1bb18724,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b20a80 */
uint F_00b20a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb20a80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2110) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2110) != (code *)0x0) && (REFG(int, 0x14c2114) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2110) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2110) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2110) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1be0b8e5)));
      REFG(int, 0x14c2114) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2110) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2110);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1be0b8e5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1be0b8e5,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b20be0 */
uint F_00b20be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb20be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2118) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2118) != (code *)0x0) && (REFG(int, 0x14c211c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2118) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2118) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2118) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2a0a350f)));
      REFG(int, 0x14c211c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2118) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2118);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2a0a350f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2a0a350f,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b20d40 */
uint F_00b20d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb20d40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2120) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2120) != (code *)0x0) && (REFG(int, 0x14c2124) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2120) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2120) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2120) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe4715417)));
      REFG(int, 0x14c2124) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2120) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2120);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe4715417,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe4715417,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b20ea0 */
uint F_00b20ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb20ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2128) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2128) != (code *)0x0) && (REFG(int, 0x14c212c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2128) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2128) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2128) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xacc3da0a)));
      REFG(int, 0x14c212c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2128) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2128);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xacc3da0a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xacc3da0a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b21000 */
uint F_00b21000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb21000u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2130) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2130) != (code *)0x0) && (REFG(int, 0x14c2134) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2130) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2130) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2130) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2d43fb31)));
      REFG(int, 0x14c2134) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2130) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2130);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2d43fb31,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2d43fb31,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b21160 */
uint F_00b21160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb21160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2138) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2138) != (code *)0x0) && (REFG(int, 0x14c213c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2138) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2138) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2138) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa561fd7d)));
      REFG(int, 0x14c213c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2138) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2138);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa561fd7d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa561fd7d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b212c0 */
uint F_00b212c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb212c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2140) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2140) != (code *)0x0) && (REFG(int, 0x14c2144) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2140) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2140) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2140) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6e042794)));
      REFG(int, 0x14c2144) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2140) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2140);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6e042794,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6e042794,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b21420 */
uint F_00b21420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb21420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2148) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2148) != (code *)0x0) && (REFG(int, 0x14c214c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2148) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2148) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2148) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc74925a0)));
      REFG(int, 0x14c214c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2148) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2148);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc74925a0,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc74925a0,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b21580 */
uint F_00b21580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb21580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2150) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2150) != (code *)0x0) && (REFG(int, 0x14c2154) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2150) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2150) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2150) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd048c3b1)));
      REFG(int, 0x14c2154) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2150) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2150);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd048c3b1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd048c3b1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b216e0 */
uint F_00b216e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb216e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2158) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2158) != (code *)0x0) && (REFG(int, 0x14c215c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2158) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2158) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2158) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x46fbeb03)));
      REFG(int, 0x14c215c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2158) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2158);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x46fbeb03,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x46fbeb03,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b21840 */
uint F_00b21840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb21840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2160) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2160) != (code *)0x0) && (REFG(int, 0x14c2164) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2160) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2160) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2160) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5a04b644)));
      REFG(int, 0x14c2164) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2160) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2160);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5a04b644,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5a04b644,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b219a0 */
uint F_00b219a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb219a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2168) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2168) != (code *)0x0) && (REFG(int, 0x14c216c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2168) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2168) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2168) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe332fa47)));
      REFG(int, 0x14c216c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2168) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2168);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe332fa47,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe332fa47,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b21b00 */
uint F_00b21b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb21b00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2170) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2170) != (code *)0x0) && (REFG(int, 0x14c2174) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2170) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2170) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2170) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x22d54523)));
      REFG(int, 0x14c2174) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2170) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2170);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x22d54523,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x22d54523,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b21c60 */
uint F_00b21c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb21c60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2178) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2178) != (code *)0x0) && (REFG(int, 0x14c217c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2178) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2178) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2178) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x57f7caac)));
      REFG(int, 0x14c217c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2178) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2178);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x57f7caac,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x57f7caac,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b21dc0 */
uint F_00b21dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb21dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2180) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2180) != (code *)0x0) && (REFG(int, 0x14c2184) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2180) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2180) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2180) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x11104158)));
      REFG(int, 0x14c2184) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2180) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2180);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x11104158,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x11104158,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b21f20 */
uint F_00b21f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb21f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2188) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2188) != (code *)0x0) && (REFG(int, 0x14c218c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2188) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2188) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2188) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdcb616c3)));
      REFG(int, 0x14c218c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2188) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2188);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdcb616c3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdcb616c3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b22080 */
uint F_00b22080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb22080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2190) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2190) != (code *)0x0) && (REFG(int, 0x14c2194) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2190) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2190) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2190) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1ea54a3b)));
      REFG(int, 0x14c2194) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2190) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2190);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1ea54a3b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1ea54a3b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b221e0 */
uint F_00b221e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb221e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2198) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2198) != (code *)0x0) && (REFG(int, 0x14c219c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2198) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2198) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2198) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7bcf4ac)));
      REFG(int, 0x14c219c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2198) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2198);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7bcf4ac,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7bcf4ac,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b22340 */
uint F_00b22340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb22340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c21a0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c21a0) != (code *)0x0) && (REFG(int, 0x14c21a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c21a0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c21a0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c21a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xda141340)));
      REFG(int, 0x14c21a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c21a0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c21a0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xda141340,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xda141340,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b224a0 */
uint F_00b224a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb224a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c21a8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c21a8) != (code *)0x0) && (REFG(int, 0x14c21ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c21a8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c21a8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c21a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x891fa0ae)));
      REFG(int, 0x14c21ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c21a8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c21a8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x891fa0ae,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x891fa0ae,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b22600 */
uint F_00b22600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb22600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c21b0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c21b0) != (code *)0x0) && (REFG(int, 0x14c21b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c21b0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c21b0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c21b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8f6ed0fb)));
      REFG(int, 0x14c21b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c21b0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c21b0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8f6ed0fb,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8f6ed0fb,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b22760 */
uint F_00b22760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb22760u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c21b8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c21b8) != (code *)0x0) && (REFG(int, 0x14c21bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c21b8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c21b8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c21b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x518a32c)));
      REFG(int, 0x14c21bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c21b8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c21b8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x518a32c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x518a32c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b228c0 */
uint F_00b228c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb228c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c21c0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c21c0) != (code *)0x0) && (REFG(int, 0x14c21c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c21c0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c21c0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c21c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x987947cd)));
      REFG(int, 0x14c21c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c21c0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c21c0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x987947cd,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x987947cd,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b22a20 */
uint F_00b22a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb22a20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c21c8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c21c8) != (code *)0x0) && (REFG(int, 0x14c21cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c21c8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c21c8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c21c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd8c4fe63)));
      REFG(int, 0x14c21cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c21c8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c21c8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd8c4fe63,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd8c4fe63,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b22b80 */
uint F_00b22b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb22b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c21d0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c21d0) != (code *)0x0) && (REFG(int, 0x14c21d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c21d0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c21d0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c21d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xba94c56e)));
      REFG(int, 0x14c21d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c21d0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c21d0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xba94c56e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xba94c56e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b22ce0 */
uint F_00b22ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb22ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c21d8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c21d8) != (code *)0x0) && (REFG(int, 0x14c21dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c21d8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c21d8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c21d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x843c0256)));
      REFG(int, 0x14c21dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c21d8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c21d8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x843c0256,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x843c0256,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b22e40 */
uint F_00b22e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb22e40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c21e0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c21e0) != (code *)0x0) && (REFG(int, 0x14c21e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c21e0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c21e0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c21e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcdf27911)));
      REFG(int, 0x14c21e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c21e0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c21e0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcdf27911,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcdf27911,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b22fa0 */
uint F_00b22fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb22fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c21e8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c21e8) != (code *)0x0) && (REFG(int, 0x14c21ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c21e8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c21e8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c21e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6ff81213)));
      REFG(int, 0x14c21ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c21e8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c21e8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6ff81213,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6ff81213,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b23100 */
uint F_00b23100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb23100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c21f0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c21f0) != (code *)0x0) && (REFG(int, 0x14c21f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c21f0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c21f0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c21f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf4dae6b)));
      REFG(int, 0x14c21f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c21f0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c21f0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf4dae6b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf4dae6b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b23260 */
uint F_00b23260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb23260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c21f8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c21f8) != (code *)0x0) && (REFG(int, 0x14c21fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c21f8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c21f8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c21f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x927da4f6)));
      REFG(int, 0x14c21fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c21f8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c21f8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x927da4f6,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x927da4f6,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b233c0 */
uint F_00b233c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb233c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2200) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2200) != (code *)0x0) && (REFG(int, 0x14c2204) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2200) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2200) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2200) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x88c82104)));
      REFG(int, 0x14c2204) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2200) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2200);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x88c82104,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x88c82104,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b23520 */
uint F_00b23520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb23520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2208) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2208) != (code *)0x0) && (REFG(int, 0x14c220c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2208) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2208) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2208) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfdfc7d49)));
      REFG(int, 0x14c220c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2208) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2208);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfdfc7d49,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfdfc7d49,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b23940 */
uint F_00b23940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb23940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2220) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2220) != (code *)0x0) && (REFG(int, 0x14c2224) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2220) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2220) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2220) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x60ded2ed)));
      REFG(int, 0x14c2224) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2220) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2220);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x60ded2ed,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x60ded2ed,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b23aa0 */
uint F_00b23aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb23aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2228) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2228) != (code *)0x0) && (REFG(int, 0x14c222c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2228) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2228) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2228) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7d656244)));
      REFG(int, 0x14c222c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2228) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2228);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7d656244,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7d656244,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b23c00 */
uint F_00b23c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb23c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2230) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2230) != (code *)0x0) && (REFG(int, 0x14c2234) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2230) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2230) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2230) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe3640a56)));
      REFG(int, 0x14c2234) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2230) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2230);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe3640a56,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe3640a56,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b23d60 */
uint F_00b23d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb23d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2238) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2238) != (code *)0x0) && (REFG(int, 0x14c223c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2238) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2238) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2238) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd258bb5)));
      REFG(int, 0x14c223c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2238) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2238);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd258bb5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd258bb5,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b23ec0 */
uint F_00b23ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb23ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2240) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2240) != (code *)0x0) && (REFG(int, 0x14c2244) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2240) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2240) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2240) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe9c425a1)));
      REFG(int, 0x14c2244) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2240) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2240);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe9c425a1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe9c425a1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b24020 */
uint F_00b24020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb24020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2248) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2248) != (code *)0x0) && (REFG(int, 0x14c224c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2248) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2248) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2248) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x34c0b13d)));
      REFG(int, 0x14c224c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2248) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2248);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x34c0b13d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x34c0b13d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b24180 */
uint F_00b24180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb24180u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2250) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2250) != (code *)0x0) && (REFG(int, 0x14c2254) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2250) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2250) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2250) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdf0dfcdd)));
      REFG(int, 0x14c2254) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2250) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2250);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdf0dfcdd,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdf0dfcdd,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b242f0 */
uint F_00b242f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb242f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2258) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2258) != (code *)0x0) && (REFG(int, 0x14c225c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2258) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2258) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2258) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x932ac8fb)));
      REFG(int, 0x14c225c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2258) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2258);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x932ac8fb,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x932ac8fb,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b24450 */
uint F_00b24450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb24450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2260) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2260) != (code *)0x0) && (REFG(int, 0x14c2264) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2260) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2260) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2260) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8159e87a)));
      REFG(int, 0x14c2264) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2260) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2260);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8159e87a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8159e87a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b245b0 */
uint F_00b245b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb245b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2268) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2268) != (code *)0x0) && (REFG(int, 0x14c226c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2268) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2268) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2268) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfcabd23a)));
      REFG(int, 0x14c226c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2268) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2268);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfcabd23a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfcabd23a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b24710 */
uint F_00b24710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb24710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2270) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2270) != (code *)0x0) && (REFG(int, 0x14c2274) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2270) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2270) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2270) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5dfab48a)));
      REFG(int, 0x14c2274) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2270) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2270);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5dfab48a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5dfab48a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b24870 */
uint F_00b24870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb24870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2278) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2278) != (code *)0x0) && (REFG(int, 0x14c227c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2278) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2278) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2278) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2fde12c5)));
      REFG(int, 0x14c227c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2278) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2278);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2fde12c5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2fde12c5,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b249d0 */
uint F_00b249d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb249d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2280) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2280) != (code *)0x0) && (REFG(int, 0x14c2284) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2280) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2280) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2280) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe812eb07)));
      REFG(int, 0x14c2284) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2280) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2280);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe812eb07,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe812eb07,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b24b30 */
uint F_00b24b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb24b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2288) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2288) != (code *)0x0) && (REFG(int, 0x14c228c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2288) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2288) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2288) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x283ac65a)));
      REFG(int, 0x14c228c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2288) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2288);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x283ac65a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x283ac65a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b24c90 */
uint F_00b24c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb24c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2290) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2290) != (code *)0x0) && (REFG(int, 0x14c2294) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2290) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2290) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2290) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4d7b0709)));
      REFG(int, 0x14c2294) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2290) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2290);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4d7b0709,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4d7b0709,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b24df0 */
uint F_00b24df0(unsigned int gen_a0)
{
  GEN_ENTER(0xb24df0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2298) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2298) != (code *)0x0) && (REFG(int, 0x14c229c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2298) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2298) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2298) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x15658be6)));
      REFG(int, 0x14c229c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2298) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2298);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x15658be6,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x15658be6,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b24f40 */
uint F_00b24f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb24f40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c22a0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c22a0) != (code *)0x0) && (REFG(int, 0x14c22a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c22a0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c22a0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c22a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x25201f3d)));
      REFG(int, 0x14c22a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c22a0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c22a0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x25201f3d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x25201f3d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b250a0 */
uint F_00b250a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb250a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c22a8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c22a8) != (code *)0x0) && (REFG(int, 0x14c22ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c22a8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c22a8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c22a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa81f8992)));
      REFG(int, 0x14c22ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c22a8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c22a8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa81f8992,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa81f8992,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b25200 */
uint F_00b25200(unsigned int gen_a0)
{
  GEN_ENTER(0xb25200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c22b0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c22b0) != (code *)0x0) && (REFG(int, 0x14c22b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c22b0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c22b0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c22b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8a50f126)));
      REFG(int, 0x14c22b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c22b0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c22b0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8a50f126,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8a50f126,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b25350 */
uint F_00b25350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb25350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c22b8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c22b8) != (code *)0x0) && (REFG(int, 0x14c22bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c22b8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c22b8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c22b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x76a70e8d)));
      REFG(int, 0x14c22bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c22b8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c22b8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x76a70e8d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x76a70e8d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b254b0 */
uint F_00b254b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb254b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c22c0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c22c0) != (code *)0x0) && (REFG(int, 0x14c22c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c22c0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c22c0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c22c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x28766157)));
      REFG(int, 0x14c22c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c22c0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c22c0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x28766157,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x28766157,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b25610 */
uint F_00b25610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb25610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c22c8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c22c8) != (code *)0x0) && (REFG(int, 0x14c22cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c22c8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c22c8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c22c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc16c7e2c)));
      REFG(int, 0x14c22cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c22c8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c22c8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc16c7e2c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc16c7e2c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b25770 */
uint F_00b25770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb25770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c22d0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c22d0) != (code *)0x0) && (REFG(int, 0x14c22d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c22d0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c22d0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c22d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa4dfd3f2)));
      REFG(int, 0x14c22d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c22d0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c22d0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa4dfd3f2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa4dfd3f2,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b258d0 */
uint F_00b258d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb258d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c22d8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c22d8) != (code *)0x0) && (REFG(int, 0x14c22dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c22d8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c22d8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c22d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xedcf624e)));
      REFG(int, 0x14c22dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c22d8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c22d8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xedcf624e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xedcf624e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b25a30 */
uint F_00b25a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb25a30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c22e0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c22e0) != (code *)0x0) && (REFG(int, 0x14c22e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c22e0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c22e0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c22e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x34206d86)));
      REFG(int, 0x14c22e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c22e0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c22e0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x34206d86,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x34206d86,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b25b90 */
uint F_00b25b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb25b90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c22e8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c22e8) != (code *)0x0) && (REFG(int, 0x14c22ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c22e8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c22e8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c22e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x70916171)));
      REFG(int, 0x14c22ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c22e8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c22e8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x70916171,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x70916171,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b25cf0 */
uint F_00b25cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb25cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c22f0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c22f0) != (code *)0x0) && (REFG(int, 0x14c22f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c22f0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c22f0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c22f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xad95f5ed)));
      REFG(int, 0x14c22f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c22f0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c22f0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xad95f5ed,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xad95f5ed,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b25e50 */
uint F_00b25e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb25e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c22f8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c22f8) != (code *)0x0) && (REFG(int, 0x14c22fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c22f8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c22f8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c22f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6c1f3fe4)));
      REFG(int, 0x14c22fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c22f8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c22f8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6c1f3fe4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6c1f3fe4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b25fb0 */
uint F_00b25fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb25fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2300) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2300) != (code *)0x0) && (REFG(int, 0x14c2304) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2300) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2300) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2300) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4537df)));
      REFG(int, 0x14c2304) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2300) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2300);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4537df,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4537df,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b26110 */
uint F_00b26110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb26110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2308) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2308) != (code *)0x0) && (REFG(int, 0x14c230c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2308) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2308) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2308) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x65b1c5f5)));
      REFG(int, 0x14c230c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2308) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2308);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x65b1c5f5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x65b1c5f5,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b26270 */
uint F_00b26270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb26270u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2310) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2310) != (code *)0x0) && (REFG(int, 0x14c2314) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2310) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2310) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2310) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfab69565)));
      REFG(int, 0x14c2314) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2310) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2310);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfab69565,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfab69565,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b263d0 */
uint F_00b263d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb263d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2318) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2318) != (code *)0x0) && (REFG(int, 0x14c231c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2318) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2318) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2318) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf5e10439)));
      REFG(int, 0x14c231c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2318) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2318);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf5e10439,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf5e10439,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b26530 */
uint F_00b26530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb26530u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2320) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2320) != (code *)0x0) && (REFG(int, 0x14c2324) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2320) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2320) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2320) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf3b11e68)));
      REFG(int, 0x14c2324) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2320) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2320);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf3b11e68,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf3b11e68,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b26690 */
uint F_00b26690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb26690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2328) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2328) != (code *)0x0) && (REFG(int, 0x14c232c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2328) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2328) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2328) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf089eef5)));
      REFG(int, 0x14c232c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2328) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2328);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf089eef5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf089eef5,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b267f0 */
uint F_00b267f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb267f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2330) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2330) != (code *)0x0) && (REFG(int, 0x14c2334) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2330) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2330) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2330) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa8064f9)));
      REFG(int, 0x14c2334) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2330) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2330);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa8064f9,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa8064f9,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b26950 */
uint F_00b26950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb26950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2338) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2338) != (code *)0x0) && (REFG(int, 0x14c233c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2338) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2338) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2338) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5f608315)));
      REFG(int, 0x14c233c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2338) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2338);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5f608315,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5f608315,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b26ab0 */
uint F_00b26ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xb26ab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2340) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2340) != (code *)0x0) && (REFG(int, 0x14c2344) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2340) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2340) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2340) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x540ee82e)));
      REFG(int, 0x14c2344) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2340) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2340);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x540ee82e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x540ee82e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b26c00 */
uint F_00b26c00(unsigned int gen_a0)
{
  GEN_ENTER(0xb26c00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2348) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2348) != (code *)0x0) && (REFG(int, 0x14c234c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2348) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2348) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2348) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9723d3a2)));
      REFG(int, 0x14c234c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2348) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2348);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9723d3a2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9723d3a2,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b26d50 */
uint F_00b26d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb26d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2350) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2350) != (code *)0x0) && (REFG(int, 0x14c2354) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2350) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2350) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2350) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x68888eb4)));
      REFG(int, 0x14c2354) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2350) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2350);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x68888eb4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x68888eb4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b26eb0 */
uint F_00b26eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb26eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2358) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2358) != (code *)0x0) && (REFG(int, 0x14c235c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2358) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2358) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2358) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x71913023)));
      REFG(int, 0x14c235c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2358) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2358);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x71913023,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x71913023,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b27010 */
uint F_00b27010(unsigned int gen_a0)
{
  GEN_ENTER(0xb27010u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2360) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2360) != (code *)0x0) && (REFG(int, 0x14c2364) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2360) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2360) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2360) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x583113ed)));
      REFG(int, 0x14c2364) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2360) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2360);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x583113ed,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x583113ed,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b27160 */
uint F_00b27160(unsigned int gen_a0)
{
  GEN_ENTER(0xb27160u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2368) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2368) != (code *)0x0) && (REFG(int, 0x14c236c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2368) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2368) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2368) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc07e210f)));
      REFG(int, 0x14c236c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2368) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2368);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc07e210f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc07e210f,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b272b0 */
uint F_00b272b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb272b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2370) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2370) != (code *)0x0) && (REFG(int, 0x14c2374) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2370) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2370) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2370) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x271c1109)));
      REFG(int, 0x14c2374) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2370) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2370);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x271c1109,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x271c1109,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b27400 */
uint F_00b27400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb27400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2378) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2378) != (code *)0x0) && (REFG(int, 0x14c237c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2378) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2378) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2378) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x66af10b7)));
      REFG(int, 0x14c237c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2378) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2378);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x66af10b7,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x66af10b7,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b27560 */
uint F_00b27560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb27560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2380) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2380) != (code *)0x0) && (REFG(int, 0x14c2384) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2380) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2380) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2380) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5ac7f8e5)));
      REFG(int, 0x14c2384) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2380) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2380);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5ac7f8e5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5ac7f8e5,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b276c0 */
uint F_00b276c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb276c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2388) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2388) != (code *)0x0) && (REFG(int, 0x14c238c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2388) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2388) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2388) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xca1ddaf3)));
      REFG(int, 0x14c238c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2388) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2388);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xca1ddaf3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xca1ddaf3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b27820 */
uint F_00b27820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb27820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2390) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2390) != (code *)0x0) && (REFG(int, 0x14c2394) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2390) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2390) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2390) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc71f85a6)));
      REFG(int, 0x14c2394) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2390) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2390);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc71f85a6,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc71f85a6,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b27ae0 */
uint F_00b27ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb27ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c23a0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c23a0) != (code *)0x0) && (REFG(int, 0x14c23a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c23a0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c23a0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c23a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x77a796f3)));
      REFG(int, 0x14c23a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c23a0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c23a0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x77a796f3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x77a796f3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b27da0 */
uint F_00b27da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb27da0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c23b0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c23b0) != (code *)0x0) && (REFG(int, 0x14c23b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c23b0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c23b0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c23b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe6dbea69)));
      REFG(int, 0x14c23b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c23b0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c23b0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe6dbea69,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe6dbea69,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b27f00 */
uint F_00b27f00(unsigned int gen_a0)
{
  GEN_ENTER(0xb27f00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c23b8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c23b8) != (code *)0x0) && (REFG(int, 0x14c23bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c23b8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c23b8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c23b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xde1f9b45)));
      REFG(int, 0x14c23bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c23b8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c23b8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xde1f9b45,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xde1f9b45,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28050 */
uint F_00b28050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb28050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c23c0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c23c0) != (code *)0x0) && (REFG(int, 0x14c23c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c23c0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c23c0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c23c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd2488b79)));
      REFG(int, 0x14c23c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c23c0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c23c0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd2488b79,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd2488b79,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b281b0 */
uint F_00b281b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb281b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c23c8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c23c8) != (code *)0x0) && (REFG(int, 0x14c23cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c23c8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c23c8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c23c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbd71f0c9)));
      REFG(int, 0x14c23cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c23c8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c23c8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbd71f0c9,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbd71f0c9,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28310 */
uint F_00b28310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb28310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c23d0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c23d0) != (code *)0x0) && (REFG(int, 0x14c23d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c23d0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c23d0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c23d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa57457a4)));
      REFG(int, 0x14c23d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c23d0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c23d0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa57457a4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa57457a4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28470 */
uint F_00b28470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb28470u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c23d8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c23d8) != (code *)0x0) && (REFG(int, 0x14c23dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c23d8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c23d8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c23d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb34bab4f)));
      REFG(int, 0x14c23dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c23d8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c23d8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb34bab4f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb34bab4f,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b285d0 */
uint F_00b285d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb285d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c23e0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c23e0) != (code *)0x0) && (REFG(int, 0x14c23e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c23e0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c23e0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c23e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6a9f5b63)));
      REFG(int, 0x14c23e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c23e0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c23e0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6a9f5b63,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6a9f5b63,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28730 */
uint F_00b28730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb28730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c23e8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c23e8) != (code *)0x0) && (REFG(int, 0x14c23ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c23e8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c23e8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c23e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7f7f4600)));
      REFG(int, 0x14c23ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c23e8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c23e8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7f7f4600,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7f7f4600,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28890 */
uint F_00b28890(unsigned int gen_a0)
{
  GEN_ENTER(0xb28890u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c23f0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c23f0) != (code *)0x0) && (REFG(int, 0x14c23f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c23f0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c23f0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c23f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa629da31)));
      REFG(int, 0x14c23f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c23f0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c23f0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa629da31,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa629da31,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b289e0 */
uint F_00b289e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb289e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c23f8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c23f8) != (code *)0x0) && (REFG(int, 0x14c23fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c23f8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c23f8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c23f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9a1b9365)));
      REFG(int, 0x14c23fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c23f8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c23f8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9a1b9365,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9a1b9365,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28b30 */
uint F_00b28b30(unsigned int gen_a0)
{
  GEN_ENTER(0xb28b30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2400) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2400) != (code *)0x0) && (REFG(int, 0x14c2404) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2400) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2400) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2400) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x254a187)));
      REFG(int, 0x14c2404) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2400) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2400);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x254a187,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x254a187,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28c80 */
uint F_00b28c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb28c80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2408) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2408) != (code *)0x0) && (REFG(int, 0x14c240c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2408) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2408) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2408) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x76bfa16b)));
      REFG(int, 0x14c240c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2408) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2408);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x76bfa16b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x76bfa16b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28de0 */
uint F_00b28de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb28de0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2410) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2410) != (code *)0x0) && (REFG(int, 0x14c2414) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2410) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2410) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2410) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x50016c78)));
      REFG(int, 0x14c2414) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2410) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2410);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x50016c78,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x50016c78,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28f40 */
uint F_00b28f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb28f40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2418) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2418) != (code *)0x0) && (REFG(int, 0x14c241c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2418) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2418) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2418) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9abdd40d)));
      REFG(int, 0x14c241c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2418) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2418);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9abdd40d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9abdd40d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b290a0 */
uint F_00b290a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb290a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2420) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2420) != (code *)0x0) && (REFG(int, 0x14c2424) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2420) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2420) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2420) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x20de9260)));
      REFG(int, 0x14c2424) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2420) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2420);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x20de9260,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x20de9260,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29200 */
uint F_00b29200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb29200u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2428) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2428) != (code *)0x0) && (REFG(int, 0x14c242c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2428) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2428) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2428) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x63f9799e)));
      REFG(int, 0x14c242c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2428) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2428);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x63f9799e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x63f9799e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29360 */
uint F_00b29360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb29360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2430) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2430) != (code *)0x0) && (REFG(int, 0x14c2434) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2430) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2430) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2430) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x35c29134)));
      REFG(int, 0x14c2434) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2430) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2430);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x35c29134,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x35c29134,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b294c0 */
uint F_00b294c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb294c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2438) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2438) != (code *)0x0) && (REFG(int, 0x14c243c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2438) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2438) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2438) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa70503b2)));
      REFG(int, 0x14c243c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2438) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2438);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa70503b2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa70503b2,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29620 */
uint F_00b29620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb29620u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2440) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2440) != (code *)0x0) && (REFG(int, 0x14c2444) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2440) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2440) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2440) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x22a78b05)));
      REFG(int, 0x14c2444) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2440) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2440);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x22a78b05,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x22a78b05,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29780 */
uint F_00b29780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb29780u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2448) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2448) != (code *)0x0) && (REFG(int, 0x14c244c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2448) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2448) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2448) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4888d790)));
      REFG(int, 0x14c244c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2448) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2448);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4888d790,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4888d790,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b298e0 */
uint F_00b298e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb298e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2450) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2450) != (code *)0x0) && (REFG(int, 0x14c2454) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2450) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2450) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2450) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2863148d)));
      REFG(int, 0x14c2454) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2450) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2450);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2863148d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2863148d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29a30 */
uint F_00b29a30(unsigned int gen_a0)
{
  GEN_ENTER(0xb29a30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2458) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2458) != (code *)0x0) && (REFG(int, 0x14c245c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2458) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2458) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2458) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xab163097)));
      REFG(int, 0x14c245c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2458) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2458);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xab163097,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xab163097,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29b80 */
uint F_00b29b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb29b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2460) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2460) != (code *)0x0) && (REFG(int, 0x14c2464) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2460) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2460) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2460) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x67b5db55)));
      REFG(int, 0x14c2464) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2460) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2460);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x67b5db55,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x67b5db55,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29ce0 */
uint F_00b29ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb29ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2468) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2468) != (code *)0x0) && (REFG(int, 0x14c246c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2468) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2468) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2468) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3092ac32)));
      REFG(int, 0x14c246c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2468) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2468);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3092ac32,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3092ac32,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29e40 */
uint F_00b29e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb29e40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2470) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2470) != (code *)0x0) && (REFG(int, 0x14c2474) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2470) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2470) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2470) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd995937e)));
      REFG(int, 0x14c2474) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2470) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2470);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd995937e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd995937e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29fa0 */
uint F_00b29fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb29fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2478) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2478) != (code *)0x0) && (REFG(int, 0x14c247c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2478) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2478) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2478) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc64ff367)));
      REFG(int, 0x14c247c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2478) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2478);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc64ff367,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc64ff367,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2a100 */
uint F_00b2a100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2a100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2480) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2480) != (code *)0x0) && (REFG(int, 0x14c2484) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2480) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2480) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2480) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfa13e65a)));
      REFG(int, 0x14c2484) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2480) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2480);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfa13e65a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfa13e65a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2a260 */
uint F_00b2a260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2a260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2488) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2488) != (code *)0x0) && (REFG(int, 0x14c248c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2488) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2488) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2488) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6ae16ec3)));
      REFG(int, 0x14c248c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2488) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2488);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6ae16ec3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6ae16ec3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2a3c0 */
uint F_00b2a3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb2a3c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2490) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2490) != (code *)0x0) && (REFG(int, 0x14c2494) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2490) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2490) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2490) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd2ccf5d6)));
      REFG(int, 0x14c2494) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2490) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2490);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd2ccf5d6,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd2ccf5d6,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2a510 */
uint F_00b2a510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb2a510u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2498) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2498) != (code *)0x0) && (REFG(int, 0x14c249c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2498) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2498) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2498) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9734f1d)));
      REFG(int, 0x14c249c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2498) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2498);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9734f1d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9734f1d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2a670 */
uint F_00b2a670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb2a670u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c24a0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c24a0) != (code *)0x0) && (REFG(int, 0x14c24a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c24a0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c24a0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c24a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x69c6f365)));
      REFG(int, 0x14c24a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c24a0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c24a0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x69c6f365,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x69c6f365,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2a7d0 */
uint F_00b2a7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb2a7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c24a8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c24a8) != (code *)0x0) && (REFG(int, 0x14c24ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c24a8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c24a8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c24a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x67efd887)));
      REFG(int, 0x14c24ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c24a8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c24a8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x67efd887,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x67efd887,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2a930 */
uint F_00b2a930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb2a930u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c24b0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c24b0) != (code *)0x0) && (REFG(int, 0x14c24b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c24b0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c24b0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c24b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x41511594)));
      REFG(int, 0x14c24b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c24b0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c24b0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x41511594,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x41511594,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2aa90 */
uint F_00b2aa90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2aa90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c24b8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c24b8) != (code *)0x0) && (REFG(int, 0x14c24bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c24b8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c24b8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c24b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6067af3f)));
      REFG(int, 0x14c24bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c24b8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c24b8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6067af3f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6067af3f,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2abf0 */
uint F_00b2abf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2abf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c24c0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c24c0) != (code *)0x0) && (REFG(int, 0x14c24c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c24c0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c24c0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c24c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x92f9d80d)));
      REFG(int, 0x14c24c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c24c0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c24c0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x92f9d80d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x92f9d80d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2ad50 */
uint F_00b2ad50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2ad50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c24c8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c24c8) != (code *)0x0) && (REFG(int, 0x14c24cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c24c8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c24c8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c24c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3230d69a)));
      REFG(int, 0x14c24cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c24c8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c24c8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3230d69a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3230d69a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2aeb0 */
uint F_00b2aeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb2aeb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c24d0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c24d0) != (code *)0x0) && (REFG(int, 0x14c24d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c24d0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c24d0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c24d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x291bff2)));
      REFG(int, 0x14c24d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c24d0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c24d0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x291bff2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x291bff2,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b010 */
uint F_00b2b010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2b010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c24d8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c24d8) != (code *)0x0) && (REFG(int, 0x14c24dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c24d8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c24d8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c24d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4085de45)));
      REFG(int, 0x14c24dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c24d8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c24d8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4085de45,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4085de45,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b170 */
uint F_00b2b170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2b170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c24e0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c24e0) != (code *)0x0) && (REFG(int, 0x14c24e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c24e0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c24e0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c24e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x172409b4)));
      REFG(int, 0x14c24e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c24e0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c24e0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x172409b4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x172409b4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b2d0 */
uint F_00b2b2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2b2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c24e8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c24e8) != (code *)0x0) && (REFG(int, 0x14c24ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c24e8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c24e8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c24e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe45002d)));
      REFG(int, 0x14c24ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c24e8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c24e8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe45002d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe45002d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b430 */
uint F_00b2b430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2b430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c24f0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c24f0) != (code *)0x0) && (REFG(int, 0x14c24f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c24f0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c24f0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c24f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4a82c2b1)));
      REFG(int, 0x14c24f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c24f0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c24f0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4a82c2b1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4a82c2b1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b590 */
uint F_00b2b590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2b590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c24f8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c24f8) != (code *)0x0) && (REFG(int, 0x14c24fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c24f8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c24f8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c24f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x95b64341)));
      REFG(int, 0x14c24fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c24f8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c24f8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x95b64341,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x95b64341,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b6f0 */
uint F_00b2b6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2b6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2500) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2500) != (code *)0x0) && (REFG(int, 0x14c2504) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2500) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2500) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2500) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf5a0f22c)));
      REFG(int, 0x14c2504) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2500) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2500);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf5a0f22c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf5a0f22c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b850 */
uint F_00b2b850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2b850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2508) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2508) != (code *)0x0) && (REFG(int, 0x14c250c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2508) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2508) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2508) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9fb063df)));
      REFG(int, 0x14c250c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2508) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2508);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9fb063df,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9fb063df,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b9b0 */
uint F_00b2b9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2b9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2510) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2510) != (code *)0x0) && (REFG(int, 0x14c2514) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2510) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2510) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2510) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3fc9a59c)));
      REFG(int, 0x14c2514) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2510) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2510);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3fc9a59c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3fc9a59c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2bb10 */
uint F_00b2bb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2bb10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2518) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2518) != (code *)0x0) && (REFG(int, 0x14c251c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2518) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2518) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2518) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5757474a)));
      REFG(int, 0x14c251c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2518) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2518);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5757474a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5757474a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2bc70 */
uint F_00b2bc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2bc70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2520) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2520) != (code *)0x0) && (REFG(int, 0x14c2524) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2520) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2520) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2520) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xca36a3ab)));
      REFG(int, 0x14c2524) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2520) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2520);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xca36a3ab,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xca36a3ab,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2bdd0 */
uint F_00b2bdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2bdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2528) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2528) != (code *)0x0) && (REFG(int, 0x14c252c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2528) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2528) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2528) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6dfd1c8c)));
      REFG(int, 0x14c252c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2528) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2528);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6dfd1c8c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6dfd1c8c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2bf30 */
uint F_00b2bf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2bf30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2530) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2530) != (code *)0x0) && (REFG(int, 0x14c2534) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2530) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2530) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2530) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xaed02700)));
      REFG(int, 0x14c2534) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2530) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2530);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xaed02700,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xaed02700,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2c090 */
uint F_00b2c090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb2c090u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2538) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2538) != (code *)0x0) && (REFG(int, 0x14c253c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2538) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2538) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2538) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6bb1ee5d)));
      REFG(int, 0x14c253c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2538) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2538);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6bb1ee5d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6bb1ee5d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2c1f0 */
uint F_00b2c1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb2c1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2540) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2540) != (code *)0x0) && (REFG(int, 0x14c2544) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2540) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2540) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2540) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x57d9060f)));
      REFG(int, 0x14c2544) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2540) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2540);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x57d9060f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x57d9060f,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2c350 */
uint F_00b2c350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2c350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2548) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2548) != (code *)0x0) && (REFG(int, 0x14c254c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2548) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2548) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2548) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdc27d5d4)));
      REFG(int, 0x14c254c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2548) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2548);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdc27d5d4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdc27d5d4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2c4b0 */
uint F_00b2c4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xb2c4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2550) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2550) != (code *)0x0) && (REFG(int, 0x14c2554) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2550) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2550) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2550) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xafc4833e)));
      REFG(int, 0x14c2554) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2550) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2550);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xafc4833e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xafc4833e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2c630 */
uint F_00b2c630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2c630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2558) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2558) != (code *)0x0) && (REFG(int, 0x14c255c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2558) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2558) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2558) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x175167e9)));
      REFG(int, 0x14c255c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2558) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2558);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x175167e9,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x175167e9,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2c790 */
uint F_00b2c790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2c790u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2560) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2560) != (code *)0x0) && (REFG(int, 0x14c2564) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2560) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2560) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2560) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3b05c7e1)));
      REFG(int, 0x14c2564) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2560) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2560);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3b05c7e1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3b05c7e1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2c8f0 */
uint F_00b2c8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb2c8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2568) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2568) != (code *)0x0) && (REFG(int, 0x14c256c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2568) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2568) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2568) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x42892957)));
      REFG(int, 0x14c256c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2568) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2568);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x42892957,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x42892957,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2ca50 */
uint F_00b2ca50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb2ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2570) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2570) != (code *)0x0) && (REFG(int, 0x14c2574) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2570) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2570) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2570) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbf6c1762)));
      REFG(int, 0x14c2574) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2570) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2570);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbf6c1762,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbf6c1762,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2cbc0 */
uint F_00b2cbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb2cbc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2578) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2578) != (code *)0x0) && (REFG(int, 0x14c257c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2578) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2578) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2578) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x854ba405)));
      REFG(int, 0x14c257c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2578) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2578);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x854ba405,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x854ba405,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2cd10 */
uint F_00b2cd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2cd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2580) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2580) != (code *)0x0) && (REFG(int, 0x14c2584) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2580) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2580) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2580) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe7cb998d)));
      REFG(int, 0x14c2584) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2580) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2580);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe7cb998d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe7cb998d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2ce70 */
uint F_00b2ce70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2ce70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2588) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2588) != (code *)0x0) && (REFG(int, 0x14c258c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2588) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2588) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2588) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa9062c78)));
      REFG(int, 0x14c258c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2588) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2588);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa9062c78,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa9062c78,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2cfd0 */
uint F_00b2cfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2cfd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2590) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2590) != (code *)0x0) && (REFG(int, 0x14c2594) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2590) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2590) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2590) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa2072d59)));
      REFG(int, 0x14c2594) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2590) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2590);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa2072d59,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa2072d59,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2d130 */
uint F_00b2d130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2d130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2598) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2598) != (code *)0x0) && (REFG(int, 0x14c259c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2598) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2598) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2598) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1f7db630)));
      REFG(int, 0x14c259c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2598) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2598);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1f7db630,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1f7db630,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2d290 */
uint F_00b2d290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2d290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c25a0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c25a0) != (code *)0x0) && (REFG(int, 0x14c25a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c25a0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c25a0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c25a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x552e5b9b)));
      REFG(int, 0x14c25a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c25a0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c25a0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x552e5b9b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x552e5b9b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2d3f0 */
uint F_00b2d3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb2d3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c25a8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c25a8) != (code *)0x0) && (REFG(int, 0x14c25ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c25a8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c25a8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c25a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x49882876)));
      REFG(int, 0x14c25ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c25a8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c25a8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x49882876,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x49882876,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2d550 */
uint F_00b2d550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2d550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c25b0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c25b0) != (code *)0x0) && (REFG(int, 0x14c25b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c25b0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c25b0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c25b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcbbd40f0)));
      REFG(int, 0x14c25b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c25b0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c25b0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcbbd40f0,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcbbd40f0,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2d6b0 */
uint F_00b2d6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2d6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c25b8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c25b8) != (code *)0x0) && (REFG(int, 0x14c25bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c25b8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c25b8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c25b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x61d7b624)));
      REFG(int, 0x14c25bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c25b8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c25b8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x61d7b624,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x61d7b624,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2d810 */
uint F_00b2d810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb2d810u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c25c0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c25c0) != (code *)0x0) && (REFG(int, 0x14c25c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c25c0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c25c0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c25c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4144111a)));
      REFG(int, 0x14c25c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c25c0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c25c0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4144111a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4144111a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2d970 */
uint F_00b2d970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2d970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c25c8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c25c8) != (code *)0x0) && (REFG(int, 0x14c25cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c25c8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c25c8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c25c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf98854c8)));
      REFG(int, 0x14c25cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c25c8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c25c8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf98854c8,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf98854c8,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2dad0 */
uint F_00b2dad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb2dad0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c25d0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c25d0) != (code *)0x0) && (REFG(int, 0x14c25d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c25d0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c25d0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c25d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3efada1d)));
      REFG(int, 0x14c25d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c25d0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c25d0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3efada1d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3efada1d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2dc30 */
uint F_00b2dc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2dc30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c25d8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c25d8) != (code *)0x0) && (REFG(int, 0x14c25dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c25d8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c25d8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c25d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8e985ccd)));
      REFG(int, 0x14c25dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c25d8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c25d8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8e985ccd,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8e985ccd,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2dd90 */
uint F_00b2dd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2dd90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c25e0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c25e0) != (code *)0x0) && (REFG(int, 0x14c25e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c25e0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c25e0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c25e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf36a668d)));
      REFG(int, 0x14c25e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c25e0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c25e0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf36a668d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf36a668d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2def0 */
uint F_00b2def0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2def0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c25e8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c25e8) != (code *)0x0) && (REFG(int, 0x14c25ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c25e8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c25e8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c25e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf5f4d01)));
      REFG(int, 0x14c25ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c25e8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c25e8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf5f4d01,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf5f4d01,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e050 */
uint F_00b2e050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb2e050u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c25f0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c25f0) != (code *)0x0) && (REFG(int, 0x14c25f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c25f0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c25f0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c25f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd6b99d89)));
      REFG(int, 0x14c25f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c25f0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c25f0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd6b99d89,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd6b99d89,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e1b0 */
uint F_00b2e1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb2e1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c25f8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c25f8) != (code *)0x0) && (REFG(int, 0x14c25fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c25f8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c25f8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c25f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdbbc0af4)));
      REFG(int, 0x14c25fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c25f8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c25f8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdbbc0af4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdbbc0af4,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e310 */
uint F_00b2e310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2e310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2600) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2600) != (code *)0x0) && (REFG(int, 0x14c2604) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2600) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2600) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2600) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x66fb7fc0)));
      REFG(int, 0x14c2604) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2600) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2600);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x66fb7fc0,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x66fb7fc0,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e470 */
uint F_00b2e470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2e470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2608) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2608) != (code *)0x0) && (REFG(int, 0x14c260c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2608) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2608) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2608) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8eb56969)));
      REFG(int, 0x14c260c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2608) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2608);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8eb56969,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8eb56969,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e5d0 */
uint F_00b2e5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb2e5d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2610) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2610) != (code *)0x0) && (REFG(int, 0x14c2614) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2610) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2610) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2610) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfb22d656)));
      REFG(int, 0x14c2614) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2610) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2610);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfb22d656,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfb22d656,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e720 */
uint F_00b2e720(unsigned int gen_a0)
{
  GEN_ENTER(0xb2e720u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2618) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2618) != (code *)0x0) && (REFG(int, 0x14c261c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2618) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2618) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2618) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe23b68c1)));
      REFG(int, 0x14c261c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2618) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2618);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe23b68c1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe23b68c1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e870 */
uint F_00b2e870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2e870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2620) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2620) != (code *)0x0) && (REFG(int, 0x14c2624) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2620) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2620) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2620) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1efc3957)));
      REFG(int, 0x14c2624) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2620) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2620);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1efc3957,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1efc3957,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e9d0 */
uint F_00b2e9d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb2e9d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2628) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2628) != (code *)0x0) && (REFG(int, 0x14c262c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2628) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2628) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2628) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf4c863ac)));
      REFG(int, 0x14c262c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2628) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2628);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf4c863ac,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf4c863ac,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2eb20 */
uint F_00b2eb20(unsigned int gen_a0)
{
  GEN_ENTER(0xb2eb20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2630) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2630) != (code *)0x0) && (REFG(int, 0x14c2634) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2630) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2630) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2630) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x69a9874d)));
      REFG(int, 0x14c2634) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2630) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2630);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x69a9874d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x69a9874d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2ec70 */
uint F_00b2ec70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb2ec70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2638) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2638) != (code *)0x0) && (REFG(int, 0x14c263c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2638) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2638) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2638) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcadcb956)));
      REFG(int, 0x14c263c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2638) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2638);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcadcb956,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcadcb956,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2edd0 */
uint F_00b2edd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb2edd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2640) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2640) != (code *)0x0) && (REFG(int, 0x14c2644) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2640) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2640) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2640) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x79232685)));
      REFG(int, 0x14c2644) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2640) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2640);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x79232685,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x79232685,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2ef20 */
uint F_00b2ef20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2ef20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2648) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2648) != (code *)0x0) && (REFG(int, 0x14c264c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2648) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2648) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2648) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5f35bcb5)));
      REFG(int, 0x14c264c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2648) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2648);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5f35bcb5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5f35bcb5,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2f080 */
uint F_00b2f080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2f080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2650) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2650) != (code *)0x0) && (REFG(int, 0x14c2654) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2650) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2650) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2650) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf4c2f8cc)));
      REFG(int, 0x14c2654) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2650) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2650);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf4c2f8cc,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf4c2f8cc,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2f4c0 */
uint F_00b2f4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2f4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2668) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2668) != (code *)0x0) && (REFG(int, 0x14c266c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2668) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2668) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2668) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xae457190)));
      REFG(int, 0x14c266c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2668) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2668);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xae457190,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xae457190,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2f620 */
uint F_00b2f620(unsigned int gen_a0)
{
  GEN_ENTER(0xb2f620u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2670) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2670) != (code *)0x0) && (REFG(int, 0x14c2674) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2670) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2670) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2670) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1e9d8a31)));
      REFG(int, 0x14c2674) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2670) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2670);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1e9d8a31,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1e9d8a31,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2f770 */
uint F_00b2f770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2f770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2678) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2678) != (code *)0x0) && (REFG(int, 0x14c267c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2678) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2678) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2678) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x11abccf8)));
      REFG(int, 0x14c267c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2678) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2678);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x11abccf8,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x11abccf8,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2f8d0 */
uint F_00b2f8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb2f8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2680) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2680) != (code *)0x0) && (REFG(int, 0x14c2684) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2680) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2680) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2680) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5d8cf8de)));
      REFG(int, 0x14c2684) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2680) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2680);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5d8cf8de,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5d8cf8de,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2fa30 */
uint F_00b2fa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2fa30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2688) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2688) != (code *)0x0) && (REFG(int, 0x14c268c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2688) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2688) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2688) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x63e5d8db)));
      REFG(int, 0x14c268c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2688) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2688);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x63e5d8db,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x63e5d8db,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2fb90 */
uint F_00b2fb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2fb90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2690) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2690) != (code *)0x0) && (REFG(int, 0x14c2694) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2690) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2690) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2690) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1e17e29b)));
      REFG(int, 0x14c2694) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2690) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2690);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1e17e29b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1e17e29b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2fcf0 */
uint F_00b2fcf0(unsigned int gen_a0)
{
  GEN_ENTER(0xb2fcf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2698) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2698) != (code *)0x0) && (REFG(int, 0x14c269c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2698) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2698) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2698) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x61041c24)));
      REFG(int, 0x14c269c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2698) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2698);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x61041c24,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x61041c24,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2fe40 */
uint F_00b2fe40(unsigned int gen_a0)
{
  GEN_ENTER(0xb2fe40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c26a0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c26a0) != (code *)0x0) && (REFG(int, 0x14c26a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c26a0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c26a0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c26a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x47bad137)));
      REFG(int, 0x14c26a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c26a0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c26a0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x47bad137,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x47bad137,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2ff90 */
uint F_00b2ff90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb2ff90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c26a8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c26a8) != (code *)0x0) && (REFG(int, 0x14c26ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c26a8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c26a8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c26a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5f4c2664)));
      REFG(int, 0x14c26ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c26a8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c26a8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5f4c2664,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5f4c2664,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b300f0 */
uint F_00b300f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb300f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c26b0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c26b0) != (code *)0x0) && (REFG(int, 0x14c26b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c26b0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c26b0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c26b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x96437923)));
      REFG(int, 0x14c26b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c26b0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c26b0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x96437923,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x96437923,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30250 */
uint F_00b30250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb30250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c26b8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c26b8) != (code *)0x0) && (REFG(int, 0x14c26bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c26b8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c26b8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c26b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4575dd94)));
      REFG(int, 0x14c26bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c26b8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c26b8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4575dd94,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4575dd94,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b303b0 */
uint F_00b303b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb303b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c26c0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c26c0) != (code *)0x0) && (REFG(int, 0x14c26c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c26c0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c26c0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c26c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfdb63c81)));
      REFG(int, 0x14c26c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c26c0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c26c0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfdb63c81,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfdb63c81,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30510 */
uint F_00b30510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb30510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c26c8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c26c8) != (code *)0x0) && (REFG(int, 0x14c26cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c26c8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c26c8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c26c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcb89381d)));
      REFG(int, 0x14c26cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c26c8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c26c8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcb89381d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcb89381d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30670 */
uint F_00b30670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb30670u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c26d0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c26d0) != (code *)0x0) && (REFG(int, 0x14c26d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c26d0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c26d0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c26d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x989685f0)));
      REFG(int, 0x14c26d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c26d0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c26d0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x989685f0,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x989685f0,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b307e0 */
uint F_00b307e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb307e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c26d8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c26d8) != (code *)0x0) && (REFG(int, 0x14c26dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c26d8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c26d8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c26d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9b542831)));
      REFG(int, 0x14c26dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c26d8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c26d8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9b542831,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9b542831,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30950 */
uint F_00b30950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb30950u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c26e0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c26e0) != (code *)0x0) && (REFG(int, 0x14c26e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c26e0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c26e0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c26e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xec32944e)));
      REFG(int, 0x14c26e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c26e0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c26e0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xec32944e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xec32944e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30ab0 */
uint F_00b30ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xb30ab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c26e8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c26e8) != (code *)0x0) && (REFG(int, 0x14c26ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c26e8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c26e8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c26e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5f1aa66c)));
      REFG(int, 0x14c26ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c26e8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c26e8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5f1aa66c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5f1aa66c,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30c00 */
uint F_00b30c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb30c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c26f0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c26f0) != (code *)0x0) && (REFG(int, 0x14c26f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c26f0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c26f0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c26f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3f113c77)));
      REFG(int, 0x14c26f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c26f0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c26f0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3f113c77,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3f113c77,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30d60 */
uint F_00b30d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb30d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c26f8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c26f8) != (code *)0x0) && (REFG(int, 0x14c26fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c26f8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c26f8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c26f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xda97071e)));
      REFG(int, 0x14c26fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c26f8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c26f8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xda97071e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xda97071e,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30ec0 */
uint F_00b30ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xb30ec0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2700) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2700) != (code *)0x0) && (REFG(int, 0x14c2704) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2700) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2700) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2700) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd58026b9)));
      REFG(int, 0x14c2704) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2700) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2700);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd58026b9,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd58026b9,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b31010 */
uint F_00b31010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb31010u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2708) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2708) != (code *)0x0) && (REFG(int, 0x14c270c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2708) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2708) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2708) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa3c55220)));
      REFG(int, 0x14c270c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2708) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2708);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa3c55220,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa3c55220,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b31170 */
uint F_00b31170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb31170u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2710) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2710) != (code *)0x0) && (REFG(int, 0x14c2714) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2710) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2710) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2710) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdc6dc8d3)));
      REFG(int, 0x14c2714) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2710) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2710);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdc6dc8d3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdc6dc8d3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b312e0 */
uint F_00b312e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb312e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2718) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2718) != (code *)0x0) && (REFG(int, 0x14c271c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2718) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2718) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2718) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7eba036)));
      REFG(int, 0x14c271c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2718) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2718);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7eba036,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,
                         CONCAT31((int3)((uint)param_7 >> 8),(undefined1)param_4),param_5,param_6,
                         param_7);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7eba036,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b31450 */
uint F_00b31450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb31450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2720) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2720) != (code *)0x0) && (REFG(int, 0x14c2724) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2720) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2720) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2720) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4d959a89)));
      REFG(int, 0x14c2724) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2720) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2720);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4d959a89,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4d959a89,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b315b0 */
uint F_00b315b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb315b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2728) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2728) != (code *)0x0) && (REFG(int, 0x14c272c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2728) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2728) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2728) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1ecfd263)));
      REFG(int, 0x14c272c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2728) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2728);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1ecfd263,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1ecfd263,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b31710 */
uint F_00b31710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb31710u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2730) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2730) != (code *)0x0) && (REFG(int, 0x14c2734) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2730) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2730) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2730) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcf43903d)));
      REFG(int, 0x14c2734) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2730) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2730);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcf43903d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcf43903d,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b31870 */
uint F_00b31870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb31870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2738) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2738) != (code *)0x0) && (REFG(int, 0x14c273c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2738) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2738) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2738) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x78db97d7)));
      REFG(int, 0x14c273c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2738) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2738);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x78db97d7,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x78db97d7,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b319d0 */
uint F_00b319d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb319d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2740) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2740) != (code *)0x0) && (REFG(int, 0x14c2744) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2740) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2740) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2740) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb033b140)));
      REFG(int, 0x14c2744) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2740) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2740);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb033b140,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb033b140,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b31b30 */
uint F_00b31b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb31b30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2748) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2748) != (code *)0x0) && (REFG(int, 0x14c274c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2748) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2748) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2748) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdf2887af)));
      REFG(int, 0x14c274c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2748) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2748);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdf2887af,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdf2887af,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b31c90 */
uint F_00b31c90(unsigned int gen_a0)
{
  GEN_ENTER(0xb31c90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2750) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2750) != (code *)0x0) && (REFG(int, 0x14c2754) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2750) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2750) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2750) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x410b5c25)));
      REFG(int, 0x14c2754) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2750) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2750);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x410b5c25,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x410b5c25,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b31de0 */
uint F_00b31de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb31de0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2758) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2758) != (code *)0x0) && (REFG(int, 0x14c275c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2758) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2758) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2758) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf60852bd)));
      REFG(int, 0x14c275c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2758) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2758);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf60852bd,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf60852bd,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b31f40 */
uint F_00b31f40(unsigned int gen_a0)
{
  GEN_ENTER(0xb31f40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2760) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2760) != (code *)0x0) && (REFG(int, 0x14c2764) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2760) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2760) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2760) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd54b8989)));
      REFG(int, 0x14c2764) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2760) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2760);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd54b8989,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd54b8989,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b32090 */
uint F_00b32090(unsigned int gen_a0)
{
  GEN_ENTER(0xb32090u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2768) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2768) != (code *)0x0) && (REFG(int, 0x14c276c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2768) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2768) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2768) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x74073cc9)));
      REFG(int, 0x14c276c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2768) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2768);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x74073cc9,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x74073cc9,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b321e0 */
uint F_00b321e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb321e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2770) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2770) != (code *)0x0) && (REFG(int, 0x14c2774) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2770) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2770) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2770) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd9639601)));
      REFG(int, 0x14c2774) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2770) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2770);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd9639601,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd9639601,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b32340 */
uint F_00b32340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb32340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2778) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2778) != (code *)0x0) && (REFG(int, 0x14c277c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2778) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2778) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2778) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x44a3f1d1)));
      REFG(int, 0x14c277c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2778) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2778);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x44a3f1d1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x44a3f1d1,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b324a0 */
uint F_00b324a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb324a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      REFG(undefined4, 0x14c2780) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2780) != (code *)0x0) && (REFG(int, 0x14c2784) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2780) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2780) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2780) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4562bc38)));
      REFG(int, 0x14c2784) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2780) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2780);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4562bc38,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4562bc38,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b32610 */
uint F_00b32610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb32610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2788) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2788) != (code *)0x0) && (REFG(int, 0x14c278c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2788) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2788) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2788) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x60acdfdd)));
      REFG(int, 0x14c278c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2788) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2788);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x60acdfdd,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x60acdfdd,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b32770 */
uint F_00b32770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb32770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2790) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2790) != (code *)0x0) && (REFG(int, 0x14c2794) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2790) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2790) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2790) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x16de1c6a)));
      REFG(int, 0x14c2794) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2790) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2790);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x16de1c6a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x16de1c6a,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b328d0 */
uint F_00b328d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb328d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c2798) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2798) != (code *)0x0) && (REFG(int, 0x14c279c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2798) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2798) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2798) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8bbff88b)));
      REFG(int, 0x14c279c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2798) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2798);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8bbff88b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8bbff88b,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b32a30 */
uint F_00b32a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb32a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x14)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined4, 0x14c27a0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c27a0) != (code *)0x0) && (REFG(int, 0x14c27a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c27a0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c27a0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c27a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf1f5b434)));
      REFG(int, 0x14c27a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c27a0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c27a0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf1f5b434,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf1f5b434,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

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
      REFG(undefined4, 0x14c27a8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c27a8) != (code *)0x0) && (REFG(int, 0x14c27ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c27a8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c27a8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c27a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x70d404ec)));
      REFG(int, 0x14c27ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c27a8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c27a8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x70d404ec,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c27b0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c27b0) != (code *)0x0) && (REFG(int, 0x14c27b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c27b0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c27b0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c27b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4b708b54)));
      REFG(int, 0x14c27b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c27b0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c27b0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4b708b54,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c27b8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c27b8) != (code *)0x0) && (REFG(int, 0x14c27bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c27b8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c27b8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c27b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa064bdfc)));
      REFG(int, 0x14c27bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c27b8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c27b8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa064bdfc,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c27c0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c27c0) != (code *)0x0) && (REFG(int, 0x14c27c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c27c0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c27c0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c27c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbb2b17aa)));
      REFG(int, 0x14c27c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c27c0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c27c0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbb2b17aa,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c27c8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c27c8) != (code *)0x0) && (REFG(int, 0x14c27cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c27c8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c27c8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c27c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe5ceae41)));
      REFG(int, 0x14c27cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c27c8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c27c8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe5ceae41,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c27d0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c27d0) != (code *)0x0) && (REFG(int, 0x14c27d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c27d0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c27d0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c27d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x22de03aa)));
      REFG(int, 0x14c27d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c27d0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c27d0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x22de03aa,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c27d8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c27d8) != (code *)0x0) && (REFG(int, 0x14c27dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c27d8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c27d8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c27d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x332d3942)));
      REFG(int, 0x14c27dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c27d8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c27d8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x332d3942,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c27e0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c27e0) != (code *)0x0) && (REFG(int, 0x14c27e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c27e0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c27e0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c27e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfceac864)));
      REFG(int, 0x14c27e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c27e0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c27e0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfceac864,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c27e8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c27e8) != (code *)0x0) && (REFG(int, 0x14c27ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c27e8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c27e8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c27e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6c0ed98c)));
      REFG(int, 0x14c27ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c27e8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c27e8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6c0ed98c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c27f0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c27f0) != (code *)0x0) && (REFG(int, 0x14c27f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c27f0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c27f0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c27f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x91123d6a)));
      REFG(int, 0x14c27f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c27f0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c27f0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x91123d6a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c27f8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c27f8) != (code *)0x0) && (REFG(int, 0x14c27fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c27f8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c27f8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c27f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x37e7191c)));
      REFG(int, 0x14c27fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c27f8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c27f8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x37e7191c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2800) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2800) != (code *)0x0) && (REFG(int, 0x14c2804) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2800) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2800) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2800) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5d19bca4)));
      REFG(int, 0x14c2804) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2800) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2800);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5d19bca4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2808) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2808) != (code *)0x0) && (REFG(int, 0x14c280c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2808) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2808) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2808) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc8ff7258)));
      REFG(int, 0x14c280c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2808) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2808);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc8ff7258,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2810) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2810) != (code *)0x0) && (REFG(int, 0x14c2814) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2810) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2810) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2810) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe5a9aae0)));
      REFG(int, 0x14c2814) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2810) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2810);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe5a9aae0,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2818) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2818) != (code *)0x0) && (REFG(int, 0x14c281c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2818) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2818) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2818) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2ac084fa)));
      REFG(int, 0x14c281c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2818) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2818);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2ac084fa,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2820) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2820) != (code *)0x0) && (REFG(int, 0x14c2824) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2820) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2820) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2820) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf8b53c69)));
      REFG(int, 0x14c2824) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2820) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2820);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf8b53c69,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2828) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2828) != (code *)0x0) && (REFG(int, 0x14c282c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2828) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2828) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2828) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf2a54796)));
      REFG(int, 0x14c282c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2828) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2828);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf2a54796,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2830) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2830) != (code *)0x0) && (REFG(int, 0x14c2834) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2830) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2830) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2830) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4aceeaf7)));
      REFG(int, 0x14c2834) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2830) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2830);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4aceeaf7,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2838) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2838) != (code *)0x0) && (REFG(int, 0x14c283c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2838) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2838) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2838) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd44d3c4e)));
      REFG(int, 0x14c283c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2838) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2838);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd44d3c4e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2840) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2840) != (code *)0x0) && (REFG(int, 0x14c2844) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2840) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2840) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2840) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa342f682)));
      REFG(int, 0x14c2844) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2840) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2840);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa342f682,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2848) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2848) != (code *)0x0) && (REFG(int, 0x14c284c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2848) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2848) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2848) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x667c2929)));
      REFG(int, 0x14c284c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2848) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2848);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x667c2929,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2850) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2850) != (code *)0x0) && (REFG(int, 0x14c2854) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2850) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2850) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2850) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x71329df3)));
      REFG(int, 0x14c2854) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2850) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2850);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x71329df3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2858) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2858) != (code *)0x0) && (REFG(int, 0x14c285c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2858) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2858) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2858) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x73e0019a)));
      REFG(int, 0x14c285c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2858) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2858);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x73e0019a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2860) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2860) != (code *)0x0) && (REFG(int, 0x14c2864) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2860) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2860) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2860) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc23df926)));
      REFG(int, 0x14c2864) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2860) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2860);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc23df926,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2868) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2868) != (code *)0x0) && (REFG(int, 0x14c286c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2868) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2868) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2868) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf7ff00c1)));
      REFG(int, 0x14c286c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2868) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2868);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf7ff00c1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2870) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2870) != (code *)0x0) && (REFG(int, 0x14c2874) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2870) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2870) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2870) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfc31236c)));
      REFG(int, 0x14c2874) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2870) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2870);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfc31236c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2878) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2878) != (code *)0x0) && (REFG(int, 0x14c287c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2878) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2878) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2878) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd2f6c499)));
      REFG(int, 0x14c287c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2878) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2878);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd2f6c499,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2880) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2880) != (code *)0x0) && (REFG(int, 0x14c2884) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2880) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2880) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2880) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfcb16330)));
      REFG(int, 0x14c2884) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2880) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2880);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfcb16330,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2888) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2888) != (code *)0x0) && (REFG(int, 0x14c288c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2888) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2888) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2888) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x157e45c4)));
      REFG(int, 0x14c288c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2888) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2888);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x157e45c4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c28a0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c28a0) != (code *)0x0) && (REFG(int, 0x14c28a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c28a0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c28a0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c28a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x13199b3d)));
      REFG(int, 0x14c28a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c28a0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c28a0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x13199b3d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c28a8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c28a8) != (code *)0x0) && (REFG(int, 0x14c28ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c28a8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c28a8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c28a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf2dd3f2)));
      REFG(int, 0x14c28ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c28a8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c28a8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf2dd3f2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c28b0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c28b0) != (code *)0x0) && (REFG(int, 0x14c28b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c28b0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c28b0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c28b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6800f5fc)));
      REFG(int, 0x14c28b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c28b0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c28b0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6800f5fc,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c28b8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c28b8) != (code *)0x0) && (REFG(int, 0x14c28bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c28b8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c28b8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c28b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc7985ed5)));
      REFG(int, 0x14c28bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c28b8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c28b8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc7985ed5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c28c0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c28c0) != (code *)0x0) && (REFG(int, 0x14c28c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c28c0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c28c0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c28c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x80c9fd3b)));
      REFG(int, 0x14c28c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c28c0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c28c0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x80c9fd3b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c28c8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c28c8) != (code *)0x0) && (REFG(int, 0x14c28cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c28c8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c28c8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c28c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6d6fdad4)));
      REFG(int, 0x14c28cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c28c8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c28c8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6d6fdad4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c28d0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c28d0) != (code *)0x0) && (REFG(int, 0x14c28d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c28d0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c28d0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c28d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x754033f0)));
      REFG(int, 0x14c28d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c28d0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c28d0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x754033f0,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c28d8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c28d8) != (code *)0x0) && (REFG(int, 0x14c28dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c28d8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c28d8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c28d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcde4a28a)));
      REFG(int, 0x14c28dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c28d8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c28d8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcde4a28a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c28e0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c28e0) != (code *)0x0) && (REFG(int, 0x14c28e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c28e0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c28e0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c28e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2ab714ab)));
      REFG(int, 0x14c28e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c28e0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c28e0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2ab714ab,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c28e8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c28e8) != (code *)0x0) && (REFG(int, 0x14c28ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c28e8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c28e8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c28e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdbc803ec)));
      REFG(int, 0x14c28ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c28e8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c28e8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdbc803ec,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c28f0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c28f0) != (code *)0x0) && (REFG(int, 0x14c28f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c28f0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c28f0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c28f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x12ee68f2)));
      REFG(int, 0x14c28f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c28f0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c28f0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x12ee68f2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c28f8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c28f8) != (code *)0x0) && (REFG(int, 0x14c28fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c28f8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c28f8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c28f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x18cdf365)));
      REFG(int, 0x14c28fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c28f8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c28f8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x18cdf365,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2900) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2900) != (code *)0x0) && (REFG(int, 0x14c2904) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2900) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2900) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2900) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd00b8317)));
      REFG(int, 0x14c2904) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2900) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2900);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd00b8317,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2908) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2908) != (code *)0x0) && (REFG(int, 0x14c290c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2908) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2908) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2908) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3d7a86bb)));
      REFG(int, 0x14c290c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2908) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2908);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3d7a86bb,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2910) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2910) != (code *)0x0) && (REFG(int, 0x14c2914) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2910) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2910) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2910) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x22cad61)));
      REFG(int, 0x14c2914) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2910) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2910);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x22cad61,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2918) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2918) != (code *)0x0) && (REFG(int, 0x14c291c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2918) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2918) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2918) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb380f218)));
      REFG(int, 0x14c291c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2918) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2918);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb380f218,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2920) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2920) != (code *)0x0) && (REFG(int, 0x14c2924) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2920) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2920) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2920) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfc5a155b)));
      REFG(int, 0x14c2924) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2920) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2920);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfc5a155b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2928) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2928) != (code *)0x0) && (REFG(int, 0x14c292c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2928) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2928) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2928) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x72b19155)));
      REFG(int, 0x14c292c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2928) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2928);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x72b19155,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2930) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2930) != (code *)0x0) && (REFG(int, 0x14c2934) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2930) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2930) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2930) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd5e13573)));
      REFG(int, 0x14c2934) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2930) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2930);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd5e13573,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2938) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2938) != (code *)0x0) && (REFG(int, 0x14c293c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2938) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2938) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2938) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x13c7112e)));
      REFG(int, 0x14c293c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2938) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2938);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x13c7112e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2940) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2940) != (code *)0x0) && (REFG(int, 0x14c2944) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2940) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2940) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2940) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf7029c5)));
      REFG(int, 0x14c2944) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2940) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2940);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf7029c5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2948) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2948) != (code *)0x0) && (REFG(int, 0x14c294c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2948) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2948) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2948) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x84c9d553)));
      REFG(int, 0x14c294c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2948) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2948);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x84c9d553,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2950) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2950) != (code *)0x0) && (REFG(int, 0x14c2954) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2950) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2950) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2950) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb476bf61)));
      REFG(int, 0x14c2954) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2950) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2950);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb476bf61,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2958) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2958) != (code *)0x0) && (REFG(int, 0x14c295c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2958) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2958) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2958) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x89ffd9a3)));
      REFG(int, 0x14c295c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2958) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2958);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x89ffd9a3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2960) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2960) != (code *)0x0) && (REFG(int, 0x14c2964) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2960) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2960) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2960) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3111bed1)));
      REFG(int, 0x14c2964) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2960) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2960);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3111bed1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2968) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2968) != (code *)0x0) && (REFG(int, 0x14c296c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2968) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2968) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2968) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5cf7f862)));
      REFG(int, 0x14c296c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2968) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2968);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5cf7f862,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2970) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2970) != (code *)0x0) && (REFG(int, 0x14c2974) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2970) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2970) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2970) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb852f4db)));
      REFG(int, 0x14c2974) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2970) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2970);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb852f4db,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2978) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2978) != (code *)0x0) && (REFG(int, 0x14c297c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2978) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2978) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2978) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2bbda32e)));
      REFG(int, 0x14c297c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2978) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2978);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2bbda32e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2980) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2980) != (code *)0x0) && (REFG(int, 0x14c2984) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2980) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2980) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2980) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5609b86a)));
      REFG(int, 0x14c2984) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2980) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2980);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5609b86a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2988) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2988) != (code *)0x0) && (REFG(int, 0x14c298c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2988) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2988) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2988) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3d596b93)));
      REFG(int, 0x14c298c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2988) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2988);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3d596b93,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2990) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2990) != (code *)0x0) && (REFG(int, 0x14c2994) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2990) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2990) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2990) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1e6634b3)));
      REFG(int, 0x14c2994) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2990) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2990);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1e6634b3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2998) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2998) != (code *)0x0) && (REFG(int, 0x14c299c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2998) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2998) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2998) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7c20c5be)));
      REFG(int, 0x14c299c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2998) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2998);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7c20c5be,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c29a0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c29a0) != (code *)0x0) && (REFG(int, 0x14c29a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c29a0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c29a0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c29a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x905f5c27)));
      REFG(int, 0x14c29a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c29a0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c29a0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x905f5c27,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c29a8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c29a8) != (code *)0x0) && (REFG(int, 0x14c29ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c29a8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c29a8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c29a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6317345c)));
      REFG(int, 0x14c29ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c29a8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c29a8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6317345c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c29b0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c29b0) != (code *)0x0) && (REFG(int, 0x14c29b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c29b0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c29b0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c29b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc182027e)));
      REFG(int, 0x14c29b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c29b0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c29b0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc182027e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c29b8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c29b8) != (code *)0x0) && (REFG(int, 0x14c29bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c29b8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c29b8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c29b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa4527bf8)));
      REFG(int, 0x14c29bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c29b8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c29b8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa4527bf8,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c29c0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c29c0) != (code *)0x0) && (REFG(int, 0x14c29c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c29c0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c29c0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c29c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbd4bc56f)));
      REFG(int, 0x14c29c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c29c0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c29c0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbd4bc56f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c29c8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c29c8) != (code *)0x0) && (REFG(int, 0x14c29cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c29c8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c29c8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c29c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1db7c52c)));
      REFG(int, 0x14c29cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c29c8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c29c8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1db7c52c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c29d0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c29d0) != (code *)0x0) && (REFG(int, 0x14c29d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c29d0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c29d0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c29d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x694bff4d)));
      REFG(int, 0x14c29d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c29d0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c29d0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x694bff4d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c29d8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c29d8) != (code *)0x0) && (REFG(int, 0x14c29dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c29d8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c29d8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c29d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbfdc062c)));
      REFG(int, 0x14c29dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c29d8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c29d8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbfdc062c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c29e0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c29e0) != (code *)0x0) && (REFG(int, 0x14c29e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c29e0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c29e0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c29e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xddf5643c)));
      REFG(int, 0x14c29e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c29e0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c29e0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xddf5643c,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c29e8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c29e8) != (code *)0x0) && (REFG(int, 0x14c29ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c29e8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c29e8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c29e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9d2509ef)));
      REFG(int, 0x14c29ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c29e8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c29e8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9d2509ef,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c29f0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c29f0) != (code *)0x0) && (REFG(int, 0x14c29f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c29f0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c29f0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c29f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x962b8af6)));
      REFG(int, 0x14c29f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c29f0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c29f0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x962b8af6,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c29f8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c29f8) != (code *)0x0) && (REFG(int, 0x14c29fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c29f8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c29f8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c29f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x492a6954)));
      REFG(int, 0x14c29fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c29f8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c29f8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x492a6954,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a00) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a00) != (code *)0x0) && (REFG(int, 0x14c2a04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a00) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a00) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xaeaecd41)));
      REFG(int, 0x14c2a04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a00) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a00);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xaeaecd41,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a08) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a08) != (code *)0x0) && (REFG(int, 0x14c2a0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a08) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a08) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb3827c8)));
      REFG(int, 0x14c2a0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a08) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a08);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb3827c8,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a10) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a10) != (code *)0x0) && (REFG(int, 0x14c2a14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a10) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a10) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbd3eb475)));
      REFG(int, 0x14c2a14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a10) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a10);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbd3eb475,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a18) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a18) != (code *)0x0) && (REFG(int, 0x14c2a1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a18) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a18) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x55255d05)));
      REFG(int, 0x14c2a1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a18) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a18);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x55255d05,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a20) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a20) != (code *)0x0) && (REFG(int, 0x14c2a24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a20) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a20) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd504dda7)));
      REFG(int, 0x14c2a24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a20) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a20);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd504dda7,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a28) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a28) != (code *)0x0) && (REFG(int, 0x14c2a2c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a28) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a28) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a28) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xab7c2dc)));
      REFG(int, 0x14c2a2c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a28) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a28);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xab7c2dc,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a30) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a30) != (code *)0x0) && (REFG(int, 0x14c2a34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a30) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a30) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcfc92c15)));
      REFG(int, 0x14c2a34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a30) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a30);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcfc92c15,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a38) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a38) != (code *)0x0) && (REFG(int, 0x14c2a3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a38) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a38) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5fe72f64)));
      REFG(int, 0x14c2a3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a38) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a38);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5fe72f64,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a40) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a40) != (code *)0x0) && (REFG(int, 0x14c2a44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a40) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a40) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8aac133d)));
      REFG(int, 0x14c2a44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a40) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a40);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8aac133d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a48) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a48) != (code *)0x0) && (REFG(int, 0x14c2a4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a48) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a48) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x73eb9329)));
      REFG(int, 0x14c2a4c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a48) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a48);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x73eb9329,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a50) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a50) != (code *)0x0) && (REFG(int, 0x14c2a54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a50) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a50) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xae9c2019)));
      REFG(int, 0x14c2a54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a50) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a50);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xae9c2019,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a58) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a58) != (code *)0x0) && (REFG(int, 0x14c2a5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a58) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a58) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcac3ce5d)));
      REFG(int, 0x14c2a5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a58) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a58);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcac3ce5d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a60) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a60) != (code *)0x0) && (REFG(int, 0x14c2a64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a60) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a60) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x35233210)));
      REFG(int, 0x14c2a64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a60) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a60);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x35233210,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a68) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a68) != (code *)0x0) && (REFG(int, 0x14c2a6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a68) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a68) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xef303a9d)));
      REFG(int, 0x14c2a6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a68) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a68);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xef303a9d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a70) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a70) != (code *)0x0) && (REFG(int, 0x14c2a74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a70) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a70) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe9c5853)));
      REFG(int, 0x14c2a74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a70) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a70);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe9c5853,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a78) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a78) != (code *)0x0) && (REFG(int, 0x14c2a7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a78) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a78) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4eadf5d2)));
      REFG(int, 0x14c2a7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a78) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a78);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4eadf5d2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a80) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a80) != (code *)0x0) && (REFG(int, 0x14c2a84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a80) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a80) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2de11d61)));
      REFG(int, 0x14c2a84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a80) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a80);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2de11d61,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a88) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a88) != (code *)0x0) && (REFG(int, 0x14c2a8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a88) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a88) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5b803daf)));
      REFG(int, 0x14c2a8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a88) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a88);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5b803daf,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a90) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a90) != (code *)0x0) && (REFG(int, 0x14c2a94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a90) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a90) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6a16d3a0)));
      REFG(int, 0x14c2a94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a90) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a90);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6a16d3a0,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2a98) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2a98) != (code *)0x0) && (REFG(int, 0x14c2a9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2a98) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2a98) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2a98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbb939ee5)));
      REFG(int, 0x14c2a9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2a98) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2a98);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbb939ee5,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_13);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2aa0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2aa0) != (code *)0x0) && (REFG(int, 0x14c2aa4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2aa0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2aa0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2aa0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(
                                            "5_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3079_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3080_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3081_LEGACYRETAINERCHARACTERI\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3082_CHARACTERID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3083_ITEMID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3084_STACK\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3085_CATALOGID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3086_TYPE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3087_REFINE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3088_MATERIA_0\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3089_MATERIA_1\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3090_MATERIA_2\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3091_MATERIA_3\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3092_MATERIA_4\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3093_STAIN\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3094_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3095_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_..." 
                                            )));
      REFG(int, 0x14c2aa4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2aa0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2aa0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))("5_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3079_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3080_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3081_LEGACYRETAINERCHARACTERI\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3082_CHARACTERID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3083_ITEMID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3084_STACK\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3085_CATALOGID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3086_TYPE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3087_REFINE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3088_MATERIA_0\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3089_MATERIA_1\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3090_MATERIA_2\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3091_MATERIA_3\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3092_MATERIA_4\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3093_STAIN\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3094_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3095_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_..." 
                        ,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2aa8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2aa8) != (code *)0x0) && (REFG(int, 0x14c2aac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2aa8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2aa8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2aa8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8ffb8e26)));
      REFG(int, 0x14c2aac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2aa8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2aa8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8ffb8e26,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2ab0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2ab0) != (code *)0x0) && (REFG(int, 0x14c2ab4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2ab0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2ab0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2ab0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7aaf7a04)));
      REFG(int, 0x14c2ab4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2ab0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2ab0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7aaf7a04,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2ac0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2ac0) != (code *)0x0) && (REFG(int, 0x14c2ac4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2ac0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2ac0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2ac0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5650beb)));
      REFG(int, 0x14c2ac4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2ac0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2ac0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5650beb,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2ac8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2ac8) != (code *)0x0) && (REFG(int, 0x14c2acc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2ac8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2ac8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2ac8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9083e53a)));
      REFG(int, 0x14c2acc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2ac8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2ac8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9083e53a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2ad0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2ad0) != (code *)0x0) && (REFG(int, 0x14c2ad4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2ad0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2ad0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2ad0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfa6a0675)));
      REFG(int, 0x14c2ad4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2ad0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2ad0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfa6a0675,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2ad8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2ad8) != (code *)0x0) && (REFG(int, 0x14c2adc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2ad8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2ad8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2ad8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5995410d)));
      REFG(int, 0x14c2adc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2ad8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2ad8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5995410d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2ae0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2ae0) != (code *)0x0) && (REFG(int, 0x14c2ae4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2ae0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2ae0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2ae0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xeba4d232)));
      REFG(int, 0x14c2ae4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2ae0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2ae0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xeba4d232,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2ae8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2ae8) != (code *)0x0) && (REFG(int, 0x14c2aec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2ae8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2ae8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2ae8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7d44bb54)));
      REFG(int, 0x14c2aec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2ae8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2ae8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7d44bb54,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2af0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2af0) != (code *)0x0) && (REFG(int, 0x14c2af4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2af0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2af0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2af0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9c39c246)));
      REFG(int, 0x14c2af4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2af0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2af0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9c39c246,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2af8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2af8) != (code *)0x0) && (REFG(int, 0x14c2afc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2af8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2af8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2af8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5526cfd1)));
      REFG(int, 0x14c2afc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2af8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2af8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5526cfd1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b00) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b00) != (code *)0x0) && (REFG(int, 0x14c2b04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b00) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b00) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3b845a1)));
      REFG(int, 0x14c2b04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b00) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b00);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3b845a1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b08) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b08) != (code *)0x0) && (REFG(int, 0x14c2b0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b08) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b08) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9152e055)));
      REFG(int, 0x14c2b0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b08) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b08);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9152e055,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b10) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b10) != (code *)0x0) && (REFG(int, 0x14c2b14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b10) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b10) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfbbb031a)));
      REFG(int, 0x14c2b14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b10) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b10);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfbbb031a,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b18) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b18) != (code *)0x0) && (REFG(int, 0x14c2b1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b18) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b18) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9bb9d68f)));
      REFG(int, 0x14c2b1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b18) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b18);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9bb9d68f,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b20) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b20) != (code *)0x0) && (REFG(int, 0x14c2b24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b20) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b20) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x407f67aa)));
      REFG(int, 0x14c2b24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b20) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b20);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x407f67aa,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b28) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b28) != (code *)0x0) && (REFG(int, 0x14c2b2c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b28) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b28) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b28) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x14610cd7)));
      REFG(int, 0x14c2b2c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b28) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b28);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x14610cd7,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b30) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b30) != (code *)0x0) && (REFG(int, 0x14c2b34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b30) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b30) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9de8c729)));
      REFG(int, 0x14c2b34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b30) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b30);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9de8c729,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b38) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b38) != (code *)0x0) && (REFG(int, 0x14c2b3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b38) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b38) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x473f7828)));
      REFG(int, 0x14c2b3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b38) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b38);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x473f7828,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b40) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b40) != (code *)0x0) && (REFG(int, 0x14c2b44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b40) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b40) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9fbae4eb)));
      REFG(int, 0x14c2b44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b40) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b40);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9fbae4eb,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b48) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b48) != (code *)0x0) && (REFG(int, 0x14c2b4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b48) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b48) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb2e98ab8)));
      REFG(int, 0x14c2b4c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b48) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b48);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb2e98ab8,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b50) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b50) != (code *)0x0) && (REFG(int, 0x14c2b54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b50) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b50) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6126010d)));
      REFG(int, 0x14c2b54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b50) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b50);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6126010d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b58) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b58) != (code *)0x0) && (REFG(int, 0x14c2b5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b58) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b58) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1dc91303)));
      REFG(int, 0x14c2b5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b58) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b58);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1dc91303,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b60) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b60) != (code *)0x0) && (REFG(int, 0x14c2b64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b60) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b60) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x44ee4841)));
      REFG(int, 0x14c2b64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b60) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b60);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x44ee4841,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b68) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b68) != (code *)0x0) && (REFG(int, 0x14c2b6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b68) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b68) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd01bd237)));
      REFG(int, 0x14c2b6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b68) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b68);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd01bd237,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b70) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b70) != (code *)0x0) && (REFG(int, 0x14c2b74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b70) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b70) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe6ce4f1)));
      REFG(int, 0x14c2b74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b70) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b70);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe6ce4f1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b78) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b78) != (code *)0x0) && (REFG(int, 0x14c2b7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b78) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b78) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x118d48a3)));
      REFG(int, 0x14c2b7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b78) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b78);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x118d48a3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b80) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b80) != (code *)0x0) && (REFG(int, 0x14c2b84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b80) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b80) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd34a789b)));
      REFG(int, 0x14c2b84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b80) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b80);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd34a789b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b88) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b88) != (code *)0x0) && (REFG(int, 0x14c2b8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b88) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b88) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe4eec07)));
      REFG(int, 0x14c2b8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b88) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b88);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe4eec07,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b90) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b90) != (code *)0x0) && (REFG(int, 0x14c2b94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b90) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b90) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa1ec8d74)));
      REFG(int, 0x14c2b94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b90) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b90);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa1ec8d74,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2b98) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2b98) != (code *)0x0) && (REFG(int, 0x14c2b9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2b98) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2b98) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2b98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7b0d72a3)));
      REFG(int, 0x14c2b9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2b98) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2b98);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7b0d72a3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2ba0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2ba0) != (code *)0x0) && (REFG(int, 0x14c2ba4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2ba0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2ba0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2ba0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x964bf452)));
      REFG(int, 0x14c2ba4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2ba0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2ba0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x964bf452,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2ba8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2ba8) != (code *)0x0) && (REFG(int, 0x14c2bac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2ba8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2ba8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2ba8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x51d53d06)));
      REFG(int, 0x14c2bac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2ba8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2ba8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x51d53d06,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2bb0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2bb0) != (code *)0x0) && (REFG(int, 0x14c2bb4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2bb0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2bb0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2bb0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2697a8d1)));
      REFG(int, 0x14c2bb4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2bb0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2bb0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2697a8d1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2bb8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2bb8) != (code *)0x0) && (REFG(int, 0x14c2bbc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2bb8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2bb8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2bb8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x462214a9)));
      REFG(int, 0x14c2bbc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2bb8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2bb8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x462214a9,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2bc0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2bc0) != (code *)0x0) && (REFG(int, 0x14c2bc4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2bc0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2bc0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2bc0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb981d935)));
      REFG(int, 0x14c2bc4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2bc0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2bc0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb981d935,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2bc8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2bc8) != (code *)0x0) && (REFG(int, 0x14c2bcc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2bc8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2bc8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2bc8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x96bd040e)));
      REFG(int, 0x14c2bcc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2bc8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2bc8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x96bd040e,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2bd0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2bd0) != (code *)0x0) && (REFG(int, 0x14c2bd4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2bd0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2bd0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2bd0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcde8e1a3)));
      REFG(int, 0x14c2bd4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2bd0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2bd0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcde8e1a3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2bd8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2bd8) != (code *)0x0) && (REFG(int, 0x14c2bdc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2bd8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2bd8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2bd8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6ba2a5d6)));
      REFG(int, 0x14c2bdc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2bd8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2bd8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6ba2a5d6,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2be0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2be0) != (code *)0x0) && (REFG(int, 0x14c2be4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2be0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2be0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2be0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7bf0a94d)));
      REFG(int, 0x14c2be4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2be0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2be0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7bf0a94d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2be8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2be8) != (code *)0x0) && (REFG(int, 0x14c2bec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2be8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2be8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2be8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfd7c5557)));
      REFG(int, 0x14c2bec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2be8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2be8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfd7c5557,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2bf0) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2bf0) != (code *)0x0) && (REFG(int, 0x14c2bf4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2bf0) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2bf0) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2bf0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x869534e2)));
      REFG(int, 0x14c2bf4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2bf0) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2bf0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x869534e2,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2bf8) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2bf8) != (code *)0x0) && (REFG(int, 0x14c2bfc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2bf8) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2bf8) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2bf8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xead72fe4)));
      REFG(int, 0x14c2bfc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2bf8) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2bf8);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xead72fe4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c00) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c00) != (code *)0x0) && (REFG(int, 0x14c2c04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c00) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c00) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x221fa8e8)));
      REFG(int, 0x14c2c04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c00) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c00);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x221fa8e8,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c08) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c08) != (code *)0x0) && (REFG(int, 0x14c2c0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c08) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c08) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbe7692ec)));
      REFG(int, 0x14c2c0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c08) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c08);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbe7692ec,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c10) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c10) != (code *)0x0) && (REFG(int, 0x14c2c14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c10) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c10) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf117b834)));
      REFG(int, 0x14c2c14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c10) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c10);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf117b834,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c18) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c18) != (code *)0x0) && (REFG(int, 0x14c2c1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c18) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c18) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x24409f48)));
      REFG(int, 0x14c2c1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c18) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c18);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x24409f48,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2,param_3);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c20) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c20) != (code *)0x0) && (REFG(int, 0x14c2c24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c20) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c20) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x49bceecf)));
      REFG(int, 0x14c2c24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c20) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c20);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x49bceecf,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c28) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c28) != (code *)0x0) && (REFG(int, 0x14c2c2c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c28) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c28) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c28) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x239c4545)));
      REFG(int, 0x14c2c2c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c28) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c28);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x239c4545,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))();
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c30) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c30) != (code *)0x0) && (REFG(int, 0x14c2c34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c30) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c30) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2ec50c2b)));
      REFG(int, 0x14c2c34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c30) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c30);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2ec50c2b,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))();
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c38) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c38) != (code *)0x0) && (REFG(int, 0x14c2c3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c38) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c38) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x348ff8e1)));
      REFG(int, 0x14c2c3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c38) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c38);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x348ff8e1,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c40) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c40) != (code *)0x0) && (REFG(int, 0x14c2c44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c40) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c40) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x296c434d)));
      REFG(int, 0x14c2c44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c40) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c40);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x296c434d,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c48) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c48) != (code *)0x0) && (REFG(int, 0x14c2c4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c48) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c48) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdfc063b7)));
      REFG(int, 0x14c2c4c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c48) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c48);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdfc063b7,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c50) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c50) != (code *)0x0) && (REFG(int, 0x14c2c54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c50) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c50) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xac7e37f4)));
      REFG(int, 0x14c2c54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c50) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c50);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xac7e37f4,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c58) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c58) != (code *)0x0) && (REFG(int, 0x14c2c5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c58) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c58) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3a153134)));
      REFG(int, 0x14c2c5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c58) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c58);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3a153134,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c60) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c60) != (code *)0x0) && (REFG(int, 0x14c2c64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c60) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c60) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf6a1ad68)));
      REFG(int, 0x14c2c64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c60) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c60);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf6a1ad68,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c68) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c68) != (code *)0x0) && (REFG(int, 0x14c2c6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c68) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c68) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2d68de96)));
      REFG(int, 0x14c2c6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c68) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c68);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2d68de96,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c70) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c70) != (code *)0x0) && (REFG(int, 0x14c2c74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c70) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c70) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1fb0bc30)));
      REFG(int, 0x14c2c74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c70) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c70);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1fb0bc30,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c78) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c78) != (code *)0x0) && (REFG(int, 0x14c2c7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c78) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c78) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x451f2134)));
      REFG(int, 0x14c2c7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c78) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c78);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x451f2134,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c80) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c80) != (code *)0x0) && (REFG(int, 0x14c2c84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c80) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c80) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5c069fa3)));
      REFG(int, 0x14c2c84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c80) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c80);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5c069fa3,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1,param_2);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c88) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c88) != (code *)0x0) && (REFG(int, 0x14c2c8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c88) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c88) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xda044458)));
      REFG(int, 0x14c2c8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c88) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c88);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xda044458,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
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
      REFG(undefined4, 0x14c2c90) = (code *)0x0;
    }
    if ((REFG(undefined4, 0x14c2c90) != (code *)0x0) && (REFG(int, 0x14c2c94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined4, 0x14c2c90) = (code *)0x0;
    }
    if (((REFG(undefined4, 0x14c2c90) == (code *)0x0) && ((*(int *)(gen_frame + 0x14)) != 0)) && (REFG(undefined4, 0x14c1ef0) != (code *)0x0)) {
      REFG(undefined4, 0x14c2c90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc9a8ecec)));
      REFG(int, 0x14c2c94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined4, 0x14c2c90) == (code *)0x0) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x14c2c90);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (REFG(undefined4, 0x14c1ef8) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc9a8ecec,&(*(undefined4 *)(gen_frame + 0xc)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x18)))(param_1);
      if (REFG(undefined4, 0x14c1efc) != (code *)0x0) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc9a8ecec,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) + -1;
    }
  }
  return uVar1;
}

