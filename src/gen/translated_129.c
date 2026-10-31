#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00b27c40 */
GEN_OWN GEN_FRAME uint F_00b27c40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb27c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  int extraout_ECX = 0;
  int extraout_ECX_00 = 0;
  int iVar2;
  code * extraout_EDX = 0;
  code * pcVar3;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c23a8) = ((code *)GEN_TOP(0x0));
    }
    iVar2 = extraout_ECX;
    if ((REFG(undefined * PTR32, 0x14c23a8) != ((code *)GEN_TOP(0x0))) && (iVar2 = 0, REFG(int, 0x14c23ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c23a8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c23a8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c23a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1cf639d9)));
      REFG(int, 0x14c23ac) = *(int *)&REFG(undefined, 0x14c1f34);
      iVar2 = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c23a8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c23a8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      pcVar3 = REFG(undefined * PTR32, 0x14c23a8);
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1cf639d9,&(*(undefined4 *)(gen_frame + 0x0)));
        iVar2 = extraout_ECX_00;
        pcVar3 = extraout_EDX;
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,CONCAT31((int3)((uint)((int)(uintptr_t)pcVar3) >> 8),param_2), CONCAT31((int3)((uint)iVar2 >> 8),param_3));
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1cf639d9,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b27da0 */
GEN_OWN GEN_FRAME uint F_00b27da0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb27da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c23b0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c23b0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c23b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c23b0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c23b0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c23b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe6dbea69)));
      REFG(int, 0x14c23b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c23b0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c23b0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe6dbea69,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe6dbea69,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b27f00 */
GEN_OWN GEN_FRAME uint F_00b27f00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb27f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c23b8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c23b8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c23bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c23b8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c23b8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c23b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xde1f9b45)));
      REFG(int, 0x14c23bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c23b8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c23b8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xde1f9b45,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xde1f9b45,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28050 */
GEN_OWN GEN_FRAME uint F_00b28050(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb28050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c23c0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c23c0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c23c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c23c0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c23c0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c23c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd2488b79)));
      REFG(int, 0x14c23c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c23c0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c23c0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd2488b79,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd2488b79,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b281b0 */
GEN_OWN GEN_FRAME uint F_00b281b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb281b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c23c8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c23c8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c23cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c23c8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c23c8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c23c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbd71f0c9)));
      REFG(int, 0x14c23cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c23c8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c23c8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbd71f0c9,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbd71f0c9,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28310 */
GEN_OWN GEN_FRAME uint F_00b28310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb28310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c23d0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c23d0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c23d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c23d0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c23d0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c23d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa57457a4)));
      REFG(int, 0x14c23d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c23d0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c23d0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa57457a4,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa57457a4,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28470 */
GEN_OWN GEN_FRAME uint F_00b28470(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb28470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c23d8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c23d8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c23dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c23d8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c23d8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c23d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb34bab4f)));
      REFG(int, 0x14c23dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c23d8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c23d8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb34bab4f,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb34bab4f,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b285d0 */
GEN_OWN GEN_FRAME uint F_00b285d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb285d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c23e0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c23e0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c23e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c23e0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c23e0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c23e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6a9f5b63)));
      REFG(int, 0x14c23e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c23e0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c23e0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6a9f5b63,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6a9f5b63,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28730 */
GEN_OWN GEN_FRAME uint F_00b28730(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb28730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c23e8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c23e8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c23ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c23e8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c23e8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c23e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7f7f4600)));
      REFG(int, 0x14c23ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c23e8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c23e8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7f7f4600,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7f7f4600,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28890 */
GEN_OWN GEN_FRAME uint F_00b28890(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb28890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c23f0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c23f0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c23f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c23f0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c23f0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c23f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa629da31)));
      REFG(int, 0x14c23f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c23f0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c23f0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa629da31,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa629da31,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b289e0 */
GEN_OWN GEN_FRAME uint F_00b289e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb289e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c23f8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c23f8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c23fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c23f8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c23f8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c23f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9a1b9365)));
      REFG(int, 0x14c23fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c23f8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c23f8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9a1b9365,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9a1b9365,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28b30 */
GEN_OWN GEN_FRAME uint F_00b28b30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb28b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2400) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2400) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2404) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2400) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2400) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2400) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x254a187)));
      REFG(int, 0x14c2404) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2400) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2400);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x254a187,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x254a187,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28c80 */
GEN_OWN GEN_FRAME uint F_00b28c80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb28c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2408) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2408) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c240c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2408) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2408) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2408) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x76bfa16b)));
      REFG(int, 0x14c240c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2408) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2408);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x76bfa16b,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x76bfa16b,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28de0 */
GEN_OWN GEN_FRAME uint F_00b28de0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb28de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2410) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2410) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2414) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2410) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2410) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2410) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x50016c78)));
      REFG(int, 0x14c2414) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2410) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2410);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x50016c78,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x50016c78,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b28f40 */
GEN_OWN GEN_FRAME uint F_00b28f40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb28f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2418) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2418) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c241c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2418) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2418) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2418) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9abdd40d)));
      REFG(int, 0x14c241c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2418) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2418);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9abdd40d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9abdd40d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b290a0 */
GEN_OWN GEN_FRAME uint F_00b290a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb290a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2420) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2420) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2424) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2420) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2420) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2420) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x20de9260)));
      REFG(int, 0x14c2424) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2420) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2420);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x20de9260,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x20de9260,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29200 */
GEN_OWN GEN_FRAME uint F_00b29200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb29200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2428) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2428) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c242c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2428) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2428) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2428) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x63f9799e)));
      REFG(int, 0x14c242c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2428) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2428);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x63f9799e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x63f9799e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29360 */
GEN_OWN GEN_FRAME uint F_00b29360(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb29360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2430) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2430) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2434) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2430) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2430) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2430) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x35c29134)));
      REFG(int, 0x14c2434) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2430) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2430);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x35c29134,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x35c29134,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b294c0 */
GEN_OWN GEN_FRAME uint F_00b294c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb294c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2438) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2438) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c243c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2438) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2438) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2438) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa70503b2)));
      REFG(int, 0x14c243c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2438) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2438);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa70503b2,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa70503b2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29620 */
GEN_OWN GEN_FRAME uint F_00b29620(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb29620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2440) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2440) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2444) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2440) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2440) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2440) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x22a78b05)));
      REFG(int, 0x14c2444) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2440) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2440);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x22a78b05,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x22a78b05,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29780 */
GEN_OWN GEN_FRAME uint F_00b29780(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb29780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2448) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2448) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c244c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2448) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2448) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2448) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4888d790)));
      REFG(int, 0x14c244c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2448) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2448);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4888d790,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4888d790,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b298e0 */
GEN_OWN GEN_FRAME uint F_00b298e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb298e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2450) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2450) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2454) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2450) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2450) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2450) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2863148d)));
      REFG(int, 0x14c2454) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2450) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2450);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2863148d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2863148d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29a30 */
GEN_OWN GEN_FRAME uint F_00b29a30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb29a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2458) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2458) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c245c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2458) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2458) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2458) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xab163097)));
      REFG(int, 0x14c245c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2458) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2458);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xab163097,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xab163097,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29b80 */
GEN_OWN GEN_FRAME uint F_00b29b80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb29b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2460) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2460) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2464) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2460) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2460) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2460) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x67b5db55)));
      REFG(int, 0x14c2464) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2460) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2460);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x67b5db55,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x67b5db55,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29ce0 */
GEN_OWN GEN_FRAME uint F_00b29ce0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb29ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2468) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2468) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c246c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2468) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2468) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2468) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3092ac32)));
      REFG(int, 0x14c246c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2468) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2468);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3092ac32,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3092ac32,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29e40 */
GEN_OWN GEN_FRAME uint F_00b29e40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb29e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2470) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2470) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2474) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2470) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2470) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2470) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd995937e)));
      REFG(int, 0x14c2474) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2470) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2470);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd995937e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd995937e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b29fa0 */
GEN_OWN GEN_FRAME uint F_00b29fa0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb29fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2478) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2478) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c247c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2478) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2478) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2478) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc64ff367)));
      REFG(int, 0x14c247c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2478) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2478);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc64ff367,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc64ff367,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2a100 */
GEN_OWN GEN_FRAME uint F_00b2a100(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2a100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2480) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2480) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2484) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2480) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2480) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2480) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfa13e65a)));
      REFG(int, 0x14c2484) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2480) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2480);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfa13e65a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfa13e65a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2a260 */
GEN_OWN GEN_FRAME uint F_00b2a260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2a260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2488) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2488) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c248c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2488) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2488) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2488) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6ae16ec3)));
      REFG(int, 0x14c248c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2488) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2488);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6ae16ec3,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6ae16ec3,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2a3c0 */
GEN_OWN GEN_FRAME uint F_00b2a3c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb2a3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2490) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2490) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2494) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2490) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2490) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2490) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd2ccf5d6)));
      REFG(int, 0x14c2494) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2490) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2490);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd2ccf5d6,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd2ccf5d6,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2a510 */
GEN_OWN GEN_FRAME uint F_00b2a510(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb2a510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2498) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2498) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c249c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2498) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2498) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2498) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9734f1d)));
      REFG(int, 0x14c249c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2498) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2498);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9734f1d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9734f1d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2a670 */
GEN_OWN GEN_FRAME uint F_00b2a670(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb2a670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c24a0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c24a0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c24a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c24a0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c24a0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c24a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x69c6f365)));
      REFG(int, 0x14c24a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c24a0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c24a0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x69c6f365,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x69c6f365,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2a7d0 */
GEN_OWN GEN_FRAME uint F_00b2a7d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb2a7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c24a8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c24a8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c24ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c24a8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c24a8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c24a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x67efd887)));
      REFG(int, 0x14c24ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c24a8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c24a8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x67efd887,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x67efd887,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2a930 */
GEN_OWN GEN_FRAME uint F_00b2a930(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb2a930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c24b0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c24b0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c24b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c24b0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c24b0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c24b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x41511594)));
      REFG(int, 0x14c24b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c24b0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c24b0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x41511594,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x41511594,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2aa90 */
GEN_OWN GEN_FRAME uint F_00b2aa90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2aa90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c24b8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c24b8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c24bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c24b8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c24b8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c24b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6067af3f)));
      REFG(int, 0x14c24bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c24b8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c24b8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6067af3f,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6067af3f,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2abf0 */
GEN_OWN GEN_FRAME uint F_00b2abf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2abf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c24c0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c24c0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c24c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c24c0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c24c0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c24c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x92f9d80d)));
      REFG(int, 0x14c24c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c24c0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c24c0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x92f9d80d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x92f9d80d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2ad50 */
GEN_OWN GEN_FRAME uint F_00b2ad50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2ad50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c24c8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c24c8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c24cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c24c8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c24c8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c24c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3230d69a)));
      REFG(int, 0x14c24cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c24c8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c24c8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3230d69a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3230d69a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2aeb0 */
GEN_OWN GEN_FRAME uint F_00b2aeb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb2aeb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c24d0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c24d0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c24d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c24d0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c24d0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c24d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x291bff2)));
      REFG(int, 0x14c24d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c24d0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c24d0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x291bff2,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x291bff2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b010 */
GEN_OWN GEN_FRAME uint F_00b2b010(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2b010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c24d8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c24d8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c24dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c24d8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c24d8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c24d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4085de45)));
      REFG(int, 0x14c24dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c24d8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c24d8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4085de45,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4085de45,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b170 */
GEN_OWN GEN_FRAME uint F_00b2b170(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2b170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c24e0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c24e0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c24e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c24e0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c24e0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c24e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x172409b4)));
      REFG(int, 0x14c24e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c24e0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c24e0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x172409b4,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x172409b4,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b2d0 */
GEN_OWN GEN_FRAME uint F_00b2b2d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2b2d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c24e8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c24e8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c24ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c24e8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c24e8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c24e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe45002d)));
      REFG(int, 0x14c24ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c24e8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c24e8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe45002d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe45002d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b430 */
GEN_OWN GEN_FRAME uint F_00b2b430(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2b430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c24f0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c24f0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c24f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c24f0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c24f0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c24f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4a82c2b1)));
      REFG(int, 0x14c24f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c24f0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c24f0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4a82c2b1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4a82c2b1,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b590 */
GEN_OWN GEN_FRAME uint F_00b2b590(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2b590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c24f8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c24f8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c24fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c24f8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c24f8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c24f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x95b64341)));
      REFG(int, 0x14c24fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c24f8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c24f8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x95b64341,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x95b64341,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b6f0 */
GEN_OWN GEN_FRAME uint F_00b2b6f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2b6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2500) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2500) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2504) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2500) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2500) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2500) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf5a0f22c)));
      REFG(int, 0x14c2504) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2500) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2500);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf5a0f22c,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf5a0f22c,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b850 */
GEN_OWN GEN_FRAME uint F_00b2b850(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2b850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2508) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2508) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c250c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2508) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2508) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2508) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9fb063df)));
      REFG(int, 0x14c250c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2508) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2508);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9fb063df,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9fb063df,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2b9b0 */
GEN_OWN GEN_FRAME uint F_00b2b9b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2b9b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2510) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2510) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2514) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2510) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2510) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2510) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3fc9a59c)));
      REFG(int, 0x14c2514) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2510) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2510);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3fc9a59c,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3fc9a59c,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2bb10 */
GEN_OWN GEN_FRAME uint F_00b2bb10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2bb10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2518) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2518) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c251c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2518) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2518) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2518) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5757474a)));
      REFG(int, 0x14c251c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2518) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2518);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5757474a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5757474a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2bc70 */
GEN_OWN GEN_FRAME uint F_00b2bc70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2bc70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2520) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2520) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2524) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2520) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2520) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2520) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xca36a3ab)));
      REFG(int, 0x14c2524) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2520) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2520);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xca36a3ab,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xca36a3ab,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2bdd0 */
GEN_OWN GEN_FRAME uint F_00b2bdd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2bdd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2528) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2528) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c252c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2528) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2528) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2528) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6dfd1c8c)));
      REFG(int, 0x14c252c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2528) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2528);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6dfd1c8c,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6dfd1c8c,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2bf30 */
GEN_OWN GEN_FRAME uint F_00b2bf30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2bf30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2530) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2530) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2534) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2530) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2530) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2530) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xaed02700)));
      REFG(int, 0x14c2534) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2530) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2530);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xaed02700,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xaed02700,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2c090 */
GEN_OWN GEN_FRAME uint F_00b2c090(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb2c090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2538) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2538) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c253c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2538) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2538) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2538) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6bb1ee5d)));
      REFG(int, 0x14c253c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2538) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2538);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6bb1ee5d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6bb1ee5d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2c1f0 */
GEN_OWN GEN_FRAME uint F_00b2c1f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb2c1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2540) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2540) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2544) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2540) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2540) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2540) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x57d9060f)));
      REFG(int, 0x14c2544) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2540) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2540);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x57d9060f,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x57d9060f,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2c350 */
GEN_OWN GEN_FRAME uint F_00b2c350(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2c350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2548) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2548) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c254c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2548) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2548) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2548) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdc27d5d4)));
      REFG(int, 0x14c254c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2548) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2548);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdc27d5d4,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdc27d5d4,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2c4b0 */
GEN_OWN GEN_FRAME uint F_00b2c4b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xb2c4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2550) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2550) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2554) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2550) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2550) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2550) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xafc4833e)));
      REFG(int, 0x14c2554) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2550) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2550);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xafc4833e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xafc4833e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2c630 */
GEN_OWN GEN_FRAME uint F_00b2c630(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2c630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2558) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2558) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c255c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2558) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2558) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2558) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x175167e9)));
      REFG(int, 0x14c255c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2558) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2558);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x175167e9,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x175167e9,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2c790 */
GEN_OWN GEN_FRAME uint F_00b2c790(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2c790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2560) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2560) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2564) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2560) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2560) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2560) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3b05c7e1)));
      REFG(int, 0x14c2564) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2560) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2560);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3b05c7e1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3b05c7e1,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2c8f0 */
GEN_OWN GEN_FRAME uint F_00b2c8f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb2c8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2568) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2568) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c256c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2568) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2568) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2568) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x42892957)));
      REFG(int, 0x14c256c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2568) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2568);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x42892957,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x42892957,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2ca50 */
GEN_OWN GEN_FRAME uint F_00b2ca50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb2ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2570) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2570) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2574) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2570) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2570) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2570) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbf6c1762)));
      REFG(int, 0x14c2574) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2570) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2570);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbf6c1762,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbf6c1762,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2cbc0 */
GEN_OWN GEN_FRAME uint F_00b2cbc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb2cbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2578) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2578) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c257c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2578) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2578) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2578) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x854ba405)));
      REFG(int, 0x14c257c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2578) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2578);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x854ba405,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x854ba405,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2cd10 */
GEN_OWN GEN_FRAME uint F_00b2cd10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2cd10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2580) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2580) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2584) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2580) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2580) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2580) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe7cb998d)));
      REFG(int, 0x14c2584) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2580) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2580);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe7cb998d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe7cb998d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2ce70 */
GEN_OWN GEN_FRAME uint F_00b2ce70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2ce70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2588) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2588) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c258c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2588) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2588) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2588) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa9062c78)));
      REFG(int, 0x14c258c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2588) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2588);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa9062c78,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa9062c78,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2cfd0 */
GEN_OWN GEN_FRAME uint F_00b2cfd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2cfd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2590) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2590) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2594) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2590) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2590) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2590) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa2072d59)));
      REFG(int, 0x14c2594) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2590) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2590);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa2072d59,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa2072d59,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2d130 */
GEN_OWN GEN_FRAME uint F_00b2d130(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2d130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2598) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2598) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c259c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2598) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2598) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2598) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1f7db630)));
      REFG(int, 0x14c259c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2598) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2598);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1f7db630,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1f7db630,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2d290 */
GEN_OWN GEN_FRAME uint F_00b2d290(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2d290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c25a0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c25a0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c25a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c25a0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c25a0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c25a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x552e5b9b)));
      REFG(int, 0x14c25a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c25a0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c25a0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x552e5b9b,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x552e5b9b,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2d3f0 */
GEN_OWN GEN_FRAME uint F_00b2d3f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb2d3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c25a8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c25a8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c25ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c25a8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c25a8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c25a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x49882876)));
      REFG(int, 0x14c25ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c25a8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c25a8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x49882876,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x49882876,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2d550 */
GEN_OWN GEN_FRAME uint F_00b2d550(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2d550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c25b0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c25b0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c25b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c25b0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c25b0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c25b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcbbd40f0)));
      REFG(int, 0x14c25b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c25b0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c25b0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcbbd40f0,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcbbd40f0,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2d6b0 */
GEN_OWN GEN_FRAME uint F_00b2d6b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2d6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c25b8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c25b8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c25bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c25b8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c25b8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c25b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x61d7b624)));
      REFG(int, 0x14c25bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c25b8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c25b8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x61d7b624,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x61d7b624,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2d810 */
GEN_OWN GEN_FRAME uint F_00b2d810(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb2d810u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c25c0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c25c0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c25c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c25c0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c25c0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c25c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4144111a)));
      REFG(int, 0x14c25c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c25c0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c25c0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4144111a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4144111a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2d970 */
GEN_OWN GEN_FRAME uint F_00b2d970(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2d970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c25c8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c25c8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c25cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c25c8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c25c8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c25c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf98854c8)));
      REFG(int, 0x14c25cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c25c8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c25c8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf98854c8,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf98854c8,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2dad0 */
GEN_OWN GEN_FRAME uint F_00b2dad0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb2dad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c25d0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c25d0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c25d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c25d0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c25d0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c25d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3efada1d)));
      REFG(int, 0x14c25d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c25d0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c25d0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3efada1d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3efada1d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2dc30 */
GEN_OWN GEN_FRAME uint F_00b2dc30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2dc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c25d8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c25d8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c25dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c25d8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c25d8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c25d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8e985ccd)));
      REFG(int, 0x14c25dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c25d8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c25d8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8e985ccd,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8e985ccd,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2dd90 */
GEN_OWN GEN_FRAME uint F_00b2dd90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2dd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c25e0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c25e0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c25e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c25e0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c25e0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c25e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf36a668d)));
      REFG(int, 0x14c25e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c25e0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c25e0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf36a668d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf36a668d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2def0 */
GEN_OWN GEN_FRAME uint F_00b2def0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2def0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c25e8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c25e8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c25ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c25e8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c25e8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c25e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf5f4d01)));
      REFG(int, 0x14c25ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c25e8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c25e8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf5f4d01,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf5f4d01,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e050 */
GEN_OWN GEN_FRAME uint F_00b2e050(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb2e050u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c25f0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c25f0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c25f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c25f0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c25f0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c25f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd6b99d89)));
      REFG(int, 0x14c25f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c25f0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c25f0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd6b99d89,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd6b99d89,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e1b0 */
GEN_OWN GEN_FRAME uint F_00b2e1b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb2e1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c25f8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c25f8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c25fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c25f8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c25f8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c25f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdbbc0af4)));
      REFG(int, 0x14c25fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c25f8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c25f8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdbbc0af4,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdbbc0af4,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e310 */
GEN_OWN GEN_FRAME uint F_00b2e310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2e310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2600) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2600) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2604) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2600) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2600) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2600) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x66fb7fc0)));
      REFG(int, 0x14c2604) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2600) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2600);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x66fb7fc0,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x66fb7fc0,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e470 */
GEN_OWN GEN_FRAME uint F_00b2e470(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2e470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2608) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2608) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c260c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2608) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2608) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2608) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8eb56969)));
      REFG(int, 0x14c260c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2608) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2608);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8eb56969,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8eb56969,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e5d0 */
GEN_OWN GEN_FRAME uint F_00b2e5d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb2e5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2610) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2610) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2614) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2610) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2610) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2610) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfb22d656)));
      REFG(int, 0x14c2614) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2610) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2610);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfb22d656,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfb22d656,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e720 */
GEN_OWN GEN_FRAME uint F_00b2e720(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb2e720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2618) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2618) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c261c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2618) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2618) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2618) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe23b68c1)));
      REFG(int, 0x14c261c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2618) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2618);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe23b68c1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe23b68c1,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e870 */
GEN_OWN GEN_FRAME uint F_00b2e870(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2e870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2620) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2620) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2624) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2620) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2620) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2620) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1efc3957)));
      REFG(int, 0x14c2624) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2620) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2620);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1efc3957,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1efc3957,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2e9d0 */
GEN_OWN GEN_FRAME uint F_00b2e9d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb2e9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2628) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2628) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c262c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2628) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2628) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2628) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf4c863ac)));
      REFG(int, 0x14c262c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2628) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2628);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf4c863ac,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf4c863ac,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2eb20 */
GEN_OWN GEN_FRAME uint F_00b2eb20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb2eb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2630) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2630) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2634) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2630) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2630) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2630) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x69a9874d)));
      REFG(int, 0x14c2634) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2630) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2630);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x69a9874d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x69a9874d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2ec70 */
GEN_OWN GEN_FRAME uint F_00b2ec70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb2ec70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2638) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2638) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c263c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2638) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2638) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2638) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcadcb956)));
      REFG(int, 0x14c263c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2638) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2638);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcadcb956,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcadcb956,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2edd0 */
GEN_OWN GEN_FRAME uint F_00b2edd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb2edd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2640) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2640) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2644) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2640) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2640) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2640) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x79232685)));
      REFG(int, 0x14c2644) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2640) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2640);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x79232685,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x79232685,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2ef20 */
GEN_OWN GEN_FRAME uint F_00b2ef20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2ef20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2648) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2648) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c264c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2648) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2648) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2648) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5f35bcb5)));
      REFG(int, 0x14c264c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2648) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2648);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5f35bcb5,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5f35bcb5,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2f080 */
GEN_OWN GEN_FRAME uint F_00b2f080(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2f080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2650) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2650) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2654) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2650) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2650) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2650) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf4c2f8cc)));
      REFG(int, 0x14c2654) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2650) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2650);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf4c2f8cc,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf4c2f8cc,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2f1e0 */
GEN_OWN GEN_FRAME uint F_00b2f1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21, unsigned int gen_a22, unsigned int gen_a23, unsigned int gen_a24, unsigned int gen_a25, unsigned int gen_a26, unsigned int gen_a27, unsigned int gen_a28, unsigned int gen_a29, unsigned int gen_a30, unsigned int gen_a31, unsigned int gen_a32, unsigned int gen_a33, unsigned int gen_a34, unsigned int gen_a35, unsigned int gen_a36, unsigned int gen_a37, unsigned int gen_a38, unsigned int gen_a39, unsigned int gen_a40, unsigned int gen_a41, unsigned int gen_a42, unsigned int gen_a43, unsigned int gen_a44, unsigned int gen_a45, unsigned int gen_a46, unsigned int gen_a47, unsigned int gen_a48, unsigned int gen_a49, unsigned int gen_a50, unsigned int gen_a51, unsigned int gen_a52, unsigned int gen_a53, unsigned int gen_a54, unsigned int gen_a55, unsigned int gen_a56, unsigned int gen_a57, unsigned int gen_a58, unsigned int gen_a59, unsigned int gen_a60, unsigned int gen_a61, unsigned int gen_a62, unsigned int gen_a63, unsigned int gen_a64, unsigned int gen_a65, unsigned int gen_a66, unsigned int gen_a67, unsigned int gen_a68, unsigned int gen_a69, unsigned int gen_a70, unsigned int gen_a71, unsigned int gen_a72, unsigned int gen_a73, unsigned int gen_a74, unsigned int gen_a75, unsigned int gen_a76, unsigned int gen_a77, unsigned int gen_a78, unsigned int gen_a79, unsigned int gen_a80, unsigned int gen_a81, unsigned int gen_a82, unsigned int gen_a83, unsigned int gen_a84, unsigned int gen_a85, unsigned int gen_a86, unsigned int gen_a87, unsigned int gen_a88, unsigned int gen_a89, unsigned int gen_a90, unsigned int gen_a91, unsigned int gen_a92, unsigned int gen_a93, unsigned int gen_a94, unsigned int gen_a95, unsigned int gen_a96, unsigned int gen_a97, unsigned int gen_a98, unsigned int gen_a99, unsigned int gen_a100, unsigned int gen_a101, unsigned int gen_a102, unsigned int gen_a103, unsigned int gen_a104, unsigned int gen_a105, unsigned int gen_a106, unsigned int gen_a107, unsigned int gen_a108, unsigned int gen_a109, unsigned int gen_a110, unsigned int gen_a111, unsigned int gen_a112, unsigned int gen_a113, unsigned int gen_a114, unsigned int gen_a115, unsigned int gen_a116, unsigned int gen_a117, unsigned int gen_a118, unsigned int gen_a119, unsigned int gen_a120, unsigned int gen_a121, unsigned int gen_a122, unsigned int gen_a123, unsigned int gen_a124, unsigned int gen_a125, unsigned int gen_a126, unsigned int gen_a127, unsigned int gen_a128, unsigned int gen_a129)
{
  GEN_ENTER(0xb2f1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[130];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  gen_args[14] = gen_a14;
  gen_args[15] = gen_a15;
  gen_args[16] = gen_a16;
  gen_args[17] = gen_a17;
  gen_args[18] = gen_a18;
  gen_args[19] = gen_a19;
  gen_args[20] = gen_a20;
  gen_args[21] = gen_a21;
  gen_args[22] = gen_a22;
  gen_args[23] = gen_a23;
  gen_args[24] = gen_a24;
  gen_args[25] = gen_a25;
  gen_args[26] = gen_a26;
  gen_args[27] = gen_a27;
  gen_args[28] = gen_a28;
  gen_args[29] = gen_a29;
  gen_args[30] = gen_a30;
  gen_args[31] = gen_a31;
  gen_args[32] = gen_a32;
  gen_args[33] = gen_a33;
  gen_args[34] = gen_a34;
  gen_args[35] = gen_a35;
  gen_args[36] = gen_a36;
  gen_args[37] = gen_a37;
  gen_args[38] = gen_a38;
  gen_args[39] = gen_a39;
  gen_args[40] = gen_a40;
  gen_args[41] = gen_a41;
  gen_args[42] = gen_a42;
  gen_args[43] = gen_a43;
  gen_args[44] = gen_a44;
  gen_args[45] = gen_a45;
  gen_args[46] = gen_a46;
  gen_args[47] = gen_a47;
  gen_args[48] = gen_a48;
  gen_args[49] = gen_a49;
  gen_args[50] = gen_a50;
  gen_args[51] = gen_a51;
  gen_args[52] = gen_a52;
  gen_args[53] = gen_a53;
  gen_args[54] = gen_a54;
  gen_args[55] = gen_a55;
  gen_args[56] = gen_a56;
  gen_args[57] = gen_a57;
  gen_args[58] = gen_a58;
  gen_args[59] = gen_a59;
  gen_args[60] = gen_a60;
  gen_args[61] = gen_a61;
  gen_args[62] = gen_a62;
  gen_args[63] = gen_a63;
  gen_args[64] = gen_a64;
  gen_args[65] = gen_a65;
  gen_args[66] = gen_a66;
  gen_args[67] = gen_a67;
  gen_args[68] = gen_a68;
  gen_args[69] = gen_a69;
  gen_args[70] = gen_a70;
  gen_args[71] = gen_a71;
  gen_args[72] = gen_a72;
  gen_args[73] = gen_a73;
  gen_args[74] = gen_a74;
  gen_args[75] = gen_a75;
  gen_args[76] = gen_a76;
  gen_args[77] = gen_a77;
  gen_args[78] = gen_a78;
  gen_args[79] = gen_a79;
  gen_args[80] = gen_a80;
  gen_args[81] = gen_a81;
  gen_args[82] = gen_a82;
  gen_args[83] = gen_a83;
  gen_args[84] = gen_a84;
  gen_args[85] = gen_a85;
  gen_args[86] = gen_a86;
  gen_args[87] = gen_a87;
  gen_args[88] = gen_a88;
  gen_args[89] = gen_a89;
  gen_args[90] = gen_a90;
  gen_args[91] = gen_a91;
  gen_args[92] = gen_a92;
  gen_args[93] = gen_a93;
  gen_args[94] = gen_a94;
  gen_args[95] = gen_a95;
  gen_args[96] = gen_a96;
  gen_args[97] = gen_a97;
  gen_args[98] = gen_a98;
  gen_args[99] = gen_a99;
  gen_args[100] = gen_a100;
  gen_args[101] = gen_a101;
  gen_args[102] = gen_a102;
  gen_args[103] = gen_a103;
  gen_args[104] = gen_a104;
  gen_args[105] = gen_a105;
  gen_args[106] = gen_a106;
  gen_args[107] = gen_a107;
  gen_args[108] = gen_a108;
  gen_args[109] = gen_a109;
  gen_args[110] = gen_a110;
  gen_args[111] = gen_a111;
  gen_args[112] = gen_a112;
  gen_args[113] = gen_a113;
  gen_args[114] = gen_a114;
  gen_args[115] = gen_a115;
  gen_args[116] = gen_a116;
  gen_args[117] = gen_a117;
  gen_args[118] = gen_a118;
  gen_args[119] = gen_a119;
  gen_args[120] = gen_a120;
  gen_args[121] = gen_a121;
  gen_args[122] = gen_a122;
  gen_args[123] = gen_a123;
  gen_args[124] = gen_a124;
  gen_args[125] = gen_a125;
  gen_args[126] = gen_a126;
  gen_args[127] = gen_a127;
  gen_args[128] = gen_a128;
  gen_args[129] = gen_a129;
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
  undefined4 param_14 = (undefined4)gen_a13;
  undefined4 param_15 = (undefined4)gen_a14;
  undefined4 param_16 = (undefined4)gen_a15;
  undefined4 param_17 = (undefined4)gen_a16;
  undefined4 param_18 = (undefined4)gen_a17;
  undefined4 param_19 = (undefined4)gen_a18;
  undefined4 param_20 = (undefined4)gen_a19;
  undefined4 param_21 = (undefined4)gen_a20;
  undefined4 param_22 = (undefined4)gen_a21;
  undefined4 param_23 = (undefined4)gen_a22;
  undefined4 param_24 = (undefined4)gen_a23;
  undefined4 param_25 = (undefined4)gen_a24;
  undefined4 param_26 = (undefined4)gen_a25;
  undefined4 param_27 = (undefined4)gen_a26;
  undefined4 param_28 = (undefined4)gen_a27;
  undefined4 param_29 = (undefined4)gen_a28;
  undefined4 param_30 = (undefined4)gen_a29;
  undefined4 param_31 = (undefined4)gen_a30;
  undefined4 param_32 = (undefined4)gen_a31;
  undefined4 param_33 = (undefined4)gen_a32;
  undefined4 param_34 = (undefined4)gen_a33;
  undefined4 param_35 = (undefined4)gen_a34;
  undefined4 param_36 = (undefined4)gen_a35;
  undefined4 param_37 = (undefined4)gen_a36;
  undefined4 param_38 = (undefined4)gen_a37;
  undefined4 param_39 = (undefined4)gen_a38;
  undefined4 param_40 = (undefined4)gen_a39;
  undefined4 param_41 = (undefined4)gen_a40;
  undefined4 param_42 = (undefined4)gen_a41;
  undefined4 param_43 = (undefined4)gen_a42;
  undefined4 param_44 = (undefined4)gen_a43;
  undefined4 param_45 = (undefined4)gen_a44;
  undefined4 param_46 = (undefined4)gen_a45;
  undefined4 param_47 = (undefined4)gen_a46;
  undefined4 param_48 = (undefined4)gen_a47;
  undefined4 param_49 = (undefined4)gen_a48;
  undefined4 param_50 = (undefined4)gen_a49;
  undefined4 param_51 = (undefined4)gen_a50;
  undefined4 param_52 = (undefined4)gen_a51;
  undefined4 param_53 = (undefined4)gen_a52;
  undefined4 param_54 = (undefined4)gen_a53;
  undefined4 param_55 = (undefined4)gen_a54;
  undefined4 param_56 = (undefined4)gen_a55;
  undefined4 param_57 = (undefined4)gen_a56;
  undefined4 param_58 = (undefined4)gen_a57;
  undefined4 param_59 = (undefined4)gen_a58;
  undefined4 param_60 = (undefined4)gen_a59;
  undefined4 param_61 = (undefined4)gen_a60;
  undefined4 param_62 = (undefined4)gen_a61;
  undefined4 param_63 = (undefined4)gen_a62;
  undefined4 param_64 = (undefined4)gen_a63;
  undefined4 param_65 = (undefined4)gen_a64;
  undefined4 param_66 = (undefined4)gen_a65;
  undefined4 param_67 = (undefined4)gen_a66;
  undefined4 param_68 = (undefined4)gen_a67;
  undefined4 param_69 = (undefined4)gen_a68;
  undefined4 param_70 = (undefined4)gen_a69;
  undefined4 param_71 = (undefined4)gen_a70;
  undefined4 param_72 = (undefined4)gen_a71;
  undefined4 param_73 = (undefined4)gen_a72;
  undefined4 param_74 = (undefined4)gen_a73;
  undefined4 param_75 = (undefined4)gen_a74;
  undefined4 param_76 = (undefined4)gen_a75;
  undefined4 param_77 = (undefined4)gen_a76;
  undefined4 param_78 = (undefined4)gen_a77;
  undefined4 param_79 = (undefined4)gen_a78;
  undefined4 param_80 = (undefined4)gen_a79;
  undefined4 param_81 = (undefined4)gen_a80;
  undefined4 param_82 = (undefined4)gen_a81;
  undefined4 param_83 = (undefined4)gen_a82;
  undefined4 param_84 = (undefined4)gen_a83;
  undefined4 param_85 = (undefined4)gen_a84;
  undefined4 param_86 = (undefined4)gen_a85;
  undefined4 param_87 = (undefined4)gen_a86;
  undefined4 param_88 = (undefined4)gen_a87;
  undefined4 param_89 = (undefined4)gen_a88;
  undefined4 param_90 = (undefined4)gen_a89;
  undefined4 param_91 = (undefined4)gen_a90;
  undefined4 param_92 = (undefined4)gen_a91;
  undefined4 param_93 = (undefined4)gen_a92;
  undefined4 param_94 = (undefined4)gen_a93;
  undefined4 param_95 = (undefined4)gen_a94;
  undefined4 param_96 = (undefined4)gen_a95;
  undefined4 param_97 = (undefined4)gen_a96;
  undefined4 param_98 = (undefined4)gen_a97;
  undefined4 param_99 = (undefined4)gen_a98;
  undefined4 param_100 = (undefined4)gen_a99;
  undefined4 param_101 = (undefined4)gen_a100;
  undefined4 param_102 = (undefined4)gen_a101;
  undefined4 param_103 = (undefined4)gen_a102;
  undefined4 param_104 = (undefined4)gen_a103;
  undefined4 param_105 = (undefined4)gen_a104;
  undefined4 param_106 = (undefined4)gen_a105;
  undefined4 param_107 = (undefined4)gen_a106;
  undefined4 param_108 = (undefined4)gen_a107;
  undefined4 param_109 = (undefined4)gen_a108;
  undefined4 param_110 = (undefined4)gen_a109;
  undefined4 param_111 = (undefined4)gen_a110;
  undefined4 param_112 = (undefined4)gen_a111;
  undefined4 param_113 = (undefined4)gen_a112;
  undefined4 param_114 = (undefined4)gen_a113;
  undefined4 param_115 = (undefined4)gen_a114;
  undefined4 param_116 = (undefined4)gen_a115;
  undefined4 param_117 = (undefined4)gen_a116;
  undefined4 param_118 = (undefined4)gen_a117;
  undefined4 param_119 = (undefined4)gen_a118;
  undefined4 param_120 = (undefined4)gen_a119;
  undefined4 param_121 = (undefined4)gen_a120;
  undefined4 param_122 = (undefined4)gen_a121;
  undefined4 param_123 = (undefined4)gen_a122;
  undefined4 param_124 = (undefined4)gen_a123;
  undefined4 param_125 = (undefined4)gen_a124;
  undefined4 param_126 = (undefined4)gen_a125;
  undefined4 param_127 = (undefined4)gen_a126;
  undefined4 param_128 = (undefined4)gen_a127;
  undefined4 param_129 = (undefined4)gen_a128;
  undefined4 param_130 = (undefined4)gen_a129;
  uintptr_t gen_esp0 = (uintptr_t)gen_args - 4;
  GEN_FRAME_DECL_TOP(0x22c, 4, 4);
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(int *)(gen_frame + 0x220)) = 0;
  (*(int *)(gen_frame + 0x210)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x204)) = &(*(int *)(gen_frame + 0x220));
  (*(undefined4 *)(gen_frame + 0x200)) = 0xb2f1ff;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x220)));
  (*(uint *)(gen_frame + 0x214)) = uVar1;
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2658) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2658) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c265c) != *(int *)(&REFG(undefined, 0x14c1f34) + (*(int *)(gen_frame + 0x210)) * 4))) {
      REFG(undefined * PTR32, 0x14c2658) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2658) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x220)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      (*(int * PTR32 *)(gen_frame + 0x204)) = ((int *)GEN_TOP(0xfa0b9a59));
      (*(undefined4 *)(gen_frame + 0x200)) = 0xb2f271;
      REFG(undefined * PTR32, 0x14c2658) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfa0b9a59)));
      REFG(int, 0x14c265c) = *(int *)(&REFG(undefined, 0x14c1f34) + (*(int *)(gen_frame + 0x210)) * 4);
    }
    if (REFG(undefined * PTR32, 0x14c2658) == ((code *)GEN_TOP(0x0))) {
      (&REFG(undefined4, 0x14c1f24))[(int)((*(int *)(gen_frame + 0x210)))] = (&REFG(undefined4, 0x14c1f24))[(int)((*(int *)(gen_frame + 0x210)))] - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x224)) = REFG(undefined * PTR32, 0x14c2658);
      (*(undefined4 *)(gen_frame + 0x218)) = 0;
      (*(undefined4 *)(gen_frame + 0x21c)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        (*(int * PTR32 *)(gen_frame + 0x204)) = &(*(undefined4 *)(gen_frame + 0x218));
        (*(undefined4 *)(gen_frame + 0x200)) = 0xfa0b9a59;
        (*(undefined4 *)(gen_frame + 0x1fc)) = 0xb2f2e2;
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfa0b9a59,&(*(undefined4 *)(gen_frame + 0x218)));
      }
      (*(int * PTR32 *)(gen_frame + 0x204)) = ((int *)GEN_TOP(param_130));
      puVar3 = (gen_frame + 0x0);
      for (iVar2 = 0x81; gen_esp0 = (uintptr_t)((int)gen_esp0 + 4),
          iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar3 = *((undefined4 *)GEN_TOP(gen_esp0));
        puVar3 = puVar3 + 1;
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x224)))((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                         (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                         (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),
                         (*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),
                         (*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),(*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),
                         (*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),(*(undefined4 *)(gen_frame + 0x8c)),
                         (*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 *)(gen_frame + 0x98)),(*(undefined4 *)(gen_frame + 0x9c)),(*(undefined4 *)(gen_frame + 0xa0)),(*(undefined4 *)(gen_frame + 0xa4)),
                         (*(undefined4 *)(gen_frame + 0xa8)),(*(undefined4 *)(gen_frame + 0xac)),(*(undefined4 *)(gen_frame + 0xb0)),(*(undefined4 *)(gen_frame + 0xb4)),(*(undefined4 *)(gen_frame + 0xb8)),(*(undefined4 *)(gen_frame + 0xbc)),
                         (*(undefined4 *)(gen_frame + 0xc0)),(*(undefined4 *)(gen_frame + 0xc4)),(*(undefined4 *)(gen_frame + 0xc8)),(*(undefined4 *)(gen_frame + 0xcc)),(*(undefined4 *)(gen_frame + 0xd0)),(*(undefined4 *)(gen_frame + 0xd4)),
                         (*(undefined4 *)(gen_frame + 0xd8)),(*(undefined4 *)(gen_frame + 0xdc)),(*(undefined4 *)(gen_frame + 0xe0)),(*(undefined4 *)(gen_frame + 0xe4)),(*(undefined4 *)(gen_frame + 0xe8)),(*(undefined4 *)(gen_frame + 0xec)),
                         (*(undefined4 *)(gen_frame + 0xf0)),(*(undefined4 *)(gen_frame + 0xf4)),(*(undefined4 *)(gen_frame + 0xf8)),(*(undefined4 *)(gen_frame + 0xfc)),(*(undefined4 *)(gen_frame + 0x100)),(*(undefined4 *)(gen_frame + 0x104)),
                         (*(undefined4 *)(gen_frame + 0x108)),(*(undefined4 *)(gen_frame + 0x10c)),(*(undefined4 *)(gen_frame + 0x110)),(*(undefined4 *)(gen_frame + 0x114)),(*(undefined4 *)(gen_frame + 0x118)),(*(undefined4 *)(gen_frame + 0x11c)),
                         (*(undefined4 *)(gen_frame + 0x120)),(*(undefined4 *)(gen_frame + 0x124)),(*(undefined4 *)(gen_frame + 0x128)),(*(undefined4 *)(gen_frame + 0x12c)),(*(undefined4 *)(gen_frame + 0x130)),(*(undefined4 *)(gen_frame + 0x134)),(*(undefined4 *)(gen_frame + 0x138)),
                         (*(undefined4 *)(gen_frame + 0x13c)),(*(undefined4 *)(gen_frame + 0x140)),(*(undefined4 *)(gen_frame + 0x144)),(*(undefined4 *)(gen_frame + 0x148)),(*(undefined4 *)(gen_frame + 0x14c)),(*(undefined4 *)(gen_frame + 0x150)),(*(undefined4 *)(gen_frame + 0x154)),
                         (*(undefined4 *)(gen_frame + 0x158)),(*(undefined4 *)(gen_frame + 0x15c)),(*(undefined4 *)(gen_frame + 0x160)),(*(undefined4 *)(gen_frame + 0x164)),(*(undefined4 *)(gen_frame + 0x168)),(*(undefined4 *)(gen_frame + 0x16c)),(*(undefined4 *)(gen_frame + 0x170)),
                         (*(undefined4 *)(gen_frame + 0x174)),(*(undefined4 *)(gen_frame + 0x178)),(*(undefined4 *)(gen_frame + 0x17c)),(*(undefined4 *)(gen_frame + 0x180)),(*(undefined4 *)(gen_frame + 0x184)),(*(undefined4 *)(gen_frame + 0x188)),(*(undefined4 *)(gen_frame + 0x18c)),
                         (*(undefined4 *)(gen_frame + 0x190)),(*(undefined4 *)(gen_frame + 0x194)),(*(undefined4 *)(gen_frame + 0x198)),(*(undefined4 *)(gen_frame + 0x19c)),(*(undefined4 *)(gen_frame + 0x1a0)),(*(undefined4 *)(gen_frame + 0x1a4)),(*(undefined4 *)(gen_frame + 0x1a8)),
                         (*(undefined4 *)(gen_frame + 0x1ac)),(*(undefined4 *)(gen_frame + 0x1b0)),(*(undefined4 *)(gen_frame + 0x1b4)),(*(undefined4 *)(gen_frame + 0x1b8)),(*(undefined4 *)(gen_frame + 0x1bc)),(*(undefined4 *)(gen_frame + 0x1c0)),(*(undefined4 *)(gen_frame + 0x1c4)),
                         (*(undefined4 *)(gen_frame + 0x1c8)),(*(undefined4 *)(gen_frame + 0x1cc)),(*(undefined4 *)(gen_frame + 0x1d0)),(*(undefined4 *)(gen_frame + 0x1d4)),(*(undefined4 *)(gen_frame + 0x1d8)),(*(undefined4 *)(gen_frame + 0x1dc)),(*(undefined4 *)(gen_frame + 0x1e0)),
                         (*(undefined4 *)(gen_frame + 0x1e4)),(*(undefined4 *)(gen_frame + 0x1e8)),(*(undefined4 *)(gen_frame + 0x1ec)),(*(undefined4 *)(gen_frame + 0x1f0)),(*(undefined4 *)(gen_frame + 0x1f4)),(*(undefined4 *)(gen_frame + 0x1f8)),(*(undefined4 *)(gen_frame + 0x1fc)),
                         (*(undefined4 *)(gen_frame + 0x200)),(*(int * PTR32 *)(gen_frame + 0x204)));
      (*(uint *)(gen_frame + 0x214)) = uVar1;
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        (*(int * PTR32 *)(gen_frame + 0x204)) = ((int *)GEN_TOP(uVar1));
        (*(undefined4 *)(gen_frame + 0x200)) = (*(undefined4 *)(gen_frame + 0x21c));
        (*(undefined4 *)(gen_frame + 0x1fc)) = (*(undefined4 *)(gen_frame + 0x218));
        (*(undefined4 *)(gen_frame + 0x1f8)) = 0xfa0b9a59;
        (*(undefined4 *)(gen_frame + 0x1f4)) = 0xb2f32a;
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfa0b9a59,(*(undefined4 *)(gen_frame + 0x218)),(*(undefined4 *)(gen_frame + 0x21c)),uVar1);
      }
      (&REFG(undefined4, 0x14c1f24))[(int)((*(int *)(gen_frame + 0x210)))] = (&REFG(undefined4, 0x14c1f24))[(int)((*(int *)(gen_frame + 0x210)))] - 1;
      uVar1 = (*(uint *)(gen_frame + 0x214));
    }
  }
  return uVar1;
}

/* ref: FUN_00b2f350 */
GEN_OWN GEN_FRAME uint F_00b2f350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21, unsigned int gen_a22, unsigned int gen_a23, unsigned int gen_a24, unsigned int gen_a25, unsigned int gen_a26, unsigned int gen_a27, unsigned int gen_a28, unsigned int gen_a29, unsigned int gen_a30, unsigned int gen_a31, unsigned int gen_a32, unsigned int gen_a33, unsigned int gen_a34, unsigned int gen_a35, unsigned int gen_a36, unsigned int gen_a37, unsigned int gen_a38, unsigned int gen_a39, unsigned int gen_a40, unsigned int gen_a41, unsigned int gen_a42, unsigned int gen_a43, unsigned int gen_a44, unsigned int gen_a45, unsigned int gen_a46, unsigned int gen_a47, unsigned int gen_a48, unsigned int gen_a49, unsigned int gen_a50, unsigned int gen_a51, unsigned int gen_a52, unsigned int gen_a53, unsigned int gen_a54, unsigned int gen_a55, unsigned int gen_a56, unsigned int gen_a57, unsigned int gen_a58, unsigned int gen_a59, unsigned int gen_a60, unsigned int gen_a61, unsigned int gen_a62, unsigned int gen_a63, unsigned int gen_a64, unsigned int gen_a65, unsigned int gen_a66, unsigned int gen_a67, unsigned int gen_a68, unsigned int gen_a69, unsigned int gen_a70, unsigned int gen_a71, unsigned int gen_a72, unsigned int gen_a73, unsigned int gen_a74, unsigned int gen_a75, unsigned int gen_a76, unsigned int gen_a77, unsigned int gen_a78, unsigned int gen_a79, unsigned int gen_a80, unsigned int gen_a81, unsigned int gen_a82, unsigned int gen_a83, unsigned int gen_a84, unsigned int gen_a85, unsigned int gen_a86, unsigned int gen_a87, unsigned int gen_a88, unsigned int gen_a89, unsigned int gen_a90, unsigned int gen_a91, unsigned int gen_a92, unsigned int gen_a93, unsigned int gen_a94, unsigned int gen_a95, unsigned int gen_a96, unsigned int gen_a97, unsigned int gen_a98, unsigned int gen_a99, unsigned int gen_a100, unsigned int gen_a101, unsigned int gen_a102, unsigned int gen_a103, unsigned int gen_a104, unsigned int gen_a105, unsigned int gen_a106, unsigned int gen_a107, unsigned int gen_a108, unsigned int gen_a109, unsigned int gen_a110, unsigned int gen_a111, unsigned int gen_a112, unsigned int gen_a113, unsigned int gen_a114, unsigned int gen_a115, unsigned int gen_a116, unsigned int gen_a117, unsigned int gen_a118, unsigned int gen_a119, unsigned int gen_a120, unsigned int gen_a121, unsigned int gen_a122, unsigned int gen_a123, unsigned int gen_a124, unsigned int gen_a125, unsigned int gen_a126, unsigned int gen_a127, unsigned int gen_a128, unsigned int gen_a129)
{
  GEN_ENTER(0xb2f350u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[130];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  gen_args[14] = gen_a14;
  gen_args[15] = gen_a15;
  gen_args[16] = gen_a16;
  gen_args[17] = gen_a17;
  gen_args[18] = gen_a18;
  gen_args[19] = gen_a19;
  gen_args[20] = gen_a20;
  gen_args[21] = gen_a21;
  gen_args[22] = gen_a22;
  gen_args[23] = gen_a23;
  gen_args[24] = gen_a24;
  gen_args[25] = gen_a25;
  gen_args[26] = gen_a26;
  gen_args[27] = gen_a27;
  gen_args[28] = gen_a28;
  gen_args[29] = gen_a29;
  gen_args[30] = gen_a30;
  gen_args[31] = gen_a31;
  gen_args[32] = gen_a32;
  gen_args[33] = gen_a33;
  gen_args[34] = gen_a34;
  gen_args[35] = gen_a35;
  gen_args[36] = gen_a36;
  gen_args[37] = gen_a37;
  gen_args[38] = gen_a38;
  gen_args[39] = gen_a39;
  gen_args[40] = gen_a40;
  gen_args[41] = gen_a41;
  gen_args[42] = gen_a42;
  gen_args[43] = gen_a43;
  gen_args[44] = gen_a44;
  gen_args[45] = gen_a45;
  gen_args[46] = gen_a46;
  gen_args[47] = gen_a47;
  gen_args[48] = gen_a48;
  gen_args[49] = gen_a49;
  gen_args[50] = gen_a50;
  gen_args[51] = gen_a51;
  gen_args[52] = gen_a52;
  gen_args[53] = gen_a53;
  gen_args[54] = gen_a54;
  gen_args[55] = gen_a55;
  gen_args[56] = gen_a56;
  gen_args[57] = gen_a57;
  gen_args[58] = gen_a58;
  gen_args[59] = gen_a59;
  gen_args[60] = gen_a60;
  gen_args[61] = gen_a61;
  gen_args[62] = gen_a62;
  gen_args[63] = gen_a63;
  gen_args[64] = gen_a64;
  gen_args[65] = gen_a65;
  gen_args[66] = gen_a66;
  gen_args[67] = gen_a67;
  gen_args[68] = gen_a68;
  gen_args[69] = gen_a69;
  gen_args[70] = gen_a70;
  gen_args[71] = gen_a71;
  gen_args[72] = gen_a72;
  gen_args[73] = gen_a73;
  gen_args[74] = gen_a74;
  gen_args[75] = gen_a75;
  gen_args[76] = gen_a76;
  gen_args[77] = gen_a77;
  gen_args[78] = gen_a78;
  gen_args[79] = gen_a79;
  gen_args[80] = gen_a80;
  gen_args[81] = gen_a81;
  gen_args[82] = gen_a82;
  gen_args[83] = gen_a83;
  gen_args[84] = gen_a84;
  gen_args[85] = gen_a85;
  gen_args[86] = gen_a86;
  gen_args[87] = gen_a87;
  gen_args[88] = gen_a88;
  gen_args[89] = gen_a89;
  gen_args[90] = gen_a90;
  gen_args[91] = gen_a91;
  gen_args[92] = gen_a92;
  gen_args[93] = gen_a93;
  gen_args[94] = gen_a94;
  gen_args[95] = gen_a95;
  gen_args[96] = gen_a96;
  gen_args[97] = gen_a97;
  gen_args[98] = gen_a98;
  gen_args[99] = gen_a99;
  gen_args[100] = gen_a100;
  gen_args[101] = gen_a101;
  gen_args[102] = gen_a102;
  gen_args[103] = gen_a103;
  gen_args[104] = gen_a104;
  gen_args[105] = gen_a105;
  gen_args[106] = gen_a106;
  gen_args[107] = gen_a107;
  gen_args[108] = gen_a108;
  gen_args[109] = gen_a109;
  gen_args[110] = gen_a110;
  gen_args[111] = gen_a111;
  gen_args[112] = gen_a112;
  gen_args[113] = gen_a113;
  gen_args[114] = gen_a114;
  gen_args[115] = gen_a115;
  gen_args[116] = gen_a116;
  gen_args[117] = gen_a117;
  gen_args[118] = gen_a118;
  gen_args[119] = gen_a119;
  gen_args[120] = gen_a120;
  gen_args[121] = gen_a121;
  gen_args[122] = gen_a122;
  gen_args[123] = gen_a123;
  gen_args[124] = gen_a124;
  gen_args[125] = gen_a125;
  gen_args[126] = gen_a126;
  gen_args[127] = gen_a127;
  gen_args[128] = gen_a128;
  gen_args[129] = gen_a129;
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
  undefined4 param_14 = (undefined4)gen_a13;
  undefined4 param_15 = (undefined4)gen_a14;
  undefined4 param_16 = (undefined4)gen_a15;
  undefined4 param_17 = (undefined4)gen_a16;
  undefined4 param_18 = (undefined4)gen_a17;
  undefined4 param_19 = (undefined4)gen_a18;
  undefined4 param_20 = (undefined4)gen_a19;
  undefined4 param_21 = (undefined4)gen_a20;
  undefined4 param_22 = (undefined4)gen_a21;
  undefined4 param_23 = (undefined4)gen_a22;
  undefined4 param_24 = (undefined4)gen_a23;
  undefined4 param_25 = (undefined4)gen_a24;
  undefined4 param_26 = (undefined4)gen_a25;
  undefined4 param_27 = (undefined4)gen_a26;
  undefined4 param_28 = (undefined4)gen_a27;
  undefined4 param_29 = (undefined4)gen_a28;
  undefined4 param_30 = (undefined4)gen_a29;
  undefined4 param_31 = (undefined4)gen_a30;
  undefined4 param_32 = (undefined4)gen_a31;
  undefined4 param_33 = (undefined4)gen_a32;
  undefined4 param_34 = (undefined4)gen_a33;
  undefined4 param_35 = (undefined4)gen_a34;
  undefined4 param_36 = (undefined4)gen_a35;
  undefined4 param_37 = (undefined4)gen_a36;
  undefined4 param_38 = (undefined4)gen_a37;
  undefined4 param_39 = (undefined4)gen_a38;
  undefined4 param_40 = (undefined4)gen_a39;
  undefined4 param_41 = (undefined4)gen_a40;
  undefined4 param_42 = (undefined4)gen_a41;
  undefined4 param_43 = (undefined4)gen_a42;
  undefined4 param_44 = (undefined4)gen_a43;
  undefined4 param_45 = (undefined4)gen_a44;
  undefined4 param_46 = (undefined4)gen_a45;
  undefined4 param_47 = (undefined4)gen_a46;
  undefined4 param_48 = (undefined4)gen_a47;
  undefined4 param_49 = (undefined4)gen_a48;
  undefined4 param_50 = (undefined4)gen_a49;
  undefined4 param_51 = (undefined4)gen_a50;
  undefined4 param_52 = (undefined4)gen_a51;
  undefined4 param_53 = (undefined4)gen_a52;
  undefined4 param_54 = (undefined4)gen_a53;
  undefined4 param_55 = (undefined4)gen_a54;
  undefined4 param_56 = (undefined4)gen_a55;
  undefined4 param_57 = (undefined4)gen_a56;
  undefined4 param_58 = (undefined4)gen_a57;
  undefined4 param_59 = (undefined4)gen_a58;
  undefined4 param_60 = (undefined4)gen_a59;
  undefined4 param_61 = (undefined4)gen_a60;
  undefined4 param_62 = (undefined4)gen_a61;
  undefined4 param_63 = (undefined4)gen_a62;
  undefined4 param_64 = (undefined4)gen_a63;
  undefined4 param_65 = (undefined4)gen_a64;
  undefined4 param_66 = (undefined4)gen_a65;
  undefined4 param_67 = (undefined4)gen_a66;
  undefined4 param_68 = (undefined4)gen_a67;
  undefined4 param_69 = (undefined4)gen_a68;
  undefined4 param_70 = (undefined4)gen_a69;
  undefined4 param_71 = (undefined4)gen_a70;
  undefined4 param_72 = (undefined4)gen_a71;
  undefined4 param_73 = (undefined4)gen_a72;
  undefined4 param_74 = (undefined4)gen_a73;
  undefined4 param_75 = (undefined4)gen_a74;
  undefined4 param_76 = (undefined4)gen_a75;
  undefined4 param_77 = (undefined4)gen_a76;
  undefined4 param_78 = (undefined4)gen_a77;
  undefined4 param_79 = (undefined4)gen_a78;
  undefined4 param_80 = (undefined4)gen_a79;
  undefined4 param_81 = (undefined4)gen_a80;
  undefined4 param_82 = (undefined4)gen_a81;
  undefined4 param_83 = (undefined4)gen_a82;
  undefined4 param_84 = (undefined4)gen_a83;
  undefined4 param_85 = (undefined4)gen_a84;
  undefined4 param_86 = (undefined4)gen_a85;
  undefined4 param_87 = (undefined4)gen_a86;
  undefined4 param_88 = (undefined4)gen_a87;
  undefined4 param_89 = (undefined4)gen_a88;
  undefined4 param_90 = (undefined4)gen_a89;
  undefined4 param_91 = (undefined4)gen_a90;
  undefined4 param_92 = (undefined4)gen_a91;
  undefined4 param_93 = (undefined4)gen_a92;
  undefined4 param_94 = (undefined4)gen_a93;
  undefined4 param_95 = (undefined4)gen_a94;
  undefined4 param_96 = (undefined4)gen_a95;
  undefined4 param_97 = (undefined4)gen_a96;
  undefined4 param_98 = (undefined4)gen_a97;
  undefined4 param_99 = (undefined4)gen_a98;
  undefined4 param_100 = (undefined4)gen_a99;
  undefined4 param_101 = (undefined4)gen_a100;
  undefined4 param_102 = (undefined4)gen_a101;
  undefined4 param_103 = (undefined4)gen_a102;
  undefined4 param_104 = (undefined4)gen_a103;
  undefined4 param_105 = (undefined4)gen_a104;
  undefined4 param_106 = (undefined4)gen_a105;
  undefined4 param_107 = (undefined4)gen_a106;
  undefined4 param_108 = (undefined4)gen_a107;
  undefined4 param_109 = (undefined4)gen_a108;
  undefined4 param_110 = (undefined4)gen_a109;
  undefined4 param_111 = (undefined4)gen_a110;
  undefined4 param_112 = (undefined4)gen_a111;
  undefined4 param_113 = (undefined4)gen_a112;
  undefined4 param_114 = (undefined4)gen_a113;
  undefined4 param_115 = (undefined4)gen_a114;
  undefined4 param_116 = (undefined4)gen_a115;
  undefined4 param_117 = (undefined4)gen_a116;
  undefined4 param_118 = (undefined4)gen_a117;
  undefined4 param_119 = (undefined4)gen_a118;
  undefined4 param_120 = (undefined4)gen_a119;
  undefined4 param_121 = (undefined4)gen_a120;
  undefined4 param_122 = (undefined4)gen_a121;
  undefined4 param_123 = (undefined4)gen_a122;
  undefined4 param_124 = (undefined4)gen_a123;
  undefined4 param_125 = (undefined4)gen_a124;
  undefined4 param_126 = (undefined4)gen_a125;
  undefined4 param_127 = (undefined4)gen_a126;
  undefined4 param_128 = (undefined4)gen_a127;
  undefined4 param_129 = (undefined4)gen_a128;
  undefined4 param_130 = (undefined4)gen_a129;
  uintptr_t gen_esp0 = (uintptr_t)gen_args - 4;
  GEN_FRAME_DECL_TOP(0x22c, 4, 4);
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(int *)(gen_frame + 0x220)) = 0;
  (*(int *)(gen_frame + 0x210)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x204)) = &(*(int *)(gen_frame + 0x220));
  (*(undefined4 *)(gen_frame + 0x200)) = 0xb2f36f;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x220)));
  (*(uint *)(gen_frame + 0x214)) = uVar1;
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2660) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2660) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2664) != *(int *)(&REFG(undefined, 0x14c1f34) + (*(int *)(gen_frame + 0x210)) * 4))) {
      REFG(undefined * PTR32, 0x14c2660) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2660) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x220)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      (*(int * PTR32 *)(gen_frame + 0x204)) = ((int *)GEN_TOP(0x584cb0b6));
      (*(undefined4 *)(gen_frame + 0x200)) = 0xb2f3e1;
      REFG(undefined * PTR32, 0x14c2660) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x584cb0b6)));
      REFG(int, 0x14c2664) = *(int *)(&REFG(undefined, 0x14c1f34) + (*(int *)(gen_frame + 0x210)) * 4);
    }
    if (REFG(undefined * PTR32, 0x14c2660) == ((code *)GEN_TOP(0x0))) {
      (&REFG(undefined4, 0x14c1f24))[(int)((*(int *)(gen_frame + 0x210)))] = (&REFG(undefined4, 0x14c1f24))[(int)((*(int *)(gen_frame + 0x210)))] - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0x224)) = REFG(undefined * PTR32, 0x14c2660);
      (*(undefined4 *)(gen_frame + 0x218)) = 0;
      (*(undefined4 *)(gen_frame + 0x21c)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        (*(int * PTR32 *)(gen_frame + 0x204)) = &(*(undefined4 *)(gen_frame + 0x218));
        (*(undefined4 *)(gen_frame + 0x200)) = 0x584cb0b6;
        (*(undefined4 *)(gen_frame + 0x1fc)) = 0xb2f452;
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x584cb0b6,&(*(undefined4 *)(gen_frame + 0x218)));
      }
      (*(int * PTR32 *)(gen_frame + 0x204)) = ((int *)GEN_TOP(param_130));
      puVar3 = (gen_frame + 0x0);
      for (iVar2 = 0x81; gen_esp0 = (uintptr_t)((int)gen_esp0 + 4),
          iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar3 = *((undefined4 *)GEN_TOP(gen_esp0));
        puVar3 = puVar3 + 1;
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0x224)))((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                         (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                         (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),
                         (*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),
                         (*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),(*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),
                         (*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),(*(undefined4 *)(gen_frame + 0x8c)),
                         (*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 *)(gen_frame + 0x98)),(*(undefined4 *)(gen_frame + 0x9c)),(*(undefined4 *)(gen_frame + 0xa0)),(*(undefined4 *)(gen_frame + 0xa4)),
                         (*(undefined4 *)(gen_frame + 0xa8)),(*(undefined4 *)(gen_frame + 0xac)),(*(undefined4 *)(gen_frame + 0xb0)),(*(undefined4 *)(gen_frame + 0xb4)),(*(undefined4 *)(gen_frame + 0xb8)),(*(undefined4 *)(gen_frame + 0xbc)),
                         (*(undefined4 *)(gen_frame + 0xc0)),(*(undefined4 *)(gen_frame + 0xc4)),(*(undefined4 *)(gen_frame + 0xc8)),(*(undefined4 *)(gen_frame + 0xcc)),(*(undefined4 *)(gen_frame + 0xd0)),(*(undefined4 *)(gen_frame + 0xd4)),
                         (*(undefined4 *)(gen_frame + 0xd8)),(*(undefined4 *)(gen_frame + 0xdc)),(*(undefined4 *)(gen_frame + 0xe0)),(*(undefined4 *)(gen_frame + 0xe4)),(*(undefined4 *)(gen_frame + 0xe8)),(*(undefined4 *)(gen_frame + 0xec)),
                         (*(undefined4 *)(gen_frame + 0xf0)),(*(undefined4 *)(gen_frame + 0xf4)),(*(undefined4 *)(gen_frame + 0xf8)),(*(undefined4 *)(gen_frame + 0xfc)),(*(undefined4 *)(gen_frame + 0x100)),(*(undefined4 *)(gen_frame + 0x104)),
                         (*(undefined4 *)(gen_frame + 0x108)),(*(undefined4 *)(gen_frame + 0x10c)),(*(undefined4 *)(gen_frame + 0x110)),(*(undefined4 *)(gen_frame + 0x114)),(*(undefined4 *)(gen_frame + 0x118)),(*(undefined4 *)(gen_frame + 0x11c)),
                         (*(undefined4 *)(gen_frame + 0x120)),(*(undefined4 *)(gen_frame + 0x124)),(*(undefined4 *)(gen_frame + 0x128)),(*(undefined4 *)(gen_frame + 0x12c)),(*(undefined4 *)(gen_frame + 0x130)),(*(undefined4 *)(gen_frame + 0x134)),(*(undefined4 *)(gen_frame + 0x138)),
                         (*(undefined4 *)(gen_frame + 0x13c)),(*(undefined4 *)(gen_frame + 0x140)),(*(undefined4 *)(gen_frame + 0x144)),(*(undefined4 *)(gen_frame + 0x148)),(*(undefined4 *)(gen_frame + 0x14c)),(*(undefined4 *)(gen_frame + 0x150)),(*(undefined4 *)(gen_frame + 0x154)),
                         (*(undefined4 *)(gen_frame + 0x158)),(*(undefined4 *)(gen_frame + 0x15c)),(*(undefined4 *)(gen_frame + 0x160)),(*(undefined4 *)(gen_frame + 0x164)),(*(undefined4 *)(gen_frame + 0x168)),(*(undefined4 *)(gen_frame + 0x16c)),(*(undefined4 *)(gen_frame + 0x170)),
                         (*(undefined4 *)(gen_frame + 0x174)),(*(undefined4 *)(gen_frame + 0x178)),(*(undefined4 *)(gen_frame + 0x17c)),(*(undefined4 *)(gen_frame + 0x180)),(*(undefined4 *)(gen_frame + 0x184)),(*(undefined4 *)(gen_frame + 0x188)),(*(undefined4 *)(gen_frame + 0x18c)),
                         (*(undefined4 *)(gen_frame + 0x190)),(*(undefined4 *)(gen_frame + 0x194)),(*(undefined4 *)(gen_frame + 0x198)),(*(undefined4 *)(gen_frame + 0x19c)),(*(undefined4 *)(gen_frame + 0x1a0)),(*(undefined4 *)(gen_frame + 0x1a4)),(*(undefined4 *)(gen_frame + 0x1a8)),
                         (*(undefined4 *)(gen_frame + 0x1ac)),(*(undefined4 *)(gen_frame + 0x1b0)),(*(undefined4 *)(gen_frame + 0x1b4)),(*(undefined4 *)(gen_frame + 0x1b8)),(*(undefined4 *)(gen_frame + 0x1bc)),(*(undefined4 *)(gen_frame + 0x1c0)),(*(undefined4 *)(gen_frame + 0x1c4)),
                         (*(undefined4 *)(gen_frame + 0x1c8)),(*(undefined4 *)(gen_frame + 0x1cc)),(*(undefined4 *)(gen_frame + 0x1d0)),(*(undefined4 *)(gen_frame + 0x1d4)),(*(undefined4 *)(gen_frame + 0x1d8)),(*(undefined4 *)(gen_frame + 0x1dc)),(*(undefined4 *)(gen_frame + 0x1e0)),
                         (*(undefined4 *)(gen_frame + 0x1e4)),(*(undefined4 *)(gen_frame + 0x1e8)),(*(undefined4 *)(gen_frame + 0x1ec)),(*(undefined4 *)(gen_frame + 0x1f0)),(*(undefined4 *)(gen_frame + 0x1f4)),(*(undefined4 *)(gen_frame + 0x1f8)),(*(undefined4 *)(gen_frame + 0x1fc)),
                         (*(undefined4 *)(gen_frame + 0x200)),(*(int * PTR32 *)(gen_frame + 0x204)));
      (*(uint *)(gen_frame + 0x214)) = uVar1;
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        (*(int * PTR32 *)(gen_frame + 0x204)) = ((int *)GEN_TOP(uVar1));
        (*(undefined4 *)(gen_frame + 0x200)) = (*(undefined4 *)(gen_frame + 0x21c));
        (*(undefined4 *)(gen_frame + 0x1fc)) = (*(undefined4 *)(gen_frame + 0x218));
        (*(undefined4 *)(gen_frame + 0x1f8)) = 0x584cb0b6;
        (*(undefined4 *)(gen_frame + 0x1f4)) = 0xb2f49a;
        ((code *)REFG(gen_code32, 0x14c1efc))(0x584cb0b6,(*(undefined4 *)(gen_frame + 0x218)),(*(undefined4 *)(gen_frame + 0x21c)),uVar1);
      }
      (&REFG(undefined4, 0x14c1f24))[(int)((*(int *)(gen_frame + 0x210)))] = (&REFG(undefined4, 0x14c1f24))[(int)((*(int *)(gen_frame + 0x210)))] - 1;
      uVar1 = (*(uint *)(gen_frame + 0x214));
    }
  }
  return uVar1;
}

/* ref: FUN_00b2f4c0 */
GEN_OWN GEN_FRAME uint F_00b2f4c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2f4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2668) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2668) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c266c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2668) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2668) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2668) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xae457190)));
      REFG(int, 0x14c266c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2668) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2668);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xae457190,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xae457190,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2f620 */
GEN_OWN GEN_FRAME uint F_00b2f620(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb2f620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2670) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2670) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2674) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2670) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2670) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2670) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1e9d8a31)));
      REFG(int, 0x14c2674) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2670) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2670);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1e9d8a31,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1e9d8a31,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2f770 */
GEN_OWN GEN_FRAME uint F_00b2f770(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2f770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2678) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2678) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c267c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2678) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2678) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2678) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x11abccf8)));
      REFG(int, 0x14c267c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2678) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2678);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x11abccf8,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x11abccf8,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2f8d0 */
GEN_OWN GEN_FRAME uint F_00b2f8d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb2f8d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2680) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2680) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2684) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2680) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2680) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2680) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5d8cf8de)));
      REFG(int, 0x14c2684) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2680) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2680);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5d8cf8de,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5d8cf8de,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2fa30 */
GEN_OWN GEN_FRAME uint F_00b2fa30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2fa30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2688) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2688) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c268c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2688) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2688) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2688) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x63e5d8db)));
      REFG(int, 0x14c268c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2688) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2688);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x63e5d8db,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x63e5d8db,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2fb90 */
GEN_OWN GEN_FRAME uint F_00b2fb90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2fb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2690) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2690) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2694) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2690) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2690) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2690) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1e17e29b)));
      REFG(int, 0x14c2694) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2690) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2690);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1e17e29b,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1e17e29b,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2fcf0 */
GEN_OWN GEN_FRAME uint F_00b2fcf0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb2fcf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2698) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2698) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c269c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2698) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2698) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2698) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x61041c24)));
      REFG(int, 0x14c269c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2698) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2698);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x61041c24,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x61041c24,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2fe40 */
GEN_OWN GEN_FRAME uint F_00b2fe40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb2fe40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c26a0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c26a0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c26a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c26a0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c26a0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c26a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x47bad137)));
      REFG(int, 0x14c26a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c26a0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c26a0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x47bad137,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x47bad137,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b2ff90 */
GEN_OWN GEN_FRAME uint F_00b2ff90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb2ff90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c26a8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c26a8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c26ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c26a8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c26a8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c26a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5f4c2664)));
      REFG(int, 0x14c26ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c26a8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c26a8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5f4c2664,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5f4c2664,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b300f0 */
GEN_OWN GEN_FRAME uint F_00b300f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb300f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c26b0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c26b0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c26b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c26b0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c26b0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c26b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x96437923)));
      REFG(int, 0x14c26b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c26b0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c26b0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x96437923,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x96437923,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30250 */
GEN_OWN GEN_FRAME uint F_00b30250(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb30250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c26b8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c26b8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c26bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c26b8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c26b8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c26b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4575dd94)));
      REFG(int, 0x14c26bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c26b8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c26b8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4575dd94,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4575dd94,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b303b0 */
GEN_OWN GEN_FRAME uint F_00b303b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb303b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c26c0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c26c0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c26c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c26c0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c26c0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c26c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfdb63c81)));
      REFG(int, 0x14c26c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c26c0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c26c0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfdb63c81,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfdb63c81,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30510 */
GEN_OWN GEN_FRAME uint F_00b30510(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb30510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c26c8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c26c8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c26cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c26c8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c26c8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c26c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcb89381d)));
      REFG(int, 0x14c26cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c26c8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c26c8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcb89381d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcb89381d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30670 */
GEN_OWN GEN_FRAME uint F_00b30670(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb30670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c26d0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c26d0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c26d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c26d0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c26d0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c26d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x989685f0)));
      REFG(int, 0x14c26d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c26d0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c26d0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x989685f0,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x989685f0,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b307e0 */
GEN_OWN GEN_FRAME uint F_00b307e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb307e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c26d8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c26d8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c26dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c26d8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c26d8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c26d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9b542831)));
      REFG(int, 0x14c26dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c26d8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c26d8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9b542831,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9b542831,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30950 */
GEN_OWN GEN_FRAME uint F_00b30950(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb30950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c26e0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c26e0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c26e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c26e0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c26e0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c26e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xec32944e)));
      REFG(int, 0x14c26e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c26e0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c26e0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xec32944e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xec32944e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30ab0 */
GEN_OWN GEN_FRAME uint F_00b30ab0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb30ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c26e8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c26e8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c26ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c26e8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c26e8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c26e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5f1aa66c)));
      REFG(int, 0x14c26ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c26e8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c26e8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5f1aa66c,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5f1aa66c,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30c00 */
GEN_OWN GEN_FRAME uint F_00b30c00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb30c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c26f0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c26f0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c26f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c26f0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c26f0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c26f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3f113c77)));
      REFG(int, 0x14c26f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c26f0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c26f0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3f113c77,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3f113c77,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30d60 */
GEN_OWN GEN_FRAME uint F_00b30d60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb30d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c26f8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c26f8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c26fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c26f8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c26f8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c26f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xda97071e)));
      REFG(int, 0x14c26fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c26f8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c26f8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xda97071e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xda97071e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b30ec0 */
GEN_OWN GEN_FRAME uint F_00b30ec0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb30ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2700) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2700) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2704) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2700) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2700) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2700) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd58026b9)));
      REFG(int, 0x14c2704) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2700) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2700);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd58026b9,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd58026b9,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b31010 */
GEN_OWN GEN_FRAME uint F_00b31010(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb31010u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2708) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2708) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c270c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2708) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2708) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2708) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa3c55220)));
      REFG(int, 0x14c270c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2708) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2708);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa3c55220,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa3c55220,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_Mosaic_GetDisplayViewportsByResolution */
GEN_OWN GEN_FRAME uint F_00b31170(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb31170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2710) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2710) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2714) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2710) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2710) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2710) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdc6dc8d3)));
      REFG(int, 0x14c2714) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2710) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2710);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdc6dc8d3,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdc6dc8d3,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b312e0 */
GEN_OWN GEN_FRAME uint F_00b312e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xb312e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2718) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2718) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c271c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2718) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2718) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2718) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7eba036)));
      REFG(int, 0x14c271c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2718) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2718);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7eba036,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,CONCAT31((int3)((uint)param_7 >> 8),param_4),
                         param_5,param_6,param_7);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7eba036,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_Mosaic_SetDisplayGrids */
GEN_OWN GEN_FRAME uint F_00b31450(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb31450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2720) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2720) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2724) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2720) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2720) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2720) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4d959a89)));
      REFG(int, 0x14c2724) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2720) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2720);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4d959a89,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4d959a89,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b315b0 */
GEN_OWN GEN_FRAME uint F_00b315b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb315b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2728) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2728) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c272c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2728) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2728) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2728) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1ecfd263)));
      REFG(int, 0x14c272c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2728) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2728);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1ecfd263,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1ecfd263,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_Mosaic_ValidateDisplayGrids */
GEN_OWN GEN_FRAME uint F_00b31710(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb31710u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2730) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2730) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2734) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2730) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2730) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2730) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcf43903d)));
      REFG(int, 0x14c2734) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2730) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2730);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcf43903d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcf43903d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_Mosaic_EnumDisplayModes */
GEN_OWN GEN_FRAME uint F_00b31870(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb31870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2738) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2738) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c273c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2738) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2738) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2738) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x78db97d7)));
      REFG(int, 0x14c273c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2738) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2738);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x78db97d7,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x78db97d7,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b319d0 */
GEN_OWN GEN_FRAME uint F_00b319d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb319d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2740) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2740) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2744) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2740) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2740) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2740) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb033b140)));
      REFG(int, 0x14c2744) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2740) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2740);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb033b140,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb033b140,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_Mosaic_EnumDisplayGrids */
GEN_OWN GEN_FRAME uint F_00b31b30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb31b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2748) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2748) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c274c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2748) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2748) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2748) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdf2887af)));
      REFG(int, 0x14c274c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2748) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2748);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdf2887af,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdf2887af,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b31c90 */
GEN_OWN GEN_FRAME uint F_00b31c90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb31c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2750) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2750) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2754) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2750) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2750) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2750) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x410b5c25)));
      REFG(int, 0x14c2754) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2750) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2750);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x410b5c25,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x410b5c25,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b31de0 */
GEN_OWN GEN_FRAME uint F_00b31de0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb31de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2758) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2758) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c275c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2758) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2758) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2758) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf60852bd)));
      REFG(int, 0x14c275c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2758) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2758);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf60852bd,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf60852bd,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b31f40 */
GEN_OWN GEN_FRAME uint F_00b31f40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb31f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2760) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2760) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2764) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2760) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2760) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2760) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd54b8989)));
      REFG(int, 0x14c2764) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2760) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2760);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd54b8989,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd54b8989,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b32090 */
GEN_OWN GEN_FRAME uint F_00b32090(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb32090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2768) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2768) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c276c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2768) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2768) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2768) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x74073cc9)));
      REFG(int, 0x14c276c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2768) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2768);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x74073cc9,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x74073cc9,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_GSync_EnumSyncDevices */
GEN_OWN GEN_FRAME uint F_00b321e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb321e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2770) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2770) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2774) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2770) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2770) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2770) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd9639601)));
      REFG(int, 0x14c2774) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2770) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2770);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd9639601,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd9639601,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_GSync_QueryCapabilities */
GEN_OWN GEN_FRAME uint F_00b32340(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb32340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2778) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2778) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c277c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2778) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2778) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2778) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x44a3f1d1)));
      REFG(int, 0x14c277c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2778) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2778);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x44a3f1d1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x44a3f1d1,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_GSync_GetTopology */
GEN_OWN GEN_FRAME uint F_00b324a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb324a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2780) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2780) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2784) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2780) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2780) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2780) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4562bc38)));
      REFG(int, 0x14c2784) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2780) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2780);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4562bc38,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4562bc38,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_GSync_SetSyncStateSettings */
GEN_OWN GEN_FRAME uint F_00b32610(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb32610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2788) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2788) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c278c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2788) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2788) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2788) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x60acdfdd)));
      REFG(int, 0x14c278c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2788) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2788);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x60acdfdd,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x60acdfdd,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_GSync_GetControlParameters */
GEN_OWN GEN_FRAME uint F_00b32770(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb32770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2790) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2790) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2794) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2790) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2790) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2790) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x16de1c6a)));
      REFG(int, 0x14c2794) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2790) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2790);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x16de1c6a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x16de1c6a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_GSync_SetControlParameters */
GEN_OWN GEN_FRAME uint F_00b328d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb328d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2798) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2798) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c279c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2798) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2798) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2798) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8bbff88b)));
      REFG(int, 0x14c279c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2798) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2798);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8bbff88b,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8bbff88b,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_GSync_GetSyncStatus */
GEN_OWN GEN_FRAME uint F_00b32a30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb32a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27a0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c27a0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c27a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27a0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c27a0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c27a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf1f5b434)));
      REFG(int, 0x14c27a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27a0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c27a0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf1f5b434,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf1f5b434,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_GSync_GetStatusParameters */
GEN_OWN GEN_FRAME uint F_00b32b90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb32b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27a8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c27a8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c27ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27a8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c27a8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c27a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x70d404ec)));
      REFG(int, 0x14c27ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27a8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c27a8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x70d404ec,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x70d404ec,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_D3D_GetCurrentSLIState */
GEN_OWN GEN_FRAME uint F_00b32cf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb32cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27b0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c27b0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c27b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27b0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c27b0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c27b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4b708b54)));
      REFG(int, 0x14c27b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27b0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c27b0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4b708b54,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4b708b54,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_D3D9_RegisterResource */
GEN_OWN GEN_FRAME uint F_00b32e50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb32e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27b8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c27b8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c27bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27b8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c27b8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c27b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa064bdfc)));
      REFG(int, 0x14c27bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27b8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c27b8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa064bdfc,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa064bdfc,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_D3D9_UnregisterResource */
GEN_OWN GEN_FRAME uint F_00b32fa0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb32fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27c0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c27c0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c27c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27c0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c27c0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c27c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbb2b17aa)));
      REFG(int, 0x14c27c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27c0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c27c0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbb2b17aa,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbb2b17aa,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_D3D9_AliasSurfaceAsTexture */
GEN_OWN GEN_FRAME uint F_00b330f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb330f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27c8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c27c8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c27cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27c8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c27c8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c27c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe5ceae41)));
      REFG(int, 0x14c27cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27c8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c27c8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe5ceae41,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe5ceae41,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_D3D9_StretchRectEx */
GEN_OWN GEN_FRAME uint F_00b33250(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb33250u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27d0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c27d0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c27d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27d0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c27d0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c27d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x22de03aa)));
      REFG(int, 0x14c27d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27d0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c27d0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x22de03aa,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x22de03aa,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_D3D9_ClearRT */
GEN_OWN GEN_FRAME uint F_00b333c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xb333c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27d8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c27d8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c27dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27d8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c27d8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c27d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x332d3942)));
      REFG(int, 0x14c27dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27d8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c27d8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x332d3942,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x332d3942,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_D3D_GetObjectHandleForResource */
GEN_OWN GEN_FRAME uint F_00b33530(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb33530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27e0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c27e0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c27e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27e0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c27e0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c27e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfceac864)));
      REFG(int, 0x14c27e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27e0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c27e0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfceac864,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfceac864,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_D3D_SetResourceHint */
GEN_OWN GEN_FRAME uint F_00b33690(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb33690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27e8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c27e8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c27ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27e8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c27e8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c27e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6c0ed98c)));
      REFG(int, 0x14c27ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27e8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c27e8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6c0ed98c,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6c0ed98c,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_D3D_BeginResourceRendering */
GEN_OWN GEN_FRAME uint F_00b33800(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb33800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27f0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c27f0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c27f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27f0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c27f0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c27f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x91123d6a)));
      REFG(int, 0x14c27f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27f0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c27f0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x91123d6a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x91123d6a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::NvAPI_D3D_EndResourceRendering */
GEN_OWN GEN_FRAME uint F_00b33960(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb33960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c27f8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c27f8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c27fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c27f8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c27f8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c27f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x37e7191c)));
      REFG(int, 0x14c27fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c27f8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c27f8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x37e7191c,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x37e7191c,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b33ac0 */
GEN_OWN GEN_FRAME uint F_00b33ac0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb33ac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2800) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2800) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2804) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2800) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2800) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2800) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5d19bca4)));
      REFG(int, 0x14c2804) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2800) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2800);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5d19bca4,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5d19bca4,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b33c20 */
GEN_OWN GEN_FRAME uint F_00b33c20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb33c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2808) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2808) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c280c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2808) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2808) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2808) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc8ff7258)));
      REFG(int, 0x14c280c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2808) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2808);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc8ff7258,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc8ff7258,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b33d70 */
GEN_OWN GEN_FRAME uint F_00b33d70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb33d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2810) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2810) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2814) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2810) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2810) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2810) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe5a9aae0)));
      REFG(int, 0x14c2814) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2810) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2810);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe5a9aae0,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe5a9aae0,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b33ec0 */
GEN_OWN GEN_FRAME uint F_00b33ec0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb33ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2818) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2818) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c281c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2818) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2818) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2818) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2ac084fa)));
      REFG(int, 0x14c281c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2818) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2818);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2ac084fa,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2ac084fa,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34010 */
GEN_OWN GEN_FRAME uint F_00b34010(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb34010u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2820) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2820) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2824) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2820) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2820) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2820) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf8b53c69)));
      REFG(int, 0x14c2824) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2820) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2820);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf8b53c69,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf8b53c69,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34170 */
GEN_OWN GEN_FRAME uint F_00b34170(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb34170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2828) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2828) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c282c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2828) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2828) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2828) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf2a54796)));
      REFG(int, 0x14c282c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2828) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2828);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf2a54796,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf2a54796,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b342d0 */
GEN_OWN GEN_FRAME uint F_00b342d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb342d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2830) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2830) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2834) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2830) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2830) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2830) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4aceeaf7)));
      REFG(int, 0x14c2834) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2830) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2830);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4aceeaf7,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4aceeaf7,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34430 */
GEN_OWN GEN_FRAME uint F_00b34430(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb34430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2838) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2838) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c283c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2838) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2838) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2838) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd44d3c4e)));
      REFG(int, 0x14c283c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2838) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2838);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd44d3c4e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd44d3c4e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34590 */
GEN_OWN GEN_FRAME uint F_00b34590(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb34590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2840) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2840) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2844) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2840) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2840) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2840) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa342f682)));
      REFG(int, 0x14c2844) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2840) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2840);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa342f682,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa342f682,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b346f0 */
GEN_OWN GEN_FRAME uint F_00b346f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb346f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2848) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2848) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c284c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2848) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2848) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2848) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x667c2929)));
      REFG(int, 0x14c284c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2848) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2848);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x667c2929,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x667c2929,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34840 */
GEN_OWN GEN_FRAME uint F_00b34840(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb34840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2850) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2850) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2854) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2850) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2850) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2850) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x71329df3)));
      REFG(int, 0x14c2854) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2850) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2850);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x71329df3,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x71329df3,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b349b0 */
GEN_OWN GEN_FRAME uint F_00b349b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb349b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2858) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2858) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c285c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2858) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2858) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2858) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x73e0019a)));
      REFG(int, 0x14c285c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2858) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2858);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x73e0019a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x73e0019a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34b00 */
GEN_OWN GEN_FRAME uint F_00b34b00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb34b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2860) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2860) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2864) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2860) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2860) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2860) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc23df926)));
      REFG(int, 0x14c2864) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2860) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2860);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc23df926,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc23df926,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34c60 */
GEN_OWN GEN_FRAME uint F_00b34c60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb34c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2868) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2868) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c286c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2868) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2868) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2868) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf7ff00c1)));
      REFG(int, 0x14c286c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2868) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2868);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf7ff00c1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf7ff00c1,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34dc0 */
GEN_OWN GEN_FRAME uint F_00b34dc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb34dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2870) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2870) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2874) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2870) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2870) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2870) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfc31236c)));
      REFG(int, 0x14c2874) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2870) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2870);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfc31236c,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfc31236c,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b34f20 */
GEN_OWN GEN_FRAME uint F_00b34f20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb34f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2878) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2878) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c287c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2878) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2878) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2878) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd2f6c499)));
      REFG(int, 0x14c287c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2878) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2878);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd2f6c499,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd2f6c499,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35080 */
GEN_OWN GEN_FRAME uint F_00b35080(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb35080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2880) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2880) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2884) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2880) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2880) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2880) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfcb16330)));
      REFG(int, 0x14c2884) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2880) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2880);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfcb16330,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfcb16330,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b351e0 */
GEN_OWN GEN_FRAME uint F_00b351e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb351e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2888) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2888) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c288c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2888) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2888) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2888) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x157e45c4)));
      REFG(int, 0x14c288c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2888) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2888);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x157e45c4,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x157e45c4,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35340 */
GEN_OWN GEN_FRAME uint F_00b35340(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb35340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  int extraout_ECX = 0;
  int extraout_ECX_00 = 0;
  int iVar2;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2890) = ((code *)GEN_TOP(0x0));
    }
    iVar2 = extraout_ECX;
    if ((REFG(undefined * PTR32, 0x14c2890) != ((code *)GEN_TOP(0x0))) && (iVar2 = 0, REFG(int, 0x14c2894) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2890) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2890) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2890) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe99ba7f3)));
      REFG(int, 0x14c2894) = *(int *)&REFG(undefined, 0x14c1f34);
      iVar2 = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2890) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2890);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe99ba7f3,&(*(undefined4 *)(gen_frame + 0x0)));
        iVar2 = extraout_ECX_00;
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,CONCAT31((int3)((uint)iVar2 >> 8),param_2));
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe99ba7f3,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b354a0 */
GEN_OWN GEN_FRAME uint F_00b354a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb354a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  int extraout_ECX = 0;
  int extraout_ECX_00 = 0;
  int iVar2;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2898) = ((code *)GEN_TOP(0x0));
    }
    iVar2 = extraout_ECX;
    if ((REFG(undefined * PTR32, 0x14c2898) != ((code *)GEN_TOP(0x0))) && (iVar2 = 0, REFG(int, 0x14c289c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2898) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2898) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2898) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3e2804a2)));
      REFG(int, 0x14c289c) = *(int *)&REFG(undefined, 0x14c1f34);
      iVar2 = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2898) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2898);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3e2804a2,&(*(undefined4 *)(gen_frame + 0x0)));
        iVar2 = extraout_ECX_00;
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,CONCAT31((int3)((uint)iVar2 >> 8),param_2));
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3e2804a2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35600 */
GEN_OWN GEN_FRAME uint F_00b35600(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb35600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28a0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c28a0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c28a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28a0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c28a0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c28a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x13199b3d)));
      REFG(int, 0x14c28a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28a0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c28a0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x13199b3d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x13199b3d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35760 */
GEN_OWN GEN_FRAME uint F_00b35760(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb35760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28a8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c28a8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c28ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28a8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c28a8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c28a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf2dd3f2)));
      REFG(int, 0x14c28ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28a8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c28a8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf2dd3f2,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf2dd3f2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b358c0 */
GEN_OWN GEN_FRAME uint F_00b358c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb358c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28b0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c28b0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c28b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28b0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c28b0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c28b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6800f5fc)));
      REFG(int, 0x14c28b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28b0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c28b0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6800f5fc,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6800f5fc,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35a20 */
GEN_OWN GEN_FRAME uint F_00b35a20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb35a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28b8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c28b8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c28bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28b8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c28b8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c28b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc7985ed5)));
      REFG(int, 0x14c28bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28b8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c28b8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc7985ed5,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc7985ed5,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35b80 */
GEN_OWN GEN_FRAME uint F_00b35b80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb35b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28c0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c28c0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c28c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28c0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c28c0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c28c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x80c9fd3b)));
      REFG(int, 0x14c28c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28c0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c28c0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x80c9fd3b,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x80c9fd3b,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35ce0 */
GEN_OWN GEN_FRAME uint F_00b35ce0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb35ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28c8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c28c8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c28cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28c8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c28c8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c28c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6d6fdad4)));
      REFG(int, 0x14c28cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28c8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c28c8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6d6fdad4,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6d6fdad4,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35e40 */
GEN_OWN GEN_FRAME uint F_00b35e40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb35e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28d0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c28d0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c28d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28d0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c28d0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c28d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x754033f0)));
      REFG(int, 0x14c28d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28d0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c28d0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x754033f0,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x754033f0,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b35fa0 */
GEN_OWN GEN_FRAME uint F_00b35fa0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb35fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28d8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c28d8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c28dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28d8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c28d8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c28d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcde4a28a)));
      REFG(int, 0x14c28dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28d8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c28d8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcde4a28a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcde4a28a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36100 */
GEN_OWN GEN_FRAME uint F_00b36100(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb36100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28e0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c28e0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c28e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28e0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c28e0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c28e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2ab714ab)));
      REFG(int, 0x14c28e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28e0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c28e0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2ab714ab,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2ab714ab,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36260 */
GEN_OWN GEN_FRAME uint F_00b36260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb36260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28e8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c28e8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c28ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28e8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c28e8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c28e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdbc803ec)));
      REFG(int, 0x14c28ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28e8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c28e8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdbc803ec,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdbc803ec,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b363c0 */
GEN_OWN GEN_FRAME uint F_00b363c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb363c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28f0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c28f0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c28f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28f0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c28f0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c28f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x12ee68f2)));
      REFG(int, 0x14c28f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28f0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c28f0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x12ee68f2,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x12ee68f2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36520 */
GEN_OWN GEN_FRAME uint F_00b36520(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb36520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c28f8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c28f8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c28fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c28f8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c28f8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c28f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x18cdf365)));
      REFG(int, 0x14c28fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c28f8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c28f8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x18cdf365,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x18cdf365,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36680 */
GEN_OWN GEN_FRAME uint F_00b36680(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb36680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2900) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2900) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2904) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2900) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2900) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2900) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd00b8317)));
      REFG(int, 0x14c2904) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2900) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2900);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd00b8317,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd00b8317,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b367e0 */
GEN_OWN GEN_FRAME uint F_00b367e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb367e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2908) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2908) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c290c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2908) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2908) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2908) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3d7a86bb)));
      REFG(int, 0x14c290c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2908) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2908);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3d7a86bb,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3d7a86bb,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36940 */
GEN_OWN GEN_FRAME uint F_00b36940(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb36940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2910) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2910) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2914) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2910) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2910) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2910) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x22cad61)));
      REFG(int, 0x14c2914) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2910) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2910);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x22cad61,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x22cad61,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36aa0 */
GEN_OWN GEN_FRAME uint F_00b36aa0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb36aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2918) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2918) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c291c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2918) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2918) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2918) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb380f218)));
      REFG(int, 0x14c291c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2918) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2918);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb380f218,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb380f218,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36c00 */
GEN_OWN GEN_FRAME uint F_00b36c00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb36c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2920) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2920) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2924) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2920) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2920) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2920) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfc5a155b)));
      REFG(int, 0x14c2924) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2920) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2920);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfc5a155b,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfc5a155b,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36d60 */
GEN_OWN GEN_FRAME uint F_00b36d60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb36d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2928) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2928) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c292c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2928) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2928) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2928) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x72b19155)));
      REFG(int, 0x14c292c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2928) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2928);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x72b19155,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x72b19155,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b36ec0 */
GEN_OWN GEN_FRAME uint F_00b36ec0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xb36ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2930) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2930) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2934) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2930) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2930) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2930) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd5e13573)));
      REFG(int, 0x14c2934) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2930) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2930);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd5e13573,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd5e13573,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37030 */
GEN_OWN GEN_FRAME uint F_00b37030(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb37030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2938) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2938) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c293c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2938) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2938) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2938) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x13c7112e)));
      REFG(int, 0x14c293c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2938) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2938);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x13c7112e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x13c7112e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37190 */
GEN_OWN GEN_FRAME uint F_00b37190(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb37190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2940) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2940) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2944) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2940) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2940) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2940) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf7029c5)));
      REFG(int, 0x14c2944) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2940) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2940);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf7029c5,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf7029c5,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b372f0 */
GEN_OWN GEN_FRAME uint F_00b372f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb372f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2948) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2948) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c294c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2948) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2948) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2948) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x84c9d553)));
      REFG(int, 0x14c294c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2948) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2948);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x84c9d553,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x84c9d553,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37440 */
GEN_OWN GEN_FRAME uint F_00b37440(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb37440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2950) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2950) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2954) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2950) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2950) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2950) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb476bf61)));
      REFG(int, 0x14c2954) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2950) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2950);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb476bf61,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb476bf61,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37590 */
GEN_OWN GEN_FRAME uint F_00b37590(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb37590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2958) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2958) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c295c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2958) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2958) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2958) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x89ffd9a3)));
      REFG(int, 0x14c295c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2958) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2958);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x89ffd9a3,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x89ffd9a3,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b376f0 */
GEN_OWN GEN_FRAME uint F_00b376f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb376f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2960) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2960) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2964) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2960) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2960) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2960) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3111bed1)));
      REFG(int, 0x14c2964) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2960) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2960);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3111bed1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3111bed1,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37840 */
GEN_OWN GEN_FRAME uint F_00b37840(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb37840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2968) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2968) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c296c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2968) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2968) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2968) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5cf7f862)));
      REFG(int, 0x14c296c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2968) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2968);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5cf7f862,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5cf7f862,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b379a0 */
GEN_OWN GEN_FRAME uint F_00b379a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb379a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2970) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2970) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2974) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2970) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2970) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2970) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb852f4db)));
      REFG(int, 0x14c2974) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2970) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2970);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb852f4db,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb852f4db,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37b00 */
GEN_OWN GEN_FRAME uint F_00b37b00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb37b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2978) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2978) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c297c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2978) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2978) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2978) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2bbda32e)));
      REFG(int, 0x14c297c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2978) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2978);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2bbda32e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2bbda32e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37c60 */
GEN_OWN GEN_FRAME uint F_00b37c60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb37c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2980) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2980) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2984) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2980) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2980) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2980) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5609b86a)));
      REFG(int, 0x14c2984) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2980) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2980);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5609b86a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5609b86a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37dc0 */
GEN_OWN GEN_FRAME uint F_00b37dc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb37dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2988) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2988) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c298c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2988) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2988) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2988) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3d596b93)));
      REFG(int, 0x14c298c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2988) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2988);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3d596b93,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3d596b93,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b37f20 */
GEN_OWN GEN_FRAME uint F_00b37f20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb37f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2990) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2990) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2994) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2990) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2990) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2990) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1e6634b3)));
      REFG(int, 0x14c2994) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2990) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2990);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1e6634b3,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1e6634b3,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38080 */
GEN_OWN GEN_FRAME uint F_00b38080(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb38080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2998) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2998) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c299c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2998) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2998) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2998) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7c20c5be)));
      REFG(int, 0x14c299c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2998) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2998);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7c20c5be,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7c20c5be,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b381f0 */
GEN_OWN GEN_FRAME uint F_00b381f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb381f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29a0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c29a0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c29a4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29a0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c29a0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c29a0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x905f5c27)));
      REFG(int, 0x14c29a4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29a0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c29a0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x905f5c27,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x905f5c27,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38360 */
GEN_OWN GEN_FRAME uint F_00b38360(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb38360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29a8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c29a8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c29ac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29a8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c29a8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c29a8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6317345c)));
      REFG(int, 0x14c29ac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29a8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c29a8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6317345c,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6317345c,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b384d0 */
GEN_OWN GEN_FRAME uint F_00b384d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb384d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29b0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c29b0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c29b4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29b0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c29b0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c29b0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc182027e)));
      REFG(int, 0x14c29b4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29b0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c29b0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc182027e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc182027e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38630 */
GEN_OWN GEN_FRAME uint F_00b38630(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb38630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29b8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c29b8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c29bc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29b8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c29b8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c29b8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa4527bf8)));
      REFG(int, 0x14c29bc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29b8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c29b8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa4527bf8,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa4527bf8,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38790 */
GEN_OWN GEN_FRAME uint F_00b38790(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb38790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29c0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c29c0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c29c4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29c0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c29c0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c29c0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbd4bc56f)));
      REFG(int, 0x14c29c4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29c0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c29c0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbd4bc56f,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbd4bc56f,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b388f0 */
GEN_OWN GEN_FRAME uint F_00b388f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb388f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29c8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c29c8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c29cc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29c8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c29c8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c29c8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1db7c52c)));
      REFG(int, 0x14c29cc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29c8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c29c8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1db7c52c,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1db7c52c,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38a50 */
GEN_OWN GEN_FRAME uint F_00b38a50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb38a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29d0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c29d0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c29d4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29d0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c29d0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c29d0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x694bff4d)));
      REFG(int, 0x14c29d4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29d0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c29d0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x694bff4d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x694bff4d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38bb0 */
GEN_OWN GEN_FRAME uint F_00b38bb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb38bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29d8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c29d8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c29dc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29d8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c29d8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c29d8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbfdc062c)));
      REFG(int, 0x14c29dc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29d8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c29d8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbfdc062c,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbfdc062c,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38d10 */
GEN_OWN GEN_FRAME uint F_00b38d10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb38d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29e0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c29e0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c29e4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29e0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c29e0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c29e0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xddf5643c)));
      REFG(int, 0x14c29e4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29e0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c29e0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xddf5643c,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xddf5643c,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38e70 */
GEN_OWN GEN_FRAME uint F_00b38e70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb38e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29e8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c29e8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c29ec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29e8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c29e8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c29e8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9d2509ef)));
      REFG(int, 0x14c29ec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29e8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c29e8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9d2509ef,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9d2509ef,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b38fd0 */
GEN_OWN GEN_FRAME uint F_00b38fd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb38fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29f0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c29f0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c29f4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29f0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c29f0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c29f0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x962b8af6)));
      REFG(int, 0x14c29f4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29f0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c29f0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x962b8af6,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x962b8af6,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39130 */
GEN_OWN GEN_FRAME uint F_00b39130(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb39130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c29f8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c29f8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c29fc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c29f8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c29f8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c29f8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x492a6954)));
      REFG(int, 0x14c29fc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c29f8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c29f8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x492a6954,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x492a6954,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39290 */
GEN_OWN GEN_FRAME uint F_00b39290(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb39290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a00) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a00) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a00) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a00) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xaeaecd41)));
      REFG(int, 0x14c2a04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a00) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a00);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xaeaecd41,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xaeaecd41,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39400 */
GEN_OWN GEN_FRAME uint F_00b39400(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xb39400u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a08) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a08) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a08) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a08) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb3827c8)));
      REFG(int, 0x14c2a0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a08) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a08);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb3827c8,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb3827c8,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39580 */
GEN_OWN GEN_FRAME uint F_00b39580(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb39580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a10) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a10) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a10) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a10) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbd3eb475)));
      REFG(int, 0x14c2a14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a10) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a10);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbd3eb475,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbd3eb475,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b396d0 */
GEN_OWN GEN_FRAME uint F_00b396d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb396d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a18) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a18) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a18) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a18) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x55255d05)));
      REFG(int, 0x14c2a1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a18) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a18);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x55255d05,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x55255d05,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39830 */
GEN_OWN GEN_FRAME uint F_00b39830(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb39830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a20) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a20) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a20) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a20) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd504dda7)));
      REFG(int, 0x14c2a24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a20) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a20);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd504dda7,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd504dda7,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39990 */
GEN_OWN GEN_FRAME uint F_00b39990(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb39990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a28) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a28) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a2c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a28) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a28) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a28) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xab7c2dc)));
      REFG(int, 0x14c2a2c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a28) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a28);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xab7c2dc,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xab7c2dc,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39b00 */
GEN_OWN GEN_FRAME uint F_00b39b00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb39b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a30) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a30) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a30) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a30) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcfc92c15)));
      REFG(int, 0x14c2a34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a30) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a30);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcfc92c15,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcfc92c15,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39c70 */
GEN_OWN GEN_FRAME uint F_00b39c70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb39c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a38) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a38) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a38) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a38) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5fe72f64)));
      REFG(int, 0x14c2a3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a38) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a38);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5fe72f64,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5fe72f64,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39dd0 */
GEN_OWN GEN_FRAME uint F_00b39dd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb39dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a40) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a40) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a40) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a40) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8aac133d)));
      REFG(int, 0x14c2a44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a40) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a40);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8aac133d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8aac133d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b39f30 */
GEN_OWN GEN_FRAME uint F_00b39f30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb39f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a48) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a48) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a48) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a48) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x73eb9329)));
      REFG(int, 0x14c2a4c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a48) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a48);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x73eb9329,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x73eb9329,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3a090 */
GEN_OWN GEN_FRAME uint F_00b3a090(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3a090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a50) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a50) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a50) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a50) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xae9c2019)));
      REFG(int, 0x14c2a54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a50) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a50);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xae9c2019,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xae9c2019,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3a1f0 */
GEN_OWN GEN_FRAME uint F_00b3a1f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3a1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a58) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a58) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a58) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a58) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcac3ce5d)));
      REFG(int, 0x14c2a5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a58) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a58);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcac3ce5d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcac3ce5d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3a350 */
GEN_OWN GEN_FRAME uint F_00b3a350(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3a350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a60) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a60) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a60) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a60) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x35233210)));
      REFG(int, 0x14c2a64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a60) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a60);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x35233210,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x35233210,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3a4b0 */
GEN_OWN GEN_FRAME uint F_00b3a4b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb3a4b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a68) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a68) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a68) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a68) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xef303a9d)));
      REFG(int, 0x14c2a6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a68) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a68);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xef303a9d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xef303a9d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3a610 */
GEN_OWN GEN_FRAME uint F_00b3a610(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3a610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a70) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a70) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a70) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a70) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe9c5853)));
      REFG(int, 0x14c2a74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a70) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a70);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe9c5853,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe9c5853,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3a760 */
GEN_OWN GEN_FRAME uint F_00b3a760(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb3a760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a78) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a78) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a78) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a78) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4eadf5d2)));
      REFG(int, 0x14c2a7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a78) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a78);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4eadf5d2,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4eadf5d2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3a8c0 */
GEN_OWN GEN_FRAME uint F_00b3a8c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xb3a8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a80) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a80) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a80) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a80) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2de11d61)));
      REFG(int, 0x14c2a84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a80) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a80);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2de11d61,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2de11d61,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3aa30 */
GEN_OWN GEN_FRAME uint F_00b3aa30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xb3aa30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a88) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a88) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a88) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a88) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5b803daf)));
      REFG(int, 0x14c2a8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a88) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a88);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5b803daf,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5b803daf,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3abb0 */
GEN_OWN GEN_FRAME uint F_00b3abb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0xb3abb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a90) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a90) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a90) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a90) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6a16d3a0)));
      REFG(int, 0x14c2a94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a90) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a90);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6a16d3a0,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6a16d3a0,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3ad30 */
GEN_OWN GEN_FRAME uint F_00b3ad30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(undefined4 param_12, unsigned int gen_a11), GEN_P(undefined4 param_13, unsigned int gen_a12))
{
  GEN_ENTER(0xb3ad30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a11;)
  GEN_PIN(undefined4 param_13 = (undefined4)gen_a12;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2a98) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2a98) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2a9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2a98) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2a98) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2a98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbb939ee5)));
      REFG(int, 0x14c2a9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2a98) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2a98);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbb939ee5,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_13);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbb939ee5,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3aec0 */
GEN_OWN GEN_FRAME uint F_00b3aec0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb3aec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2aa0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2aa0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2aa4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2aa0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2aa0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2aa0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(
                                            "5_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3079_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3080_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3081_LEGACYRETAINERCHARACTERI\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3082_CHARACTERID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3083_ITEMID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3084_STACK\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3085_CATALOGID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3086_TYPE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3087_REFINE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3088_MATERIA_0\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3089_MATERIA_1\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3090_MATERIA_2\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3091_MATERIA_3\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3092_MATERIA_4\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3093_STAIN\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3094_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3095_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_..." 
                                            )));
      REFG(int, 0x14c2aa4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2aa0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2aa0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))("5_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3079_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3080_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3081_LEGACYRETAINERCHARACTERI\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3082_CHARACTERID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3083_ITEMID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3084_STACK\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3085_CATALOGID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3086_TYPE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3087_REFINE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3088_MATERIA_0\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3089_MATERIA_1\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3090_MATERIA_2\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3091_MATERIA_3\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3092_MATERIA_4\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3093_STAIN\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3094_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3095_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_..." 
                        ,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))("5_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3079_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3080_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._185_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3081_LEGACYRETAINERCHARACTERI\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3082_CHARACTERID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3083_ITEMID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3084_STACK\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3085_CATALOGID\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3086_TYPE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3087_REFINE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3088_MATERIA_0\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3089_MATERIA_1\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3090_MATERIA_2\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3091_MATERIA_3\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3092_MATERIA_4\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3093_STAIN\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3094_IS_DELETE\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'C3095_IS_NOT_ACTIVE_FLG\' AS COLUMN_NAME FROM DUAL  UNION ALL  SELECT \'&WORLDNAM._186_DBLEGACYRETAINE\' AS TABLE_NAME, \'UPDATE_DATE\' AS COLUMN_..." 
                        ,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b020 */
GEN_OWN GEN_FRAME uint F_00b3b020(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3b020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2aa8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2aa8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2aac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2aa8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2aa8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2aa8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8ffb8e26)));
      REFG(int, 0x14c2aac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2aa8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2aa8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8ffb8e26,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8ffb8e26,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b170 */
GEN_OWN GEN_FRAME uint F_00b3b170(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb3b170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ab0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ab0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ab4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ab0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ab0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ab0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7aaf7a04)));
      REFG(int, 0x14c2ab4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ab0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ab0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7aaf7a04,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7aaf7a04,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b2d0 */
GEN_OWN GEN_FRAME uint F_00b3b2d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3b2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  int extraout_ECX = 0;
  int extraout_ECX_00 = 0;
  int iVar2;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ab8) = ((code *)GEN_TOP(0x0));
    }
    iVar2 = extraout_ECX;
    if ((REFG(undefined * PTR32, 0x14c2ab8) != ((code *)GEN_TOP(0x0))) && (iVar2 = 0, REFG(int, 0x14c2abc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ab8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ab8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ab8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa776e8db)));
      REFG(int, 0x14c2abc) = *(int *)&REFG(undefined, 0x14c1f34);
      iVar2 = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ab8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ab8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa776e8db,&(*(undefined4 *)(gen_frame + 0x0)));
        iVar2 = extraout_ECX_00;
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,CONCAT31((int3)((uint)iVar2 >> 8),param_2));
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa776e8db,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b430 */
GEN_OWN GEN_FRAME uint F_00b3b430(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb3b430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ac0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ac0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ac4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ac0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ac0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ac0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5650beb)));
      REFG(int, 0x14c2ac4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ac0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ac0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5650beb,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5650beb,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b5a0 */
GEN_OWN GEN_FRAME uint F_00b3b5a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3b5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ac8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ac8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2acc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ac8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ac8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ac8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9083e53a)));
      REFG(int, 0x14c2acc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ac8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ac8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9083e53a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9083e53a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b700 */
GEN_OWN GEN_FRAME uint F_00b3b700(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3b700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ad0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ad0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ad4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ad0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ad0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ad0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfa6a0675)));
      REFG(int, 0x14c2ad4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ad0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ad0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfa6a0675,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfa6a0675,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b850 */
GEN_OWN GEN_FRAME uint F_00b3b850(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb3b850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ad8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ad8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2adc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ad8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ad8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ad8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5995410d)));
      REFG(int, 0x14c2adc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ad8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ad8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5995410d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5995410d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3b9b0 */
GEN_OWN GEN_FRAME uint F_00b3b9b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb3b9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ae0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ae0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ae4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ae0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ae0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ae0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xeba4d232)));
      REFG(int, 0x14c2ae4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ae0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ae0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xeba4d232,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xeba4d232,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3bb10 */
GEN_OWN GEN_FRAME uint F_00b3bb10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb3bb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ae8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ae8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2aec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ae8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ae8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ae8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7d44bb54)));
      REFG(int, 0x14c2aec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ae8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ae8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7d44bb54,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7d44bb54,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3bc70 */
GEN_OWN GEN_FRAME uint F_00b3bc70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb3bc70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2af0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2af0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2af4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2af0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2af0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2af0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9c39c246)));
      REFG(int, 0x14c2af4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2af0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2af0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9c39c246,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9c39c246,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3bdd0 */
GEN_OWN GEN_FRAME uint F_00b3bdd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3bdd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2af8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2af8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2afc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2af8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2af8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2af8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5526cfd1)));
      REFG(int, 0x14c2afc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2af8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2af8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5526cfd1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5526cfd1,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3bf30 */
GEN_OWN GEN_FRAME uint F_00b3bf30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb3bf30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b00) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b00) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b00) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b00) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3b845a1)));
      REFG(int, 0x14c2b04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b00) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b00);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3b845a1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3b845a1,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3c090 */
GEN_OWN GEN_FRAME uint F_00b3c090(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3c090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b08) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b08) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b08) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b08) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9152e055)));
      REFG(int, 0x14c2b0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b08) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b08);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9152e055,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9152e055,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3c1f0 */
GEN_OWN GEN_FRAME uint F_00b3c1f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3c1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b10) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b10) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b10) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b10) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfbbb031a)));
      REFG(int, 0x14c2b14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b10) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b10);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfbbb031a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfbbb031a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3c340 */
GEN_OWN GEN_FRAME uint F_00b3c340(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb3c340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b18) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b18) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b18) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b18) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9bb9d68f)));
      REFG(int, 0x14c2b1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b18) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b18);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9bb9d68f,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9bb9d68f,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3c4a0 */
GEN_OWN GEN_FRAME uint F_00b3c4a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb3c4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b20) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b20) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b20) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b20) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x407f67aa)));
      REFG(int, 0x14c2b24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b20) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b20);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x407f67aa,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x407f67aa,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3c600 */
GEN_OWN GEN_FRAME uint F_00b3c600(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb3c600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b28) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b28) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b2c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b28) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b28) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b28) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x14610cd7)));
      REFG(int, 0x14c2b2c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b28) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b28);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x14610cd7,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x14610cd7,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3c760 */
GEN_OWN GEN_FRAME uint F_00b3c760(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb3c760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b30) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b30) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b30) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b30) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9de8c729)));
      REFG(int, 0x14c2b34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b30) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b30);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9de8c729,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9de8c729,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3c8c0 */
GEN_OWN GEN_FRAME uint F_00b3c8c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb3c8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b38) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b38) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b38) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b38) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x473f7828)));
      REFG(int, 0x14c2b3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b38) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b38);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x473f7828,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x473f7828,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3ca20 */
GEN_OWN GEN_FRAME uint F_00b3ca20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xb3ca20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b40) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b40) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b40) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b40) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9fbae4eb)));
      REFG(int, 0x14c2b44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b40) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b40);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9fbae4eb,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9fbae4eb,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3cb90 */
GEN_OWN GEN_FRAME uint F_00b3cb90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb3cb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b48) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b48) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b48) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b48) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb2e98ab8)));
      REFG(int, 0x14c2b4c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b48) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b48);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb2e98ab8,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb2e98ab8,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3cd00 */
GEN_OWN GEN_FRAME uint F_00b3cd00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb3cd00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b50) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b50) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b50) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b50) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6126010d)));
      REFG(int, 0x14c2b54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b50) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b50);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6126010d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6126010d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3ce70 */
GEN_OWN GEN_FRAME uint F_00b3ce70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3ce70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b58) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b58) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b58) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b58) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1dc91303)));
      REFG(int, 0x14c2b5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b58) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b58);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1dc91303,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1dc91303,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3cfd0 */
GEN_OWN GEN_FRAME uint F_00b3cfd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb3cfd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b60) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b60) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b60) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b60) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x44ee4841)));
      REFG(int, 0x14c2b64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b60) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b60);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x44ee4841,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x44ee4841,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3d130 */
GEN_OWN GEN_FRAME uint F_00b3d130(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3d130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b68) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b68) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b68) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b68) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd01bd237)));
      REFG(int, 0x14c2b6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b68) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b68);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd01bd237,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd01bd237,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3d290 */
GEN_OWN GEN_FRAME uint F_00b3d290(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3d290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b70) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b70) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b70) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b70) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe6ce4f1)));
      REFG(int, 0x14c2b74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b70) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b70);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe6ce4f1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe6ce4f1,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3d3f0 */
GEN_OWN GEN_FRAME uint F_00b3d3f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3d3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b78) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b78) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b78) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b78) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x118d48a3)));
      REFG(int, 0x14c2b7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b78) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b78);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x118d48a3,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x118d48a3,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3d550 */
GEN_OWN GEN_FRAME uint F_00b3d550(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3d550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b80) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b80) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b80) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b80) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd34a789b)));
      REFG(int, 0x14c2b84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b80) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b80);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd34a789b,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd34a789b,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3d6b0 */
GEN_OWN GEN_FRAME uint F_00b3d6b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3d6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b88) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b88) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b88) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b88) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe4eec07)));
      REFG(int, 0x14c2b8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b88) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b88);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe4eec07,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe4eec07,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3d810 */
GEN_OWN GEN_FRAME uint F_00b3d810(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3d810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b90) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b90) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b90) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b90) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa1ec8d74)));
      REFG(int, 0x14c2b94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b90) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b90);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa1ec8d74,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa1ec8d74,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3d970 */
GEN_OWN GEN_FRAME uint F_00b3d970(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3d970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2b98) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2b98) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2b9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2b98) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2b98) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2b98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7b0d72a3)));
      REFG(int, 0x14c2b9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2b98) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2b98);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7b0d72a3,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7b0d72a3,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3dad0 */
GEN_OWN GEN_FRAME uint F_00b3dad0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3dad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ba0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ba0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ba4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ba0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ba0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ba0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x964bf452)));
      REFG(int, 0x14c2ba4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ba0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ba0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x964bf452,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x964bf452,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3dc30 */
GEN_OWN GEN_FRAME uint F_00b3dc30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3dc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ba8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ba8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2bac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ba8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ba8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ba8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x51d53d06)));
      REFG(int, 0x14c2bac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ba8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ba8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x51d53d06,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x51d53d06,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3dd90 */
GEN_OWN GEN_FRAME uint F_00b3dd90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3dd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bb0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2bb0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2bb4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bb0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2bb0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2bb0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2697a8d1)));
      REFG(int, 0x14c2bb4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bb0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2bb0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2697a8d1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2697a8d1,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3def0 */
GEN_OWN GEN_FRAME uint F_00b3def0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3def0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bb8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2bb8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2bbc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bb8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2bb8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2bb8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x462214a9)));
      REFG(int, 0x14c2bbc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bb8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2bb8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x462214a9,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x462214a9,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e050 */
GEN_OWN GEN_FRAME uint F_00b3e050(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3e050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bc0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2bc0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2bc4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bc0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2bc0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2bc0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb981d935)));
      REFG(int, 0x14c2bc4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bc0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2bc0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb981d935,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb981d935,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e1b0 */
GEN_OWN GEN_FRAME uint F_00b3e1b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3e1b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bc8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2bc8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2bcc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bc8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2bc8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2bc8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x96bd040e)));
      REFG(int, 0x14c2bcc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bc8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2bc8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x96bd040e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x96bd040e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e300 */
GEN_OWN GEN_FRAME uint F_00b3e300(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3e300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bd0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2bd0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2bd4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bd0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2bd0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2bd0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcde8e1a3)));
      REFG(int, 0x14c2bd4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bd0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2bd0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcde8e1a3,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcde8e1a3,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e450 */
GEN_OWN GEN_FRAME uint F_00b3e450(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3e450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bd8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2bd8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2bdc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bd8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2bd8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2bd8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6ba2a5d6)));
      REFG(int, 0x14c2bdc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bd8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2bd8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6ba2a5d6,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6ba2a5d6,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e5a0 */
GEN_OWN GEN_FRAME uint F_00b3e5a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb3e5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2be0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2be0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2be4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2be0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2be0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2be0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7bf0a94d)));
      REFG(int, 0x14c2be4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2be0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2be0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7bf0a94d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7bf0a94d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e700 */
GEN_OWN GEN_FRAME uint F_00b3e700(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3e700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2be8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2be8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2bec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2be8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2be8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2be8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfd7c5557)));
      REFG(int, 0x14c2bec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2be8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2be8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfd7c5557,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfd7c5557,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e860 */
GEN_OWN GEN_FRAME uint F_00b3e860(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3e860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bf0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2bf0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2bf4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bf0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2bf0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2bf0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x869534e2)));
      REFG(int, 0x14c2bf4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bf0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2bf0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x869534e2,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x869534e2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3e9b0 */
GEN_OWN GEN_FRAME uint F_00b3e9b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb3e9b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2bf8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2bf8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2bfc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2bf8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2bf8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2bf8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xead72fe4)));
      REFG(int, 0x14c2bfc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2bf8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2bf8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xead72fe4,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xead72fe4,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3eb10 */
GEN_OWN GEN_FRAME uint F_00b3eb10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb3eb10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c00) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c00) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c00) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c00) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x221fa8e8)));
      REFG(int, 0x14c2c04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c00) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c00);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x221fa8e8,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x221fa8e8,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3ec70 */
GEN_OWN GEN_FRAME uint F_00b3ec70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3ec70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c08) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c08) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c08) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c08) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbe7692ec)));
      REFG(int, 0x14c2c0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c08) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c08);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbe7692ec,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbe7692ec,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3edc0 */
GEN_OWN GEN_FRAME uint F_00b3edc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3edc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c10) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c10) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c10) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c10) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf117b834)));
      REFG(int, 0x14c2c14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c10) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c10);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf117b834,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf117b834,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3ef10 */
GEN_OWN GEN_FRAME uint F_00b3ef10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb3ef10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c18) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c18) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c18) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c18) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x24409f48)));
      REFG(int, 0x14c2c1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c18) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c18);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x24409f48,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x24409f48,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f070 */
GEN_OWN GEN_FRAME uint F_00b3f070(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3f070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c20) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c20) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c20) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c20) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x49bceecf)));
      REFG(int, 0x14c2c24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c20) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c20);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x49bceecf,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x49bceecf,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f1d0 */
GEN_OWN GEN_FRAME uint F_00b3f1d0(void)
{
  GEN_ENTER(0xb3f1d0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c28) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c28) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c2c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c28) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c28) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c28) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x239c4545)));
      REFG(int, 0x14c2c2c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c28) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c28);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x239c4545,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))();
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x239c4545,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f320 */
GEN_OWN GEN_FRAME uint F_00b3f320(void)
{
  GEN_ENTER(0xb3f320u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c30) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c30) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c30) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c30) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2ec50c2b)));
      REFG(int, 0x14c2c34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c30) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c30);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2ec50c2b,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))();
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2ec50c2b,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f470 */
GEN_OWN GEN_FRAME uint F_00b3f470(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3f470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c38) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c38) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c38) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c38) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x348ff8e1)));
      REFG(int, 0x14c2c3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c38) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c38);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x348ff8e1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x348ff8e1,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f5c0 */
GEN_OWN GEN_FRAME uint F_00b3f5c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3f5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c40) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c40) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c40) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c40) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x296c434d)));
      REFG(int, 0x14c2c44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c40) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c40);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x296c434d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x296c434d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f720 */
GEN_OWN GEN_FRAME uint F_00b3f720(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3f720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c48) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c48) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c48) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c48) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdfc063b7)));
      REFG(int, 0x14c2c4c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c48) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c48);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdfc063b7,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdfc063b7,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f870 */
GEN_OWN GEN_FRAME uint F_00b3f870(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3f870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c50) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c50) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c50) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c50) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xac7e37f4)));
      REFG(int, 0x14c2c54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c50) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c50);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xac7e37f4,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xac7e37f4,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3f9d0 */
GEN_OWN GEN_FRAME uint F_00b3f9d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3f9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c58) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c58) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c58) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c58) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3a153134)));
      REFG(int, 0x14c2c5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c58) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c58);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3a153134,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3a153134,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3fb20 */
GEN_OWN GEN_FRAME uint F_00b3fb20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3fb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c60) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c60) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c60) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c60) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf6a1ad68)));
      REFG(int, 0x14c2c64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c60) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c60);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf6a1ad68,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf6a1ad68,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3fc70 */
GEN_OWN GEN_FRAME uint F_00b3fc70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb3fc70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c68) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c68) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c68) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c68) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2d68de96)));
      REFG(int, 0x14c2c6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c68) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c68);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2d68de96,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2d68de96,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3fdc0 */
GEN_OWN GEN_FRAME uint F_00b3fdc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3fdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c70) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c70) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c70) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c70) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1fb0bc30)));
      REFG(int, 0x14c2c74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c70) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c70);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1fb0bc30,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1fb0bc30,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b3ff20 */
GEN_OWN GEN_FRAME uint F_00b3ff20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb3ff20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c78) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c78) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c78) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c78) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x451f2134)));
      REFG(int, 0x14c2c7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c78) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c78);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x451f2134,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x451f2134,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40080 */
GEN_OWN GEN_FRAME uint F_00b40080(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb40080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c80) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c80) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c80) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c80) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5c069fa3)));
      REFG(int, 0x14c2c84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c80) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c80);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5c069fa3,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5c069fa3,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b401e0 */
GEN_OWN GEN_FRAME uint F_00b401e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb401e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c88) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c88) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c88) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c88) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xda044458)));
      REFG(int, 0x14c2c8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c88) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c88);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xda044458,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xda044458,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40330 */
GEN_OWN GEN_FRAME uint F_00b40330(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb40330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c90) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c90) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c90) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c90) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc9a8ecec)));
      REFG(int, 0x14c2c94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c90) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c90);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc9a8ecec,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc9a8ecec,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40480 */
GEN_OWN GEN_FRAME uint F_00b40480(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb40480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2c98) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2c98) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2c9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2c98) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2c98) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2c98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4ab00934)));
      REFG(int, 0x14c2c9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2c98) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2c98);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4ab00934,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4ab00934,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b405e0 */
GEN_OWN GEN_FRAME uint F_00b405e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb405e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ca0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ca0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ca4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ca0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ca0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ca0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3dd6b54b)));
      REFG(int, 0x14c2ca4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ca0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ca0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3dd6b54b,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3dd6b54b,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40740 */
GEN_OWN GEN_FRAME uint F_00b40740(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb40740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ca8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ca8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2cac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ca8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ca8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ca8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4c87e317)));
      REFG(int, 0x14c2cac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ca8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ca8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4c87e317,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4c87e317,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40890 */
GEN_OWN GEN_FRAME uint F_00b40890(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb40890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cb0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2cb0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2cb4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cb0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2cb0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2cb0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa17daabe)));
      REFG(int, 0x14c2cb4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cb0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2cb0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa17daabe,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa17daabe,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b409e0 */
GEN_OWN GEN_FRAME uint F_00b409e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb409e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cb8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2cb8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2cbc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cb8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2cb8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2cb8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe6839b43)));
      REFG(int, 0x14c2cbc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cb8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2cb8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe6839b43,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe6839b43,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40b40 */
GEN_OWN GEN_FRAME uint F_00b40b40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb40b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cc0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2cc0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2cc4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cc0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2cc0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2cc0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7be27fa2)));
      REFG(int, 0x14c2cc4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cc0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2cc0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7be27fa2,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7be27fa2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40ca0 */
GEN_OWN GEN_FRAME uint F_00b40ca0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb40ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cc8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2cc8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ccc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cc8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2cc8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2cc8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x932cb140)));
      REFG(int, 0x14c2ccc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cc8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2cc8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x932cb140,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x932cb140,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40e00 */
GEN_OWN GEN_FRAME uint F_00b40e00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb40e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cd0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2cd0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2cd4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cd0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2cd0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2cd0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc7177702)));
      REFG(int, 0x14c2cd4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cd0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2cd0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc7177702,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc7177702,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b40f60 */
GEN_OWN GEN_FRAME uint F_00b40f60(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb40f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cd8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2cd8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2cdc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cd8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2cd8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2cd8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd6c6cd2)));
      REFG(int, 0x14c2cdc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cd8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2cd8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd6c6cd2,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd6c6cd2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b410b0 */
GEN_OWN GEN_FRAME uint F_00b410b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb410b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ce0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ce0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ce4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ce0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ce0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ce0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8b7e99b5)));
      REFG(int, 0x14c2ce4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ce0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ce0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8b7e99b5,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8b7e99b5,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41200 */
GEN_OWN GEN_FRAME uint F_00b41200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb41200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  int extraout_ECX = 0;
  int extraout_ECX_00 = 0;
  int iVar2;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ce8) = ((code *)GEN_TOP(0x0));
    }
    iVar2 = extraout_ECX;
    if ((REFG(undefined * PTR32, 0x14c2ce8) != ((code *)GEN_TOP(0x0))) && (iVar2 = 0, REFG(int, 0x14c2cec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ce8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ce8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ce8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x3cd58f89)));
      REFG(int, 0x14c2cec) = *(int *)&REFG(undefined, 0x14c1f34);
      iVar2 = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ce8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ce8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x3cd58f89,&(*(undefined4 *)(gen_frame + 0x0)));
        iVar2 = extraout_ECX_00;
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,CONCAT31((int3)((uint)iVar2 >> 8),param_2));
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x3cd58f89,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41360 */
GEN_OWN GEN_FRAME uint F_00b41360(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb41360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cf0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2cf0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2cf4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cf0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2cf0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2cf0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x6b9b409e)));
      REFG(int, 0x14c2cf4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cf0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2cf0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x6b9b409e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x6b9b409e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b414d0 */
GEN_OWN GEN_FRAME uint F_00b414d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb414d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2cf8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2cf8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2cfc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2cf8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2cf8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2cf8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x96eea9f8)));
      REFG(int, 0x14c2cfc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2cf8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2cf8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x96eea9f8,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x96eea9f8,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41630 */
GEN_OWN GEN_FRAME uint F_00b41630(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb41630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d00) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d00) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d00) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d00) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5e8f0bec)));
      REFG(int, 0x14c2d04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d00) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d00);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5e8f0bec,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5e8f0bec,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41780 */
GEN_OWN GEN_FRAME uint F_00b41780(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb41780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d08) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d08) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d08) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d08) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xce653127)));
      REFG(int, 0x14c2d0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d08) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d08);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xce653127,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xce653127,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b418e0 */
GEN_OWN GEN_FRAME uint F_00b418e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb418e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d10) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d10) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d10) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d10) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x40c8ed5e)));
      REFG(int, 0x14c2d14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d10) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d10);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x40c8ed5e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x40c8ed5e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41a30 */
GEN_OWN GEN_FRAME uint F_00b41a30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb41a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d18) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d18) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d18) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d18) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8c610bda)));
      REFG(int, 0x14c2d1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d18) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d18);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8c610bda,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8c610bda,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41b90 */
GEN_OWN GEN_FRAME uint F_00b41b90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb41b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d20) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d20) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d20) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d20) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xb30cd1a7)));
      REFG(int, 0x14c2d24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d20) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d20);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xb30cd1a7,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xb30cd1a7,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41ce0 */
GEN_OWN GEN_FRAME uint F_00b41ce0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb41ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  int extraout_ECX = 0;
  int extraout_ECX_00 = 0;
  int iVar2;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d28) = ((code *)GEN_TOP(0x0));
    }
    iVar2 = extraout_ECX;
    if ((REFG(undefined * PTR32, 0x14c2d28) != ((code *)GEN_TOP(0x0))) && (iVar2 = 0, REFG(int, 0x14c2d2c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d28) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d28) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d28) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x315e0ef0)));
      REFG(int, 0x14c2d2c) = *(int *)&REFG(undefined, 0x14c1f34);
      iVar2 = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d28) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d28);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x315e0ef0,&(*(undefined4 *)(gen_frame + 0x0)));
        iVar2 = extraout_ECX_00;
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,CONCAT31((int3)((uint)iVar2 >> 8),param_2));
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x315e0ef0,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41e40 */
GEN_OWN GEN_FRAME uint F_00b41e40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb41e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d30) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d30) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d30) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d30) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf5dcfcba)));
      REFG(int, 0x14c2d34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d30) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d30);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf5dcfcba,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf5dcfcba,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b41fa0 */
GEN_OWN GEN_FRAME uint F_00b41fa0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb41fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d38) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d38) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d38) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d38) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x36f1c736)));
      REFG(int, 0x14c2d3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d38) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d38);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x36f1c736,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x36f1c736,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42100 */
GEN_OWN GEN_FRAME uint F_00b42100(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb42100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d40) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d40) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d40) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d40) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xed4416c5)));
      REFG(int, 0x14c2d44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d40) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d40);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xed4416c5,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xed4416c5,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42260 */
GEN_OWN GEN_FRAME uint F_00b42260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb42260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  int extraout_ECX = 0;
  int extraout_ECX_00 = 0;
  int iVar2;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d48) = ((code *)GEN_TOP(0x0));
    }
    iVar2 = extraout_ECX;
    if ((REFG(undefined * PTR32, 0x14c2d48) != ((code *)GEN_TOP(0x0))) && (iVar2 = 0, REFG(int, 0x14c2d4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d48) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d48) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2d495758)));
      REFG(int, 0x14c2d4c) = *(int *)&REFG(undefined, 0x14c1f34);
      iVar2 = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d48) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d48);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2d495758,&(*(undefined4 *)(gen_frame + 0x0)));
        iVar2 = extraout_ECX_00;
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,CONCAT31((int3)((uint)iVar2 >> 8),param_2));
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2d495758,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b423c0 */
GEN_OWN GEN_FRAME uint F_00b423c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb423c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d50) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d50) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d50) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d50) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x416c07b3)));
      REFG(int, 0x14c2d54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d50) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d50);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x416c07b3,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x416c07b3,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42530 */
GEN_OWN GEN_FRAME uint F_00b42530(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb42530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d58) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d58) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d58) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d58) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5268716f)));
      REFG(int, 0x14c2d5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d58) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d58);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5268716f,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5268716f,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b426a0 */
GEN_OWN GEN_FRAME uint F_00b426a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb426a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d60) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d60) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d60) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d60) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7923ba0e)));
      REFG(int, 0x14c2d64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d60) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d60);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7923ba0e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7923ba0e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42810 */
GEN_OWN GEN_FRAME uint F_00b42810(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb42810u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d68) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d68) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d68) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d68) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x622fdc87)));
      REFG(int, 0x14c2d6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d68) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d68);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x622fdc87,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x622fdc87,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42980 */
GEN_OWN GEN_FRAME uint F_00b42980(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb42980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d70) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d70) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d70) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d70) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x712baa5b)));
      REFG(int, 0x14c2d74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d70) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d70);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x712baa5b,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x712baa5b,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42af0 */
GEN_OWN GEN_FRAME uint F_00b42af0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb42af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d78) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d78) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d78) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d78) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5a60613a)));
      REFG(int, 0x14c2d7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d78) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d78);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5a60613a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5a60613a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42c60 */
GEN_OWN GEN_FRAME uint F_00b42c60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb42c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d80) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d80) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d80) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d80) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xa9657f32)));
      REFG(int, 0x14c2d84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d80) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d80);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xa9657f32,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xa9657f32,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42dd0 */
GEN_OWN GEN_FRAME uint F_00b42dd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb42dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d88) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d88) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d88) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d88) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xba6109ee)));
      REFG(int, 0x14c2d8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d88) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d88);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xba6109ee,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xba6109ee,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b42f40 */
GEN_OWN GEN_FRAME uint F_00b42f40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb42f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d90) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d90) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d90) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d90) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x912ac28f)));
      REFG(int, 0x14c2d94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d90) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d90);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x912ac28f,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x912ac28f,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b430b0 */
GEN_OWN GEN_FRAME uint F_00b430b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb430b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2d98) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2d98) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2d9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2d98) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2d98) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2d98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd4974572)));
      REFG(int, 0x14c2d9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2d98) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2d98);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd4974572,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd4974572,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43220 */
GEN_OWN GEN_FRAME uint F_00b43220(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb43220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2da0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2da0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2da4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2da0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2da0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2da0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc79333ae)));
      REFG(int, 0x14c2da4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2da0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2da0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc79333ae,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc79333ae,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43390 */
GEN_OWN GEN_FRAME uint F_00b43390(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb43390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2da8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2da8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2dac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2da8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2da8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2da8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xecd8f8cf)));
      REFG(int, 0x14c2dac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2da8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2da8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xecd8f8cf,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5,param_6);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xecd8f8cf,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43500 */
GEN_OWN GEN_FRAME uint F_00b43500(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb43500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2db0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2db0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2db4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2db0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2db0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2db0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x44f0ecd1)));
      REFG(int, 0x14c2db4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2db0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2db0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x44f0ecd1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x44f0ecd1,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43650 */
GEN_OWN GEN_FRAME uint F_00b43650(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb43650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2db8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2db8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2dbc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2db8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2db8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2db8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x624e21c2)));
      REFG(int, 0x14c2dbc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2db8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2db8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x624e21c2,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x624e21c2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b437b0 */
GEN_OWN GEN_FRAME uint F_00b437b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb437b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2dc0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2dc0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2dc4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2dc0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2dc0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2dc0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd7c9ec09)));
      REFG(int, 0x14c2dc4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2dc0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2dc0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd7c9ec09,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd7c9ec09,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43910 */
GEN_OWN GEN_FRAME uint F_00b43910(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb43910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2dc8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2dc8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2dcc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2dc8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2dc8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2dc8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x72162b35)));
      REFG(int, 0x14c2dcc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2dc8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2dc8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x72162b35,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x72162b35,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43a70 */
GEN_OWN GEN_FRAME uint F_00b43a70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb43a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2dd0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2dd0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2dd4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2dd0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2dd0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2dd0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfbc08fc1)));
      REFG(int, 0x14c2dd4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2dd0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2dd0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfbc08fc1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfbc08fc1,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43bd0 */
GEN_OWN GEN_FRAME uint F_00b43bd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb43bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2dd8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2dd8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ddc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2dd8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2dd8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2dd8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1bc21b66)));
      REFG(int, 0x14c2ddc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2dd8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2dd8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1bc21b66,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1bc21b66,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43d30 */
GEN_OWN GEN_FRAME uint F_00b43d30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb43d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2de0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2de0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2de4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2de0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2de0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2de0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1a131e09)));
      REFG(int, 0x14c2de4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2de0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2de0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1a131e09,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1a131e09,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43e90 */
GEN_OWN GEN_FRAME uint F_00b43e90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb43e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2de8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2de8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2dec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2de8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2de8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2de8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1c5659cd)));
      REFG(int, 0x14c2dec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2de8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2de8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1c5659cd,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1c5659cd,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b43ff0 */
GEN_OWN GEN_FRAME uint F_00b43ff0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb43ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2df0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2df0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2df4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2df0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2df0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2df0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x54fe75a)));
      REFG(int, 0x14c2df4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2df0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2df0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x54fe75a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x54fe75a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44150 */
GEN_OWN GEN_FRAME uint F_00b44150(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb44150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2df8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2df8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2dfc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2df8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2df8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2df8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x18919887)));
      REFG(int, 0x14c2dfc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2df8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2df8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x18919887,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x18919887,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b442b0 */
GEN_OWN GEN_FRAME uint F_00b442b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb442b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e00) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e00) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e00) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e00) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4feeb498)));
      REFG(int, 0x14c2e04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e00) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e00);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4feeb498,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4feeb498,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44410 */
GEN_OWN GEN_FRAME uint F_00b44410(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb44410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e08) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e08) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e08) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e08) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2f5b08e0)));
      REFG(int, 0x14c2e0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e08) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e08);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2f5b08e0,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2f5b08e0,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44570 */
GEN_OWN GEN_FRAME uint F_00b44570(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb44570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e10) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e10) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e10) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e10) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8354a8f4)));
      REFG(int, 0x14c2e14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e10) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e10);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8354a8f4,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8354a8f4,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b446d0 */
GEN_OWN GEN_FRAME uint F_00b446d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb446d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e18) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e18) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e18) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e18) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1b1b9a16)));
      REFG(int, 0x14c2e1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e18) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e18);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1b1b9a16,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1b1b9a16,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44830 */
GEN_OWN GEN_FRAME uint F_00b44830(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb44830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e20) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e20) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e20) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e20) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x97063269)));
      REFG(int, 0x14c2e24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e20) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e20);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x97063269,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x97063269,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44990 */
GEN_OWN GEN_FRAME uint F_00b44990(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb44990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e28) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e28) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e2c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e28) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e28) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e28) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8e1f8cfe)));
      REFG(int, 0x14c2e2c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e28) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e28);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8e1f8cfe,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8e1f8cfe,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44af0 */
GEN_OWN GEN_FRAME uint F_00b44af0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb44af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e30) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e30) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e30) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e30) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdf1f8f1b)));
      REFG(int, 0x14c2e34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e30) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e30);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdf1f8f1b,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdf1f8f1b,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44c40 */
GEN_OWN GEN_FRAME uint F_00b44c40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb44c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e38) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e38) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e38) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e38) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x467819d6)));
      REFG(int, 0x14c2e3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e38) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e38);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x467819d6,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x467819d6,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44da0 */
GEN_OWN GEN_FRAME uint F_00b44da0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb44da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e40) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e40) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e40) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e40) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x74fe99ff)));
      REFG(int, 0x14c2e44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e40) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e40);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x74fe99ff,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x74fe99ff,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b44ef0 */
GEN_OWN GEN_FRAME uint F_00b44ef0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb44ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e48) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e48) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e48) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e48) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2afd7dc7)));
      REFG(int, 0x14c2e4c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e48) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e48);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2afd7dc7,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2afd7dc7,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45050 */
GEN_OWN GEN_FRAME uint F_00b45050(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb45050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e50) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e50) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e50) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e50) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xece87388)));
      REFG(int, 0x14c2e54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e50) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e50);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xece87388,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xece87388,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b451a0 */
GEN_OWN GEN_FRAME uint F_00b451a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb451a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e58) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e58) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e58) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e58) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x694d52e)));
      REFG(int, 0x14c2e5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e58) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e58);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x694d52e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x694d52e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b452f0 */
GEN_OWN GEN_FRAME uint F_00b452f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb452f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e60) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e60) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e60) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e60) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xdad9cff8)));
      REFG(int, 0x14c2e64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e60) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e60);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xdad9cff8,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xdad9cff8,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45440 */
GEN_OWN GEN_FRAME uint F_00b45440(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb45440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e68) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e68) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e68) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e68) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x375dbd6b)));
      REFG(int, 0x14c2e6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e68) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e68);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x375dbd6b,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x375dbd6b,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45590 */
GEN_OWN GEN_FRAME uint F_00b45590(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb45590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e70) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e70) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e70) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e70) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfcbc7e14)));
      REFG(int, 0x14c2e74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e70) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e70);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfcbc7e14,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfcbc7e14,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b456e0 */
GEN_OWN GEN_FRAME uint F_00b456e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb456e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e78) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e78) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e78) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e78) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd3ede889)));
      REFG(int, 0x14c2e7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e78) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e78);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd3ede889,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd3ede889,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45840 */
GEN_OWN GEN_FRAME uint F_00b45840(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb45840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e80) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e80) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e80) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e80) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2be25df8)));
      REFG(int, 0x14c2e84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e80) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e80);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2be25df8,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2be25df8,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b459a0 */
GEN_OWN GEN_FRAME uint F_00b459a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb459a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e88) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e88) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e88) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e88) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcc176068)));
      REFG(int, 0x14c2e8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e88) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e88);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcc176068,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcc176068,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45b00 */
GEN_OWN GEN_FRAME uint F_00b45b00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb45b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e90) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e90) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e90) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e90) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x17093206)));
      REFG(int, 0x14c2e94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e90) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e90);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x17093206,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x17093206,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45c60 */
GEN_OWN GEN_FRAME uint F_00b45c60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb45c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2e98) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2e98) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2e9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2e98) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2e98) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2e98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1c89c5df)));
      REFG(int, 0x14c2e9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2e98) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2e98);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1c89c5df,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1c89c5df,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45dc0 */
GEN_OWN GEN_FRAME uint F_00b45dc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb45dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ea0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ea0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ea4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ea0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ea0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ea0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x617bff9f)));
      REFG(int, 0x14c2ea4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ea0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ea0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x617bff9f,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x617bff9f,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b45f20 */
GEN_OWN GEN_FRAME uint F_00b45f20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb45f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ea8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ea8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2eac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ea8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ea8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ea8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x61cd6fd6)));
      REFG(int, 0x14c2eac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ea8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ea8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x61cd6fd6,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x61cd6fd6,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46080 */
GEN_OWN GEN_FRAME uint F_00b46080(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb46080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2eb0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2eb0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2eb4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2eb0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2eb0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2eb0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x16abd3a9)));
      REFG(int, 0x14c2eb4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2eb0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2eb0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x16abd3a9,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x16abd3a9,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b461e0 */
GEN_OWN GEN_FRAME uint F_00b461e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb461e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2eb8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2eb8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ebc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2eb8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2eb8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2eb8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7e4a9a0b)));
      REFG(int, 0x14c2ebc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2eb8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2eb8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7e4a9a0b,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7e4a9a0b,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46340 */
GEN_OWN GEN_FRAME uint F_00b46340(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb46340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ec0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ec0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ec4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ec0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ec0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ec0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xbc371ee0)));
      REFG(int, 0x14c2ec4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ec0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ec0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xbc371ee0,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xbc371ee0,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b464a0 */
GEN_OWN GEN_FRAME uint F_00b464a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb464a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ec8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ec8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ecc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ec8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ec8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ec8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x1dae4fbc)));
      REFG(int, 0x14c2ecc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ec8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ec8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x1dae4fbc,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x1dae4fbc,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46600 */
GEN_OWN GEN_FRAME uint F_00b46600(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb46600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ed0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ed0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ed4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ed0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ed0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ed0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x4347a9de)));
      REFG(int, 0x14c2ed4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ed0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ed0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x4347a9de,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x4347a9de,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46760 */
GEN_OWN GEN_FRAME uint F_00b46760(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb46760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ed8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ed8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2edc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ed8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ed8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ed8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc5ea85a1)));
      REFG(int, 0x14c2edc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ed8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ed8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc5ea85a1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc5ea85a1,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b468c0 */
GEN_OWN GEN_FRAME uint F_00b468c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb468c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ee0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ee0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ee4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ee0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ee0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ee0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2c694bc6)));
      REFG(int, 0x14c2ee4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ee0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ee0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2c694bc6,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2c694bc6,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46a20 */
GEN_OWN GEN_FRAME uint F_00b46a20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb46a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ee8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ee8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2eec) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ee8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ee8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ee8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xed1f8c69)));
      REFG(int, 0x14c2eec) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ee8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ee8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xed1f8c69,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xed1f8c69,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46b80 */
GEN_OWN GEN_FRAME uint F_00b46b80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb46b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ef0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ef0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2ef4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ef0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ef0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ef0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x7fa2173a)));
      REFG(int, 0x14c2ef4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ef0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ef0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x7fa2173a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x7fa2173a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46cf0 */
GEN_OWN GEN_FRAME uint F_00b46cf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb46cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2ef8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2ef8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2efc) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2ef8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2ef8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2ef8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xeee566b2)));
      REFG(int, 0x14c2efc) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2ef8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2ef8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xeee566b2,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xeee566b2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46e50 */
GEN_OWN GEN_FRAME uint F_00b46e50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb46e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f00) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f00) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f04) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f00) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f00) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f00) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x577dd202)));
      REFG(int, 0x14c2f04) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f00) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f00);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x577dd202,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x577dd202,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b46fb0 */
GEN_OWN GEN_FRAME uint F_00b46fb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb46fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f08) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f08) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f0c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f08) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f08) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f08) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x73bf8338)));
      REFG(int, 0x14c2f0c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f08) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f08);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x73bf8338,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x73bf8338,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47110 */
GEN_OWN GEN_FRAME uint F_00b47110(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb47110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f10) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f10) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f14) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f10) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f10) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f10) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xae3039da)));
      REFG(int, 0x14c2f14) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f10) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f10);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xae3039da,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3,param_4,param_5);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xae3039da,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47280 */
GEN_OWN GEN_FRAME uint F_00b47280(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb47280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f18) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f18) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f1c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f18) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f18) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f18) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xf020614a)));
      REFG(int, 0x14c2f1c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f18) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f18);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xf020614a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xf020614a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b473e0 */
GEN_OWN GEN_FRAME uint F_00b473e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb473e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f20) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f20) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f24) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f20) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f20) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f20) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x2ec39f90)));
      REFG(int, 0x14c2f24) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f20) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f20);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x2ec39f90,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x2ec39f90,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47540 */
GEN_OWN GEN_FRAME uint F_00b47540(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb47540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f28) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f28) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f2c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f28) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f28) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f28) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcb7309cd)));
      REFG(int, 0x14c2f2c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f28) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f28);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcb7309cd,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcb7309cd,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b476a0 */
GEN_OWN GEN_FRAME uint F_00b476a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb476a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f30) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f30) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f34) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f30) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f30) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f30) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xd61cbe6e)));
      REFG(int, 0x14c2f34) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f30) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f30);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xd61cbe6e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xd61cbe6e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47800 */
GEN_OWN GEN_FRAME uint F_00b47800(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb47800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f38) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f38) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f3c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f38) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f38) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f38) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xe4a26362)));
      REFG(int, 0x14c2f3c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f38) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f38);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xe4a26362,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xe4a26362,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47960 */
GEN_OWN GEN_FRAME uint F_00b47960(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb47960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f40) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f40) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f44) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f40) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f40) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f40) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x5927b094)));
      REFG(int, 0x14c2f44) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f40) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f40);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x5927b094,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x5927b094,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47ab0 */
GEN_OWN GEN_FRAME uint F_00b47ab0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb47ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f48) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f48) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f4c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f48) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f48) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f48) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xfa5f6134)));
      REFG(int, 0x14c2f4c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f48) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f48);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xfa5f6134,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xfa5f6134,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47c10 */
GEN_OWN GEN_FRAME uint F_00b47c10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb47c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f50) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f50) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f54) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f50) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f50) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f50) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x53f0381e)));
      REFG(int, 0x14c2f54) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f50) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f50);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x53f0381e,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x53f0381e,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47d70 */
GEN_OWN GEN_FRAME uint F_00b47d70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb47d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f58) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f58) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f5c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f58) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f58) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f58) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xda8466a0)));
      REFG(int, 0x14c2f5c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f58) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f58);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xda8466a0,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xda8466a0,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b47ed0 */
GEN_OWN GEN_FRAME uint F_00b47ed0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb47ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f60) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f60) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f64) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f60) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f60) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f60) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x53dabbca)));
      REFG(int, 0x14c2f64) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f60) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f60);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x53dabbca,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x53dabbca,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48020 */
GEN_OWN GEN_FRAME uint F_00b48020(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb48020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f68) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f68) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f6c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f68) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f68) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f68) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcda14d8a)));
      REFG(int, 0x14c2f6c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f68) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f68);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcda14d8a,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcda14d8a,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48170 */
GEN_OWN GEN_FRAME uint F_00b48170(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb48170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f70) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f70) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f74) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f70) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f70) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f70) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x8f2bab4)));
      REFG(int, 0x14c2f74) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f70) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f70);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x8f2bab4,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x8f2bab4,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b482d0 */
GEN_OWN GEN_FRAME uint F_00b482d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb482d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f78) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f78) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f7c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f78) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f78) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f78) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x112ba1a5)));
      REFG(int, 0x14c2f7c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f78) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f78);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x112ba1a5,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2,param_3);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x112ba1a5,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48430 */
GEN_OWN GEN_FRAME uint F_00b48430(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb48430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f80) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f80) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f84) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f80) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f80) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f80) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x9ea74659)));
      REFG(int, 0x14c2f84) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f80) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f80);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x9ea74659,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x9ea74659,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48590 */
GEN_OWN GEN_FRAME uint F_00b48590(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb48590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f88) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f88) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f8c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f88) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f88) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f88) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xcb7c208d)));
      REFG(int, 0x14c2f8c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f88) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f88);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xcb7c208d,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xcb7c208d,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b486e0 */
GEN_OWN GEN_FRAME uint F_00b486e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb486e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f90) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f90) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f94) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f90) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f90) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f90) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xce2e9d9)));
      REFG(int, 0x14c2f94) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f90) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f90);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xce2e9d9,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xce2e9d9,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48830 */
GEN_OWN GEN_FRAME uint F_00b48830(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb48830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2f98) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2f98) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2f9c) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2f98) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2f98) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2f98) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0xc9d86e33)));
      REFG(int, 0x14c2f9c) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2f98) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2f98);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0xc9d86e33,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0xc9d86e33,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48980 */
GEN_OWN GEN_FRAME uint F_00b48980(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb48980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2fa0) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2fa0) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2fa4) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2fa0) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2fa0) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2fa0) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x85ff5a15)));
      REFG(int, 0x14c2fa4) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2fa0) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2fa0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x85ff5a15,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x85ff5a15,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b48ad0 */
GEN_OWN GEN_FRAME uint F_00b48ad0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb48ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00b1b7e0(&(*(int *)(gen_frame + 0x8)));
  if ((uVar1 == 0) || (uVar1 == 0xfffffff2)) {
    if (uVar1 == 0xfffffff2) {
      REFG(undefined * PTR32, 0x14c2fa8) = ((code *)GEN_TOP(0x0));
    }
    if ((REFG(undefined * PTR32, 0x14c2fa8) != ((code *)GEN_TOP(0x0))) && (REFG(int, 0x14c2fac) != *(int *)&REFG(undefined, 0x14c1f34))) {
      REFG(undefined * PTR32, 0x14c2fa8) = ((code *)GEN_TOP(0x0));
    }
    if (((REFG(undefined * PTR32, 0x14c2fa8) == ((code *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x8)) != 0)) && (REFG(undefined * PTR32, 0x14c1ef0) != ((code *)GEN_TOP(0x0)))) {
      REFG(undefined * PTR32, 0x14c2fa8) = ((code *)GEN_TOP(((code *)REFG(gen_code32, 0x14c1ef0))(0x63685979)));
      REFG(int, 0x14c2fac) = *(int *)&REFG(undefined, 0x14c1f34);
    }
    if (REFG(undefined * PTR32, 0x14c2fa8) == ((code *)GEN_TOP(0x0))) {
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
      uVar1 = 0xfffffffd;
    }
    else {
      (*(gen_code32 *)(gen_frame + 0xc)) = REFG(undefined * PTR32, 0x14c2fa8);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (REFG(undefined * PTR32, 0x14c1ef8) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1ef8))(0x63685979,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      uVar1 = ((code *)(*(gen_code32 *)(gen_frame + 0xc)))(param_1,param_2);
      if (REFG(undefined * PTR32, 0x14c1efc) != ((code *)GEN_TOP(0x0))) {
        ((code *)REFG(gen_code32, 0x14c1efc))(0x63685979,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),uVar1);
      }
      REFG(int, 0x14c1f24) = REFG(int, 0x14c1f24) - 1;
    }
  }
  return uVar1;
}

/* ref: Global::ReadIndexFile */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b48c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xb48c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_004f8a90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xa98))) GEN_EDX_FWD,param_1,param_2,0,param_3,param_4);
  return uVar1;
}

/* ref: Global::Crc32LowerCase */
GEN_OWN GEN_FRAME uint F_00b48c60(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb48c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 != ((byte *)GEN_TOP(0x0))) {
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

/* ref: Global::HashFilePath */
GEN_OWN GEN_FRAME ulonglong F_00b48e20(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb48e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
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
    iVar10 = iVar10 - 1;
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
GEN_OWN GEN_FRAME uint F_00b48e90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb48e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (-(uint)(param_1 != 0) & 0xfffffc18) + 1000;
}

/* ref: Global::BinarySearchFirst */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b48eb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(code * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb48eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(code * param_5 = (code *)(uintptr_t)gen_a4;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  param_3 = param_3 - 1;
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
      param_3 = iVar3 - 1;
    }
    else {
      local_8 = iVar3 + 1;
    }
  } while (local_8 <= param_3);
  return 0;
}

/* ref: FUN_00b48f50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b48f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb48f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return param_1 == *((int *)GEN_TOP(((int)this + 0xc)));
}

/* ref: Global::CompareHash64 */
GEN_OWN GEN_FRAME uint F_00b48f70(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb48f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
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

/* ref: Global::CompareHash64ThenIndex */
GEN_OWN GEN_FRAME uint F_00b48fb0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb48fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
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

/* ref: Global::CompareU32 */
GEN_OWN GEN_FRAME uint F_00b49000(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb49000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  if (*param_2 == *param_1) {
    return 0;
  }
  return (-(uint)(*param_2 < *param_1) & 2) - 1;
}

/* ref: FUN_00b49020 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b49020(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb49020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x133a840) + param_1 * 4);
}

/* ref: Global::BuildSqPackPath */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b49060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(wchar_t * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined1 * param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xb49060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL_GS(0x31c, 4, 4);
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  wchar_t * pwVar3;
  
  this_00 = REFG(void * PTR32, 0x137104c);
  GEN_COOKIE((*(uint *)(gen_frame + 0x314)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x318));
  F_00429f90(((wchar_t *)(gen_frame + 0x0)) GEN_EDX_FWD);
  if (param_2 == -1) {
    F_00c49908(((undefined1 *)(gen_frame + 0x308)),10,((char *)REFP(0x10f0430)));
  }
  else {
    F_00c49908(((undefined1 *)(gen_frame + 0x308)),10,(*(undefined * PTR32 (*)[1])REFP(0x10f0438)));
    (*(char *)(gen_frame + 0x30b)) = (char)param_2 + '0';
    (*(undefined1 *)(gen_frame + 0x30c)) = 0;
  }
  *param_6 = 1;
  if (*((int *)GEN_TOP(((int)this + 0x818))) == 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x208)),0x100,((char *)REFP(0x10f043c)),param_3,param_4,param_5,((undefined1 *)(gen_frame + 0x308)));
    uVar2 = F_00424730(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x814))));
    pwVar3 = ((wchar_t *)GEN_TOP(F_004306f0(this_00 GEN_EDX_ARG,uVar2)));
    F_00c4a8e0(((wchar_t *)(gen_frame + 0x0)),0x104,pwVar3);
    F_0042a2a0(((wchar_t *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x208)));
    bVar1 = F_004fc9e0(((wchar_t *)(gen_frame + 0x0)));
    if (bVar1 != 0) goto LAB_00b49279;
    *param_6 = 0;
    F_00c472af(((undefined1 *)(gen_frame + 0x208)),0x100,((char *)REFP(0x10f0458)),param_3,param_4,param_5,((undefined1 *)(gen_frame + 0x308)));
  }
  else {
    F_00c472af(((undefined1 *)(gen_frame + 0x208)),0x100,"ex%d/%02x%04x.%s.%s",param_4,param_3,param_4,param_5,((undefined1 *)(gen_frame + 0x308)));
    uVar2 = F_00424730(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x814))));
    pwVar3 = ((wchar_t *)GEN_TOP(F_004306f0(this_00 GEN_EDX_ARG,uVar2)));
    F_00c4a8e0(((wchar_t *)(gen_frame + 0x0)),0x104,pwVar3);
    F_0042a2a0(((wchar_t *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x208)));
    bVar1 = F_004fc9e0(((wchar_t *)(gen_frame + 0x0)));
    if (bVar1 != 0) goto LAB_00b49279;
    *param_6 = 0;
    F_00c472af(((undefined1 *)(gen_frame + 0x208)),0x100,"ex%d/%02x%04x.%s.%s",param_4,param_3,param_4,param_5,((undefined1 *)(gen_frame + 0x308)));
  }
  uVar2 = F_00424730(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x814))));
  pwVar3 = ((wchar_t *)GEN_TOP(F_004306f0(this_00 GEN_EDX_ARG,uVar2)));
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x0)),0x104,pwVar3);
  F_0042a2a0(((wchar_t *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x208)));
LAB_00b49279: ;
  pwVar3 = param_1;
  if (((wchar_t *)(gen_frame + 0x0)) != param_1) {
    pwVar3 = ((wchar_t *)GEN_TOP(F_00c4a8e0(param_1,0x104,((wchar_t *)(gen_frame + 0x0)))));
  }
  F_00429fa0();
  return (uint)pwVar3;
}

/* ref: Global::OpenDatFiles */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b492c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb492c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x52c, 4, 4);
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * this_00;
  undefined * puVar4;
  undefined * this_01;
  byte bVar5;
  uint uVar6;
  wchar_t * pwVar7;
  uint uVar8;
  
  puVar4 = REFG(undefined * PTR32, 0x133a890);
  GEN_COOKIE((*(uint *)(gen_frame + 0x524)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x528));
  uVar1 = *((uint *)GEN_TOP(((int)this + 100)));
  (*(uint *)(gen_frame + 0x0)) = 0;
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      if (*((int *)GEN_TOP(((int)this + (*(uint *)(gen_frame + 0x0)) * 4 + 0xa70))) == 0) {
        uVar6 = F_00406b90(0x20,0,0);
        if (uVar6 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = F_004f88e0(uVar6 GEN_EDX_ARG);
        }
        *((uint *)GEN_TOP(((int)this + (*(uint *)(gen_frame + 0x0)) * 4 + 0xa70))) = uVar6;
      }
      F_00429f90(((wchar_t *)(gen_frame + 0x8)) GEN_EDX_ARG);
      this_01 = REFG(void * PTR32, 0x137104c);
      uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x814)));
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x818)));
      F_00429f90(((wchar_t *)(gen_frame + 0x210)) GEN_EDX_ARG);
      if ((*(uint *)(gen_frame + 0x0)) == 0xffffffff) {
        F_00c49908(((undefined1 *)(gen_frame + 0x518)),10,((char *)REFP(0x10f0430)));
      }
      else {
        F_00c49908(((undefined1 *)(gen_frame + 0x518)),10,(*(undefined * PTR32 (*)[1])REFP(0x10f0438)));
        (*(char *)(gen_frame + 0x51b)) = (char)(*(uint *)(gen_frame + 0x0)) + '0';
        (*(undefined1 *)(gen_frame + 0x51c)) = 0;
      }
      (*(undefined1 *)(gen_frame + 0x7)) = 1;
      if (*((int *)GEN_TOP(((int)this + 0x818))) == 0) {
        F_00c472af(((char *)(gen_frame + 0x418)),0x100,((char *)REFP(0x10f043c)),uVar2,uVar3,puVar4,((undefined1 *)(gen_frame + 0x518)));
        uVar6 = F_00424730(this_01 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x814))));
        pwVar7 = ((wchar_t *)GEN_TOP(F_004306f0(this_01 GEN_EDX_ARG,uVar6)));
        F_00c4a8e0(((wchar_t *)(gen_frame + 0x210)),0x104,pwVar7);
        F_0042a2a0(((wchar_t *)(gen_frame + 0x210)) GEN_EDX_ARG,((char *)(gen_frame + 0x418)));
        bVar5 = F_004fc9e0(((wchar_t *)(gen_frame + 0x210)));
        if (bVar5 == 0) {
          F_00c472af(((char *)(gen_frame + 0x418)),0x100,((char *)REFP(0x10f0458)),uVar2,uVar3,puVar4,((undefined1 *)(gen_frame + 0x518)));
LAB_00b49503: ;
          (*(undefined1 *)(gen_frame + 0x7)) = 0;
          uVar6 = F_00424730(this_01 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x814))));
          pwVar7 = ((wchar_t *)GEN_TOP(F_004306f0(this_01 GEN_EDX_ARG,uVar6)));
          F_00c4a8e0(((wchar_t *)(gen_frame + 0x210)),0x104,pwVar7);
          F_0042a2a0(((wchar_t *)(gen_frame + 0x210)) GEN_EDX_ARG,((char *)(gen_frame + 0x418)));
        }
      }
      else {
        F_00c472af(((char *)(gen_frame + 0x418)),0x100,"ex%d/%02x%04x.%s.%s",uVar3);
        uVar6 = F_00424730(this_01 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x814))));
        pwVar7 = ((wchar_t *)GEN_TOP(F_004306f0(this_01 GEN_EDX_ARG,uVar6)));
        F_00c4a8e0(((wchar_t *)(gen_frame + 0x210)),0x104,pwVar7);
        F_0042a2a0(((wchar_t *)(gen_frame + 0x210)) GEN_EDX_ARG,((char *)(gen_frame + 0x418)));
        bVar5 = F_004fc9e0(((wchar_t *)(gen_frame + 0x210)));
        if (bVar5 == 0) {
          F_00c472af(((char *)(gen_frame + 0x418)),0x100,"ex%d/%02x%04x.%s.%s",uVar3,uVar2,uVar3,puVar4,((undefined1 *)(gen_frame + 0x518)));
          goto LAB_00b49503;
        }
      }
      F_00c4a8e0(((wchar_t *)(gen_frame + 0x8)),0x104,((wchar_t *)(gen_frame + 0x210)));
      F_00429fa0();
      *((undefined1 *)GEN_TOP(((int)this + 0xa9c))) = (*(undefined1 *)(gen_frame + 0x7));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + (*(uint *)(gen_frame + 0x0)) * 4 + 0xa70)));
      if (this_00[0x18] != (undefined1)0x0) {
        F_004f8b30(this_00 GEN_EDX_ARG);
      }
      uVar8 = F_004f8900(*((undefined * PTR32 *)GEN_TOP(((int)this + (*(uint *)(gen_frame + 0x0)) * 4 + 0xa70))) GEN_EDX_ARG,((wchar_t *)(gen_frame + 0x8)),0);
      uVar6 = 1;
      if (uVar8 != 1) {
        uVar6 = F_00429940(3,1,*((int *)GEN_TOP(((int)this + 0x814))) * 0x10000 +
                                        *((int *)GEN_TOP(((int)this + 0xc))),0xffffffff);
      }
      F_00429fa0();
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    } while ((*(uint *)(gen_frame + 0x0)) < uVar1);
  }
  return uVar6;
}

/* ref: Global::ClearBlockCache */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b495f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb495f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  piVar5 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0xa54)))));
  if (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 0xa54)))) {
    do {
      *((int *)GEN_TOP(((int)this + 0x838))) = *((int *)GEN_TOP(((int)this + 0x838))) - 4;
      F_00406b30(piVar5[10]);
      if (*((char *)GEN_TOP(((int)piVar5 + 0x31))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar5[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x31))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x31)));
          piVar5 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x31)));
            piVar5 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x31)));
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar5[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x31)));
            piVar3 = ((int *)GEN_TOP(piVar5[1]));
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 0xa54))));
  }
  F_00b4b2b0(((undefined *)GEN_TOP(((int)this + 0xa50))) GEN_EDX_ARG);
  uVar4 = F_00b4b310(((undefined *)GEN_TOP(((int)this + 0xa60))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x838))) = 0;
  return uVar4;
}

/* ref: Global::Open */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b49690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb49690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *((int *)GEN_TOP(((int)this + 0x814))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x818))) = param_2;
  if (*((int *)GEN_TOP(((int)this + 0xa98))) == 0) {
    uVar2 = F_00406b90(0x20,0,0);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_004f88e0(uVar2 GEN_EDX_ARG);
    }
    *((uint *)GEN_TOP(((int)this + 0xa98))) = uVar2;
  }
  *((undefined1 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0xffffffff;
  F_00b49060(this GEN_EDX_ARG,(int)this + 0x83c,0xffffffff,param_1,param_2,REFG(undefined * PTR32, 0x133a890),
                  (int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3);
  if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0xa98))))[0x18] != (undefined1)0x0) {
    F_004f8b30(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xa98))) GEN_EDX_ARG);
  }
  uVar2 = F_004f8900(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xa98))) GEN_EDX_ARG,(int)this + 0x83c,0);
  if (uVar2 != 1) {
    F_00429940(3,1,param_1 * 0x10000 + param_2,0xffffffff);
  }
  uVar3 = F_004f7900(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xa98))) GEN_EDX_ARG);
  *((int *)GEN_TOP(((int)this + 0x834))) = (int)uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x81c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 5))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0xa44))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0xa44))));
    *((undefined4 *)GEN_TOP(((int)this + 0xa44))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0xa48))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0xa48))));
    *((undefined4 *)GEN_TOP(((int)this + 0xa48))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0xa4c))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0xa4c))));
    *((undefined4 *)GEN_TOP(((int)this + 0xa4c))) = 0;
  }
  F_00b495f0(this GEN_EDX_ARG);
  F_004f77b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xa98))) GEN_EDX_ARG,(int)this + 0x414,0x400,0);
  F_004f77b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xa98))) GEN_EDX_ARG,(int)this + 0x14,0x400,0);
  *((int *)GEN_TOP(((int)this + 0x830))) = *((int *)GEN_TOP(((int)this + 0x830))) + 2;
  if (*((int *)GEN_TOP(((int)this + 0x6c))) != 0) {
    uVar2 = F_00406bb0(*((int *)GEN_TOP(((int)this + 0x6c))),0,0);
    *((uint *)GEN_TOP(((int)this + 0xa48))) = uVar2;
    F_004f8a90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xa98))) GEN_EDX_ARG,uVar2,*((undefined4 *)GEN_TOP(((int)this + 0x6c))),0,
               *((undefined4 *)GEN_TOP(((int)this + 0x68))),0);
    *((int *)GEN_TOP(((int)this + 0x830))) = *((int *)GEN_TOP(((int)this + 0x830))) + 1;
    *((uint *)GEN_TOP(((int)this + 0x820))) = *((uint *)GEN_TOP(((int)this + 0x6c))) >> 8;
  }
  if ((*(int *)(&REFG(undefined, 0x133a840) + param_1 * 4) != 0) && (*((int *)GEN_TOP(((int)this + 0xfc))) != 0)) {
    uVar2 = F_00406bb0(*((int *)GEN_TOP(((int)this + 0xfc))),0,0);
    *((uint *)GEN_TOP(((int)this + 0xa4c))) = uVar2;
    F_004f8a90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xa98))) GEN_EDX_ARG,uVar2,*((undefined4 *)GEN_TOP(((int)this + 0xfc))),0,
               *((undefined4 *)GEN_TOP(((int)this + 0xf8))),0);
    *((int *)GEN_TOP(((int)this + 0x830))) = *((int *)GEN_TOP(((int)this + 0x830))) + 1;
    *((uint *)GEN_TOP(((int)this + 0x824))) = *((uint *)GEN_TOP(((int)this + 0xfc))) >> 4;
    *((undefined1 *)GEN_TOP(((int)this + 5))) = 1;
  }
  if ((*((char *)GEN_TOP(((int)this + 5))) == '\0') && (iVar1 = *((int *)GEN_TOP(((int)this + 0x20))), iVar1 != 0)) {
    *((int *)GEN_TOP(((int)this + 0x838))) = *((int *)GEN_TOP(((int)this + 0x838))) + iVar1;
    uVar2 = F_00406bb0(iVar1,0,0);
    *((uint *)GEN_TOP(((int)this + 0xa44))) = uVar2;
    F_004f8a90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xa98))) GEN_EDX_ARG,uVar2,*((undefined4 *)GEN_TOP(((int)this + 0x20))),0,
               *((undefined4 *)GEN_TOP(((int)this + 0x1c))),0);
    *((int *)GEN_TOP(((int)this + 0x830))) = *((int *)GEN_TOP(((int)this + 0x830))) + 1;
    *((uint *)GEN_TOP(((int)this + 0x81c))) = *((uint *)GEN_TOP(((int)this + 0x20))) >> 4;
  }
  uVar2 = F_00b492c0(this GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 4))) = 1;
  *((int *)GEN_TOP(((int)this + 8))) = param_1;
  *((int *)GEN_TOP(((int)this + 0xc))) = param_2;
  return uVar2;
}

/* ref: Global::TrimBlockCache */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b498f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb498f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined * this_00;
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * PTR32 * ppuVar5;
  int * piVar6;
  undefined4 * puVar7;
  int * piVar8;
  
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x838)));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  if ((*(int * PTR32 *)&gen_args[0]) < piVar6) {
    piVar8 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0xa64)))));
    if (piVar8 != *((int * PTR32 *)GEN_TOP(((int)this + 0xa64)))) {
      do {
        piVar6 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x838)));
        if (piVar6 <= (*(int * PTR32 *)&gen_args[0])) break;
        this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xa50)));
        puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xa54)));
        if (*((char *)GEN_TOP(((int)puVar7[1] + 0x31))) == '\0') {
          puVar3 = ((undefined4 *)GEN_TOP(puVar7[1]));
          do {
            if ((uint)puVar3[4] < (uint)piVar8[6]) {
              puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
            }
            else {
              puVar4 = ((undefined4 *)GEN_TOP(*puVar3));
              puVar7 = puVar3;
            }
            puVar3 = puVar4;
          } while (*((char *)GEN_TOP(((int)puVar4 + 0x31))) == '\0');
        }
        puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xa54)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar7;
        if ((puVar7 == puVar3) || ((uint)piVar8[6] < (uint)puVar7[4])) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar3;
          ppuVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
        }
        else {
          ppuVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
        }
        puVar7 = *ppuVar5;
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x838))) = (int)piVar6 - puVar7[8];
        F_00406b30(puVar7[10]);
        F_00b4b9f0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar7);
        if (*((char *)GEN_TOP(((int)piVar8 + 0x21))) == '\0') {
          piVar6 = ((int *)GEN_TOP(piVar8[2]));
          if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar6 + 0x21)));
            piVar8 = piVar6;
            piVar6 = ((int *)GEN_TOP(*piVar6));
            while (cVar1 == '\0') {
              cVar1 = *((char *)GEN_TOP((*piVar6 + 0x21)));
              piVar8 = piVar6;
              piVar6 = ((int *)GEN_TOP(*piVar6));
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP((piVar8[1] + 0x21)));
            piVar2 = ((int *)GEN_TOP(piVar8[1]));
            piVar6 = piVar8;
            while ((piVar8 = piVar2, cVar1 == '\0' && (piVar6 == ((int *)GEN_TOP(piVar8[2]))))) {
              cVar1 = *((char *)GEN_TOP((piVar8[1] + 0x21)));
              piVar2 = ((int *)GEN_TOP(piVar8[1]));
              piVar6 = piVar8;
            }
          }
        }
      } while (piVar8 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xa64))));
    }
    piVar6 = ((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xa64)))));
    if (piVar8 != piVar6) {
      piVar6 = ((int *)GEN_TOP(F_00b4c320(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xa60))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]),piVar6,piVar8)))
      ;
    }
  }
  return (uint)piVar6;
}

