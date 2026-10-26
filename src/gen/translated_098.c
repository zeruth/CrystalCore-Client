#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00988640 */
uint F_00988640(unsigned int gen_a0)
{
  GEN_ENTER(0x988640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10dea80));
  *(undefined4 *)((int)this + 4) = 0x3030000;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x10) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x18) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x28) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x30) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x40) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x44) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x48) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x58) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x60) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 100) = *(uint *)((int)this + 100) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x70) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x74) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x78) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x7c) = *(uint *)((int)this + 0x7c) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_00988710 */
unsigned int F_00988710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x988710u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar2 = 0;
  puVar5 = param_1;
  if (param_2 != 0) {
    do {
      uVar4 = *puVar5;
      if (uVar4 < 0x416e5953) {
        if (uVar4 == 0x416e5952) goto LAB_00988781;
        if (uVar4 < 0x496a54) {
          if ((uVar4 == 0x496a53) || ((0x416e57 < uVar4 && (uVar4 < 0x416e5b)))) goto LAB_00988781;
        }
        else if (uVar4 == 0x416e5852) goto LAB_00988781;
      }
      else {
        if (((uVar4 != 0x416e5a52) && (uVar4 != 0x496a5352)) && (uVar4 != 0x52616473))
        goto LAB_009887e5;
LAB_00988781: ;
        uVar4 = 0;
        puVar3 = puVar5 + 2;
        if (puVar5[1] != 0) {
          do {
            if ((*puVar3 == 0x4b657943) && (cVar1 = (char)puVar3[2], '\0' < cVar1)) {
              REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
            }
            uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
            puVar3 = ((uint *)GEN_TOP(((int)(puVar3 + 2) + (puVar3[1] + 3 & 0xfffffffc))));
          } while (uVar4 < puVar5[1]);
        }
      }
LAB_009887e5: ;
      uVar2 = uVar2 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)(puVar5 + 2) + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00988860 */
unsigned int F_00988860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x988860u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar2 = 0;
  puVar5 = param_1;
  if (param_2 != 0) {
    do {
      uVar4 = *puVar5;
      if (uVar4 < 0x5853) {
        if ((uVar4 == 0x5852) || ((0x57 < uVar4 && (uVar4 < 0x5a)))) {
LAB_009888a6: ;
          uVar4 = 0;
          puVar3 = puVar5 + 2;
          if (puVar5[1] != 0) {
            do {
              if ((*puVar3 == 0x4b657943) && (cVar1 = (char)puVar3[2], '\0' < cVar1)) {
                REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0)
                ;
              }
              uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
              puVar3 = ((uint *)GEN_TOP(((int)(puVar3 + 2) + (puVar3[1] + 3 & 0xfffffffc))));
            } while (uVar4 < puVar5[1]);
          }
        }
      }
      else if (uVar4 == 0x5952) goto LAB_009888a6;
      uVar2 = uVar2 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)(puVar5 + 2) + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00988990 */
unsigned int F_00988990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x988990u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + 0x10;
  uVar2 = 0;
  puVar3 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar3;
      if (uVar1 < 0x5953) {
        if ((uVar1 == 0x5952) || ((0x57 < uVar1 && ((uVar1 < 0x5b || (uVar1 == 0x5852)))))) {
LAB_009889e0: ;
          F_0097c440(puVar3 + 2,puVar3[1]);
        }
      }
      else if (uVar1 == 0x5a52) goto LAB_009889e0;
      uVar2 = uVar2 + 8 + (puVar3[1] + 3 & 0xfffffffc);
      puVar3 = ((uint *)GEN_TOP(((int)(puVar3 + 2) + (puVar3[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00988a10 */
uint F_00988a10(unsigned int gen_a0)
{
  GEN_ENTER(0x988a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x2a) = *(byte *)((int)this + 0x2a) & 0xf8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10dead4));
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x26) = 0xffff;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x34) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x38) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x40) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x44) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x48) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x50) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x58) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x60) = &REFG(undefined, 0x14a0a44);
  return (uint)this;
}

/* ref: FUN_00988ab0 */
unsigned int F_00988ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x988ab0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      if (*param_1 == 0x506f73) {
        uVar2 = param_1[1];
        REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + 0x10;
        uVar6 = 0;
        puVar5 = (uint *)(param_1 + 2);
        if (uVar2 != 0) {
          do {
            uVar3 = *puVar5;
            if (uVar3 < 0x5953) {
              if ((uVar3 == 0x5952) || ((0x57 < uVar3 && ((uVar3 < 0x5b || (uVar3 == 0x5852)))))) {
LAB_00988b2d: ;
                F_0097c440(puVar5 + 2,puVar5[1]);
              }
            }
            else if (uVar3 == 0x5a52) goto LAB_00988b2d;
            uVar6 = uVar6 + 8 + (puVar5[1] + 3 & 0xfffffffc);
            puVar5 = ((uint *)GEN_TOP(((int)(puVar5 + 2) + (puVar5[1] + 3 & 0xfffffffc))));
          } while (uVar6 < uVar2);
        }
      }
      piVar1 = param_1 + 1;
      param_1 = ((int *)GEN_TOP(((int)(param_1 + 2) + (*piVar1 + 3U & 0xfffffffc))));
      uVar4 = uVar4 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (uVar4 < param_2);
  }
  return 0;
}

/* ref: FUN_00988b80 */
uint F_00988b80(unsigned int gen_a0)
{
  GEN_ENTER(0x988b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10deb10));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[4])REFP(0x10ddcd4));
  *(undefined * PTR32 *)((int)this + 0xc) = &REFG(undefined, 0x14a0a50);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x24) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x2c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x34) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x3c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x44) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x4c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x54) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x5c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 100) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xffffc009;
  return (uint)this;
}

/* ref: FUN_00988c40 */
unsigned int F_00988c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x988c40u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + 0x10;
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x52616e48) {
        if (uVar1 == 0x52616e47) goto LAB_00988cdb;
        if (uVar1 < 0x524743) {
          if (uVar1 == 0x524742) {
            F_0097c9a0(puVar3,puVar4[1]);
          }
          else if ((uVar1 == 0x41) || (uVar1 == 0x427269)) goto LAB_00988cdb;
        }
        else if ((uVar1 == 0x52427269) || ((0x52616e40 < uVar1 && (uVar1 < 0x52616e43))))
        goto LAB_00988cdb;
      }
      else if (uVar1 < 0x53636c48) {
        if (((uVar1 == 0x53636c47) || (uVar1 == 0x52616e52)) ||
           ((0x53636c40 < uVar1 && (uVar1 < 0x53636c43)))) {
LAB_00988cdb: ;
          F_0097c440(puVar3,puVar4[1]);
        }
      }
      else if (uVar1 == 0x53636c52) goto LAB_00988cdb;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00988d10 */
uint F_00988d10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x988d10u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 4))))((undefined4)gen_fl2bits(param_2),param_4);
  return uVar1;
}

/* ref: FUN_00988d30 */
uint F_00988d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x988d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  *param_4 = GEN_FLT_TO(*param_4, REFG(float, 0x132f3a8));
  param_4[1] = GEN_FLT_TO(param_4[1], REFG(float, 0x132f3ac));
  param_4[2] = GEN_FLT_TO(param_4[2], REFG(float, 0x132f3b0));
  param_4[3] = GEN_FLT_TO(param_4[3], REFG(float, 0x132f3b4));
  return (uint)param_4;
}

/* ref: FUN_00988d70 */
uint F_00988d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x988d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  double dVar1;
  uint * puVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  int iVar6;
  uint * puVar7;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte local_5;
  
  dVar1 = *(double *)&REFG(undefined, 0x1094560);
  uVar3 = 0;
  puVar4 = (uint *)0x0;
  local_c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  iVar6 = REFG(int, 0x14a09d8);
  if (param_3 != 0) {
    do {
      uVar5 = *param_2;
      puVar2 = param_2 + 2;
      if (uVar5 < 0x4b657944) {
        if (uVar5 == 0x4b657943) {
          local_c = (uint)(char)*puVar2;
          if (local_c != 0) {
            if (REFG(char, 0x14a06d6) == '\0') {
              uVar5 = iVar6 + 0xfU & 0xfffffff0;
              puVar4 = (uint *)(REFG(int, 0x14a09e0) + uVar5);
              iVar6 = uVar5 + (local_c * 8 + 0x13 & 0xfffffff0);
              REFG(int, 0x14a09d8) = iVar6;
            }
            else {
              REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + (local_c * 8 + 0x13 & 0xfffffff0);
              puVar4 = (uint *)0x0;
            }
          }
        }
        else if (uVar5 == 0x4276506f) {
          local_14 = (uint)(char)*puVar2;
        }
        else if (uVar5 == 0x42765072) {
          local_18 = (uint)(char)*puVar2;
        }
      }
      else if (uVar5 == 0x4b657973) {
        if (local_c != 0) {
          local_5 = 0;
          uVar5 = 0;
          do {
            puVar7 = puVar2 + uVar5 * 4;
            puVar4[uVar5 * 2 + 1] = puVar2[uVar5 * 4 + 3];
            *(ushort *)(puVar4 + uVar5 * 2 + 2) =
                 (ushort)puVar4[uVar5 * 2 + 2] ^
                 ((ushort)*puVar7 ^ (ushort)puVar4[uVar5 * 2 + 2]) & 0x3fff;
            *(ushort *)(puVar4 + uVar5 * 2 + 2) =
                 *(ushort *)((int)puVar7 + 2) << 0xe | (ushort)puVar4[uVar5 * 2 + 2] & 0x3fff;
            *(char *)((int)puVar4 + uVar5 * 8 + 10) =
                 (char)(int)(((double)GEN_TOD(gen_bits2f(puVar7[1]))) * dVar1);
            *(char *)((int)puVar4 + uVar5 * 8 + 0xb) =
                 (char)(int)(((double)GEN_TOD(gen_bits2f(puVar7[2]))) * dVar1);
            local_5 = local_5 + 1;
            uVar5 = (uint)local_5;
            iVar6 = REFG(int, 0x14a09d8);
          } while (uVar5 < local_c);
        }
      }
      else if (uVar5 == 0x52616e54) {
        local_10 = (uint)(char)*puVar2;
      }
      puVar7 = param_2 + 1;
      param_2 = ((uint *)GEN_TOP(((int)puVar2 + (*puVar7 + 3 & 0xfffffffc))));
      uVar3 = uVar3 + 8 + (*puVar7 + 3 & 0xfffffffc);
    } while (uVar3 < param_3);
    if (puVar4 != (uint *)0x0) {
      *puVar4 = (((local_c & 0xffff) << 5 | local_10 & 7) * 4 | local_14 & 3) * 4 |
                *puVar4 & 0xfe000180 | local_18 & 3;
      *(uint * PTR32 *)((int)this + 4) = puVar4;
    }
  }
  puVar4 = *(uint * PTR32 *)((int)this + 4);
  uVar3 = *puVar4 >> 9 & 0xffff;
  if (uVar3 == 0) {
    *puVar4 = *puVar4 & 0xfffffe7f;
    return 0;
  }
  uVar3 = uVar3 - 1;
  if (uVar3 == 0) {
    uVar3 = *puVar4 & 0xfffffeff | 0x80;
    *puVar4 = uVar3;
    return uVar3;
  }
  *puVar4 = *puVar4 & 0xffffff7f | 0x100;
  return uVar3;
}

/* ref: FUN_00988fa0 */
uint F_00988fa0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x988fa0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  
  fVar5 = F_00c4ed10((uint)(ulonglong)gen_d2bits((double)param_2),
                       (int)((ulonglong)gen_d2bits((double)param_2) >> 0x20));
  uVar4 = 0;
  uVar3 = (**(uint * PTR32 *)(param_1 + 4) >> 9 & 0xffff) - 1;
  do {
    iVar1 = (int)(uVar3 + uVar4) >> 1;
    uVar2 = (int)(((ushort)(*(uint * PTR32 *)(param_1 + 4))[iVar1 * 2 + 2] & 0x3fff) - (int)fVar5) >> 0x1f;
    uVar4 = uVar4 ^ (iVar1 + 1U ^ uVar4) & uVar2;
    uVar3 = (uVar3 ^ iVar1 - 1U) & uVar2 ^ iVar1 - 1U;
  } while ((int)uVar4 <= (int)uVar3);
  return (int)~(uVar4 - 1) >> 0x1f & uVar4 - 1;
}

/* ref: FUN_00989020 */
uint F_00989020(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x989020u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  fVar5 = (float10)((ushort)puVar2[2] & 0x3fff);
  fVar6 = ((float10)GEN_TOD(((ushort)puVar2[(*puVar2 >> 9 & 0xffff) * 2] & 0x3fff))) - fVar5;
  fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(((int)(fVar5 - (float10)param_2) / (int)fVar6 + 1))) *
                  (float10)(float)fVar6 + (float10)param_2)));
  uVar3 = F_00988fa0(param_1,fVar1);
  uVar4 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar3 * 8))) >> 0xe);
  uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + uVar4 * 8))
                    (*(int *)(&REFG(undefined, 0x14a0c34) + uVar4 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),
                     uVar3);
  return uVar3;
}

/* ref: FUN_009890e0 */
uint F_009890e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9890e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  fVar5 = (float10)((ushort)puVar2[2] & 0x3fff);
  fVar6 = ((float10)GEN_TOD(((ushort)puVar2[(*puVar2 >> 9 & 0xffff) * 2] & 0x3fff))) - fVar5;
  fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(((int)(fVar5 - (float10)param_2) / (int)fVar6 + 1))) *
                  (float10)(float)fVar6 + (float10)param_2)));
  uVar3 = F_00988fa0(param_1,fVar1);
  uVar4 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar3 * 8))) >> 0xe);
  dVar7 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + uVar4 * 8))
                    (*(int *)(&REFG(undefined, 0x14a0c34) + uVar4 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),
                     uVar3);
  return (uint)(ulonglong)gen_d2bits(dVar7);
}

/* ref: FUN_009891b0 */
uint F_009891b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9891b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  fVar5 = ((float10)GEN_TOD(((ushort)puVar2[(*puVar2 >> 9 & 0xffff) * 2] & 0x3fff)));
  fVar6 = fVar5 - (float10)((ushort)puVar2[2] & 0x3fff);
  fVar1 = ((float)GEN_TOF(((float10)param_2 -
                 ((float10)GEN_TOD(((int)((float10)param_2 - fVar5) / (int)fVar6 + 1))) * (float10)(float)fVar6
                 )));
  uVar3 = F_00988fa0(param_1,fVar1);
  uVar4 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar3 * 8))) >> 0xe);
  uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + uVar4 * 8))
                    (*(int *)(&REFG(undefined, 0x14a0c34) + uVar4 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),
                     uVar3);
  return uVar3;
}

/* ref: FUN_00989260 */
uint F_00989260(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x989260u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  fVar5 = ((float10)GEN_TOD(((ushort)puVar2[(*puVar2 >> 9 & 0xffff) * 2] & 0x3fff)));
  fVar6 = fVar5 - (float10)((ushort)puVar2[2] & 0x3fff);
  fVar1 = ((float)GEN_TOF(((float10)param_2 -
                 ((float10)GEN_TOD(((int)((float10)param_2 - fVar5) / (int)fVar6 + 1))) * (float10)(float)fVar6
                 )));
  uVar3 = F_00988fa0(param_1,fVar1);
  uVar4 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar3 * 8))) >> 0xe);
  dVar7 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + uVar4 * 8))
                    (*(int *)(&REFG(undefined, 0x14a0c34) + uVar4 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),
                     uVar3);
  return (uint)(ulonglong)gen_d2bits(dVar7);
}

/* ref: FUN_00989330 */
uint F_00989330(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x989330u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00988fa0(param_1,param_2);
  iVar1 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar2 * 8))) >> 0xe) * 8;
  uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + iVar1))
                    (*(int *)(&REFG(undefined, 0x14a0c34) + iVar1) + param_1,(undefined4)gen_fl2bits(param_2),
                     uVar2);
  return uVar2;
}

/* ref: FUN_00989370 */
uint F_00989370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x989370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint * puVar6;
  uint * puVar7;
  uint * puVar8;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar3 = 0;
  uVar2 = 0;
  puVar8 = (uint *)0x0;
  local_8 = 0;
  local_10 = 0;
  local_c = 0;
  puVar7 = param_2;
  if (param_3 != 0) {
    do {
      uVar5 = *puVar7;
      puVar6 = puVar7 + 2;
      if (uVar5 < 0x4b657944) {
        if (uVar5 == 0x4b657943) {
          uVar2 = (uint)(char)*puVar6;
          local_8 = uVar2;
          if (uVar2 != 0) {
            iVar1 = (uVar2 - 1) * 0x10 + 0x20;
            if (REFG(char, 0x14a06d6) == '\0') {
              uVar5 = REFG(int, 0x14a09d8) + 0xfU & 0xfffffff0;
              puVar8 = (uint *)(REFG(int, 0x14a09e0) + uVar5);
              REFG(int, 0x14a09d8) = uVar5 + iVar1;
            }
            else {
              REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + iVar1;
              puVar8 = (uint *)0x0;
            }
          }
        }
        else if (uVar5 == 0x4276506f) {
          local_c = (uint)(char)*puVar6;
        }
        else if (uVar5 == 0x42765072) {
          local_10 = (uint)(char)*puVar6;
        }
      }
      else if ((uVar5 == 0x4b657973) && (bVar4 = 0, uVar2 != 0)) {
        uVar5 = 0;
        do {
          uVar2 = (int)*(short *)((int)puVar7 + uVar5 * 0x10 + 10) << 0x1c |
                  puVar8[uVar5 * 4 + 1] & 0xfffffff;
          puVar8[uVar5 * 4 + 1] = uVar2;
          puVar8[uVar5 * 4 + 1] = ((int)(short)puVar6[uVar5 * 4] ^ uVar2) & 0xfffffff ^ uVar2;
          bVar4 = bVar4 + 1;
          puVar8[uVar5 * 4 + 2] = puVar7[uVar5 * 4 + 3];
          puVar8[uVar5 * 4 + 3] = puVar7[uVar5 * 4 + 4];
          puVar8[uVar5 * 4 + 4] = puVar7[uVar5 * 4 + 5];
          uVar5 = (uint)bVar4;
          uVar2 = local_8;
        } while (uVar5 < local_8);
      }
      uVar3 = uVar3 + 8 + (puVar7[1] + 3 & 0xfffffffc);
      puVar7 = ((uint *)GEN_TOP(((int)puVar6 + (puVar7[1] + 3 & 0xfffffffc))));
    } while (uVar3 < param_3);
    if (puVar8 != (uint *)0x0) {
      *puVar8 = ((uVar2 & 0xffff) << 7 | local_c & 3) * 4 | *puVar8 & 0xfe0001f0 | local_10 & 3;
      *(uint * PTR32 *)((int)this + 4) = puVar8;
    }
  }
  puVar7 = *(uint * PTR32 *)((int)this + 4);
  uVar2 = *puVar7 >> 9 & 0xffff;
  if (uVar2 == 0) {
    *puVar7 = *puVar7 & 0xfffffe7f;
    return 0;
  }
  uVar2 = uVar2 - 1;
  if (uVar2 == 0) {
    uVar2 = *puVar7 & 0xfffffeff | 0x80;
    *puVar7 = uVar2;
    return uVar2;
  }
  *puVar7 = *puVar7 & 0xffffff7f | 0x100;
  return uVar2;
}

/* ref: FUN_00989540 */
uint F_00989540(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x989540u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = *(uint * PTR32 *)(param_1 + 4);
  if ((float10)param_2 <= (float10)(puVar1[1] & 0xfffffff)) {
    uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0cc0) + (*puVar1 & 3) * 8))
                      (*(int *)(&REFG(undefined, 0x14a0cc4) + (*puVar1 & 3) * 8) + param_1,
                       (undefined4)gen_fl2bits(param_2),param_3);
    return uVar3;
  }
  if (!(((float10)GEN_TOD((puVar1[(*puVar1 >> 9 & 0xffff) * 4 + -3] & 0xfffffff))) <= (float10)param_2)) {
    uVar3 = F_0097cb20(param_1,param_2);
    iVar2 = (*((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x14 + uVar3 * 0x10))) >> 0x1c) * 8;
    uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c90) + iVar2))
                      (*(int *)(&REFG(undefined, 0x14a0c94) + iVar2) + param_1,(undefined4)gen_fl2bits(param_2),
                       uVar3,param_3);
    return uVar3;
  }
  iVar2 = (**(uint * PTR32 *)(param_1 + 4) >> 2 & 3) * 8;
  uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0cd8) + iVar2))
                    (*(int *)(&REFG(undefined, 0x14a0cdc) + iVar2) + param_1,(undefined4)gen_fl2bits(param_2),
                     param_3);
  return uVar3;
}

/* ref: FUN_009896f0 */
unsigned int F_009896f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9896f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + 0x10;
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      puVar1 = (undefined *)*puVar4;
      puVar3 = puVar4 + 2;
      if (&REFG(undefined, 0x536372) < puVar1) {
        if (puVar1 == (undefined *)0x526f7452) {
LAB_00989747: ;
          F_0097c440(puVar3,puVar4[1]);
        }
      }
      else {
        if (puVar1 != &REFG(undefined, 0x536372)) {
          if (puVar1 == (undefined *)0x526f74) goto LAB_00989747;
          if (puVar1 != &REFG(undefined, 0x53636c)) goto LAB_00989754;
        }
        F_00988860(puVar3,puVar4[1]);
      }
LAB_00989754: ;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((undefined4 *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00989770 */
unsigned int F_00989770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x989770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint * puVar7;
  uint * puVar8;
  
  uVar4 = 0;
  puVar8 = param_2;
  if (param_3 != 0) {
    do {
      uVar5 = *puVar8;
      puVar7 = puVar8 + 2;
      if (uVar5 < 0x544c7375) {
        if (uVar5 == 0x544c7374) {
          *(ushort *)((int)this + 6) =
               *(ushort *)((int)this + 6) ^
               ((char)(byte)puVar8[1] * 8 ^ *(ushort *)((int)this + 6)) & 0x7f8;
          uVar5 = puVar8[1] + 3 & 0xfffffffc;
          if (REFG(char, 0x14a06d6) == '\0') {
            iVar2 = REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8);
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + uVar5;
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + uVar5;
            iVar2 = 0;
          }
          *(int *)((int)this + 8) = iVar2;
          *(uint *)((int)this + 0xc) = (*(ushort *)((int)this + 6) >> 3 & 0xff) << 0x10;
          if ((*(ushort *)((int)this + 6) & 0x7f8) != 0) {
            F_00c46aa0(iVar2,puVar7,puVar8[1]);
          }
        }
        else if (uVar5 < 0x54425655) {
          if (uVar5 == 0x54425654) {
            *(ushort *)((int)this + 4) =
                 (short)(char)(byte)*puVar7 << 0xe | *(ushort *)((int)this + 4) & 0x3fff;
          }
          else if (uVar5 == 0x544654) {
            *(ushort *)((int)this + 6) =
                 (short)(char)((byte)*puVar7 & 7) | *(ushort *)((int)this + 6) & 0xfff8;
          }
          else if (uVar5 == 0x54784e) {
            F_00988d70((undefined *)((int)this + 0x14),param_1,puVar7,param_3);
          }
          else if (uVar5 == 0x54425554) {
            *(ushort *)((int)this + 4) =
                 (short)(char)((byte)*puVar7 & 3) << 0xc | *(ushort *)((int)this + 4) & 0xcfff;
          }
        }
        else {
          if (uVar5 == 0x54434154) {
            uVar6 = (short)(char)((byte)*puVar7 & 3) << 10;
            uVar3 = 0xf3ff;
            goto LAB_009899fb;
          }
          if (uVar5 == 0x54434354) {
            *(ushort *)((int)this + 4) =
                 (short)(char)((byte)*puVar7 & 7) << 7 | *(ushort *)((int)this + 4) & 0xfc7f;
          }
        }
      }
      else if (uVar5 < 0x62456e62) {
        if (uVar5 == 0x62456e61) {
          *(ushort *)((int)this + 4) =
               (short)(char)((byte)*puVar7 & 1) | *(ushort *)((int)this + 4) & 0xfffe;
        }
        else if (uVar5 == 0x54784e52) {
          F_00988d70((undefined *)((int)this + 0x1c),param_1,puVar7,param_3);
        }
        else if (uVar5 == 0x5576534e) {
          *(ushort *)((int)this + 4) =
               (short)(char)((byte)*puVar7 & 7) << 4 | *(ushort *)((int)this + 4) & 0xff8f;
        }
        else if (uVar5 == 0x62433241) {
          *(ushort *)((int)this + 4) =
               (char)((byte)*puVar7 & 1) * 4 | *(ushort *)((int)this + 4) & 0xfffb;
        }
      }
      else if (uVar5 == 0x62504643) {
        uVar6 = (char)((byte)*puVar7 & 1) * 8;
        uVar3 = 0xfff7;
LAB_009899fb: ;
        *(ushort *)((int)this + 4) = uVar6 | *(ushort *)((int)this + 4) & uVar3;
      }
      else if (uVar5 == 0x62555343) {
        *(ushort *)((int)this + 4) =
             (char)((byte)*puVar7 & 1) * 2 | *(ushort *)((int)this + 4) & 0xfffd;
      }
      puVar1 = puVar8 + 1;
      puVar8 = ((uint *)GEN_TOP(((int)puVar7 + (*puVar1 + 3 & 0xfffffffc))));
      uVar4 = uVar4 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar4 < param_3);
  }
  return 0;
}

/* ref: FUN_00989a30 */
unsigned int F_00989a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x989a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = param_2;
  if (param_3 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x54425655) {
        if (uVar1 == 0x54425654) {
          *(ushort *)((int)this + 4) =
               (short)(char)((byte)*puVar3 & 3) << 6 | *(ushort *)((int)this + 4) & 0xff3f;
        }
        else if (uVar1 == 0x544654) {
          *(ushort *)((int)this + 4) =
               (short)(char)((byte)*puVar3 & 7) << 8 | *(ushort *)((int)this + 4) & 0xf8ff;
        }
        else if (uVar1 == 0x4e506f77) {
          F_00988d70((undefined *)((int)this + 8),param_1,puVar3,puVar4[1]);
        }
        else if (uVar1 == 0x54425554) {
          *(ushort *)((int)this + 4) =
               (short)(char)((byte)*puVar3 & 3) << 4 | *(ushort *)((int)this + 4) & 0xffcf;
        }
      }
      else if (uVar1 == 0x54784e6f) {
        *(byte *)((int)this + 6) = (byte)*puVar3;
      }
      else if (uVar1 == 0x5576534e) {
        *(ushort *)((int)this + 4) =
             (char)((byte)*puVar3 & 7) * 2 | *(ushort *)((int)this + 4) & 0xfff1;
      }
      else if (uVar1 == 0x62456e61) {
        *(ushort *)((int)this + 4) =
             (short)(char)((byte)*puVar3 & 1) | *(ushort *)((int)this + 4) & 0xfffe;
      }
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_00989b80 */
uint F_00989b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x989b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  
  uVar3 = 0;
  puVar5 = param_2;
  if (param_3 != 0) {
    do {
      uVar1 = *puVar5;
      puVar4 = puVar5 + 2;
      if (uVar1 < 0x54784e70) {
        if (uVar1 == 0x54784e6f) {
          *(byte *)((int)this + 5) = (byte)*puVar4;
        }
        else if (uVar1 == 0x544654) {
          *(byte *)((int)this + 4) = *(byte *)((int)this + 4) & 0x1f | (byte)*puVar4 << 5;
        }
        else if (uVar1 == 0x52617465) {
          F_00988d70((undefined *)((int)this + 8),param_1,puVar4,puVar5[1]);
        }
        else if (uVar1 == 0x54434354) {
          bVar2 = ((byte)*puVar4 * '\x04' ^ *(byte *)((int)this + 4)) & 0x1c;
          goto LAB_00989c20;
        }
      }
      else if (uVar1 == 0x62456e61) {
        bVar2 = (*(byte *)((int)this + 4) ^ (byte)*puVar4) & 1;
LAB_00989c20: ;
        *(byte *)((int)this + 4) = *(byte *)((int)this + 4) ^ bVar2;
      }
      else if (uVar1 == 0x62555343) {
        *(byte *)((int)this + 4) =
             *(byte *)((int)this + 4) ^ ((byte)*puVar4 * '\x02' ^ *(byte *)((int)this + 4)) & 2;
      }
      uVar3 = uVar3 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)puVar4 + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar3 < param_3);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xc))))((undefined4)gen_fl2bits((float)(float10)0));
  if ((char)uVar3 == '\0') {
    *(undefined1 *)((int)this + 5) = 0xff;
  }
  return uVar3;
}

/* ref: FUN_00989c60 */
unsigned int F_00989c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x989c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  uint * puVar6;
  uint * puVar7;
  
  uVar4 = 0;
  puVar7 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = *puVar7;
      puVar6 = puVar7 + 2;
      if (uVar2 < 0x44506f78) {
        if (uVar2 == 0x44506f77) {
          F_00988d70((undefined *)((int)this + 8),param_1,puVar6,puVar7[1]);
        }
        else if (uVar2 < 0x625432) {
          if (uVar2 == 0x625431) {
            *(ushort *)((int)this + 4) =
                 (char)((byte)*puVar6 & 1) * 2 | *(ushort *)((int)this + 4) & 0xfffd;
          }
          else if (uVar2 == 0x544654) {
            *(ushort *)((int)this + 4) =
                 (short)(char)((byte)*puVar6 & 7) << 0xc | *(ushort *)((int)this + 4) & 0x8fff;
          }
        }
        else if (uVar2 == 0x625432) {
          *(ushort *)((int)this + 4) =
               (char)((byte)*puVar6 & 1) * 4 | *(ushort *)((int)this + 4) & 0xfffb;
        }
        else if (uVar2 == 0x625433) {
          *(ushort *)((int)this + 4) =
               (char)((byte)*puVar6 & 1) * 8 | *(ushort *)((int)this + 4) & 0xfff7;
        }
        else if (uVar2 == 0x625434) {
          uVar3 = (short)(char)((byte)*puVar6 & 1) << 4;
          uVar5 = 0xffef;
          goto LAB_00989e14;
        }
      }
      else if (uVar2 < 0x54784e70) {
        if (uVar2 == 0x54784e6f) {
          *(byte *)((int)this + 6) = (byte)*puVar6;
        }
        else {
          if (uVar2 == 0x54425554) {
            uVar3 = (short)(char)((byte)*puVar6 & 3) << 8;
            uVar5 = 0xfcff;
            goto LAB_00989e14;
          }
          if (uVar2 == 0x54425654) {
            *(ushort *)((int)this + 4) =
                 (short)(char)((byte)*puVar6 & 3) << 10 | *(ushort *)((int)this + 4) & 0xf3ff;
          }
        }
      }
      else if (uVar2 == 0x5576534e) {
        uVar3 = (short)(char)((byte)*puVar6 & 7) << 5;
        uVar5 = 0xff1f;
LAB_00989e14: ;
        *(ushort *)((int)this + 4) = uVar3 | *(ushort *)((int)this + 4) & uVar5;
      }
      else if (uVar2 == 0x62456e61) {
        *(ushort *)((int)this + 4) =
             (short)(char)((byte)*puVar6 & 1) | *(ushort *)((int)this + 4) & 0xfffe;
      }
      puVar1 = puVar7 + 1;
      puVar7 = ((uint *)GEN_TOP(((int)puVar6 + (*puVar1 + 3 & 0xfffffffc))));
      uVar4 = uVar4 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar4 < param_3);
  }
  return 0;
}

/* ref: FUN_00989e50 */
unsigned int F_00989e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x989e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint * puVar4;
  uint * puVar5;
  
  uVar2 = 0;
  puVar5 = param_2;
  if (param_3 != 0) {
    do {
      uVar1 = *puVar5;
      puVar4 = puVar5 + 2;
      if (uVar1 < 0x54784e70) {
        if (uVar1 == 0x54784e6f) {
          *(byte *)((int)this + 5) = (byte)*puVar4;
        }
        else {
          if (uVar1 == 0x544654) {
            bVar3 = ((byte)*puVar4 * '\x02' ^ *(byte *)((int)this + 4)) & 0xe;
            goto LAB_00989ebe;
          }
          if (uVar1 == 0x504f6666) {
            F_00988d70((undefined *)((int)this + 8),param_1,puVar4,puVar5[1]);
          }
        }
      }
      else if (uVar1 == 0x62456e61) {
        bVar3 = ((byte)*puVar4 ^ *(byte *)((int)this + 4)) & 1;
LAB_00989ebe: ;
        *(byte *)((int)this + 4) = *(byte *)((int)this + 4) ^ bVar3;
      }
      uVar2 = uVar2 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)puVar4 + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_00989ee0 */
unsigned int F_00989ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x989ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  double dVar1;
  uint uVar2;
  undefined * this_00;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  uint * puVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_c;
  byte local_5;
  
  uVar5 = 0;
  dVar1 = *(double *)&REFG(undefined, 0x1094560);
  if (param_3 != 0) {
    do {
      puVar7 = (uint *)0x0;
      uVar2 = *param_2;
      puVar8 = param_2 + 2;
      if (uVar2 < 0x4c656e53) {
        if (uVar2 == 0x4c656e52) {
          this_00 = (undefined *)((int)this + 0x28);
          goto LAB_0098a16c;
        }
        if (uVar2 != 0x4c656e) {
          if (uVar2 != 0x576474) goto LAB_0098a182;
          uVar2 = param_2[1];
          this_00 = (undefined *)((int)this + 8);
          goto LAB_0098a175;
        }
        uVar2 = param_2[1];
        uVar6 = 0;
        local_c = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        puVar3 = puVar8;
        iVar10 = REFG(int, 0x14a09d8);
        if (uVar2 != 0) {
          do {
            uVar9 = *puVar3;
            puVar4 = puVar3 + 2;
            if (uVar9 < 0x4b657944) {
              if (uVar9 == 0x4b657943) {
                local_c = (uint)(char)*puVar4;
                if (local_c != 0) {
                  if (REFG(char, 0x14a06d6) == '\0') {
                    uVar9 = iVar10 + 0xfU & 0xfffffff0;
                    puVar7 = (uint *)(REFG(int, 0x14a09e0) + uVar9);
                    iVar10 = uVar9 + (local_c * 8 + 0x13 & 0xfffffff0);
                    REFG(int, 0x14a09d8) = iVar10;
                  }
                  else {
                    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                   (local_c * 8 + 0x13 & 0xfffffff0);
                    puVar7 = (uint *)0x0;
                  }
                }
              }
              else if (uVar9 == 0x4276506f) {
                local_20 = (uint)(char)*puVar4;
              }
              else if (uVar9 == 0x42765072) {
                local_24 = (uint)(char)*puVar4;
              }
            }
            else if (uVar9 == 0x4b657973) {
              if (local_c != 0) {
                local_5 = 0;
                uVar9 = 0;
                do {
                  puVar11 = puVar4 + uVar9 * 4;
                  puVar7[uVar9 * 2 + 1] = puVar4[uVar9 * 4 + 3];
                  *(ushort *)(puVar7 + uVar9 * 2 + 2) =
                       (ushort)puVar7[uVar9 * 2 + 2] ^
                       ((ushort)puVar7[uVar9 * 2 + 2] ^ (ushort)*puVar11) & 0x3fff;
                  *(ushort *)(puVar7 + uVar9 * 2 + 2) =
                       *(ushort *)((int)puVar11 + 2) << 0xe | (ushort)puVar7[uVar9 * 2 + 2] & 0x3fff
                  ;
                  *(char *)((int)puVar7 + uVar9 * 8 + 10) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar11[1]))) * dVar1);
                  *(char *)((int)puVar7 + uVar9 * 8 + 0xb) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar11[2]))) * dVar1);
                  local_5 = local_5 + 1;
                  uVar9 = (uint)local_5;
                  iVar10 = REFG(int, 0x14a09d8);
                } while (uVar9 < local_c);
              }
            }
            else if (uVar9 == 0x52616e54) {
              local_1c = (uint)(char)*puVar4;
            }
            uVar6 = uVar6 + 8 + (puVar3[1] + 3 & 0xfffffffc);
            puVar3 = ((uint *)GEN_TOP(((int)puVar4 + (puVar3[1] + 3 & 0xfffffffc))));
          } while (uVar6 < uVar2);
          if (puVar7 != (uint *)0x0) {
            *puVar7 = (((local_c & 0xffff) << 5 | local_1c & 7) * 4 | local_20 & 3) * 4 |
                      *puVar7 & 0xfe000180 | local_24 & 3;
            *(uint * PTR32 *)((int)this + 0x24) = puVar7;
          }
        }
        puVar7 = *(uint * PTR32 *)((int)this + 0x24);
        uVar2 = *puVar7 >> 9 & 0xffff;
        if (uVar2 == 0) {
          *puVar7 = *puVar7 & 0xfffffe7f;
        }
        else if (uVar2 == 1) {
          *puVar7 = *puVar7 & 0xfffffeff | 0x80;
        }
        else {
          *puVar7 = *puVar7 & 0xffffff7f | 0x100;
        }
      }
      else {
        if (uVar2 != 0x57647452) goto LAB_0098a182;
        this_00 = (undefined *)((int)this + 0x10);
LAB_0098a16c: ;
        uVar2 = param_2[1];
LAB_0098a175: ;
        F_00988d70(this_00,param_1,puVar8,uVar2);
        dVar1 = *(double *)&REFG(undefined, 0x1094560);
      }
LAB_0098a182: ;
      puVar7 = param_2 + 1;
      param_2 = ((uint *)GEN_TOP(((int)puVar8 + (*puVar7 + 3 & 0xfffffffc))));
      uVar5 = uVar5 + 8 + (*puVar7 + 3 & 0xfffffffc);
    } while (uVar5 < param_3);
  }
  return 0;
}

/* ref: FUN_0098a1b0 */
uint F_0098a1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x98a1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10deb40));
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x10) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x18) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffff8;
  F_00988b80((undefined *)((int)this + 0x20));
  F_00988b80((undefined *)((int)this + 0x8c));
  return (uint)this;
}

/* ref: FUN_0098a200 */
unsigned int F_0098a200(unsigned int gen_a0)
{
  GEN_ENTER(0x98a200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xdc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xcc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x94) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd4e8));
  return 0;
}

/* ref: FUN_0098a2a0 */
unsigned int F_0098a2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98a2a0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x436f6c46) {
        if (uVar1 != 0x436f6c45) {
          if (uVar1 == 0x4c656e) goto LAB_0098a2e4;
          if (uVar1 != 0x436f6c42) goto LAB_0098a2f1;
        }
        F_00988c40(puVar3,puVar4[1]);
      }
      else if (uVar1 == 0x4c656e52) {
LAB_0098a2e4: ;
        F_0097c440(puVar3,puVar4[1]);
      }
LAB_0098a2f1: ;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_0098a310 */
uint F_0098a310(unsigned int gen_a0)
{
  GEN_ENTER(0x98a310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10deb58));
  *(undefined1 *)((int)this + 0xc) = 0;
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & 0xffff00ff;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x18) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x20) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x34) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x3c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x44) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x4c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x54) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x5c) = &REFG(undefined, 0x14a0a44);
  F_00988b80((undefined *)((int)this + 0x60));
  F_00988b80((undefined *)((int)this + 0xcc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x13c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x144) = &REFG(undefined, 0x14a0a44);
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_0098a3b0 */
unsigned int F_0098a3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x98a3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 300) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x124) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x114) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x104) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xdc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd4) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xcc) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10dd5ac));
  return 0;
}

/* ref: FUN_0098a490 */
unsigned int F_0098a490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98a490u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x46724353) {
        if ((uVar1 == 0x46724352) || (uVar1 == 0x467243)) {
LAB_0098a4e7: ;
          F_0097c440(puVar3,puVar4[1]);
        }
        else if ((uVar1 == 0x436f6c42) || (uVar1 == 0x436f6c45)) {
          F_00988c40(puVar3,puVar4[1]);
        }
      }
      else if (uVar1 == 0x46725274) {
        F_00988990(puVar3,puVar4[1]);
      }
      else if ((uVar1 == 0x4d6f7068) || (uVar1 == 0x4e6f416e)) goto LAB_0098a4e7;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_0098a520 */
unsigned int F_0098a520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x98a520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * piVar1;
  double dVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  uint * puVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint * puVar12;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_c;
  byte local_5;
  
  uVar9 = 0;
  dVar2 = *(double *)&REFG(undefined, 0x1094560);
  if (param_3 != 0) {
    do {
      puVar8 = (uint *)0x0;
      puVar4 = (uint *)(param_2 + 2);
      if (*param_2 == 0x436e74) {
        uVar3 = param_2[1];
        uVar7 = 0;
        local_c = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        puVar5 = puVar4;
        iVar11 = REFG(int, 0x14a09d8);
        if (uVar3 != 0) {
          do {
            uVar10 = *puVar5;
            puVar6 = puVar5 + 2;
            if (uVar10 < 0x4b657944) {
              if (uVar10 == 0x4b657943) {
                local_c = (uint)(char)*puVar6;
                if (local_c != 0) {
                  if (REFG(char, 0x14a06d6) == '\0') {
                    uVar10 = iVar11 + 0xfU & 0xfffffff0;
                    puVar8 = (uint *)(REFG(int, 0x14a09e0) + uVar10);
                    iVar11 = uVar10 + (local_c * 8 + 0x13 & 0xfffffff0);
                    REFG(int, 0x14a09d8) = iVar11;
                  }
                  else {
                    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                   (local_c * 8 + 0x13 & 0xfffffff0);
                    puVar8 = (uint *)0x0;
                  }
                }
              }
              else if (uVar10 == 0x4276506f) {
                local_1c = (uint)(char)*puVar6;
              }
              else if (uVar10 == 0x42765072) {
                local_20 = (uint)(char)*puVar6;
              }
            }
            else if (uVar10 == 0x4b657973) {
              if (local_c != 0) {
                local_5 = 0;
                uVar10 = 0;
                do {
                  puVar12 = puVar6 + uVar10 * 4;
                  puVar8[uVar10 * 2 + 1] = puVar6[uVar10 * 4 + 3];
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       (ushort)puVar8[uVar10 * 2 + 2] ^
                       ((ushort)puVar8[uVar10 * 2 + 2] ^ (ushort)*puVar12) & 0x3fff;
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       *(ushort *)((int)puVar12 + 2) << 0xe |
                       (ushort)puVar8[uVar10 * 2 + 2] & 0x3fff;
                  *(char *)((int)puVar8 + uVar10 * 8 + 10) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[1]))) * dVar2);
                  *(char *)((int)puVar8 + uVar10 * 8 + 0xb) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[2]))) * dVar2);
                  local_5 = local_5 + 1;
                  uVar10 = (uint)local_5;
                  iVar11 = REFG(int, 0x14a09d8);
                } while (uVar10 < local_c);
              }
            }
            else if (uVar10 == 0x52616e54) {
              local_18 = (uint)(char)*puVar6;
            }
            uVar7 = uVar7 + 8 + (puVar5[1] + 3 & 0xfffffffc);
            puVar5 = ((uint *)GEN_TOP(((int)puVar6 + (puVar5[1] + 3 & 0xfffffffc))));
          } while (uVar7 < uVar3);
          if (puVar8 != (uint *)0x0) {
            *puVar8 = (((local_c & 0xffff) << 5 | local_18 & 7) * 4 | local_1c & 3) * 4 |
                      *puVar8 & 0xfe000180 | local_20 & 3;
            *(uint * PTR32 *)((int)this + 0xc) = puVar8;
          }
        }
        puVar8 = *(uint * PTR32 *)((int)this + 0xc);
        uVar3 = *puVar8 >> 9 & 0xffff;
        if (uVar3 == 0) {
          *puVar8 = *puVar8 & 0xfffffe7f;
        }
        else if (uVar3 == 1) {
          *puVar8 = *puVar8 & 0xfffffeff | 0x80;
        }
        else {
          *puVar8 = *puVar8 & 0xffffff7f | 0x100;
        }
      }
      else if (*param_2 == 0x436e7452) {
        F_00988d70((undefined *)((int)this + 0x10),param_1,puVar4,param_2[1]);
        dVar2 = *(double *)&REFG(undefined, 0x1094560);
      }
      piVar1 = param_2 + 1;
      param_2 = ((int *)GEN_TOP(((int)puVar4 + (*piVar1 + 3U & 0xfffffffc))));
      uVar9 = uVar9 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (uVar9 < param_3);
  }
  return 0;
}

/* ref: FUN_0098a7c0 */
uint F_0098a7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x98a7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 8) = *(byte *)((int)this + 8) & 0xe0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10deb94));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x2c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x34) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x44) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x4c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x5c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 100) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x74) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x7c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x80) = *(uint *)((int)this + 0x80) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x8c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x94) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x98) = *(uint *)((int)this + 0x98) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xa4) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xac) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xb8) = &REFG(undefined, 0x14a0a44);
  F_00988b80((undefined *)((int)this + 0xbc));
  F_00988b80((undefined *)((int)this + 0x128));
  F_00988b80((undefined *)((int)this + 0x194));
  F_00988b80((undefined *)((int)this + 0x200));
  F_00988b80((undefined *)((int)this + 0x26c));
  F_00988b80((undefined *)((int)this + 0x2d8));
  return (uint)this;
}

/* ref: FUN_0098a8f0 */
unsigned int F_0098a8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x98a8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x338) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x330) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x328) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 800) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x318) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x308) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x300) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2f8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2f0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2e8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2e0) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2d8) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2cc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 700) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2b4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2ac) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2a4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x29c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x294) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x284) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x27c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x274) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x26c) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x260) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 600) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x250) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x248) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x240) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x238) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x230) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x218) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x210) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x208) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x200) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 500) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ec) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1dc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1cc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1bc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ac) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x19c) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x194) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x188) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x178) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x160) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x150) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x148) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x114) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x104) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xdc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xcc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbc) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228))
  ;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10dd544));
  return 0;
}

/* ref: FUN_0098ab40 */
unsigned int F_0098ab40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98ab40u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x436f4546) {
        if (uVar1 == 0x436f4545) {
LAB_0098ac07: ;
          F_00988c40(puVar3,puVar4[1]);
        }
        else if (uVar1 < 0x536675) {
          if (uVar1 == 0x536674) goto LAB_0098ac31;
          if (uVar1 < 0x434653) {
            if (((uVar1 == 0x434652) || (uVar1 == 0x4346)) || (uVar1 == 0x5764)) goto LAB_0098ac31;
          }
          else if (uVar1 == 0x4c656e) goto LAB_0098ac31;
        }
        else if (uVar1 < 0x576453) {
          if ((uVar1 == 0x576452) ||
             ((0x576441 < uVar1 && ((uVar1 < 0x576444 || (uVar1 == 0x576445)))))) goto LAB_0098ac31;
        }
        else if ((0x436f4541 < uVar1) && (uVar1 < 0x436f4544)) goto LAB_0098ac07;
        goto LAB_0098ac3e;
      }
      if (uVar1 < 0x53667453) {
        if (uVar1 == 0x53667452) goto LAB_0098ac31;
        if (uVar1 < 0x4c656e53) {
          if (uVar1 == 0x4c656e52) goto LAB_0098ac31;
          if ((0x436f6c41 < uVar1) && ((uVar1 < 0x436f6c44 || (uVar1 == 0x436f6c45))))
          goto LAB_0098ac07;
        }
        else if (uVar1 == 0x506e4473) goto LAB_0098ac31;
      }
      else {
        if (((uVar1 != 0x57644252) && (uVar1 != 0x57644352)) && (uVar1 != 0x57644552))
        goto LAB_0098ac3e;
LAB_0098ac31: ;
        F_0097c440(puVar3,puVar4[1]);
      }
LAB_0098ac3e: ;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_0098ac60 */
unsigned int F_0098ac60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x98ac60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  double dVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  uint * puVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_c;
  byte local_5;
  
  uVar5 = 0;
  dVar1 = *(double *)&REFG(undefined, 0x1094560);
  if (param_3 != 0) {
    do {
      puVar7 = (uint *)0x0;
      uVar2 = *param_2;
      puVar8 = param_2 + 2;
      if (uVar2 < 0x574945) {
        if (uVar2 == 0x574944) {
          uVar2 = param_2[1];
          uVar6 = 0;
          local_c = 0;
          local_24 = 0;
          local_20 = 0;
          local_1c = 0;
          puVar3 = puVar8;
          iVar10 = REFG(int, 0x14a09d8);
          if (uVar2 != 0) {
            do {
              uVar9 = *puVar3;
              puVar4 = puVar3 + 2;
              if (uVar9 < 0x4b657944) {
                if (uVar9 == 0x4b657943) {
                  local_c = (uint)(char)*puVar4;
                  if (local_c != 0) {
                    if (REFG(char, 0x14a06d6) == '\0') {
                      uVar9 = iVar10 + 0xfU & 0xfffffff0;
                      puVar7 = (uint *)(REFG(int, 0x14a09e0) + uVar9);
                      iVar10 = uVar9 + (local_c * 8 + 0x13 & 0xfffffff0);
                      REFG(int, 0x14a09d8) = iVar10;
                    }
                    else {
                      REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                     (local_c * 8 + 0x13 & 0xfffffff0);
                      puVar7 = (uint *)0x0;
                    }
                  }
                }
                else if (uVar9 == 0x4276506f) {
                  local_20 = (uint)(char)*puVar4;
                }
                else if (uVar9 == 0x42765072) {
                  local_24 = (uint)(char)*puVar4;
                }
              }
              else if (uVar9 == 0x4b657973) {
                if (local_c != 0) {
                  local_5 = 0;
                  uVar9 = 0;
                  do {
                    puVar11 = puVar4 + uVar9 * 4;
                    puVar7[uVar9 * 2 + 1] = puVar4[uVar9 * 4 + 3];
                    *(ushort *)(puVar7 + uVar9 * 2 + 2) =
                         (ushort)puVar7[uVar9 * 2 + 2] ^
                         ((ushort)puVar7[uVar9 * 2 + 2] ^ (ushort)*puVar11) & 0x3fff;
                    *(ushort *)(puVar7 + uVar9 * 2 + 2) =
                         *(ushort *)((int)puVar11 + 2) << 0xe |
                         (ushort)puVar7[uVar9 * 2 + 2] & 0x3fff;
                    *(char *)((int)puVar7 + uVar9 * 8 + 10) =
                         (char)(int)(((double)GEN_TOD(gen_bits2f(puVar11[1]))) * dVar1);
                    *(char *)((int)puVar7 + uVar9 * 8 + 0xb) =
                         (char)(int)(((double)GEN_TOD(gen_bits2f(puVar11[2]))) * dVar1);
                    local_5 = local_5 + 1;
                    uVar9 = (uint)local_5;
                    iVar10 = REFG(int, 0x14a09d8);
                  } while (uVar9 < local_c);
                }
              }
              else if (uVar9 == 0x52616e54) {
                local_1c = (uint)(char)*puVar4;
              }
              uVar6 = uVar6 + 8 + (puVar3[1] + 3 & 0xfffffffc);
              puVar3 = ((uint *)GEN_TOP(((int)puVar4 + (puVar3[1] + 3 & 0xfffffffc))));
            } while (uVar6 < uVar2);
            if (puVar7 != (uint *)0x0) {
              *puVar7 = (((local_c & 0xffff) << 5 | local_1c & 7) * 4 | local_20 & 3) * 4 |
                        *puVar7 & 0xfe000180 | local_24 & 3;
              *(uint * PTR32 *)((int)this + 0xc) = puVar7;
            }
          }
          puVar7 = *(uint * PTR32 *)((int)this + 0xc);
          uVar2 = *puVar7 >> 9 & 0xffff;
          if (uVar2 == 0) {
            *puVar7 = *puVar7 & 0xfffffe7f;
          }
          else if (uVar2 == 1) {
            *puVar7 = *puVar7 & 0xfffffeff | 0x80;
          }
          else {
            *puVar7 = *puVar7 & 0xffffff7f | 0x100;
          }
        }
        else if (uVar2 == 0x5246) {
          *(uint *)((int)this + 0x20) = *puVar8;
        }
        else if (uVar2 == 0x5353) {
          *(uint *)((int)this + 0x1c) = *puVar8;
        }
      }
      else if (uVar2 == 0x57494452) {
        F_00988d70((undefined *)((int)this + 0x10),param_1,puVar8,param_2[1]);
        dVar1 = *(double *)&REFG(undefined, 0x1094560);
      }
      puVar7 = param_2 + 1;
      param_2 = ((uint *)GEN_TOP(((int)puVar8 + (*puVar7 + 3 & 0xfffffffc))));
      uVar5 = uVar5 + 8 + (*puVar7 + 3 & 0xfffffffc);
    } while (uVar5 < param_3);
  }
  return 0;
}

/* ref: FUN_0098af30 */
uint F_0098af30(unsigned int gen_a0)
{
  GEN_ENTER(0x98af30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10debfc));
  *(undefined2 *)((int)this + 4) = 0x201;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 6) = 2;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x2c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x34) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x44) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x4c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x5c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 100) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x74) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x7c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x80) = *(uint *)((int)this + 0x80) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x8c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x94) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x98) = *(uint *)((int)this + 0x98) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xa4) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xac) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xbc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc4) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 200) = *(uint *)((int)this + 200) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xcc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xd4) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xdc) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) & 0xfffffff8;
  F_00988b80((undefined *)((int)this + 0xe4));
  F_00988b80((undefined *)((int)this + 0x150));
  return (uint)this;
}

/* ref: FUN_0098b070 */
unsigned int F_0098b070(unsigned int gen_a0)
{
  GEN_ENTER(0x98b070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x188) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x178) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x160) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x150) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x144) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x13c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x134) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 300) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x124) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x114) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x104) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xcc) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228))
  ;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10dd614));
  return 0;
}

/* ref: FUN_0098b1a0 */
unsigned int F_0098b1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98b1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      puVar1 = (undefined *)*puVar4;
      puVar3 = puVar4 + 2;
      if (puVar1 < (undefined *)0x484550) {
        if (puVar1 != (undefined *)0x48454f) {
          if (puVar1 <= &REFG(undefined, 0x434549)) {
            if (puVar1 == &REFG(undefined, 0x434549)) {
LAB_0098b22a: ;
              F_00988c40(puVar3,puVar4[1]);
            }
            else if (puVar1 < (undefined *)0x5743) {
              if ((puVar1 == (undefined *)0x5742) ||
                 ((puVar1 == (undefined *)0x5242 || (puVar1 == (undefined *)0x5245))))
              goto LAB_0098b28a;
            }
            else if ((puVar1 == (undefined *)0x5745) || (puVar1 == (undefined *)0x416e67))
            goto LAB_0098b28a;
            goto LAB_0098b297;
          }
          if (puVar1 < (undefined *)0x484250) {
            if (puVar1 != (undefined *)0x48424f) {
              if (puVar1 == &REFG(undefined, 0x43454f)) goto LAB_0098b22a;
              if (puVar1 != (undefined *)0x484249) goto LAB_0098b297;
            }
          }
          else if (puVar1 != (undefined *)0x484549) goto LAB_0098b297;
        }
LAB_0098b28a: ;
        F_0097c440(puVar3,puVar4[1]);
      }
      else {
        if (puVar1 < (undefined *)0x416e6753) {
          if (puVar1 != (undefined *)0x416e6752) {
            if (puVar1 < (undefined *)0x574253) {
              if (((puVar1 == (undefined *)0x574252) || (puVar1 == (undefined *)0x524252)) ||
                 (puVar1 == (undefined *)0x524552)) goto LAB_0098b28a;
            }
            else if (puVar1 == (undefined *)0x574552) goto LAB_0098b28a;
            goto LAB_0098b297;
          }
          goto LAB_0098b28a;
        }
        if (puVar1 < (undefined *)0x48454953) {
          if (((puVar1 == (undefined *)0x48454952) || (puVar1 == (undefined *)0x48424952)) ||
             (puVar1 == (undefined *)0x48424f52)) goto LAB_0098b28a;
        }
        else if (puVar1 == (undefined *)0x48454f52) goto LAB_0098b28a;
      }
LAB_0098b297: ;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((undefined4 *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_0098b2c0 */
unsigned int F_0098b2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x98b2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0x204) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de010));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f8) =
       (*(undefined * PTR32 (*)[1])REFP(0x10de010));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1e0);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[0x7a];
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::BinderInstance::vf25 */
unsigned int F_0098b300(unsigned int gen_a0)
{
  GEN_ENTER(0x98b300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pBVar1;
  float fVar2;
  code * pcVar3;
  float10 fVar4;
  
  fVar2 = *(float *)(this + 0x1ec);
  if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar2 <= *(float *)&REFG(undefined, 0x1088114))) {
    fVar4 = (float10)((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(this + 0x1b0))));
    *(float *)(this + 0x1ec) = ((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(this + 0x1b0))));
    if (fVar4 <= (float10)0) {
      pcVar3 = *(gen_code32 *)(*(int *)this + 0x7c);
      fVar2 = ((float)GEN_TOF((-fVar4 * (float10)*(float *)(this + 0x1bc))));
      *(float *)(this + 0x1a8) = fVar2;
      *(float *)(this + 0x1ac) = fVar2;
      (*pcVar3)();
    }
  }
  pBVar1 = this + 0x1b8;
  if ((!GEN_ISNAN(*(float *)pBVar1) && (!(0.0 < *(float *)pBVar1) && *(float *)pBVar1 != 0.0)) &&
     ((*(uint *)(this + 0x1d0) & 0x7fe00) == 0)) {
    *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xf81fffff | 0x40000;
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::BinderInstance::vf27 */
unsigned int F_0098b3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x98b3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pBVar1;
  float fVar2;
  code * pcVar3;
  float10 fVar4;
  
  fVar2 = *(float *)(this + 0x1ec);
  if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar2 <= *(float *)&REFG(undefined, 0x1088114))) {
    fVar4 = (float10)((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(this + 0x1b0))));
    *(float *)(this + 0x1ec) = ((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(this + 0x1b0))));
    if (fVar4 <= (float10)0) {
      pcVar3 = *(gen_code32 *)(*(int *)this + 0x7c);
      fVar2 = ((float)GEN_TOF((-fVar4 * (float10)*(float *)(this + 0x1bc))));
      *(float *)(this + 0x1a8) = fVar2;
      *(float *)(this + 0x1ac) = fVar2;
      (*pcVar3)();
    }
  }
  pBVar1 = this + 0x1b8;
  if ((!GEN_ISNAN(*(float *)pBVar1) && (!(0.0 < *(float *)pBVar1) && *(float *)pBVar1 != 0.0)) &&
     ((*(uint *)(this + 0x1d0) & 0x7fe00) == 0)) {
    *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xf81fffff | 0x40000;
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::DocumentInstance::vf12 */
unsigned int F_0098b440(unsigned int gen_a0)
{
  GEN_ENTER(0x98b440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  undefined * pDVar4;
  undefined * pDVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int local_8;
  
  pDVar5 = this + 0x324;
  pDVar4 = this + 0x382;
  local_8 = 4;
  do {
    iVar1 = (&REFG(undefined4, 0x14a0a08))[REFG(int, 0x14a09f8)];
    uVar6 = *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar7 = uVar6 + *(short *)(pDVar4 + -2) * 0x10;
    bVar8 = REFG(undefined4, 0x14a09fc) < uVar7;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar7;
    *(uint *)(pDVar5 + -4) = ~-(uint)bVar8 & iVar1 + uVar6;
    iVar1 = (&REFG(undefined4, 0x14a0a08))[REFG(int, 0x14a09f8)];
    iVar2 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar6 = *(short *)((int)(uintptr_t)pDVar4) * 0x10 + iVar2;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar6;
    *(uint *)pDVar5 = ~-(uint)(REFG(undefined4, 0x14a09fc) < uVar6) & iVar1 + iVar2;
    iVar1 = (&REFG(undefined4, 0x14a0a08))[REFG(int, 0x14a09f8)];
    iVar2 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar6 = *(short *)(pDVar4 + 2) * 0x10 + iVar2;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar6;
    *(uint *)(pDVar5 + 4) = ~-(uint)(REFG(undefined4, 0x14a09fc) < uVar6) & iVar1 + iVar2;
    iVar1 = (&REFG(undefined4, 0x14a0a08))[REFG(int, 0x14a09f8)];
    iVar2 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar6 = *(short *)(pDVar4 + 4) * 0x10 + iVar2;
    bVar8 = REFG(undefined4, 0x14a09fc) < uVar6;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar6;
    *(uint *)(pDVar5 + 8) = ~-(uint)bVar8 & iVar1 + iVar2;
    pDVar4 = pDVar4 + 8;
    pDVar5 = pDVar5 + 0x10;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar1 = (&REFG(undefined4, 0x14a0a08))[REFG(int, 0x14a09f8)];
  iVar2 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
  uVar6 = (uint)*(ushort *)(this + 0x3a8) * 0x10 + iVar2;
  *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar6;
  *(uint *)(this + 0x31c) = ~-(uint)(REFG(undefined4, 0x14a09fc) < uVar6) & iVar1 + iVar2;
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f050))[*(uint *)(this + 0x1d0) >> 0x17 & 1])))(this);
  for (piVar3 = *(int * PTR32 *)(this + 0x1e0); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3);
  }
  return 0;
}

/* ref: FUN_0098b5e0 */
uint F_0098b5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x98b5e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int iVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_10;
  float local_c;
  float local_8;
  
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1088118);
  local_10 = REFG(float, 0x132f3f8);
  local_c = REFG(float, 0x132f3fc);
  local_8 = REFG(float, 0x132f400);
  if (param_3 == 0) {
    iVar1 = *(int *)(in_ecx + 0x1ec);
    fVar7 = (float10)1;
    fVar4 = (float10)(float)((float10)(int)param_4 / fVar3);
    fVar5 = (float10)((float)GEN_TOF((fVar4 * ((float10)*(float *)(iVar1 + 0x18) - fVar7) + fVar7))) *
            (float10)REFG(float, 0x132f3f8);
    fVar6 = (float10)((float)GEN_TOF((((float10)*(float *)(iVar1 + 0x1c) - fVar7) * fVar4 + fVar7))) *
            (float10)REFG(float, 0x132f3fc);
    fVar7 = fVar7 + ((float10)*(float *)(iVar1 + 0x20) - fVar7) * fVar4;
  }
  else {
    if (param_3 != 1) goto LAB_0098b6d9;
    iVar1 = *(int *)(in_ecx + 0x1ec);
    fVar7 = (float10)1;
    fVar4 = (float10)(float)((float10)(int)param_4 / fVar3);
    fVar5 = (float10)((float)GEN_TOF((fVar4 * ((float10)*(float *)(iVar1 + 0x24) - fVar7) + fVar7))) *
            (float10)REFG(float, 0x132f3f8);
    fVar6 = (float10)((float)GEN_TOF((((float10)*(float *)(iVar1 + 0x28) - fVar7) * fVar4 + fVar7))) *
            (float10)REFG(float, 0x132f3fc);
    fVar7 = fVar7 + ((float10)*(float *)(iVar1 + 0x2c) - fVar7) * fVar4;
  }
  local_c = (float)fVar6;
  local_10 = (float)fVar5;
  local_8 = (float)((float10)(float)fVar7 * (float10)REFG(float, 0x132f400));
LAB_0098b6d9: ;
  if (param_5 == 0) {
    pfVar2 = *(float * PTR32 *)(in_ecx + 0x1ec);
    fVar3 = (float10)(float)((float10)param_6 / fVar3);
    local_10 = (float)((float10)local_10 + fVar3 * (float10)*pfVar2);
    local_c = (float)((float10)pfVar2[1] * fVar3 + (float10)local_c);
    local_8 = (float)(fVar3 * (float10)pfVar2[2] + (float10)local_8);
  }
  else if (param_5 == 1) {
    iVar1 = *(int *)(in_ecx + 0x1ec);
    fVar3 = (float10)(float)((float10)param_6 / fVar3);
    local_10 = ((float)GEN_TOF(((float10)local_10 + fVar3 * (float10)*(float *)(iVar1 + 0xc))));
    local_c = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x10) * fVar3 + (float10)local_c)));
    local_8 = ((float)GEN_TOF((fVar3 * (float10)*(float *)(iVar1 + 0x14) + (float10)local_8)));
  }
  *param_2 = (float)((float10)*param_2 * (float10)local_10);
  param_2[1] = (float)((float10)param_2[1] * (float10)local_c);
  param_2[2] = (float)((float10)local_8 * (float10)param_2[2]);
  return (uint)param_2;
}

/* ref: FUN_0098b900 */
uint F_0098b900(unsigned int gen_a0)
{
  GEN_ENTER(0x98b900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)((int)this + 0x1a8);
  uVar2 = *(undefined4 *)((int)this + 0x1ac);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f8) + 0x48))))(*(int * PTR32 *)((int)this + 0x1f8))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f8) + 0x4c))))(*(int * PTR32 *)((int)this + 0x1f8))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f8) + 0x50))))(*(int * PTR32 *)((int)this + 0x1f8))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f8) + 0x44))))(*(int * PTR32 *)((int)this + 0x1f8))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  return uVar4;
}

/* ref: FUN_0098ba20 */
double F_0098ba20(unsigned int gen_a0)
{
  GEN_ENTER(0x98ba20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  fVar2 = F_009820e0((int)this + 4,(int)this + 4,uVar1);
  return (double)fVar2;
}

/* ref: FUN_0098bab0 */
uint F_0098bab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x98bab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  *(float *)(in_ecx + 0x34) = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x34) + (float10)*param_4)));
  *(float *)(in_ecx + 0x38) = ((float)GEN_TOF(((float10)param_4[1] + (float10)*(float *)(in_ecx + 0x38))));
  *(float *)(in_ecx + 0x3c) = ((float)GEN_TOF(((float10)param_4[2] + (float10)*(float *)(in_ecx + 0x3c))));
  return (uint)param_4;
}

/* ref: FUN_0098bb60 */
uint F_0098bb60(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x98bb60u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x2b4))((undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_0098bbc0 */
uint F_0098bbc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98bbc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0x98) * (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0x9c) * (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xa0) * (float10)param_2[2])));
  return uVar1;
}

/* ref: FUN_0098bc00 */
uint F_0098bc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98bc00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xa4) + (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xa8) + (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xac) + (float10)param_2[2])));
  return uVar1;
}

/* ref: FUN_0098bc40 */
uint F_0098bc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98bc40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xb0) + (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xb4) + (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xb8) + (float10)param_2[2])));
  return uVar1;
}

/* ref: FUN_0098bc80 */
uint F_0098bc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98bc80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x88) * (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x8c) * (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x90) * (float10)param_2[2])));
  param_2[3] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x94) * (float10)param_2[3])));
  return (uint)param_2;
}

/* ref: FUN_0098bcc0 */
uint F_0098bcc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98bcc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 700))((undefined4 *)((int)this + 0x98));
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)this + 0x9c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0xa0);
  return uVar1;
}

/* ref: FUN_0098bcf0 */
uint F_0098bcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98bcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  uVar1 = ((code *)*(gen_code32 *)((int)this + 700))(&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 0x58) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)this + 0x5c) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)this + 0x60) = (*(undefined4 *)(gen_frame + 0x8));
  return uVar1;
}

/* ref: FUN_0098bd50 */
uint F_0098bd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98bd50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x2c0))((undefined4 *)((int)this + 0xa4));
  *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0xa4);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0xa8);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0xac);
  return uVar1;
}

/* ref: FUN_0098bd80 */
uint F_0098bd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98bd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x2c0))(&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 100) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)this + 0x68) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)this + 0x6c) = (*(undefined4 *)(gen_frame + 0x8));
  return uVar1;
}

/* ref: FUN_0098bdd0 */
uint F_0098bdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98bdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x34);
  (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x38);
  (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0x3c);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xb0) + (float10)*(float *)((int)this + 0x34))));
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xb4) + (float10)*(float *)((int)this + 0x38))));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xb8) + (float10)*(float *)((int)this + 0x3c))));
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x2c4))(&(*(float *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x70) = (*(float *)(gen_frame + 0x0));
  *(float *)((int)this + 0x74) = (*(float *)(gen_frame + 0x4));
  *(float *)((int)this + 0x78) = (*(float *)(gen_frame + 0x8));
  return uVar1;
}

/* ref: FUN_0098be40 */
uint F_0098be40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98be40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x34);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x38);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x3c);
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x2c4))(&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 0x70) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)this + 0x74) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)this + 0x78) = (*(undefined4 *)(gen_frame + 0x8));
  return uVar1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf3 */
unsigned int F_0098c230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 4) = *param_2;
  *(undefined4 *)(in_ecx + 8) = param_2[1];
  *(undefined4 *)(in_ecx + 0xc) = param_2[2];
  *(undefined4 *)(in_ecx + 0x10) = param_2[3];
  *(undefined4 *)(in_ecx + 0x14) = param_2[4];
  *(undefined4 *)(in_ecx + 0x18) = param_2[5];
  *(undefined4 *)(in_ecx + 0x1c) = param_2[6];
  *(undefined4 *)(in_ecx + 0x20) = param_2[7];
  *(undefined4 *)(in_ecx + 0x24) = param_2[8];
  *(undefined4 *)(in_ecx + 0x28) = param_2[9];
  *(undefined4 *)(in_ecx + 0x2c) = param_2[10];
  *(undefined4 *)(in_ecx + 0x30) = param_2[0xb];
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf5 */
uint F_0098c290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98c290u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x14))))
                    (*(int * PTR32 *)(this + 0x1d8),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf6 */
uint F_0098c2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98c2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x18))))
                    (*(int * PTR32 *)(this + 0x1d8),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf7 */
uint F_0098c2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98c2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x1c))))
                    (*(int * PTR32 *)(this + 0x1d8),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf9 */
unsigned int F_0098c2c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x98c2c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  float fVar2;
  int * piVar3;
  uint uVar4;
  
  param_1[0x6d] =
       (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0x6d]))) +
                               ((float10)GEN_TOD(gen_bits2f(param_1[0x6f]))) * (float10)param_2));
  if ((~(byte)((uint)param_1[0x74] >> 0x12) & 1) != 0) {
    piVar1 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(((float10)GEN_TOD(gen_bits2f(param_1[0x6f]))) * (float10)param_2))));
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar1;
    param_1[0x6c] = (int)piVar1;
    (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar1))) + ((float10)GEN_TOD(gen_bits2f(param_1[0x6a])))))));
    fVar2 = gen_bits2f(param_1[0x6b]);
    (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f078))[(uint)param_1[0x74] >> 0x1c & 1])))(param_1,&(*(int * PTR32 *)(gen_frame + 0x8)));
    (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f080))[(uint)param_1[0x74] >> 0x1d & 1])))(param_1,&(*(int * PTR32 *)(gen_frame + 0x8)));
    if ((~(byte)((uint)param_1[0x74] >> 0x12) & 1) != 0) {
      ((code *)*(gen_code32 *)(*param_1 + 100))(param_1);
    }
    param_1[0x6a] = (int)(*(int * PTR32 *)(gen_frame + 0x8));
    param_1[0x6b] = (int)gen_fl2bits((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar1))) + (float10)fVar2));
  }
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  piVar1 = (int *)param_1[0x78];
  while (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,(undefined4)gen_fl2bits(param_2));
    piVar3 = (int *)piVar1[0x7a];
    if (((piVar1[0x74] & 0x40000U) == 0) || (piVar1[0x78] != 0)) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar1;
      piVar1 = piVar3;
    }
    else {
      if ((*(int * PTR32 *)(gen_frame + 0x8)) == (int *)0x0) {
        param_1[0x78] = (int)piVar3;
      }
      else {
        (*(int * PTR32 *)(gen_frame + 0x8))[0x7a] = (int)piVar3;
      }
      if ((int *)param_1[0x79] == piVar1) {
        param_1[0x79] = (int)(*(int * PTR32 *)(gen_frame + 0x8));
      }
      uVar4 = param_1[0x74];
      param_1[0x74] = (((uVar4 >> 9) - 1) * 0x200 ^ uVar4) & 0x3fe00 ^ uVar4;
      ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
      piVar1 = piVar3;
    }
  }
  return 0;
}

/* ref: FUN_0098c430 */
unsigned int F_0098c430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  
  fVar1 = *(float *)((int)this + 0x1b8);
  if ((*(float *)&REFG(undefined, 0x1088114) <= fVar1) && ((float10)fVar1 < (float10)*param_1)) {
    *param_1 = fVar1;
    if ((*(uint *)((int)this + 0x1d0) & 0x40000) == 0) {
      *(uint *)((int)this + 0x1d0) = *(uint *)((int)this + 0x1d0) & 0xf81fffff | 0x40000;
      ((code *)*(gen_code32 *)(*(int *)this + 8))();
    }
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf10 */
unsigned int F_0098c490(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x98c490u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  int * local_8;
  
  *(float *)(param_1 + 0x1b4) =
       ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x1b4) +
              (float10)param_2 * (float10)*(float *)(param_1 + 0x1bc))));
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f040))[*(uint *)(param_1 + 0x1d0) >> 0x15 & 1])))
            ((undefined4)gen_fl2bits(param_2));
  local_8 = (int *)0x0;
  piVar1 = *(int * PTR32 *)(param_1 + 0x1e0);
  piVar4 = local_8;
  while (piVar3 = piVar1, piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[0x7a];
    if (((piVar3[0x74] & 0x40000U) == 0) || (piVar3[0x78] != 0)) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(undefined4)gen_fl2bits(param_2));
      piVar4 = piVar3;
    }
    else {
      if (piVar4 == (int *)0x0) {
        *(int * PTR32 *)(param_1 + 0x1e0) = piVar1;
      }
      else {
        piVar4[0x7a] = (int)piVar1;
      }
      if (*(int * PTR32 *)(param_1 + 0x1e4) == piVar3) {
        *(int * PTR32 *)(param_1 + 0x1e4) = piVar4;
      }
      uVar2 = *(uint *)(param_1 + 0x1d0);
      *(uint *)(param_1 + 0x1d0) = (((uVar2 >> 9) - 1) * 0x200 ^ uVar2) & 0x3fe00 ^ uVar2;
      ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
    }
  }
  return 0;
}

/* ref: switchD_0097e83e::caseD_1 */
unsigned int F_0098c580(unsigned int gen_a0)
{
  GEN_ENTER(0x98c580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float10 fVar2;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x1b0) + (float10)*(float *)((int)this + 0x1cc))));
  fVar2 = (float10)fVar1;
  *(float *)((int)this + 0x1cc) = fVar1;
  if ((float10)*(float *)((int)this + 0x1c8) < fVar2) {
    if ((*(uint *)((int)this + 0x1d0) & 0x40000) == 0) {
      *(uint *)((int)this + 0x1d0) = *(uint *)((int)this + 0x1d0) & 0xf81fffff | 0x40000;
      ((code *)*(gen_code32 *)(*(int *)this + 8))();
    }
    *(undefined4 *)((int)this + 0x94) = 0;
    return 0;
  }
  *(float *)((int)this + 0x94) =
       ((float)GEN_TOF((((float10)1 - fVar2 / (float10)*(float *)((int)this + 0x1c8)) *
              (float10)*(float *)((int)this + 0x94))));
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf16 */
uint F_0098c600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c600u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x58);
  param_2[1] = *(undefined4 *)(in_ecx + 0x5c);
  param_2[2] = *(undefined4 *)(in_ecx + 0x60);
  return (uint)param_2;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf17 */
uint F_0098c620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined * pIVar1;
  undefined * pIVar2;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,param_1);
  pIVar2 = this + 4;
  if (*(int *)(this + 0x1a4) != 0) {
    while (((byte)pIVar2[0x194] & 2) != 0) {
      pIVar1 = *(undefined * PTR32 *)(pIVar2 + 0x1a0);
      if (*(int *)(pIVar2 + 0x180) == 3) {
        *param_1 = ((float)GEN_TOF(((float10)*(float *)(pIVar2 + 0x124) * (float10)*param_1)));
        param_1[1] = ((float)GEN_TOF(((float10)*(float *)(pIVar2 + 0x128) * (float10)param_1[1])));
        param_1[2] = ((float)GEN_TOF(((float10)*(float *)(pIVar2 + 300) * (float10)param_1[2])));
        return (uint)param_1;
      }
      *param_1 = ((float)GEN_TOF(((float10)*param_1 * (float10)*(float *)(pIVar1 + 0x54))));
      param_1[1] = ((float)GEN_TOF(((float10)*(float *)(pIVar1 + 0x58) * (float10)param_1[1])));
      param_1[2] = ((float)GEN_TOF(((float10)*(float *)(pIVar1 + 0x5c) * (float10)param_1[2])));
      pIVar2 = pIVar1;
      if (*(int *)(pIVar1 + 0x1a0) == 0) {
        return (uint)param_1;
      }
    }
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf18 */
uint F_0098c6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c6b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x150) + (float10)*(float *)(in_ecx + 100))));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x154) + (float10)*(float *)(in_ecx + 0x68))));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x158) + (float10)*(float *)(in_ecx + 0x6c))));
  return (uint)param_2;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf19 */
uint F_0098c6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined * pIVar1;
  undefined * pIVar2;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1);
  pIVar2 = this + 4;
  if (*(int *)(this + 0x1a4) != 0) {
    while (((byte)pIVar2[0x194] & 4) != 0) {
      pIVar1 = *(undefined * PTR32 *)(pIVar2 + 0x1a0);
      if (*(int *)(pIVar2 + 0x180) == 3) {
        *param_1 = ((float)GEN_TOF(((float10)*(float *)(pIVar2 + 0x130) + (float10)*param_1)));
        param_1[1] = ((float)GEN_TOF(((float10)*(float *)(pIVar2 + 0x134) + (float10)param_1[1])));
        param_1[2] = ((float)GEN_TOF(((float10)*(float *)(pIVar2 + 0x138) + (float10)param_1[2])));
        return (uint)param_1;
      }
      *param_1 = ((float)GEN_TOF(((float10)*param_1 + (float10)*(float *)(pIVar1 + 0x60))));
      param_1[1] = ((float)GEN_TOF(((float10)*(float *)(pIVar1 + 100) + (float10)param_1[1])));
      param_1[2] = ((float)GEN_TOF(((float10)*(float *)(pIVar1 + 0x68) + (float10)param_1[2])));
      *param_1 = ((float)GEN_TOF(((float10)*param_1 + (float10)*(float *)(pIVar1 + 0x14c))));
      param_1[1] = ((float)GEN_TOF(((float10)*(float *)(pIVar1 + 0x150) + (float10)param_1[1])));
      param_1[2] = ((float)GEN_TOF(((float10)*(float *)(pIVar1 + 0x154) + (float10)param_1[2])));
      pIVar2 = pIVar1;
      if (*(int *)(pIVar1 + 0x1a0) == 0) {
        return (uint)param_1;
      }
    }
  }
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf20 */
uint F_0098c7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c7a0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  int * piVar2;
  int * piVar3;
  
  ((code *)*(gen_code32 *)(*param_1 + 0x48))(param_1,param_2);
  piVar3 = param_1 + 1;
  if (param_1[0x69] != 0) {
    while ((*(byte *)(piVar3 + 0x65) & 4) != 0) {
      piVar2 = (int *)piVar3[0x68];
      if (piVar3[0x60] == 3) {
        *(float *)(param_2 + 8) =
             ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(piVar3[0x4e]))) + (float10)*(float *)(param_2 + 8))));
        return param_2;
      }
      fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(piVar2[0x1a]))) + (float10)*(float *)(param_2 + 8))));
      *(float *)(param_2 + 8) = fVar1;
      *(float *)(param_2 + 8) = (float)((float10)fVar1 + ((float10)GEN_TOD(gen_bits2f(piVar2[0x55]))));
      piVar3 = piVar2;
      if (piVar2[0x68] == 0) {
        return param_2;
      }
    }
  }
  return param_2;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf21 */
uint F_0098c820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98c820u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x70);
  param_2[1] = *(undefined4 *)(in_ecx + 0x74);
  param_2[2] = *(undefined4 *)(in_ecx + 0x78);
  return (uint)param_2;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf22 */
uint F_0098c840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98c840u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_2 = *(undefined4 *)(in_ecx + 0x28);
  param_2[1] = *(undefined4 *)(in_ecx + 0x2c);
  param_2[2] = *(undefined4 *)(in_ecx + 0x30);
  return (uint)param_2;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf23 */
uint F_0098c860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98c860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((byte)this[0x198] & 8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x58))))
              (*(int * PTR32 *)(this + 0x1d8),param_1,(int)*(short *)(this + 0x1a0));
    return (uint)param_1;
  }
  *param_1 = *(undefined4 *)(this + 0x11c);
  param_1[1] = *(undefined4 *)(this + 0x120);
  param_1[2] = *(undefined4 *)(this + 0x124);
  return (uint)param_1;
}

/* ref: FUN_0098c8b0 */
unsigned int F_0098c8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x98c8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  if ((*(uint *)((int)this + 0x1d0) & 0x40000) == 0) {
    *(uint *)((int)this + 0x1d0) = *(uint *)((int)this + 0x1d0) & 0xf81fffff | 0x40000;
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  }
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x1e0); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1e8)) {
    F_0098c8b0(this_00);
  }
  return 0;
}

/* ref: FUN_0098c900 */
float10 F_0098c900(unsigned int gen_a0)
{
  GEN_ENTER(0x98c900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float10 fVar1;
  
  fVar1 = F_009820e0(in_ecx + 4,in_ecx + 4,in_ecx + 0xec);
  return fVar1;
}

/* ref: FUN_0098c920 */
unsigned int F_0098c920(unsigned int gen_a0)
{
  GEN_ENTER(0x98c920u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x168) = *(undefined4 *)(in_ecx + 0x28);
  *(undefined4 *)(in_ecx + 0x16c) = *(undefined4 *)(in_ecx + 0x2c);
  *(undefined4 *)(in_ecx + 0x170) = *(undefined4 *)(in_ecx + 0x30);
  return 0;
}

/* ref: switchD_009be164::caseD_1 */
unsigned int F_0098c940(unsigned int gen_a0)
{
  GEN_ENTER(0x98c940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(float *)(in_ecx + 0x88) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x140) * (float10)*(float *)(in_ecx + 0x88))));
  *(float *)(in_ecx + 0x8c) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x144) * (float10)*(float *)(in_ecx + 0x8c))));
  *(float *)(in_ecx + 0x90) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x148) * (float10)*(float *)(in_ecx + 0x90))));
  *(float *)(in_ecx + 0x94) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x14c) * (float10)*(float *)(in_ecx + 0x94))));
  return 0;
}

/* ref: switchD_009be164::caseD_2 */
uint F_0098c990(unsigned int gen_a0)
{
  GEN_ENTER(0x98c990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * pfVar1;
  
  pfVar1 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d8) + 0x3c))))
                              (*(int * PTR32 *)((int)this + 0x1d8))));
  *(float *)((int)this + 0x88) = ((float)GEN_TOF(((float10)*pfVar1 * (float10)*(float *)((int)this + 0x88))));
  *(float *)((int)this + 0x8c) = ((float)GEN_TOF(((float10)pfVar1[1] * (float10)*(float *)((int)this + 0x8c))))
  ;
  *(float *)((int)this + 0x90) = ((float)GEN_TOF(((float10)pfVar1[2] * (float10)*(float *)((int)this + 0x90))))
  ;
  *(float *)((int)this + 0x94) = ((float)GEN_TOF(((float10)pfVar1[3] * (float10)*(float *)((int)this + 0x94))))
  ;
  return (uint)pfVar1;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf25 */
uint F_0098c9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98c9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this);
  F_0097f2c0(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf28 */
uint F_0098ca10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98ca10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0ac))[*(uint *)(this + 0x2ac) >> 9 & 1])))();
  F_0097f2c0(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0098ca40 */
uint F_0098ca40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98ca40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(byte *)((int)this + 0x19f) - 3)));
  switch((unsigned int)(uintptr_t)(*(byte *)((int)this + 0x19f))) {
  case 3: ;
  case 7: ;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
    param_1[3] = *puVar1;
    param_1[4] = puVar1[1];
    param_1[5] = puVar1[2];
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x18))(this)));
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    return (uint)puVar1;
  case 4: ;
  case 5: ;
  case 6: ;
  case 8: ;
  case 9: ;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x18))(this)));
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
  }
  return (uint)puVar1;
}

/* ref: FUN_0098cad0 */
uint F_0098cad0(unsigned int gen_a0)
{
  GEN_ENTER(0x98cad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0098b5e0(*(undefined4 *)((int)this + 0x1d4),(int)this + 0x88,
                       *(byte *)((int)this + 0x1fa) & 3,(uint)*(byte *)((int)this + 0x1f8),
                       *(byte *)((int)this + 0x1fa) >> 2 & 3,(uint)*(byte *)((int)this + 0x1f9));
  return uVar1;
}

/* ref: FUN_0098cb10 */
uint F_0098cb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x98cb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  *(float *)(in_ecx + 0x34) = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x34) + (float10)*param_4)));
  *(float *)(in_ecx + 0x38) = ((float)GEN_TOF(((float10)param_4[1] + (float10)*(float *)(in_ecx + 0x38))));
  *(float *)(in_ecx + 0x3c) = ((float)GEN_TOF(((float10)param_4[2] + (float10)*(float *)(in_ecx + 0x3c))));
  return (uint)param_4;
}

/* ref: FUN_0098cbc0 */
uint F_0098cbc0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x98cbc0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0c4))[*(uint *)(param_1 + 0x2ac) >> 0xc & 1])))
                    ((undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_0098cc30 */
uint F_0098cc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98cc30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0x98) * (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0x9c) * (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xa0) * (float10)param_2[2])));
  return uVar1;
}

/* ref: FUN_0098cc70 */
uint F_0098cc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98cc70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xa4) + (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xa8) + (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xac) + (float10)param_2[2])));
  return uVar1;
}

/* ref: FUN_0098ccb0 */
uint F_0098ccb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98ccb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xb0) + (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xb4) + (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xb8) + (float10)param_2[2])));
  return uVar1;
}

/* ref: FUN_0098ccf0 */
uint F_0098ccf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98ccf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x1f0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x88) * (float10)*param_2)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x8c) * (float10)param_2[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x90) * (float10)param_2[2])));
  param_2[3] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x94) * (float10)param_2[3])));
  return (uint)param_2;
}

/* ref: FUN_0098cd30 */
uint F_0098cd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98cd30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0d4))[*(uint *)((int)this + 0x2ac) >> 0xe & 1])))(this,&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 0x58) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)this + 0x5c) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)this + 0x60) = (*(undefined4 *)(gen_frame + 0x8));
  return uVar1;
}

/* ref: FUN_0098cd90 */
uint F_0098cd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98cd90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0dc))[*(uint *)((int)this + 0x2ac) >> 0xe & 1])))(this,&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 100) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)this + 0x68) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)this + 0x6c) = (*(undefined4 *)(gen_frame + 0x8));
  return uVar1;
}

/* ref: FUN_0098cdf0 */
uint F_0098cdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98cdf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x34);
  (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x38);
  (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0x3c);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xb0) + (float10)*(float *)((int)this + 0x34))));
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xb4) + (float10)*(float *)((int)this + 0x38))));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xb8) + (float10)*(float *)((int)this + 0x3c))));
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0e4))[*(uint *)((int)this + 0x2ac) >> 0xe & 1])))(this,&(*(float *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x70) = (*(float *)(gen_frame + 0x0));
  *(float *)((int)this + 0x74) = (*(float *)(gen_frame + 0x4));
  *(float *)((int)this + 0x78) = (*(float *)(gen_frame + 0x8));
  return uVar1;
}

/* ref: FUN_0098ce70 */
uint F_0098ce70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98ce70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x34);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x38);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x3c);
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0e4))[*(uint *)((int)this + 0x2ac) >> 0xe & 1])))(this,&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 0x70) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)this + 0x74) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)this + 0x78) = (*(undefined4 *)(gen_frame + 0x8));
  return uVar1;
}

/* ref: FUN_0098cee0 */
unsigned int F_0098cee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98cee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x1a8);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x1ac);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x8c))))(*(int * PTR32 *)((int)this + 0x29c));
  iVar4 = 0;
  (*(uint *)(gen_frame + 0x1c)) = uVar1;
  if (0 < (int)uVar1) {
    iVar3 = param_1 + 0x18;
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x29c) + 0xd8))))
                                (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x29c),iVar4)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)));
      F_00979150((uint)&(*(undefined4 *)(gen_frame + 0x4)),iVar3 + -0x18,iVar3 + -0x14,iVar3 + -0x10,iVar3 + -0xc,iVar3 + -8
                   ,iVar3 + -4,iVar3,iVar3 + 4);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x1c)));
  }
  return 0;
}

/* ref: FUN_0098d200 */
unsigned int F_0098d200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98d200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0098cee0(this,param_1);
  return 0;
}

/* ref: FUN_0098d210 */
double F_0098d210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98d210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = F_0098cfd0(this,param_1);
  return (double)fVar1;
}

/* ref: Apricot::Engine::Instance::SchedulerInstance::vf9 */
unsigned int F_0098d220(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x98d220u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  ((code *)*(gen_code32 *)(param_1 + 0x1ec))();
  F_0098c2c0(param_1,param_2);
  return 0;
}

/* ref: Apricot::Engine::Instance::TimelineInstance::vf9 */
unsigned int F_0098d250(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x98d250u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  ((code *)*(gen_code32 *)(param_1 + 0x1ec))();
  F_0098c2c0(param_1,param_2);
  return 0;
}

/* ref: Apricot::Engine::Instance::EndClipInstance::vf1 */
unsigned int F_0098d2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x98d2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  
  piVar1 = *(int * PTR32 *)(this + 0x1d4);
  if ((piVar1[0x74] & 0x40000U) == 0) {
    piVar1[0x74] = piVar1[0x74] & 0xf81fffffU | 0x40000;
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  for (this_00 = (undefined *)piVar1[0x78]; this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1e8)) {
    F_0098c8b0(this_00);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::KillClipInstance::vf1 */
unsigned int F_0098d310(unsigned int gen_a0)
{
  GEN_ENTER(0x98d310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * this_00;
  uint uVar6;
  float fVar7;
  
  iVar2 = *(int *)(this + 0x1f0);
  iVar3 = *(int *)(iVar2 + 8);
  iVar4 = *(int *)(iVar2 + 0xc);
  iVar5 = *(int *)(iVar2 + 4);
  this_00 = *(int * PTR32 *)(this + 0x1d8);
  iVar2 = *(int *)(iVar2 + 0x10);
  while ((this_00 != (int *)0x0 && (uVar6 = ((code *)*(gen_code32 *)(*this_00 + 0x20))(this_00), uVar6 != 2))) {
    this_00 = (int *)this_00[0x76];
  }
  if (0 < iVar3) {
    F_0097fb60(this_00,iVar3 + -1,iVar5);
  }
  if (0 < iVar4) {
    F_0097fb60(this_00,iVar4 + -1,iVar5);
  }
  if (0 < iVar2) {
    F_0097fb60(this_00,iVar2 + -1,iVar5);
  }
  fVar7 = 0.0;
  pfVar1 = ((float *)GEN_TOP((*(int *)(this + 0x1f0) + 0x14)));
  if (!GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0)) {
    fVar7 = (float)iVar5;
  }
  *(float *)(this + 0x1b8) = fVar7;
  return 0;
}

/* ref: Apricot::Engine::Instance::KillClipInstance::vf2 */
unsigned int F_0098d3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x98d3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * pfVar1;
  
  pfVar1 = ((float *)GEN_TOP((*(int *)(this + 0x1f0) + 0x14)));
  if (!GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0)) {
    F_0098c8b0(*(undefined * PTR32 *)(this + 0x1d4));
    return 0;
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::UnlockLoopPointClipInstance::vf1 */
uint F_0098d3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98d3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = *(int * PTR32 *)(this + 0x1d8);
  while ((piVar1 != (int *)0x0 && (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1), uVar2 != 2))) {
    piVar1 = (int *)piVar1[0x76];
  }
  ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
  uVar2 = *(uint *)(this + 0x1d0);
  if ((uVar2 & 0x40000) == 0) {
    *(uint *)(this + 0x1d0) = uVar2 & 0xf81fffff | 0x40000;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return uVar2;
}

/* ref: Apricot::Engine::Instance::DirectionalLightEffectorInstance::vf27 */
unsigned int F_0098d6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x98d6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0098d4f0(this,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  return 0;
}

/* ref: FUN_0098de10 */
uint F_0098de10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x98de10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x28);
  param_1[1] = *(undefined4 *)((int)this + 0x2c);
  param_1[2] = *(undefined4 *)((int)this + 0x30);
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x14a0a2c));
  param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x14a0a30));
  param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x14a0a34));
  *param_3 = GEN_FLT_TO(*param_3, REFG(float, 0x132f41c));
  param_3[1] = GEN_FLT_TO(param_3[1], REFG(float, 0x132f420));
  param_3[2] = GEN_FLT_TO(param_3[2], REFG(float, 0x132f424));
  uVar1 = *(int *)(param_4 + 4) - 2;
  if (uVar1 < 2) {
    F_00981430(((undefined1 *)(gen_frame + 0xc)),(int)this + 4);
    F_00981170(param_1,(uint)param_1,(uint)((undefined1 *)(gen_frame + 0xc)));
    uVar1 = F_00981050(param_2,(uint)param_2,(uint)((undefined1 *)(gen_frame + 0xc)));
  }
  return uVar1;
}

/* ref: Apricot::Engine::Instance::LaserParticleInstance::vf25 */
uint F_0098e1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98e1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this);
  F_0097f2c0(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::LineParticleInstance::vf30 */
unsigned int F_0098e220(unsigned int gen_a0)
{
  GEN_ENTER(0x98e220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(int *)(this + 0x298) != 0) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xf4))))(*(int * PTR32 *)(this + 0x29c));
    iVar1 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar2 = *(undefined4 *)(this + 0x298);
    iVar3 = (&REFG(undefined4, 0x14a0a08))[REFG(int, 0x14a09f8)];
    uVar4 = *(short *)(uVar4 + 0xb8) * 0x50 + iVar1;
    bVar5 = REFG(undefined4, 0x14a09fc) < uVar4;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar4;
    uVar4 = ~-(uint)bVar5 & iVar3 + iVar1;
    *(uint *)(this + 0x298) = uVar4;
    if (uVar4 == 0) {
      if ((*(uint *)(this + 0x1d0) & 0x40000) == 0) {
        *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xf81fffff | 0x40000;
        return 0;
      }
    }
    else {
      F_009806e0(this,uVar4,uVar2);
    }
  }
  return 0;
}

/* ref: FUN_0098e2c0 */
uint F_0098e2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98e2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined1 *)((int)param_1 + 0x4f) = 1;
  *param_1 = 0;
  if ((char)param_3 == '\0') {
    F_009defa0(param_1,(uint)((byte *)(gen_frame + 0x0)));
    F_00981170(((byte *)(gen_frame + 0x0)),(uint)((byte *)(gen_frame + 0x0)),param_2);
    param_1[1] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    param_1[4] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    param_1[2] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    param_1[5] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    param_1[3] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    param_1[6] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    F_009df080(param_1,(uint)((byte *)(gen_frame + 0x0)));
    uVar1 = F_00981050(((byte *)(gen_frame + 0x0)),(uint)((byte *)(gen_frame + 0x0)),param_2);
  }
  else {
    F_009defa0(param_1,(uint)((byte *)(gen_frame + 0x0)));
    param_1[1] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    param_1[4] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    param_1[2] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    param_1[5] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    param_1[3] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    param_1[6] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    uVar1 = F_009df080(param_1,(uint)((byte *)(gen_frame + 0x0)));
  }
  param_1[7] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
  param_1[8] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
  param_1[9] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
  return uVar1;
}

/* ref: FUN_0098e3b0 */
uint F_0098e3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x98e3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  char * pcVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  (*(int *)(gen_frame + 0x18)) = (*(int *)&gen_args[0]);
  if ((*(uint *)&gen_args[1]) != (*(uint *)&gen_args[2])) {
    F_00c46aa0((*(uint *)&gen_args[1]),(*(uint *)&gen_args[2]),(*(int *)&gen_args[3]) * 0x50);
  }
  uVar12 = (*(uint *)&gen_args[5]);
  iVar11 = (*(int *)&gen_args[4]);
  pfVar1 = (float *)((*(int *)&gen_args[0]) + 0x1b0);
  (*(uint *)&gen_args[5]) = (*(int *)&gen_args[0]) + 0x1b0;
  (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(REFG(float, 0x1094880));
  if ((GEN_ISNAN(REFG(float, 0x1094880)) || GEN_ISNAN(*pfVar1)) || (REFG(float, 0x1094880) < *pfVar1 || REFG(uint, 0x1094880) == *pfVar1)) {
    (*(uint *)&gen_args[5]) = (uint)&(*(uint *)&gen_args[2]);
  }
  (*(uint *)&gen_args[2]) = *(uint *)(*(uint *)&gen_args[5]);
  if ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[2]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(gen_bits2f((*(uint *)&gen_args[2])) <= *(float *)&REFG(undefined, 0x1088114))) {
    fVar14 = (float10)REFG(double, 0x1094800);
    fVar15 = (float10)*(double *)&REFG(undefined, 0x1088118);
    do {
      if ((*(int *)&gen_args[3]) != 0) {
        pcVar13 = (char *)((*(uint *)&gen_args[1]) + 0x4f);
        (*(int *)&gen_args[4]) = (*(int *)&gen_args[3]);
        do {
          pfVar1 = (float *)(pcVar13 + -0x4f);
          fVar2 = ((float)GEN_TOF(((float10)*(float *)(pcVar13 + -0x4f) + fVar14)));
          *pfVar1 = fVar2;
          if (*pcVar13 == 0) {
            (*(uint *)&gen_args[5]) = 0;
            if ((float10)(int)*(short *)(pcVar13 + -0x1b) <= (float10)fVar2) {
              cVar9 = *(char *)(iVar11 + 0xce);
              *pfVar1 = 0.0;
              *pcVar13 = '\x01';
              if (cVar9 == '\0') {
                fVar2 = (float)((float10)(int)pcVar13[-6] / fVar15);
                (*(float *)(gen_frame + 0x8)) = fVar2;
                fVar3 = (float)((float10)(int)pcVar13[-5] / fVar15);
                (*(float *)(gen_frame + 0xc)) = fVar3;
                fVar4 = (float)((float10)(int)pcVar13[-4] / fVar15);
                (*(float *)(gen_frame + 0x10)) = fVar4;
                (*(uint *)&gen_args[5]) = *(uint *)(pcVar13 + -0x23);
                fVar14 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[5]))));
                (*(float *)(gen_frame + 0x8)) = (float)(fVar14 * (float10)fVar2);
                (*(float *)(gen_frame + 0xc)) = (float)(fVar14 * (float10)fVar3);
                (*(float *)(gen_frame + 0x10)) = (float)(fVar14 * (float10)fVar4);
                F_00981170(&(*(float *)(gen_frame + 0x8)),(uint)&(*(float *)(gen_frame + 0x8)),uVar12);
                *(float *)(pcVar13 + -0x4b) = (*(float *)(gen_frame + 0x8));
                *(float *)(pcVar13 + -0x3f) = (*(float *)(gen_frame + 0x8));
                (*(uint *)&gen_args[5]) = (uint)pcVar13[-8];
                *(float *)(pcVar13 + -0x47) = (*(float *)(gen_frame + 0xc));
                *(float *)(pcVar13 + -0x3b) = (*(float *)(gen_frame + 0xc));
                *(float *)(pcVar13 + -0x43) = (*(float *)(gen_frame + 0x10));
                *(float *)(pcVar13 + -0x37) = (*(float *)(gen_frame + 0x10));
                fVar15 = (float10)*(double *)&REFG(undefined, 0x1088118);
                fVar14 = (float10)*(float *)(pcVar13 + -0x27);
                fVar16 = (float10)((float)GEN_TOF((fVar14 * (float10)(float)((float10)(int)(*(uint *)&gen_args[5]) / fVar15))))
                ;
                fVar17 = (float10)((float)GEN_TOF((fVar14 * (float10)(float)((float10)(int)pcVar13[-9] /
                                                                   fVar15))));
                fVar14 = (float10)((float)GEN_TOF((fVar14 * (float10)(float)((float10)(int)pcVar13[-7] /
                                                                   fVar15))));
                fVar2 = ((float)GEN_TOF(((fVar16 * (float10)*(float *)(uVar12 + 0x14) +
                                fVar17 * (float10)*(float *)(uVar12 + 8)) +
                               fVar14 * (float10)*(float *)(uVar12 + 0x20))));
                (*(float *)(gen_frame + 0x14)) = fVar2;
                fVar3 = *(float *)(uVar12 + 0x10);
                fVar4 = *(float *)(uVar12 + 4);
                fVar5 = *(float *)(uVar12 + 0x1c);
                fVar6 = *(float *)(uVar12 + 0xc);
                fVar7 = *(float *)uVar12;
                fVar8 = *(float *)(uVar12 + 0x18);
                *(float *)(pcVar13 + -0x2b) = fVar2;
                *(float *)(pcVar13 + -0x33) =
                     ((float)GEN_TOF((fVar14 * (float10)fVar8 +
                            ((float10)fVar6 * fVar16 + (float10)fVar7 * fVar17))));
                *(float *)(pcVar13 + -0x2f) =
                     ((float)GEN_TOF(((float10)fVar5 * fVar14 +
                            ((float10)fVar4 * fVar17 + (float10)fVar3 * fVar16))));
LAB_0098e50a: ;
                fVar14 = (float10)REFG(double, 0x1094800);
              }
              else {
                (*(uint *)&gen_args[5]) = (uint)pcVar13[-9];
                fVar16 = (float10)*(float *)(pcVar13 + -0x23);
                fVar2 = ((float)GEN_TOF((fVar16 * (float10)(float)((float10)(int)pcVar13[-6] / fVar15))));
                fVar3 = ((float)GEN_TOF((fVar16 * (float10)(float)((float10)(int)pcVar13[-5] / fVar15))));
                fVar4 = ((float)GEN_TOF((fVar16 * (float10)(float)((float10)(int)pcVar13[-4] / fVar15))));
                *(float *)(pcVar13 + -0x4b) = fVar2;
                *(float *)(pcVar13 + -0x3f) = fVar2;
                *(float *)(pcVar13 + -0x47) = fVar3;
                *(float *)(pcVar13 + -0x3b) = fVar3;
                *(float *)(pcVar13 + -0x43) = fVar4;
                *(float *)(pcVar13 + -0x37) = fVar4;
                fVar16 = (float10)*(float *)(pcVar13 + -0x27);
                *(float *)(pcVar13 + -0x33) =
                     ((float)GEN_TOF((fVar16 * (float10)(float)((float10)(int)(*(uint *)&gen_args[5]) / fVar15))));
                *(float *)(pcVar13 + -0x2f) =
                     ((float)GEN_TOF((fVar16 * (float10)(float)((float10)(int)pcVar13[-8] / fVar15))));
                *(float *)(pcVar13 + -0x2b) =
                     ((float)GEN_TOF((fVar16 * (float10)(float)((float10)(int)pcVar13[-7] / fVar15))));
              }
            }
          }
          else {
            (*(uint *)&gen_args[5]) = *pcVar13 + -1;
            if ((float *)(*(uint *)&gen_args[5]) == (float *)0x0) {
              *(float *)(pcVar13 + -0x33) =
                   ((float)GEN_TOF(((float10)*(float *)(iVar11 + 0xc) * (float10)*(float *)(pcVar13 + -0x33))))
              ;
              *(float *)(pcVar13 + -0x2f) =
                   ((float)GEN_TOF(((float10)*(float *)(iVar11 + 0x10) * (float10)*(float *)(pcVar13 + -0x2f)
                          )));
              *(float *)(pcVar13 + -0x2b) =
                   ((float)GEN_TOF(((float10)*(float *)(iVar11 + 0x14) * (float10)*(float *)(pcVar13 + -0x2b)
                          )));
              if ((*(char *)(iVar11 + 200) == -1) ||
                 ((float10)0 <
                  (float10)((float)GEN_TOF(((float10)*(float *)(iVar11 + 0x8c) * (float10)fVar2 +
                                  (float10)*(float *)(iVar11 + 0x88)))))) {
                *(float *)(pcVar13 + -0x4b) =
                     ((float)GEN_TOF(((float10)*(float *)(pcVar13 + -0x33) * fVar14 +
                            (float10)*(float *)(pcVar13 + -0x4b))));
                *(float *)(pcVar13 + -0x47) =
                     ((float)GEN_TOF(((float10)*(float *)(pcVar13 + -0x2f) * fVar14 +
                            (float10)*(float *)(pcVar13 + -0x47))));
                *(float *)(pcVar13 + -0x43) =
                     ((float)GEN_TOF(((float10)*(float *)(pcVar13 + -0x2b) * fVar14 +
                            (float10)*(float *)(pcVar13 + -0x43))));
              }
              uVar10 = *(ushort *)(iVar11 + 0xbc);
              (*(uint *)&gen_args[5]) = (uint)uVar10;
              if ((0 < (short)uVar10) &&
                 ((*(uint *)&gen_args[5]) = (uint)(short)uVar10, (float10)(int)(*(uint *)&gen_args[5]) <= (float10)fVar2)) {
                if (*(char *)(iVar11 + 0xcb) != '\0') {
                  (*(uint *)&gen_args[5]) = F_0098e2c0(pfVar1,uVar12,(uint)(*(char *)(iVar11 + 0xce) != '\0'));
                  fVar15 = (float10)*(double *)&REFG(undefined, 0x1088118);
                  goto LAB_0098e50a;
                }
                *pcVar13 = '\x02';
              }
            }
          }
          pcVar13 = pcVar13 + 0x50;
          (*(int *)&gen_args[4]) = (*(int *)&gen_args[4]) + -1;
        } while ((*(int *)&gen_args[4]) != 0);
      }
      (*(uint *)&gen_args[2]) = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) - fVar14));
    } while ((!GEN_ISNAN(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))))) && !GEN_ISNAN((float10)0)) &&
             !(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) <= (float10)0));
  }
  return (*(uint *)&gen_args[5]);
}

/* ref: Apricot::Engine::Instance::PowderParticleInstance::vf30 */
unsigned int F_0098e780(unsigned int gen_a0)
{
  GEN_ENTER(0x98e780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(int *)(this + 0x298) != 0) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xf4))))(*(int * PTR32 *)(this + 0x29c));
    iVar1 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar2 = *(undefined4 *)(this + 0x298);
    iVar3 = (&REFG(undefined4, 0x14a0a08))[REFG(int, 0x14a09f8)];
    uVar4 = *(short *)(uVar4 + 0xb8) * 0x50 + iVar1;
    bVar5 = REFG(undefined4, 0x14a09fc) < uVar4;
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar4;
    uVar4 = ~-(uint)bVar5 & iVar3 + iVar1;
    *(uint *)(this + 0x298) = uVar4;
    if (uVar4 == 0) {
      if ((*(uint *)(this + 0x1d0) & 0x40000) == 0) {
        *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xf81fffff | 0x40000;
        return 0;
      }
    }
    else {
      F_00980780(this,uVar4,uVar2);
    }
  }
  return 0;
}

/* ref: FUN_0098e820 */
uint F_0098e820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98e820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined1 *)((int)param_1 + 0x4f) = 1;
  *param_1 = 0;
  if ((char)param_3 == '\0') {
    F_009defa0(param_1,(uint)((byte *)(gen_frame + 0x0)));
    F_00981170(((byte *)(gen_frame + 0x0)),(uint)((byte *)(gen_frame + 0x0)),param_2);
    param_1[1] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    param_1[2] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    param_1[3] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    F_009df080(param_1,(uint)((byte *)(gen_frame + 0x0)));
    uVar1 = F_00981050(((byte *)(gen_frame + 0x0)),(uint)((byte *)(gen_frame + 0x0)),param_2);
  }
  else {
    F_009defa0(param_1,(uint)((byte *)(gen_frame + 0x0)));
    param_1[1] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    param_1[2] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    param_1[3] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    uVar1 = F_009df080(param_1,(uint)((byte *)(gen_frame + 0x0)));
  }
  param_1[7] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
  param_1[8] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
  param_1[9] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
  return uVar1;
}

/* ref: FUN_0098e8f0 */
uint F_0098e8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x98e8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  ushort uVar11;
  uint uVar12;
  float * pfVar13;
  float * pfVar14;
  int iVar15;
  char * pcVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  
  iVar15 = (*(int *)&gen_args[3]);
  (*(int *)(gen_frame + 0x18)) = (*(int *)&gen_args[0]);
  if ((*(uint *)&gen_args[1]) != (*(uint *)&gen_args[2])) {
    F_00c46aa0((*(uint *)&gen_args[1]),(*(uint *)&gen_args[2]),(*(int *)&gen_args[3]) * 0x50);
  }
  uVar12 = (*(uint *)&gen_args[4]);
  pfVar14 = (float *)((*(int *)(gen_frame + 0x18)) + 0x1b0);
  (*(uint *)(gen_frame + 0xc)) = (uint)(ushort)((short)*(char *)((*(uint *)&gen_args[4]) + 0xc3) * (short)*(char *)((*(uint *)&gen_args[4]) + 0xc2));
  (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(REFG(float, 0x1094880));
  if ((GEN_ISNAN(REFG(float, 0x1094880)) || GEN_ISNAN(*pfVar14)) || (REFG(float, 0x1094880) < *pfVar14 || REFG(uint, 0x1094880) == *pfVar14))
  {
    pfVar14 = (float *)&(*(uint *)&gen_args[2]);
  }
  (*(uint *)&gen_args[4]) = (uint)gen_fl2bits(*pfVar14);
  if ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[4]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(gen_bits2f((*(uint *)&gen_args[4])) <= *(float *)&REFG(undefined, 0x1088114))) {
    fVar17 = (float10)REFG(double, 0x1094800);
    fVar18 = (float10)*(double *)&REFG(undefined, 0x1088118);
    do {
      if (iVar15 != 0) {
        pcVar16 = (char *)((*(uint *)&gen_args[1]) + 0x4f);
        (*(int *)(gen_frame + 0x14)) = iVar15;
        do {
          pfVar13 = (*(float * PTR32 *)&gen_args[5]);
          pfVar1 = (float *)(pcVar16 + -0x4f);
          fVar3 = ((float)GEN_TOF(((float10)*(float *)(pcVar16 + -0x4f) + fVar17)));
          *pfVar1 = fVar3;
          if (*pcVar16 == 0) {
            pfVar14 = (float *)(int)*(short *)(pcVar16 + -0x1b);
            if ((float10)(int)pfVar14 <= (float10)fVar3) {
              cVar10 = *(char *)(uVar12 + 0xce);
              *pcVar16 = '\x01';
              *pfVar1 = 0.0;
              if (cVar10 == '\0') {
                fVar3 = (float)((float10)(int)pcVar16[-6] / fVar18);
                (*(float *)(gen_frame + 0x0)) = fVar3;
                fVar4 = (float)((float10)(int)pcVar16[-5] / fVar18);
                (*(float *)(gen_frame + 0x4)) = fVar4;
                fVar5 = (float)((float10)(int)pcVar16[-4] / fVar18);
                (*(float *)(gen_frame + 0x8)) = fVar5;
                (*(uint *)&gen_args[2]) = *(uint *)(pcVar16 + -0x23);
                fVar17 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))));
                (*(float *)(gen_frame + 0x0)) = (float)(fVar17 * (float10)fVar3);
                (*(float *)(gen_frame + 0x4)) = (float)(fVar17 * (float10)fVar4);
                (*(float *)(gen_frame + 0x8)) = (float)(fVar17 * (float10)fVar5);
                F_00981170(&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x0)),(uint)(*(float * PTR32 *)&gen_args[5]));
                *(float *)(pcVar16 + -0x4b) = (*(float *)(gen_frame + 0x0));
                pfVar14 = (float *)(int)pcVar16[-8];
                *(float *)(pcVar16 + -0x47) = (*(float *)(gen_frame + 0x4));
                *(float *)(pcVar16 + -0x43) = (*(float *)(gen_frame + 0x8));
                fVar18 = (float10)*(double *)&REFG(undefined, 0x1088118);
                fVar17 = (float10)*(float *)(pcVar16 + -0x27);
                fVar19 = (float10)((float)GEN_TOF((fVar17 * (float10)(float)((float10)(int)((int)(uintptr_t)pfVar14) / fVar18))))
                ;
                fVar20 = (float10)((float)GEN_TOF((fVar17 * (float10)(float)((float10)(int)pcVar16[-9] /
                                                                   fVar18))));
                fVar17 = (float10)((float)GEN_TOF((fVar17 * (float10)(float)((float10)(int)pcVar16[-7] /
                                                                   fVar18))));
                fVar3 = ((float)GEN_TOF(((fVar19 * (float10)pfVar13[5] + fVar20 * (float10)pfVar13[2]) +
                               fVar17 * (float10)pfVar13[8])));
                (*(float *)(gen_frame + 0x10)) = fVar3;
                fVar4 = pfVar13[4];
                fVar5 = pfVar13[1];
                fVar6 = pfVar13[7];
                fVar7 = pfVar13[3];
                fVar8 = *pfVar13;
                fVar9 = pfVar13[6];
                *(float *)(pcVar16 + -0x2b) = fVar3;
                *(float *)(pcVar16 + -0x33) =
                     ((float)GEN_TOF((fVar17 * (float10)fVar9 +
                            ((float10)fVar7 * fVar19 + (float10)fVar8 * fVar20))));
                *(float *)(pcVar16 + -0x2f) =
                     ((float)GEN_TOF(((float10)fVar6 * fVar17 +
                            ((float10)fVar5 * fVar20 + (float10)fVar4 * fVar19))));
LAB_0098ed24: ;
                fVar17 = (float10)REFG(double, 0x1094800);
              }
              else {
                pfVar14 = (float *)(int)pcVar16[-7];
                fVar19 = (float10)*(float *)(pcVar16 + -0x23);
                *(float *)(pcVar16 + -0x4b) =
                     ((float)GEN_TOF((fVar19 * (float10)(float)((float10)(int)pcVar16[-6] / fVar18))));
                *(float *)(pcVar16 + -0x47) =
                     ((float)GEN_TOF((fVar19 * (float10)(float)((float10)(int)pcVar16[-5] / fVar18))));
                *(float *)(pcVar16 + -0x43) =
                     ((float)GEN_TOF((fVar19 * (float10)(float)((float10)(int)pcVar16[-4] / fVar18))));
                fVar19 = (float10)*(float *)(pcVar16 + -0x27);
                *(float *)(pcVar16 + -0x33) =
                     ((float)GEN_TOF((fVar19 * (float10)(float)((float10)(int)pcVar16[-9] / fVar18))));
                *(float *)(pcVar16 + -0x2f) =
                     ((float)GEN_TOF((fVar19 * (float10)(float)((float10)(int)pcVar16[-8] / fVar18))));
                *(float *)(pcVar16 + -0x2b) =
                     ((float)GEN_TOF((fVar19 * (float10)(float)((float10)(int)((int)(uintptr_t)pfVar14) / fVar18))));
              }
            }
          }
          else {
            pfVar14 = (float *)(*pcVar16 + -1);
            if (pfVar14 == (float *)0x0) {
              *(float *)(pcVar16 + -0x33) =
                   ((float)GEN_TOF(((float10)*(float *)(uVar12 + 0xc) * (float10)*(float *)(pcVar16 + -0x33))))
              ;
              *(float *)(pcVar16 + -0x2f) =
                   ((float)GEN_TOF(((float10)*(float *)(uVar12 + 0x10) * (float10)*(float *)(pcVar16 + -0x2f)
                          )));
              *(float *)(pcVar16 + -0x2b) =
                   ((float)GEN_TOF(((float10)*(float *)(uVar12 + 0x14) * (float10)*(float *)(pcVar16 + -0x2b)
                          )));
              if ((*(char *)(uVar12 + 200) == -1) ||
                 ((float10)0 <
                  (float10)((float)GEN_TOF(((float10)*(float *)(uVar12 + 0x8c) * (float10)fVar3 +
                                  (float10)*(float *)(uVar12 + 0x88)))))) {
                *(float *)(pcVar16 + -0x4b) =
                     ((float)GEN_TOF(((float10)*(float *)(pcVar16 + -0x33) * fVar17 +
                            (float10)*(float *)(pcVar16 + -0x4b))));
                *(float *)(pcVar16 + -0x47) =
                     ((float)GEN_TOF(((float10)*(float *)(pcVar16 + -0x2f) * fVar17 +
                            (float10)*(float *)(pcVar16 + -0x47))));
                *(float *)(pcVar16 + -0x43) =
                     ((float)GEN_TOF(((float10)*(float *)(pcVar16 + -0x2b) * fVar17 +
                            (float10)*(float *)(pcVar16 + -0x43))));
              }
              uVar11 = *(ushort *)(uVar12 + 0xbc);
              pfVar14 = (float *)(uint)uVar11;
              if ((0 < (short)uVar11) &&
                 ((*(uint *)&gen_args[2]) = (uint)(short)uVar11, (float10)(int)(*(uint *)&gen_args[2]) <= (float10)fVar3)) {
                if (*(char *)(uVar12 + 0xcb) == '\0') {
                  *pcVar16 = '\x02';
                }
                else {
                  pfVar14 = (float *)F_0098e820(pfVar1,(*(float * PTR32 *)&gen_args[5]),
                                                  (uint)(*(char *)(uVar12 + 0xce) != '\0'));
                  fVar18 = (float10)*(double *)&REFG(undefined, 0x1088118);
                  fVar17 = (float10)REFG(double, 0x1094800);
                }
              }
              if ('\0' < *(char *)(uVar12 + 0xc6)) {
                (*(uint *)&gen_args[2]) = CONCAT22(((undefined2)0x27f),(short)*(char *)(uVar12 + 0xc4));
                (*(float *)(gen_frame + 0x10)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
                fVar3 = gen_bits2f((int)TRUNC((float10)*pfVar1 /
                                              (float10)(int)*(char *)(uVar12 + 0xc4)));
                (*(float *)(gen_frame + 0x10)) = fVar3;
                pfVar14 = ((float *)GEN_TOP((((uint)gen_fl2bits(fVar3) & 0xffff) +
                                   (*(ushort *)(pcVar16 + -0x19) & 0x7fff))));
                if ((int)((int)*(char *)(uVar12 + 0xc6) * ((*(uint *)(gen_frame + 0xc)) & 0xffff)) <= (int)pfVar14) {
                  if (*(char *)(uVar12 + 0xcb) != '\0') {
                    pfVar14 = (float *)F_0098e820(pfVar1,(*(float * PTR32 *)&gen_args[5]),
                                                    (uint)(*(char *)(uVar12 + 0xce) != '\0'));
                    fVar18 = (float10)*(double *)&REFG(undefined, 0x1088118);
                    goto LAB_0098ed24;
                  }
                  *pcVar16 = '\x02';
                }
              }
            }
          }
          pcVar16 = pcVar16 + 0x50;
          iVar2 = (*(int *)(gen_frame + 0x14)) + -1;
          (*(int *)(gen_frame + 0x14)) = iVar2;
          iVar15 = (*(int *)&gen_args[3]);
        } while (iVar2 != 0);
      }
      (*(uint *)&gen_args[4]) = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) - fVar17));
    } while ((!GEN_ISNAN(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4]))))) && !GEN_ISNAN((float10)0)) &&
             !(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <= (float10)0));
  }
  return (uint)pfVar14;
}

/* ref: FUN_0098ed70 */
unsigned int F_0098ed70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x98ed70u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  uVar2 = param_2;
  fVar5 = *(float *)(param_3 + 0x1c);
  fVar3 = (float10)(float)((float10)*(float *)param_2 * (float10)*(float *)param_2);
  fVar4 = (float10)REFG(double, 0x1088108);
  fVar1 = ((float)GEN_TOF((((float10)*(float *)(param_3 + 0x20) * fVar3) * fVar4)));
  (*(float *)(gen_frame + 0x18)) = fVar1;
  *param_1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar3 * (float10)*(float *)(param_3 + 0x18)) * fVar4))) +
                    (float10)*(float *)(param_2 + 4))));
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) +
                      (float10)((float)GEN_TOF(((fVar3 * (float10)fVar5) * fVar4))))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar1 + (float10)*(float *)(param_2 + 0xc))));
  if (*(char *)(param_3 + 200) == -1) goto LAB_0098eeae;
  param_2 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(param_3 + 0x8c) *
                                      (float10)*(float *)param_2 +
                                     (float10)*(float *)(param_3 + 0x88)))));
  if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)0) {
    fVar5 = 0.0;
LAB_0098ee0c: ;
    param_2 = (uint)gen_fl2bits(fVar5);
  }
  else {
    fVar5 = REFG(float, 0x1087f04);
    if (REFG(float, 0x1087f04) < gen_bits2f(param_2)) goto LAB_0098ee0c;
  }
  fVar3 = ((float10)GEN_TOD(fcos(
                        (float10)(float)(((float10)GEN_TOD(gen_bits2f(param_2))) *
                                        (float10)*(double *)&REFG(undefined, 0x1080228)))));
  fVar4 = (float10)REFG(double, 0x1088108);
  F_009df010(uVar2,(uint)((byte *)(gen_frame + 0xc)));
  if (*(char *)(param_3 + 0xce) == '\0') {
    F_00981170(((byte *)(gen_frame + 0xc)),(uint)((byte *)(gen_frame + 0xc)),param_4);
  }
  fVar3 = (float10)(float)(fVar4 - (float10)(float)fVar3 * fVar4);
  *param_1 = ((float)GEN_TOF((fVar3 * (((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))))) - (float10)*(float *)(uVar2 + 4)) +
                    (float10)*(float *)(uVar2 + 4))));
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(uVar2 + 8) +
                      fVar3 * (((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))) - (float10)*(float *)(uVar2 + 8)))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(uVar2 + 0xc) +
                      (((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8))))) - (float10)*(float *)(uVar2 + 0xc)) * fVar3
                      )));
LAB_0098eeae: ;
  if (*(char *)(param_3 + 0xce) != '\0') {
    F_00981170(param_1,(uint)param_1,param_4);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::ModelParticleInstance::vf25 */
uint F_0098eed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98eed0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this);
  F_0097f2c0(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::ModelParticleInstance::vf26 */
uint F_0098ef00(unsigned int gen_a0)
{
  GEN_ENTER(0x98ef00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  F_0098cfd0(this,*(uint *)(this + 0x300));
  if (*((int *)GEN_TOP((*(int *)(this + 0x300) + 0xf4))) != 0) {
    uVar1 = *(undefined4 *)(this + 0x1a8);
    uVar2 = *(undefined4 *)(this + 0x1ac);
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xc4))))(*(int * PTR32 *)(this + 0x29c))));
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3)));
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,uVar1,uVar2,this + 0x2f1);
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xc4))))(*(int * PTR32 *)(this + 0x29c))));
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3)));
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,uVar1,uVar2,this + 0x2f6);
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xc4))))(*(int * PTR32 *)(this + 0x29c))));
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2);
  }
  uVar4 = F_0097ef70(this);
  return uVar4;
}

/* ref: Apricot::Engine::Instance::LightModelParticleInstance::vf25 */
uint F_0098f030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98f030u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this);
  F_0097f2c0(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::LightModelParticleInstance::vf26 */
uint F_0098f060(unsigned int gen_a0)
{
  GEN_ENTER(0x98f060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0098cfd0(this,*(uint *)(this + 0x2f0));
  uVar1 = F_0097ef70(this);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::PolygonParticleInstance::vf25 */
uint F_0098f080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98f080u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this);
  F_0097f2c0(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::PolygonParticleInstance::vf26 */
uint F_0098f0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x98f0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0098cfd0(this,*(uint *)(this + 0x2f4));
  uVar1 = F_0097ef70(this);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::PolyLineParticleInstance::vf25 */
uint F_0098f0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98f0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this);
  F_0097f2c0(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::PolyLineParticleInstance::vf26 */
uint F_0098f100(unsigned int gen_a0)
{
  GEN_ENTER(0x98f100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  undefined * pPVar6;
  
  F_0098cfd0(this,*(uint *)(this + 0x31c));
  uVar1 = *(undefined4 *)(this + 0x1a8);
  uVar2 = *(undefined4 *)(this + 0x1ac);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xc0))))(*(int * PTR32 *)(this + 0x29c))));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3)));
  ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,uVar1,uVar2,this + 0x2f0);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3)));
  ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,uVar1,uVar2,this + 0x2fa);
  if ((*((uint *)GEN_TOP((*(int *)(this + 0x31c) + 0x128))) & 0x10) == 0) {
    if ((*((uint *)GEN_TOP((*(int *)(this + 0x31c) + 0x128))) & 1) == 0) goto LAB_0098f2d2;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3)));
    pPVar6 = this + 0x2f5;
  }
  else {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x58))(piVar3)));
    ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,uVar1,uVar2,this + 0x2ff);
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3)));
    ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,uVar1,uVar2,this + 0x309);
    if ((*((byte *)GEN_TOP((*(int *)(this + 0x31c) + 0x128))) & 1) == 0) goto LAB_0098f2d2;
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3)));
    ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,uVar1,uVar2,this + 0x2f5);
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3)));
    pPVar6 = this + 0x304;
  }
  ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,uVar1,uVar2,pPVar6);
LAB_0098f2d2: ;
  uVar5 = F_0097ef70(this);
  return uVar5;
}

/* ref: FUN_0098f2e0 */
uint F_0098f2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x98f2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined4 * puVar10;
  int iVar11;
  int iVar12;
  undefined4 * puVar13;
  int iVar14;
  undefined4 * puVar15;
  undefined4 * local_20;
  undefined4 * local_1c;
  int local_10;
  undefined4 * local_c;
  
  iVar14 = *(int *)((int)param_1 + 0x150);
  if ((*(byte *)((int)param_1 + 0x128) & 4) == 0) {
    iVar12 = *(int *)((int)this + 0x31c);
    iVar11 = *(int *)(iVar12 + 0x15c);
    if (iVar11 == 1) {
      iVar11 = iVar14 + -1;
      puVar7 = (undefined4 *)0x0;
      if (3 < iVar11) {
        iVar1 = iVar11 * 0x10;
        iVar14 = (iVar14 - 5U >> 2) + 1;
        iVar11 = iVar11 + iVar14 * -4;
        puVar8 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 800) + -0x10 + iVar1)));
        do {
          puVar7 = puVar8 + -0x10;
          iVar14 = iVar14 + -1;
          puVar8[4] = *puVar8;
          puVar8[5] = puVar8[1];
          puVar8[6] = puVar8[2];
          *puVar8 = puVar8[-4];
          puVar8[1] = puVar8[-3];
          puVar8[2] = puVar8[-2];
          puVar8[-4] = puVar8[-8];
          puVar8[-3] = puVar8[-7];
          puVar8[-2] = puVar8[-6];
          puVar8[-8] = puVar8[-0xc];
          puVar8[-7] = puVar8[-0xb];
          puVar8[-6] = puVar8[-10];
          puVar8 = puVar7;
        } while (iVar14 != 0);
      }
      if (0 < iVar11) {
        puVar10 = ((undefined4 *)GEN_TOP((iVar11 * 0x10 + *(int *)((int)this + 800))));
        puVar8 = puVar10 + -2;
        do {
          iVar11 = iVar11 + -1;
          *puVar10 = puVar8[-2];
          puVar10 = puVar10 + -4;
          puVar7 = puVar8 + -4;
          puVar8[3] = puVar8[-1];
          puVar8[4] = *puVar8;
          puVar8 = puVar7;
        } while (0 < iVar11);
      }
      puVar8 = *(undefined4 * PTR32 *)((int)this + 800);
      *puVar8 = *(undefined4 *)(iVar12 + 0x104);
      puVar8[1] = *(undefined4 *)(iVar12 + 0x108);
      puVar8[2] = *(undefined4 *)(iVar12 + 0x10c);
    }
    else {
      if (iVar11 == 2) {
        iVar12 = iVar14 + -1;
        if (3 < iVar12) {
          iVar3 = *(int *)((int)this + 800);
          iVar5 = *(int *)((int)this + 0x324);
          iVar11 = iVar12 * 0x10;
          iVar1 = iVar12 * 0x10;
          iVar2 = iVar12 * 0x10;
          iVar14 = (iVar14 - 5U >> 2) + 1;
          iVar12 = iVar12 + iVar14 * -4;
          puVar7 = (undefined4 *)(iVar5 + -0x10 + iVar11);
          puVar8 = (undefined4 *)(iVar3 + -8 + iVar2);
          puVar10 = (undefined4 *)(iVar3 + 8 + iVar1);
          do {
            puVar10[-2] = puVar10[-6];
            iVar14 = iVar14 + -1;
            puVar10[-1] = puVar8[-1];
            *puVar10 = *puVar8;
            puVar7[4] = *puVar7;
            puVar7[5] = puVar7[1];
            *((undefined4 *)GEN_TOP(((int)puVar10 + (iVar5 - iVar3)))) = puVar7[2];
            puVar10[-6] = puVar10[-10];
            puVar8[-1] = puVar8[-5];
            *puVar8 = puVar8[-4];
            *puVar7 = puVar7[-4];
            puVar7[1] = puVar7[-3];
            puVar7[2] = puVar7[-2];
            puVar10[-10] = puVar10[-0xe];
            puVar8[-5] = puVar8[-9];
            puVar8[-4] = puVar8[-8];
            puVar7[-4] = puVar7[-8];
            puVar7[-3] = puVar7[-7];
            puVar7[-2] = puVar7[-6];
            puVar10[-0xe] = puVar10[-0x12];
            puVar8[-9] = puVar8[-0xd];
            puVar8[-8] = puVar8[-0xc];
            puVar7[-8] = puVar7[-0xc];
            puVar7[-7] = puVar7[-0xb];
            puVar7[-6] = puVar7[-10];
            puVar7 = puVar7 + -0x10;
            puVar8 = puVar8 + -0x10;
            puVar10 = puVar10 + -0x10;
          } while (iVar14 != 0);
        }
        if (0 < iVar12) {
          iVar14 = *(int *)((int)this + 0x324);
          iVar11 = *(int *)((int)this + 800);
          puVar7 = (undefined4 *)(iVar14 + iVar12 * 0x10);
          puVar8 = (undefined4 *)(iVar11 + -8 + iVar12 * 0x10);
          puVar10 = puVar7 + -2;
          do {
            iVar12 = iVar12 + -1;
            *((undefined4 *)GEN_TOP(((iVar11 - iVar14) + (int)puVar7))) = puVar8[-2];
            puVar8[3] = puVar8[-1];
            puVar8[4] = *puVar8;
            *puVar7 = puVar10[-2];
            puVar10[3] = puVar10[-1];
            puVar10[4] = *puVar10;
            puVar8 = puVar8 + -4;
            puVar10 = puVar10 + -4;
            puVar7 = puVar7 + -4;
          } while (0 < iVar12);
        }
        uVar4 = *(uint *)((int)this + 0x31c);
        puVar7 = *(undefined4 * PTR32 *)((int)this + 800);
        puVar8 = *(undefined4 * PTR32 *)((int)this + 0x324);
        *puVar7 = *(undefined4 *)(uVar4 + 0x104);
        puVar7[1] = *(undefined4 *)(uVar4 + 0x108);
        puVar7[2] = *(undefined4 *)(uVar4 + 0x10c);
        *puVar8 = *(undefined4 *)(uVar4 + 0x11c);
        puVar8[1] = *(undefined4 *)(uVar4 + 0x120);
        puVar8[2] = *(undefined4 *)(uVar4 + 0x124);
        return uVar4;
      }
      puVar7 = (undefined4 *)(iVar11 + -3);
      if (puVar7 == (undefined4 *)0x0) {
        param_1 = (undefined4 *)(iVar14 + -1);
        if (3 < (int)param_1) {
          iVar3 = *(int *)((int)this + 800);
          iVar5 = *(int *)((int)this + 0x324);
          iVar12 = (int)((int)(uintptr_t)param_1) * 0x10;
          iVar6 = *(int *)((int)this + 0x328);
          iVar11 = (int)((int)(uintptr_t)param_1) * 0x10;
          iVar1 = (int)((int)(uintptr_t)param_1) * 0x10;
          iVar2 = (int)((int)(uintptr_t)param_1) * 0x10;
          iVar9 = *(int *)((int)this + 0x324) - *(int *)((int)this + 0x328);
          local_20 = ((undefined4 *)GEN_TOP(((iVar14 - 5U >> 2) + 1)));
          param_1 = (undefined4 *)((int)param_1 + (int)local_20 * -4);
          puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x328) + -0x10 + iVar1)));
          puVar8 = ((undefined4 *)GEN_TOP(((iVar14 + -3) * 0x10 + *(int *)((int)this + 0x324))));
          puVar10 = (undefined4 *)(iVar3 + -8 + iVar2);
          puVar13 = (undefined4 *)(iVar5 + -8 + iVar12);
          puVar15 = (undefined4 *)(iVar3 + 8 + iVar11);
          do {
            puVar15[-2] = puVar15[-6];
            puVar15[-1] = puVar10[-1];
            *puVar15 = *puVar10;
            local_20 = (undefined4 *)((int)local_20 + -1);
            puVar8[8] = *(undefined4 *)((int)puVar7 + iVar9);
            *(undefined4 *)((int)puVar7 + iVar9 + 0x14) = puVar13[-1];
            *((undefined4 *)GEN_TOP(((int)puVar15 + (iVar5 - iVar3)))) = *puVar13;
            puVar7[4] = *puVar7;
            puVar7[5] = puVar7[1];
            *((undefined4 *)GEN_TOP(((int)puVar15 + (iVar6 - iVar3)))) = puVar7[2];
            puVar15[-6] = puVar15[-10];
            puVar10[-1] = puVar10[-5];
            *puVar10 = puVar10[-4];
            *(undefined4 *)((int)puVar7 + iVar9) = *puVar8;
            puVar13[-1] = puVar13[-5];
            *puVar13 = puVar13[-4];
            *puVar7 = puVar7[-4];
            puVar7[1] = puVar7[-3];
            puVar7[2] = puVar7[-2];
            puVar15[-10] = puVar15[-0xe];
            puVar10[-5] = puVar10[-9];
            puVar10[-4] = puVar10[-8];
            *puVar8 = puVar8[-4];
            puVar13[-5] = puVar13[-9];
            puVar13[-4] = puVar13[-8];
            puVar7[-4] = puVar7[-8];
            puVar7[-3] = puVar7[-7];
            puVar7[-2] = puVar7[-6];
            puVar15[-0xe] = puVar15[-0x12];
            puVar10[-9] = puVar10[-0xd];
            puVar10[-8] = puVar10[-0xc];
            puVar8[-4] = puVar8[-8];
            puVar13[-9] = puVar13[-0xd];
            puVar13[-8] = puVar13[-0xc];
            puVar7[-8] = puVar7[-0xc];
            puVar7[-7] = puVar7[-0xb];
            puVar7[-6] = puVar7[-10];
            puVar7 = puVar7 + -0x10;
            puVar8 = puVar8 + -0x10;
            puVar10 = puVar10 + -0x10;
            puVar13 = puVar13 + -0x10;
            puVar15 = puVar15 + -0x10;
          } while (local_20 != (undefined4 *)0x0);
        }
        if (0 < (int)param_1) {
          iVar14 = *(int *)((int)this + 0x324);
          iVar12 = *(int *)((int)this + 800);
          puVar7 = (undefined4 *)(iVar14 + (int)((int)(uintptr_t)param_1) * 0x10);
          iVar11 = *(int *)((int)this + 0x328);
          puVar8 = (undefined4 *)(iVar12 + -8 + (int)((int)(uintptr_t)param_1) * 0x10);
          puVar10 = puVar7 + -2;
          puVar13 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x328) + -8 + (int)((int)(uintptr_t)param_1) * 0x10)));
          do {
            *((undefined4 *)GEN_TOP(((int)puVar7 + (iVar12 - iVar14)))) = puVar8[-2];
            puVar8[3] = puVar8[-1];
            puVar8[4] = *puVar8;
            *puVar7 = puVar10[-2];
            puVar10[3] = puVar10[-1];
            puVar10[4] = *puVar10;
            *((undefined4 *)GEN_TOP(((int)puVar7 + (iVar11 - iVar14)))) = puVar13[-2];
            param_1 = (undefined4 *)((int)param_1 + -1);
            puVar13[3] = puVar13[-1];
            puVar13[4] = *puVar13;
            puVar8 = puVar8 + -4;
            puVar10 = puVar10 + -4;
            puVar13 = puVar13 + -4;
            puVar7 = puVar7 + -4;
          } while (0 < (int)param_1);
        }
        uVar4 = *(uint *)((int)this + 0x31c);
        puVar7 = *(undefined4 * PTR32 *)((int)this + 800);
        *puVar7 = *(undefined4 *)(uVar4 + 0x104);
        puVar7[1] = *(undefined4 *)(uVar4 + 0x108);
        puVar7[2] = *(undefined4 *)(uVar4 + 0x10c);
        puVar7 = *(undefined4 * PTR32 *)((int)this + 0x324);
        puVar8 = *(undefined4 * PTR32 *)((int)this + 0x328);
        *puVar7 = *(undefined4 *)(uVar4 + 0x11c);
        puVar7[1] = *(undefined4 *)(uVar4 + 0x120);
        puVar7[2] = *(undefined4 *)(uVar4 + 0x124);
        *puVar8 = *(undefined4 *)(uVar4 + 0x110);
        puVar8[1] = *(undefined4 *)(uVar4 + 0x114);
        puVar8[2] = *(undefined4 *)(uVar4 + 0x118);
        return uVar4;
      }
    }
  }
  else {
    puVar7 = *(undefined4 * PTR32 *)((int)this + 0x31c);
    iVar12 = puVar7[0x57];
    if (iVar12 == 1) {
      iVar12 = 0;
      if (3 < iVar14) {
        iVar11 = (iVar14 - 4U >> 2) + 1;
        iVar12 = iVar11 * 4;
        puVar8 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 800) + 8)));
        puVar10 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 800) + 0x18)));
        do {
          puVar8[-2] = puVar7[0x41];
          iVar11 = iVar11 + -1;
          puVar8[-1] = puVar7[0x42];
          *puVar8 = puVar7[0x43];
          puVar8[2] = puVar7[0x41];
          puVar10[-1] = puVar7[0x42];
          *puVar10 = puVar7[0x43];
          puVar8[6] = puVar7[0x41];
          puVar10[3] = puVar7[0x42];
          puVar10[4] = puVar7[0x43];
          puVar8[10] = puVar7[0x41];
          puVar10[7] = puVar7[0x42];
          puVar10[8] = puVar7[0x43];
          puVar8 = puVar8 + 0x10;
          puVar10 = puVar10 + 0x10;
        } while (iVar11 != 0);
      }
      if (iVar12 < iVar14) {
        iVar14 = iVar14 - iVar12;
        puVar8 = ((undefined4 *)GEN_TOP((iVar12 * 0x10 + *(int *)((int)this + 800))));
        do {
          iVar14 = iVar14 + -1;
          *puVar8 = puVar7[0x41];
          puVar8[1] = puVar7[0x42];
          puVar8[2] = puVar7[0x43];
          puVar8 = puVar8 + 4;
        } while (iVar14 != 0);
        return (uint)puVar7;
      }
    }
    else if (iVar12 == 2) {
      param_1 = (undefined4 *)0x0;
      if (3 < iVar14) {
        iVar12 = *(int *)((int)this + 800);
        iVar11 = *(int *)((int)this + 0x324);
        local_1c = ((undefined4 *)GEN_TOP(((iVar14 - 4U >> 2) + 1)));
        param_1 = (undefined4 *)((int)((int)(uintptr_t)local_1c) * 4);
        puVar8 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x324) + 0x10)));
        puVar10 = (undefined4 *)(iVar12 + 8);
        local_20 = (undefined4 *)(iVar12 + 0x18);
        do {
          puVar10[-2] = puVar7[0x41];
          puVar10[-1] = puVar7[0x42];
          *puVar10 = puVar7[0x43];
          puVar8[-4] = puVar7[0x47];
          puVar8[-3] = puVar7[0x48];
          *((undefined4 *)GEN_TOP(((iVar11 - iVar12) + -0x40 + (int)(puVar10 + 0x10)))) = puVar7[0x49];
          local_1c = (undefined4 *)((int)local_1c + -1);
          puVar10[2] = puVar7[0x41];
          local_20[-1] = puVar7[0x42];
          *local_20 = puVar7[0x43];
          *puVar8 = puVar7[0x47];
          puVar8[1] = puVar7[0x48];
          puVar8[2] = puVar7[0x49];
          puVar10[6] = puVar7[0x41];
          local_20[3] = puVar7[0x42];
          local_20[4] = puVar7[0x43];
          puVar8[4] = puVar7[0x47];
          puVar8[5] = puVar7[0x48];
          puVar8[6] = puVar7[0x49];
          puVar10[10] = puVar7[0x41];
          local_20[7] = puVar7[0x42];
          local_20[8] = puVar7[0x43];
          puVar8[8] = puVar7[0x47];
          puVar8[9] = puVar7[0x48];
          puVar8[10] = puVar7[0x49];
          puVar8 = puVar8 + 0x10;
          puVar10 = puVar10 + 0x10;
          local_20 = local_20 + 0x10;
        } while (local_1c != (undefined4 *)0x0);
      }
      if ((int)param_1 < iVar14) {
        iVar12 = *(int *)((int)this + 800);
        uVar4 = *(uint *)((int)this + 0x31c);
        iVar11 = *(int *)((int)this + 0x324);
        iVar14 = iVar14 - (int)param_1;
        puVar7 = (undefined4 *)(iVar11 + (int)((int)(uintptr_t)param_1) * 0x10);
        puVar8 = (undefined4 *)(iVar12 + 8 + (int)((int)(uintptr_t)param_1) * 0x10);
        do {
          *((undefined4 *)GEN_TOP(((int)puVar7 + (iVar12 - iVar11)))) = *(undefined4 *)(uVar4 + 0x104);
          iVar14 = iVar14 + -1;
          puVar8[-1] = *(undefined4 *)(uVar4 + 0x108);
          *puVar8 = *(undefined4 *)(uVar4 + 0x10c);
          *puVar7 = *(undefined4 *)(uVar4 + 0x11c);
          puVar7[1] = *(undefined4 *)(uVar4 + 0x120);
          puVar7[2] = *(undefined4 *)(uVar4 + 0x124);
          puVar7 = puVar7 + 4;
          puVar8 = puVar8 + 4;
        } while (iVar14 != 0);
        return uVar4;
      }
    }
    else if (iVar12 == 3) {
      local_10 = 0;
      if (3 < iVar14) {
        iVar12 = *(int *)((int)this + 0x324);
        iVar11 = *(int *)((int)this + 800);
        param_1 = (undefined4 *)(iVar12 + 0x20);
        puVar8 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x328) + 4)));
        local_1c = (undefined4 *)(iVar12 + 0x18);
        iVar1 = *(int *)((int)this + 0x328);
        puVar10 = (undefined4 *)(iVar11 + 8);
        puVar13 = (undefined4 *)(iVar11 + 0x18);
        iVar2 = *(int *)((int)this + 0x324);
        iVar3 = *(int *)((int)this + 0x328);
        local_20 = ((undefined4 *)GEN_TOP(((iVar14 - 4U >> 2) + 1)));
        local_10 = (int)((int)(uintptr_t)local_20) * 4;
        local_c = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x328) + 0x18)));
        do {
          puVar10[-2] = puVar7[0x41];
          puVar10[-1] = puVar7[0x42];
          *puVar10 = puVar7[0x43];
          param_1[-8] = puVar7[0x47];
          *((undefined4 *)GEN_TOP(((int)puVar8 + (iVar2 - iVar3)))) = puVar7[0x48];
          *((undefined4 *)GEN_TOP(((int)puVar10 + (iVar12 - iVar11)))) = puVar7[0x49];
          puVar8[-1] = puVar7[0x44];
          *puVar8 = puVar7[0x45];
          *((undefined4 *)GEN_TOP(((int)puVar10 + (iVar1 - iVar11)))) = puVar7[0x46];
          puVar10[2] = puVar7[0x41];
          puVar13[-1] = puVar7[0x42];
          *puVar13 = puVar7[0x43];
          param_1[-4] = puVar7[0x47];
          local_1c[-1] = puVar7[0x48];
          *local_1c = puVar7[0x49];
          puVar8[3] = puVar7[0x44];
          local_c[-1] = puVar7[0x45];
          *local_c = puVar7[0x46];
          puVar10[6] = puVar7[0x41];
          puVar13[3] = puVar7[0x42];
          puVar13[4] = puVar7[0x43];
          *param_1 = puVar7[0x47];
          local_1c[3] = puVar7[0x48];
          local_1c[4] = puVar7[0x49];
          puVar8[7] = puVar7[0x44];
          local_c[3] = puVar7[0x45];
          local_c[4] = puVar7[0x46];
          puVar10[10] = puVar7[0x41];
          puVar13[7] = puVar7[0x42];
          puVar13[8] = puVar7[0x43];
          param_1[4] = puVar7[0x47];
          local_1c[7] = puVar7[0x48];
          local_1c[8] = puVar7[0x49];
          puVar8[0xb] = puVar7[0x44];
          local_c[7] = puVar7[0x45];
          param_1 = param_1 + 0x10;
          local_c[8] = puVar7[0x46];
          local_1c = local_1c + 0x10;
          puVar8 = puVar8 + 0x10;
          puVar10 = puVar10 + 0x10;
          puVar13 = puVar13 + 0x10;
          local_20 = (undefined4 *)((int)local_20 + -1);
          local_c = local_c + 0x10;
        } while (local_20 != (undefined4 *)0x0);
      }
      if (local_10 < iVar14) {
        iVar12 = *(int *)((int)this + 800);
        iVar11 = *(int *)((int)this + 0x324);
        uVar4 = *(uint *)((int)this + 0x31c);
        iVar1 = *(int *)((int)this + 0x328);
        param_1 = (undefined4 *)(iVar14 - local_10);
        puVar7 = (undefined4 *)(iVar11 + local_10 * 0x10);
        puVar8 = (undefined4 *)(iVar1 + 8 + local_10 * 0x10);
        puVar10 = (undefined4 *)(iVar12 + 8 + local_10 * 0x10);
        do {
          *((undefined4 *)GEN_TOP(((int)puVar7 + (iVar12 - iVar11)))) = *(undefined4 *)(uVar4 + 0x104);
          puVar10[-1] = *(undefined4 *)(uVar4 + 0x108);
          param_1 = (undefined4 *)((int)param_1 + -1);
          *puVar10 = *(undefined4 *)(uVar4 + 0x10c);
          *puVar7 = *(undefined4 *)(uVar4 + 0x11c);
          puVar7[1] = *(undefined4 *)(uVar4 + 0x120);
          puVar7[2] = *(undefined4 *)(uVar4 + 0x124);
          *((undefined4 *)GEN_TOP(((int)puVar7 + (iVar1 - iVar11)))) = *(undefined4 *)(uVar4 + 0x110);
          puVar8[-1] = *(undefined4 *)(uVar4 + 0x114);
          *puVar8 = *(undefined4 *)(uVar4 + 0x118);
          puVar7 = puVar7 + 4;
          puVar8 = puVar8 + 4;
          puVar10 = puVar10 + 4;
        } while (param_1 != (undefined4 *)0x0);
        return uVar4;
      }
    }
  }
  return (uint)puVar7;
}

/* ref: Apricot::Engine::Instance::QuadParticleInstance::vf26 */
uint F_0098fd90(unsigned int gen_a0)
{
  GEN_ENTER(0x98fd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0098cee0(this,*(undefined4 *)(this + 0x2f0));
  uVar1 = F_0097ef70(this);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::DecalParticleInstance::vf25 */
uint F_0098fdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98fdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this);
  F_0097f2c0(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::DecalParticleInstance::vf26 */
uint F_0098fde0(unsigned int gen_a0)
{
  GEN_ENTER(0x98fde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0098cfd0(this,*(uint *)(this + 0x2f0));
  uVar1 = F_0097ef70(this);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::DecalRingParticleInstance::vf25 */
uint F_0098fe00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98fe00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this);
  F_0097f2c0(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::DecalRingParticleInstance::vf26 */
uint F_0098fe30(unsigned int gen_a0)
{
  GEN_ENTER(0x98fe30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0098cfd0(this,*(uint *)(this + 0x2f0));
  uVar1 = F_0097ef70(this);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::DiscParticleInstance::vf25 */
uint F_0098fe50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x98fe50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097ef70(this);
  F_0097f2c0(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::DiscParticleInstance::vf26 */
uint F_0098fe80(unsigned int gen_a0)
{
  GEN_ENTER(0x98fe80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  F_0098cfd0(this,*(uint *)(this + 0x304));
  uVar1 = *(undefined4 *)(this + 0x1a8);
  uVar2 = *(undefined4 *)(this + 0x1ac);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xd4))))(*(int * PTR32 *)(this + 0x29c))));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3)));
  ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,uVar1,uVar2,this + 0x2f9);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xd4))))(*(int * PTR32 *)(this + 0x29c))));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3)));
  ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,uVar1,uVar2,this + 0x2fe);
  uVar4 = F_0097ef70(this);
  return uVar4;
}

/* ref: FUN_0098ff40 */
unsigned int F_0098ff40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98ff40u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  float * pfVar2;
  
  pfVar1 = param_3;
  if (!((float10)*param_3 < (float10)*param_2)) {
    pfVar1 = param_2;
  }
  *param_1 = *pfVar1;
  pfVar1 = param_3;
  if (!((float10)param_3[1] < (float10)param_2[1])) {
    pfVar1 = param_2;
  }
  pfVar2 = param_3 + 2;
  param_1[1] = pfVar1[1];
  if (!((float10)*pfVar2 < (float10)param_2[2])) {
    pfVar2 = param_2 + 2;
  }
  param_1[2] = *pfVar2;
  if ((float10)param_3[3] < (float10)param_2[3]) {
    param_1[3] = param_3[3];
    return 0;
  }
  param_1[3] = param_2[3];
  return 0;
}

/* ref: FUN_0098ffb0 */
unsigned int F_0098ffb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x98ffb0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  float * pfVar2;
  
  pfVar1 = param_3;
  if (!((float10)*param_2 < (float10)*param_3)) {
    pfVar1 = param_2;
  }
  *param_1 = *pfVar1;
  pfVar1 = param_3 + 1;
  if (!((float10)param_2[1] < (float10)*pfVar1)) {
    pfVar1 = param_2 + 1;
  }
  pfVar2 = param_3 + 2;
  param_1[1] = *pfVar1;
  if (!((float10)param_2[2] < (float10)*pfVar2)) {
    pfVar2 = param_2 + 2;
  }
  param_1[2] = *pfVar2;
  if ((float10)param_2[3] < (float10)param_3[3]) {
    param_1[3] = param_3[3];
    return 0;
  }
  param_1[3] = param_2[3];
  return 0;
}

/* ref: FUN_00990020 */
unsigned int F_00990020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x990020u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  
  pfVar1 = param_3;
  if (!((float10)*param_3 < (float10)*param_2)) {
    pfVar1 = param_2;
  }
  *param_1 = *pfVar1;
  pfVar1 = param_3 + 1;
  if (!((float10)*pfVar1 < (float10)param_2[1])) {
    pfVar1 = param_2 + 1;
  }
  param_1[1] = *pfVar1;
  if ((float10)param_3[2] < (float10)param_2[2]) {
    param_1[2] = param_3[2];
    return 0;
  }
  param_1[2] = param_2[2];
  return 0;
}

/* ref: FUN_00990080 */
unsigned int F_00990080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x990080u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  
  pfVar1 = param_3;
  if (!((float10)*param_2 < (float10)*param_3)) {
    pfVar1 = param_2;
  }
  *param_1 = *pfVar1;
  pfVar1 = param_3 + 1;
  if (!((float10)param_2[1] < (float10)*pfVar1)) {
    pfVar1 = param_2 + 1;
  }
  param_1[1] = *pfVar1;
  if ((float10)param_2[2] < (float10)param_3[2]) {
    param_1[2] = param_3[2];
    return 0;
  }
  param_1[2] = param_2[2];
  return 0;
}

/* ref: FUN_009900e0 */
uint F_009900e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9900e0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) *
                                       (float10)*(float *)(param_2 + 8) +
                                      ((float10)*(float *)param_2 * (float10)*(float *)param_2 +
                                      (float10)*(float *)(param_2 + 4) *
                                      (float10)*(float *)(param_2 + 4))))))));
  *param_1 = fVar1;
  param_1[1] = fVar1;
  param_1[2] = fVar1;
  return (uint)param_1;
}

/* ref: FUN_00990130 */
uint F_00990130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x990130u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(float *)param_2;
  fVar1 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) *
                                                                (float10)*(float *)(param_2 + 8) +
                                                               (fVar1 * fVar1 +
                                                               (float10)*(float *)(param_2 + 4) *
                                                               (float10)*(float *)(param_2 + 4)))))))))));
  *param_1 = (float)(fVar1 * (float10)*(float *)param_2);
  param_1[1] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4))));
  param_1[2] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8))));
  return (uint)param_1;
}

/* ref: FUN_009901a0 */
unsigned int F_009901a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9901a0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_3 + 8);
  fVar5 = (float10)((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 +
                          ((float10)*(float *)param_2 * (float10)*(float *)param_3 +
                          (float10)fVar1 * (float10)fVar2))));
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1092098);
  *param_1 = ((float)GEN_TOF(((float10)*(float *)param_3 -
                    (float10)((float)GEN_TOF(((float10)(float)(fVar5 * (float10)*(float *)param_2) * fVar6))))));
  param_1[1] = ((float)GEN_TOF(((float10)fVar2 -
                      (float10)((float)GEN_TOF(((float10)(float)(fVar5 * (float10)fVar1) * fVar6))))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar4 -
                      (float10)((float)GEN_TOF((fVar6 * (float10)(float)((float10)fVar3 * fVar5)))))));
  return 0;
}

/* ref: FUN_00990270 */
unsigned int F_00990270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x990270u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x132f428));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x132f42c));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x132f430));
  param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x132f434));
  param_1[4] = GEN_FLT_TO(param_1[4], REFG(float, 0x132f438));
  param_1[5] = GEN_FLT_TO(param_1[5], REFG(float, 0x132f43c));
  param_1[6] = GEN_FLT_TO(param_1[6], REFG(float, 0x132f440));
  param_1[7] = GEN_FLT_TO(param_1[7], REFG(float, 0x132f444));
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x132f448));
  param_1[9] = *param_2;
  param_1[10] = param_2[1];
  param_1[0xb] = param_2[2];
  return 0;
}

/* ref: FUN_00990300 */
byte F_00990300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x990300u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_3 + 4) - (float10)*(float *)(param_2 + 4))));
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_3 + 8) - (float10)*(float *)(param_2 + 8))));
  fVar7 = (float10)fVar1;
  fVar8 = (float10)(float)((float10)*(float *)param_3 - (float10)*(float *)param_2);
  fVar9 = (float10)fVar2;
  fVar7 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar9 * fVar9 +
                                                               (fVar8 * fVar8 + fVar7 * fVar7))))))))));
  fVar3 = ((float)GEN_TOF((fVar7 * (float10)(float)((float10)*(float *)param_3 - (float10)*(float *)param_2))))
  ;
  fVar1 = (float)((float10)fVar1 * fVar7);
  fVar2 = (float)(fVar7 * (float10)fVar2);
  fVar7 = (float10)*param_4;
  fVar8 = (float10)*param_4;
  fVar7 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)param_4[2] *
                                                                (float10)param_4[2] +
                                                               (fVar7 * fVar7 +
                                                               (float10)param_4[1] *
                                                               (float10)param_4[1]))))))))));
  fVar9 = (float10)fVar1;
  fVar10 = (float10)fVar3;
  fVar11 = (float10)fVar2;
  if (*(double *)&REFG(undefined, 0x10b3238) <
      (double)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((fVar9 * (float10)(float)((float10)param_4[1] * fVar7) +
                                          fVar10 * (float10)(float)(fVar7 * fVar8)) +
                                         fVar11 * (float10)(float)(fVar7 * (float10)param_4[2])))))))) {
    return 0;
  }
  fVar4 = (float)((float10)param_4[1] * fVar11 - (float10)param_4[2] * fVar9);
  fVar5 = (float)((float10)param_4[2] * fVar10 - fVar8 * fVar11);
  fVar6 = (float)(fVar8 * fVar9 - (float10)param_4[1] * fVar10);
  fVar7 = (float10)fVar5;
  fVar8 = (float10)fVar4;
  fVar9 = (float10)fVar6;
  fVar7 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar9 * fVar9 +
                                                               (fVar8 * fVar8 + fVar7 * fVar7))))))))));
  fVar4 = (float)(fVar7 * (float10)fVar4);
  fVar5 = (float)((float10)fVar5 * fVar7);
  fVar6 = (float)(fVar7 * (float10)fVar6);
  fVar7 = (float10)fVar6;
  fVar8 = (float10)fVar5;
  fVar9 = (float10)fVar4;
  *param_1 = fVar4;
  param_1[1] = fVar5;
  param_1[2] = fVar6;
  param_1[4] = (float)(fVar9 * (float10)fVar2 - (float10)fVar3 * fVar7);
  param_1[3] = (float)((float10)fVar1 * fVar7 - (float10)fVar2 * fVar8);
  param_1[5] = (float)(fVar8 * (float10)fVar3 - (float10)fVar1 * fVar9);
  param_1[6] = fVar3;
  param_1[7] = fVar1;
  param_1[8] = fVar2;
  param_1[9] = *(float *)param_2;
  param_1[10] = *(float *)(param_2 + 4);
  param_1[0xb] = *(float *)(param_2 + 8);
  return 1;
}

/* ref: FUN_00990560 */
byte F_00990560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x990560u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  uint uVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  float10 fVar33;
  float10 fVar34;
  float10 fVar35;
  float10 fVar36;
  float10 fVar37;
  float10 fVar38;
  float10 fVar39;
  float10 fVar40;
  
  fVar27 = REFG(float, 0x1087f04);
  fVar7 = *(float *)(param_2 + 0x28);
  fVar8 = *(float *)(param_2 + 0x2c);
  fVar9 = *(float *)(param_2 + 0x34);
  fVar10 = *(float *)(param_2 + 0x38);
  fVar11 = *(float *)(param_2 + 0x3c);
  fVar1 = *(float *)(param_2 + 0x10);
  fVar2 = *(float *)(param_2 + 0x18);
  fVar3 = *(float *)(param_2 + 0x1c);
  fVar4 = *(float *)(param_2 + 0x20);
  fVar5 = *(float *)(param_2 + 0x24);
  fVar6 = *(float *)(param_2 + 0x30);
  fVar37 = (float10)fVar7 * (float10)fVar11 - (float10)fVar8 * (float10)fVar10;
  fVar40 = (float10)fVar5 * (float10)fVar11 - (float10)fVar9 * (float10)fVar8;
  fVar38 = (float10)fVar10 * (float10)fVar5 - (float10)fVar9 * (float10)fVar7;
  fVar29 = (float10)*(float *)(param_2 + 0x14);
  fVar30 = (float10)fVar2;
  fVar31 = (float10)*(float *)(param_2 + 8);
  fVar32 = (float10)*(float *)(param_2 + 4);
  fVar33 = (float10)*(float *)(param_2 + 0xc);
  dVar12 = (double)((float10)fVar11 * fVar30 - (float10)fVar10 * (float10)fVar3);
  dVar13 = (double)((float10)fVar11 * fVar29 - (float10)fVar9 * (float10)fVar3);
  dVar14 = (double)((float10)fVar10 * fVar29 - (float10)fVar9 * fVar30);
  dVar15 = (double)((float10)fVar8 * fVar29 - (float10)fVar5 * (float10)fVar3);
  dVar16 = (double)((float10)fVar8 * fVar30 - (float10)fVar7 * (float10)fVar3);
  dVar17 = (double)((float10)fVar7 * fVar29 - (float10)fVar5 * fVar30);
  dVar18 = (double)((float10)fVar11 * (float10)fVar4 - (float10)fVar6 * (float10)fVar8);
  fVar39 = (float10)fVar10 * (float10)fVar4 - (float10)fVar6 * (float10)fVar7;
  dVar19 = (double)fVar39;
  fVar34 = (float10)*(float *)param_2;
  dVar20 = (double)((float10)fVar11 * (float10)fVar1 - (float10)fVar6 * (float10)fVar3);
  dVar21 = (double)((float10)fVar10 * (float10)fVar1 - (float10)fVar6 * (float10)fVar2);
  dVar22 = (double)((float10)fVar8 * (float10)fVar1 - (float10)fVar4 * (float10)fVar3);
  dVar23 = (double)((float10)fVar7 * (float10)fVar1 - (float10)fVar4 * (float10)fVar2);
  dVar24 = (double)((float10)fVar9 * (float10)fVar4 - (float10)fVar6 * (float10)fVar5);
  dVar25 = (double)((float10)fVar9 * (float10)fVar1 - (float10)fVar6 * fVar29);
  dVar26 = (double)((float10)fVar5 * (float10)fVar1 - (float10)fVar4 * fVar29);
  fVar39 = (float10)((float)GEN_TOF(((fVar30 * (float10)dVar18 - (float10)fVar1 * (float10)(double)fVar37) -
                           (float10)fVar3 * fVar39)));
  fVar30 = (float10)((float)GEN_TOF(((float10)fVar3 * fVar38 + (fVar29 * fVar37 - fVar30 * fVar40))));
  fVar35 = (float10)((float)GEN_TOF(((float10)fVar3 * (float10)dVar24 +
                           ((float10)fVar1 * (float10)(double)fVar40 - fVar29 * (float10)dVar18))));
  fVar29 = (float10)((float)GEN_TOF(((fVar29 * (float10)dVar19 - (float10)fVar1 * (float10)(double)fVar38) -
                           (float10)fVar2 * (float10)dVar24)));
  fVar1 = ((float)GEN_TOF((((fVar39 * fVar32 + fVar30 * fVar34) + fVar35 * fVar31) + fVar29 * fVar33)));
  fVar36 = (float10)fVar1;
  if (((float10)*(double *)&REFG(undefined, 0x10de528) <= fVar36) && (fVar1 <= ((float)GEN_TOF((*(float (*)[1])REFP(0x10de524))[0])))) {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = fVar27;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = fVar27;
    param_1[0xb] = 0.0;
    uVar28 = REFG(float, 0x10920d0);
    param_1[0xc] = gen_bits2f((uint)gen_fl2bits(fVar6) ^ REFG(uint, 0x10920d0));
    param_1[0xd] = gen_bits2f((uint)gen_fl2bits(fVar9) ^ uVar28);
    param_1[0xe] = gen_bits2f((uint)gen_fl2bits(fVar10) ^ uVar28);
    param_1[0xf] = fVar27;
    return 0;
  }
  fVar36 = (float10)(float)((float10)1 / fVar36);
  *param_1 = (float)(fVar36 * fVar30);
  param_1[1] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF(((fVar31 * fVar40 - fVar32 * fVar37) -
                                                fVar33 * fVar38))))));
  param_1[2] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF((fVar33 * (float10)dVar14 +
                                                (fVar32 * (float10)dVar12 - fVar31 * (float10)dVar13
                                                )))))));
  param_1[3] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF(((fVar31 * (float10)dVar15 -
                                                 fVar32 * (float10)dVar16) -
                                                fVar33 * (float10)dVar17))))));
  param_1[4] = (float)(fVar36 * fVar39);
  param_1[5] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF((fVar33 * (float10)dVar19 +
                                                (fVar34 * (float10)(double)fVar37 -
                                                fVar31 * (float10)dVar18)))))));
  param_1[6] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF(((fVar31 * (float10)dVar20 -
                                                 fVar34 * (float10)dVar12) -
                                                fVar33 * (float10)dVar21))))));
  param_1[7] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF((fVar33 * (float10)dVar23 +
                                                ((float10)dVar16 * fVar34 - fVar31 * (float10)dVar22
                                                )))))));
  param_1[8] = (float)(fVar36 * fVar35);
  param_1[9] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF(((fVar32 * (float10)dVar18 -
                                                 fVar34 * (float10)(double)fVar40) -
                                                fVar33 * (float10)dVar24))))));
  param_1[10] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF((fVar33 * (float10)dVar25 +
                                                 ((float10)dVar13 * fVar34 -
                                                 fVar32 * (float10)dVar20)))))));
  param_1[0xb] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF(((fVar32 * (float10)dVar22 -
                                                   fVar34 * (float10)dVar15) -
                                                  fVar33 * (float10)dVar26))))));
  param_1[0xc] = (float)(fVar36 * fVar29);
  param_1[0xd] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF(((float10)dVar24 * fVar31 +
                                                  (fVar34 * (float10)(double)fVar38 -
                                                  fVar32 * (float10)dVar19)))))));
  param_1[0xe] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF(((fVar32 * (float10)dVar21 -
                                                   fVar34 * (float10)dVar14) -
                                                  fVar31 * (float10)dVar25))))));
  param_1[0xf] = ((float)GEN_TOF((fVar36 * (float10)((float)GEN_TOF((fVar31 * (float10)dVar26 +
                                                  ((float10)dVar17 * fVar34 -
                                                  fVar32 * (float10)dVar23)))))));
  return 1;
}

/* ref: FUN_00990ad0 */
uint F_00990ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x990ad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x34)),param_1,REFG(undefined4, 0x108cc50));
  uVar5 = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = ((undefined1 *)(gen_frame + 0x34));
  uVar4 = 0;
  puVar3 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined1 * PTR32 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined1 * PTR32 *)(gen_frame + 0x30));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 5;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x20)) = 5000;
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10100;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  (*(undefined1 *)(gen_frame + 0x2a)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x34)));
  uVar2 = F_00513dc0(uVar2,puVar3,uVar4,uVar5);
  uVar2 = *(uint *)(uVar2 + 0xa0);
  piVar1 = (int *)(uVar2 + 4);
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  F_0042c880(((undefined1 *)(gen_frame + 0x34)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar2;
}

/* ref: FUN_00990b80 */
uint F_00990b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x990b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dee60));
  LOCK();
  *(undefined4 *)((int)this + 4) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((int)this + 8) = 0;
  UNLOCK();
  F_0042cbc0((undefined *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = param_2;
  return (uint)this;
}

/* ref: FUN_00990bc0 */
uint F_00990bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x990bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (*(int *)((int)this + 0x60) != 0) {
    LOCK();
    *(undefined4 *)((int)this + 8) = 1;
    UNLOCK();
  }
  piVar2 = (int *)((int)this + 8);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  return (uint)(iVar1 == 1);
}

/* ref: FUN_00990c00 */
byte F_00990c00(unsigned int gen_a0)
{
  GEN_ENTER(0x990c00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x40) + 100)));
  if (iVar1 != 0) {
    piVar2 = (int *)(iVar1 + 0x8c);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    return 7 < iVar1;
  }
  return 0;
}

/* ref: FUN_00990c20 */
uint F_00990c20(unsigned int gen_a0)
{
  GEN_ENTER(0x990c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = this;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  F_00982d80(this,0);
  return (uint)this;
}

/* ref: Apricot::ApricotListenner::vf14 */
byte F_00990d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x990d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  
  (*(float *)(gen_frame + 0x40)) = *param_1;
  (*(float *)(gen_frame + 0x48)) = param_1[2];
  (*(float *)(gen_frame + 0x44)) = param_1[1];
  (*(float *)(gen_frame + 0x30)) = *param_2;
  (*(float *)(gen_frame + 0x34)) = param_2[1];
  (*(float *)(gen_frame + 0x38)) = param_2[2];
  fVar1 = (float)((float10)*param_2 - (float10)*param_1);
  (*(float *)(gen_frame + 0x20)) = fVar1;
  fVar2 = (float)((float10)param_2[1] - (float10)param_1[1]);
  (*(float *)(gen_frame + 0x24)) = fVar2;
  fVar3 = (float)((float10)param_2[2] - (float10)param_1[2]);
  (*(float *)(gen_frame + 0x28)) = fVar3;
  (*(float *)(gen_frame + 0x30)) = fVar1;
  (*(float *)(gen_frame + 0x34)) = fVar2;
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar1 = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2) +
                 (float10)fVar3 * (float10)fVar3)));
  (*(float *)(gen_frame + 0x5c)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x5c)) = fVar1;
  if ((float10)REFG(float, 0x10947f8) < (float10)fVar1) {
    F_005fe2e0(&(*(float *)(gen_frame + 0x20)),(uint)&(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x40));
    (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x44));
    (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x20));
    (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x24));
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x28));
    bVar4 = F_00a1c690(&(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x5c)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x30)));
    if (bVar4 != 0) {
      *param_3 = (*(float *)(gen_frame + 0x20));
      param_3[1] = (*(float *)(gen_frame + 0x24));
      param_3[2] = (*(float *)(gen_frame + 0x28));
      *param_4 = (*(float *)(gen_frame + 0x30));
      param_4[1] = (*(float *)(gen_frame + 0x34));
      param_4[2] = (*(float *)(gen_frame + 0x38));
      return 1;
    }
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf17 */
uint F_00990fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x990fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  F_004aa490(REFG(void * PTR32, 0x1371290),param_2,param_1);
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(SQRT((float10)*param_2)));
  *param_2 = ((float)GEN_TOF(SQRT((float10)*param_2)));
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(SQRT((float10)param_2[1])));
  param_2[1] = ((float)GEN_TOF(SQRT((float10)param_2[1])));
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(SQRT((float10)param_2[2])));
  param_2[2] = ((float)GEN_TOF(SQRT((float10)param_2[2])));
  iVar1 = *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1371290) + 0x840)));
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(SQRT((float10)*(float *)(iVar1 + 0x14))));
  *param_4 = ((float)GEN_TOF(SQRT((float10)*(float *)(iVar1 + 0x14))));
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(SQRT((float10)*(float *)(iVar1 + 0x18))));
  param_4[1] = ((float)GEN_TOF(SQRT((float10)*(float *)(iVar1 + 0x18))));
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(SQRT((float10)*(float *)(iVar1 + 0x1c))));
  param_4[2] = ((float)GEN_TOF(SQRT((float10)*(float *)(iVar1 + 0x1c))));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  puVar2 = (undefined4 *)F_004f4130(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),*(int *)(iVar1 + 0x10) + 0x10);
  *param_3 = *puVar2;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  uVar3 = F_004f4130(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),*(int *)(iVar1 + 0x10) + 0x10);
  param_3[1] = *(undefined4 *)(uVar3 + 4);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  uVar3 = F_004f4130(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),*(int *)(iVar1 + 0x10) + 0x10);
  param_3[2] = *(undefined4 *)(uVar3 + 8);
  return uVar3;
}

/* ref: Apricot::ApricotListenner::vf36 */
uint F_00991110(unsigned int gen_a0)
{
  GEN_ENTER(0x991110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xf0) - *(int *)(in_ecx + 0xec) >> 2;
}

/* ref: Apricot::ApricotListenner::vf37 */
uint F_00991120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x991120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0xec) + param_2 * 4)));
  if (iVar1 != 0) {
    return iVar1 + 0x90;
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf18 */
uint F_00991150(void)
{
  GEN_ENTER(0x991150u, 0u, 0u, 0u, 0u);
  return *(int *)(REFG(int, 0x1371280) + 300) - *(int *)(REFG(int, 0x1371280) + 0x128) >> 2;
}

/* ref: Apricot::ApricotListenner::vf19 */
float10 F_00991170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x991170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float10 fVar1;
  
  fVar1 = (float10)F_00624af0(REFG(void * PTR32, 0x1371280),param_2,param_3,param_4,param_5,param_6);
  *param_4 = ((float)GEN_TOF(SQRT((float10)*param_4)));
  param_4[1] = ((float)GEN_TOF(SQRT((float10)param_4[1])));
  param_4[2] = ((float)GEN_TOF(SQRT((float10)param_4[2])));
  return fVar1;
}

/* ref: Apricot::ApricotListenner::vf20 */
uint F_009911d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9911d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  *(undefined1 *)(in_ecx + 0xa0) = 0;
  uVar1 = REFG(undefined4, 0x137128c);
  *(undefined4 *)(REFG(undefined4, 0x137128c) + 0x1684) = 0;
  *(undefined4 *)(REFG(undefined4, 0x137128c) + 0x168c) = 0;
  return uVar1;
}

/* ref: Apricot::ApricotListenner::vf21 */
uint F_00991200(unsigned int gen_a0)
{
  GEN_ENTER(0x991200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined * pAVar5;
  undefined * pvVar6;
  uint uVar7;
  
  pvVar6 = REFG(void * PTR32, 0x1371278);
  if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x1c))) != '\0') {
    if (this[0xa0] == (undefined1)0x0) {
      uVar7 = F_0067a900(REFG(void * PTR32, 0x137128c),9,0);
      return uVar7;
    }
    fVar4 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)REFG(void * PTR32, 0x137128c) + 0x168c))) *
                   (float10)*((float *)GEN_TOP(((int)REFG(void * PTR32, 0x137128c) + 0x1684))))));
    (*(float *)(gen_frame + 0x8)) = fVar4;
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xa8) * (float10)*(float *)(this + 0xa4))));
    if ((float10)fVar4 <=
        (float10)((float)GEN_TOF(((float10)*(float *)(this + 0xa8) * (float10)*(float *)(this + 0xa4))))) {
      F_0067a900(REFG(void * PTR32, 0x137128c),9,1);
      *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137128c) + 0x167c))) = 0;
      *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137128c) + 0x1684))) = *(undefined4 *)(this + 0xa4);
      (*(float *)(gen_frame + 0x8)) = 0.0;
      (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
      pAVar5 = this + 0xa8;
      if (!((float10)0 < (float10)*(float *)(this + 0xa8))) {
        pAVar5 = (undefined *)&(*(float *)(gen_frame + 0x8));
      }
      if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*(float *)pAVar5)) ||
          (REFG(float, 0x1087f04) < *(float *)pAVar5 || REFG(uint, 0x1087f04) == *(float *)pAVar5)) {
        pAVar5 = (undefined *)&(*(float *)(gen_frame + 0x4));
      }
      *((float *)GEN_TOP(((int)REFG(void * PTR32, 0x137128c) + 0x168c))) = *(float *)pAVar5;
      *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137128c) + 0x1690))) = *(undefined4 *)(this + 0xac);
      uVar1 = *(undefined4 *)(this + 0xb4);
      *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137128c) + 0x1694))) = *(undefined4 *)(this + 0xb0);
      (*(float *)(gen_frame + 0x4)) = gen_bits2f(uVar1);
      *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137128c) + 0x1698))) = uVar1;
      pvVar6 = REFG(void * PTR32, 0x137128c);
      uVar1 = *(undefined4 *)(this + 0xc4);
      uVar2 = *(undefined4 *)(this + 200);
      uVar3 = *(undefined4 *)(this + 0xcc);
      *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137128c) + 0x169c))) = *(undefined4 *)(this + 0xc0);
      *(undefined4 *)((int)pvVar6 + 0x16a0) = uVar1;
      (*(float *)(gen_frame + 0x4)) = gen_bits2f(uVar3);
      *(undefined4 *)((int)pvVar6 + 0x16a4) = uVar2;
      *(undefined4 *)((int)pvVar6 + 0x16a8) = uVar3;
    }
  }
  return (uint)pvVar6;
}

/* ref: Apricot::ApricotDeviceListenner::vf4 */
uint F_00991400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x991400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = (int *)F_004dcc90(param_1,(-(uint)((char)param_2 != '\0') & 0xfffffffd) + 4,10);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10de600));
      puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
      puVar2[2] = piVar1;
      puVar2[3] = 1;
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10dee84));
      puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x10dee7c));
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      return (uint)puVar2;
    }
  }
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf5 */
uint F_009914b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9914b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = (int *)F_004dccf0(param_1,1,(-(uint)((char)param_2 != '\0') & 0xfffffffd) + 4,10);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10de610));
      puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
      puVar2[2] = piVar1;
      puVar2[3] = 1;
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10dee9c));
      puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x10dee94));
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      return (uint)puVar2;
    }
  }
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf6 */
uint F_00991560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x991560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = (int *)F_00b4ec10(param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10de620));
      puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
      puVar2[2] = piVar1;
      puVar2[3] = 1;
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10deeb4));
      puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x10deeac));
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      return (uint)puVar2;
    }
  }
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf7 */
uint F_00991600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x991600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    if (REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) {
      pvVar1 = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
      if (pvVar1 != (undefined *)0x0) {
        uVar2 = F_009e1ac0(pvVar1,*(undefined4 *)(REFG(int, 0x1371288) + 0x38));
        return uVar2;
      }
    }
  }
  else if ((param_1 == 1) && (REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0)) {
    pvVar1 = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (pvVar1 != (undefined *)0x0) {
      uVar2 = F_009e1ac0(pvVar1,*(undefined4 *)(REFG(int, 0x1371288) + 0x3c));
      return uVar2;
    }
  }
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf8 */
uint F_00991690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x991690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  if ((char)param_1 == '\0') {
    iVar1 = 7;
  }
  else {
    iVar1 = ((char)param_3 != '\0') + 3;
  }
  uVar2 = (uint)((char)param_1 != '\0') | ((uint)((char)param_2 != '\0') | iVar1 * 2) * 2;
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0x50))) =
       uVar2;
  return uVar2;
}

/* ref: Apricot::ApricotDeviceListenner::vf11 */
uint F_009916f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9916f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = false;
  uVar3 = REFG(undefined4, 0x1302354);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff541 | 0x541;
    break;
  case 1: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff201 | 0x201;
    break;
  case 2: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff141 | 0x141;
    goto switchD_00991702_default;
  case 3: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff145 | 0x145;
    break;
  case 4: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff311 | 0x311;
    goto switchD_00991702_default;
  case 5: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff091 | 0x91;
    break;
  case 6: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff117 | 0x117;
    break;
  case 7: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff119 | 0x119;
    break;
  case 8: ;
    uVar3 = REFG(undefined4, 0x1302354) & 0xfffff540 | 0x540;
    break;
  default: ;
    goto switchD_00991702_default;
  }
  bVar2 = true;
switchD_00991702_default: ;
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  if (((byte)(*(uint *)(iVar1 + 8) >> 0x13) & 0xf) < 9) {
    if (bVar2) {
      *(uint *)(iVar1 + 0x38) = uVar3 & 0x7800fff;
      return uVar3 & 0x7800fff;
    }
  }
  else if (bVar2) {
    uVar3 = uVar3 & 0x7a88fff | 0x288000;
    *(uint *)(iVar1 + 0x38) = uVar3;
    return uVar3;
  }
  uVar3 = uVar3 & 0x7880fff | 0x80000;
  *(uint *)(iVar1 + 0x38) = uVar3;
  return uVar3;
}

/* ref: Apricot::ApricotDeviceListenner::vf13 */
uint F_00991810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x991810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 8) != 0)) {
    iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
    *((uint *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2ac + *(int *)(this + param_1 * 4 + 0x210) * 8))) =
         *(uint *)(this + param_1 * 4 + 0x240) & 0xfffffff;
    uVar2 = *(uint *)(this + param_1 * 4 + 0x210);
    *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2a8 + uVar2 * 8))) = *(undefined4 *)(param_2 + 8);
    return uVar2;
  }
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2ac + *(int *)(this + param_1 * 4 + 0x210) * 8))) = 0;
  uVar2 = *(uint *)(this + param_1 * 4 + 0x210);
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2a8 + uVar2 * 8))) = *(undefined4 *)(this + 0xc);
  return uVar2;
}

/* ref: Apricot::ApricotDeviceListenner::vf14 */
uint F_009918d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9918d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2ac + *(int *)(this + param_1 * 4 + 0x210) * 8))) = 0x2a
  ;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2a8 + *(int *)(this + param_1 * 4 + 0x210) * 8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x14);
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2ac + *(int *)(this + param_1 * 4 + 0x214) * 8))) = 0x2a
  ;
  uVar2 = *(uint *)(this + param_1 * 4 + 0x214);
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2a8 + uVar2 * 8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x18);
  return uVar2;
}

/* ref: Apricot::ApricotDeviceListenner::vf15 */
uint F_00991970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x991970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2ac + *(int *)(this + param_1 * 4 + 0x210) * 8))) = 0x2a
  ;
  uVar2 = *(uint *)(this + param_1 * 4 + 0x210);
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2a8 + uVar2 * 8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x20);
  return uVar2;
}

/* ref: Apricot::ApricotDeviceListenner::vf16 */
uint F_009919e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9919e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * PTR32 * ppuVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  
  iVar2 = (*(int *)&gen_args[1]);
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4 + 0x240))) =
       *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4 + 0x240))) ^
       (*(int *)(&REFG(undefined, 0x10defc8) + (*(int *)&gen_args[2]) * 4) << 6 ^ *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4 + 0x240)))) & 0x3c0;
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4 + 0x240))) =
       (*(int *)(&REFG(undefined, 0x10defb4) + (*(int *)&gen_args[2]) * 4) << 0x18 ^ *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4 + 0x240)))) &
       0x7000000 ^ *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4 + 0x240)));
  ppuVar1 = &REFG(float, 0x10defa0) + (*(int *)&gen_args[2]);
  (*(int *)&gen_args[1]) = (int)((double)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppuVar1))) * *(double *)&REFG(undefined, 0x10968a0));
  (*(int *)&gen_args[2]) = 0x1ff;
  piVar3 = &(*(int *)&gen_args[1]);
  if (0x1fe < (int)((double)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppuVar1))) * *(double *)&REFG(undefined, 0x10968a0))) {
    piVar3 = &(*(int *)&gen_args[2]);
  }
  (*(int *)&gen_args[1]) = *piVar3;
  (*(int *)&gen_args[2]) = 0xfffffe00;
  piVar4 = &(*(int *)&gen_args[2]);
  if (-0x201 < *piVar3) {
    piVar4 = &(*(int *)&gen_args[1]);
  }
  uVar5 = (*piVar4 << 10 ^ *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar2 * 4 + 0x240)))) & 0xffc00;
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar2 * 4 + 0x240))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + iVar2 * 4 + 0x240))) ^ uVar5;
  return uVar5;
}

/* ref: Apricot::ApricotDeviceListenner::vf18 */
uint F_00991a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x991a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *(undefined4 *)(uVar2 + 0x68 + param_1 * 8) = *(undefined4 *)(param_2 + 8);
  puVar1 = (uint *)(uVar2 + 0x6c + param_1 * 8);
  *puVar1 = *puVar1 ^ (param_3 << 8 ^ *(uint *)(uVar2 + 0x6c + param_1 * 8)) & 0x7fffff00;
  *(undefined1 *)(uVar2 + 0x6c + param_1 * 8) = (undefined1)param_4;
  puVar1 = (uint *)(uVar2 + 0x6c + param_1 * 8);
  *puVar1 = *puVar1 & 0x7fffffff;
  return uVar2;
}

/* ref: Apricot::ApricotDeviceListenner::vf19 */
uint F_00991ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x991ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *(undefined4 *)(uVar1 + 0x48) = *(undefined4 *)(param_1 + 8);
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf20 */
uint F_00991b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x991b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *(undefined4 *)(uVar1 + 0x4c) = *(undefined4 *)(param_1 + 8);
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf21 */
uint F_00991b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x991b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_004d9920(*(undefined * PTR32 *)(this + param_1 * 8 + 0x14),0,param_3 << 4,2);
  uVar3 = 0;
  if (uVar2 != 0) {
    F_00c46aa0(uVar2,param_2,param_3 << 4);
    iVar1 = REFG(int, 0x15d6870);
    *((undefined4 *)GEN_TOP((*(int *)(this + param_1 * 8 + 0x14) + 0x24))) = 0;
    uVar3 = *(uint *)(this + param_1 * 8 + 0x10);
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + iVar1 * 4) + 0x1a8))) + 0xa8 + uVar3 * 4))) =
         *(undefined4 *)(this + param_1 * 8 + 0x14);
  }
  return uVar3;
}

/* ref: Apricot::ApricotDeviceListenner::vf22 */
uint F_00991bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x991bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *(undefined4 *)(uVar1 + 0x40) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(uVar1 + 0x60) = 0;
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf23 */
uint F_00991be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x991be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_004d9920(*(undefined * PTR32 *)(this + param_1 * 8 + 0x94),0,param_3 << 4,2);
  uVar3 = 0;
  if (uVar2 != 0) {
    F_00c46aa0(uVar2,param_2,param_3 << 4);
    iVar1 = REFG(int, 0x15d6870);
    *((undefined4 *)GEN_TOP((*(int *)(this + param_1 * 8 + 0x94) + 0x24))) = 0;
    uVar3 = *(uint *)(this + param_1 * 8 + 0x90);
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + iVar1 * 4) + 0x1a8))) + 0xa8 + uVar3 * 4))) =
         *(undefined4 *)(this + param_1 * 8 + 0x94);
  }
  return uVar3;
}

/* ref: Apricot::ApricotDeviceListenner::vf24 */
uint F_00991c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x991c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *(undefined4 *)(uVar1 + 0x44) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(uVar1 + 0x60) = 0;
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf28 */
uint F_00991c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x991c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = F_004d68c0(*(undefined * PTR32 *)(param_1 + 8),param_2,param_3,2);
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf30 */
uint F_00991cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x991cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_004d6970(*(undefined * PTR32 *)(param_1 + 8));
  }
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf27 */
uint F_00991ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x991ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = F_004d6a30(*(undefined * PTR32 *)(param_1 + 8),param_2,param_3,2);
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf29 */
uint F_00991d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x991d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_004d6ae0(*(undefined * PTR32 *)(param_1 + 8));
  }
  return uVar1;
}

/* ref: FUN_00991d30 */
uint F_00991d30(unsigned int gen_a0)
{
  GEN_ENTER(0x991d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10de6fc));
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = (undefined4 *)((int)this + 0x10);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  F_00982d80((undefined *)((int)this + 0x10),0);
  return (uint)this;
}

/* ref: Apricot::ApricotInstanceListenner::vf7 */
byte F_00992470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x992470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  if (param_5 == -1) {
    uVar2 = *(uint *)(this + 0x54);
  }
  else {
    uVar2 = *(uint *)(this + param_5 * 4 + 0x58);
  }
  if ((uVar2 < 0x158) && (piVar3 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar2])), piVar3 != (int *)0x0)) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xb8))(piVar3);
    if ((char)uVar2 != '\0') {
      if (param_4 == 0) {
        piVar3 = piVar3 + 0x5b0;
      }
      else {
        if (param_4 != 1) goto LAB_009925c8;
        piVar3 = piVar3 + 0x798;
      }
      if (piVar3 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3,3);
        if ((char)uVar2 != '\0') {
          ((code *)*(gen_code32 *)(*piVar3 + 0x40))(piVar3,((undefined1 *)(gen_frame + 0x0)),3);
          *param_1 = (*(float *)(gen_frame + 0x30));
          param_1[1] = (*(float *)(gen_frame + 0x34));
          param_1[2] = (*(float *)(gen_frame + 0x38));
          uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3,5);
          if ((char)uVar2 != '\0') {
            ((code *)*(gen_code32 *)(*piVar3 + 0x40))(piVar3,((undefined1 *)(gen_frame + 0x0)),5);
            *param_3 = (*(float *)(gen_frame + 0x30));
            param_3[1] = (*(float *)(gen_frame + 0x34));
            param_3[2] = (*(float *)(gen_frame + 0x38));
            bVar1 = F_00983a30(param_2,4,piVar3);
            if (bVar1 == 0) {
              fVar4 = (float10)REFG(double, 0x1088108);
              *param_2 = ((float)GEN_TOF((((float10)*param_1 + (float10)*param_3) * fVar4)));
              param_2[1] = ((float)GEN_TOF((((float10)param_3[1] + (float10)param_1[1]) * fVar4)));
              param_2[2] = ((float)GEN_TOF((((float10)param_3[2] + (float10)param_1[2]) * fVar4)));
            }
            bVar1 = 1;
            goto LAB_009925ca;
          }
        }
      }
    }
  }
LAB_009925c8: ;
  bVar1 = 0;
LAB_009925ca: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return bVar1;
}

/* ref: FUN_00992810 */
uint F_00992810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x992810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float * pfVar6;
  float fVar7;
  float * pfVar8;
  int iVar9;
  undefined4 * puVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 * puVar13;
  
  (*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120);
  pfVar8 = (float *)((int)this + 0x140);
  pfVar1 = (float *)((int)this + 0x150);
  (*(float * PTR32 *)(gen_frame + 0x18)) = this;
  (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar8;
  (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar1;
  if ((char)param_1 == '\0') {
    *((float *)GEN_TOP(((int)this + *(int *)((int)this + 0x24) * 0x30))) = *(float *)&REFG(undefined, 0x10dcc1c);
    pfVar8 = ((float *)GEN_TOP(((int)this + *(int *)((int)this + 0x24) * 0x30 + 0x10)));
    *pfVar8 = *pfVar1;
    pfVar8[1] = *(float *)((int)this + 0x154);
    pfVar8[2] = *(float *)((int)this + 0x158);
  }
  else {
    (*(float * PTR32 *)(gen_frame + 0x40)) = (float *)(REFG(int, 0x1487c8c) + 0x10);
    fVar7 = (float)((float10)*pfVar1 - (float10)*pfVar8);
    (*(float *)(gen_frame + 0x20)) = fVar7;
    fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x154) - (float10)*(float *)((int)this + 0x144))))
    ;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x158) - (float10)*(float *)((int)this + 0x148))))
    ;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x0)) = fVar7;
    (*(float *)(gen_frame + 0x4)) = fVar2;
    (*(float *)(gen_frame + 0x8)) = fVar3;
    fVar7 = ((float)GEN_TOF((((float10)fVar7 * (float10)fVar7 + (float10)fVar2 * (float10)fVar2) +
                   (float10)fVar3 * (float10)fVar3)));
    (*(float *)(gen_frame + 0x4c)) = fVar7;
    fVar7 = ((float)GEN_TOF(SQRT((float10)fVar7)));
    (*(float *)(gen_frame + 0x4c)) = fVar7;
    (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1094838);
    pfVar6 = &(*(float *)(gen_frame + 0x44));
    if (!((float10)*(double *)&REFG(undefined, 0x1094560) < (float10)fVar7)) {
      pfVar6 = &(*(float *)(gen_frame + 0x4c));
    }
    (*(float *)(gen_frame + 0x3c)) = gen_bits2f((uint)gen_fl2bits(*(float *)(REFG(int, 0x1487c8c) + 0x40)) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x4c)) = *(float *)(REFG(int, 0x1487c8c) + 0x40);
    (*(float *)(gen_frame + 0x48)) = (float)((float10)*pfVar6 / (float10)*(double *)&REFG(undefined, 0x1094560));
    fVar7 = gen_bits2f(F_00c4f2dd());
    (*(float *)(gen_frame + 0x44)) = fVar7;
    (*(float *)(gen_frame + 0x44)) = (float)((float10)(int)gen_fl2bits(fVar7) / (float10)*(double *)&REFG(undefined, 0x10920e0));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x4c)) - (float10)(*(float *)(gen_frame + 0x3c))) *
                       (float10)(float)((float10)(int)gen_fl2bits(fVar7) /
                                       (float10)*(double *)&REFG(undefined, 0x10920e0)) + (float10)(*(float *)(gen_frame + 0x3c)))));
    fVar11 = (float10)(*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF((((float10)1 + ((float10)1 - fVar11)) * (float10)(*(float * PTR32 *)(gen_frame + 0x40))[0xd])));
    (*(float *)(gen_frame + 0x48)) = (*(float * PTR32 *)(gen_frame + 0x40))[0xe];
    fVar12 = (float10)(*(float * PTR32 *)(gen_frame + 0x40))[0xe];
    (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(((fVar12 + fVar12) * fVar11 - fVar12)));
    F_005fe2e0(&(*(float *)(gen_frame + 0x20)),(uint)&(*(float *)(gen_frame + 0x0)));
    fVar7 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) * (float10)REFG(float, 0x1302c88) +
                   ((float10)(*(float *)(gen_frame + 0x20)) * (float10)REFG(float, 0x1302c80) +
                   (float10)(*(float *)(gen_frame + 0x24)) * (float10)REFG(float, 0x1302c84)))));
    (*(float *)(gen_frame + 0x48)) = fVar7;
    fVar7 = ((float)GEN_TOF(ABS((float10)fVar7)));
    (*(float *)(gen_frame + 0x48)) = fVar7;
    if (*(double *)&REFG(undefined, 0x10ab998) < (double)fVar7) {
      puVar13 = &REFG(float, 0x1302c90);
    }
    else {
      puVar13 = (undefined4 *)&REFG(float, 0x1302c80);
    }
    F_004f4290(((undefined1 *)(gen_frame + 0xd0)),pfVar8,pfVar1,puVar13);
    puVar13 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x50)),((undefined1 *)(gen_frame + 0xd0)));
    puVar10 = ((undefined4 *)(gen_frame + 0x90));
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar10 = puVar10 + 1;
    }
    (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x3c));
    (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x44));
    (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x4c));
    pfVar8 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x90)));
    fVar7 = *pfVar8;
    fVar2 = pfVar8[1];
    fVar3 = pfVar8[2];
    (*(float * PTR32 *)(gen_frame + 0x18))[9] = 0.0;
    (*(float * PTR32 *)(gen_frame + 0x18))[0xc] = 0.0;
    fVar4 = (*(float * PTR32 *)(gen_frame + 0x18))[9];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x10] = *(*(float * PTR32 *)(gen_frame + 0x1c));
    fVar5 = REFG(float, 0x10a0d10);
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x11] = (*(float * PTR32 *)(gen_frame + 0x1c))[1];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x12] = (*(float * PTR32 *)(gen_frame + 0x1c))[2];
    fVar4 = (*(float * PTR32 *)(gen_frame + 0x18))[9];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x14] = *(*(float * PTR32 *)(gen_frame + 0x40));
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x15] = (*(float * PTR32 *)(gen_frame + 0x40))[1];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x16] = (*(float * PTR32 *)(gen_frame + 0x40))[2];
    (*(float * PTR32 *)(gen_frame + 0x18))[9] = gen_bits2f((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x18))[9]) + 1);
    (*(float * PTR32 *)(gen_frame + 0x18))[((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x18))[9]) * 3 + 3) * 4] = fVar5;
    fVar4 = (*(float * PTR32 *)(gen_frame + 0x18))[9];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x10] = fVar7;
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x11] = fVar2;
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar4) * 0xc + 0x12] = fVar3;
    fVar7 = (*(float * PTR32 *)(gen_frame + 0x18))[9];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x14] = (*(float * PTR32 *)(gen_frame + 0x40))[4];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x15] = (*(float * PTR32 *)(gen_frame + 0x40))[5];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x16] = (*(float * PTR32 *)(gen_frame + 0x40))[6];
    (*(float * PTR32 *)(gen_frame + 0x18))[9] = gen_bits2f((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x18))[9]) + 1);
    (*(float * PTR32 *)(gen_frame + 0x18))[((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x18))[9]) * 3 + 3) * 4] = *(float *)&REFG(undefined, 0x10dcc1c);
    fVar7 = (*(float * PTR32 *)(gen_frame + 0x18))[9];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x10] = *(*(float * PTR32 *)(gen_frame + 0x14));
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x11] = (*(float * PTR32 *)(gen_frame + 0x14))[1];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x12] = (*(float * PTR32 *)(gen_frame + 0x14))[2];
    fVar7 = (*(float * PTR32 *)(gen_frame + 0x18))[9];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x14] = (*(float * PTR32 *)(gen_frame + 0x40))[8];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x15] = (*(float * PTR32 *)(gen_frame + 0x40))[9];
    (*(float * PTR32 *)(gen_frame + 0x18))[(int)gen_fl2bits(fVar7) * 0xc + 0x16] = (*(float * PTR32 *)(gen_frame + 0x40))[10];
    (*(float * PTR32 *)(gen_frame + 0x18))[9] = gen_bits2f((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x18))[9]) + 1);
    pfVar8 = (*(float * PTR32 *)(gen_frame + 0x18));
  }
  F_00c47745((*(uint *)(gen_frame + 0x11c)) ^ (uint)(uint)(gen_frame + 0x120));
  return (uint)pfVar8;
}

/* ref: FUN_00992c10 */
uint F_00992c10(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x992c10u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x3b0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  byte bVar13;
  bool bVar14;
  float10 fVar15;
  double dVar16;
  float fVar17;
  int iVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  uint uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  float * pfVar26;
  float fVar27;
  float * pfVar28;
  float * pfVar29;
  uint uVar30;
  float10 fVar31;
  float10 fVar32;
  float10 fVar33;
  float10 fVar34;
  float10 fVar35;
  float fVar36;
  
  (*(uint *)(gen_frame + 0x39c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3a0);
  (*(float *)(gen_frame + 0x74)) = *(float *)(param_1 + 0x18);
  fVar31 = (float10)*(float *)(param_1 + 0x18);
  fVar36 = 0.0;
  (*(float *)(gen_frame + 0x8c)) = gen_bits2f(param_5);
  pfVar26 = (float *)(param_1 + 0x18);
  fVar1 = (float)(fVar31 - (float10)*(float *)&REFG(undefined, 0x132f570));
  (*(float *)(gen_frame + 0x7c)) = fVar1;
  (*(int *)(gen_frame + 0x88)) = param_1;
  (*(float * PTR32 *)(gen_frame + 0x18)) = param_2;
  (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar26;
  (*(float *)(gen_frame + 0x10)) = 0.0;
  pfVar28 = &(*(float *)(gen_frame + 0x7c));
  if (!((float10)fVar1 < (float10)*(double *)&REFG(undefined, 0x1088070))) {
    pfVar28 = (float *)&REFG(undefined, 0x10dcc1c);
  }
  if (!((float10)0 < (float10)*pfVar28)) {
    pfVar28 = &(*(float *)(gen_frame + 0x10));
  }
  (*(float *)(gen_frame + 0x7c)) = *pfVar28;
  (*(float *)(gen_frame + 0x78)) = 0.0;
  if (!(fVar31 < (float10)*(double *)&REFG(undefined, 0x1088070))) {
    pfVar26 = (float *)&REFG(undefined, 0x10dcc1c);
  }
  if (!((float10)0 < (float10)*pfVar26)) {
    pfVar26 = &(*(float *)(gen_frame + 0x78));
  }
  (*(float *)(gen_frame + 0x78)) = *pfVar26;
  ((float *)(gen_frame + 0x1c))[1] = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x70)) = (float *)0x0;
  pfVar29 = ((float *)(gen_frame + 0x90));
  (*(double *)(gen_frame + 0x390)) = (double)*pfVar26 - (double)*pfVar28;
  do {
    pfVar26 = (*(float * PTR32 *)(gen_frame + 0x70));
    (*(float *)(gen_frame + 0x78)) = (float)((float10)(int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x70))) / (float10)*(double *)&REFG(undefined, 0x10df020));
    fVar1 = ((float)GEN_TOF((((float10)(float)((float10)(int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x70))) / (float10)*(double *)&REFG(undefined, 0x10df020)) *
                    (float10)(*(double *)(gen_frame + 0x390))) * (float10)*(double *)&REFG(undefined, 0x10df018) + (float10)(*(float *)(gen_frame + 0x7c)))));
    (*(float *)(gen_frame + 0x78)) = fVar1;
    F_00984260((*(int *)(gen_frame + 0x88)),pfVar29,fVar1,((float *)(gen_frame + 0x1c)) + 1);
    dVar16 = (*(double *)(gen_frame + 0x390));
    pfVar29 = pfVar29 + 4;
    (*(float * PTR32 *)(gen_frame + 0x70)) = (float *)((int)pfVar26 + 1);
  } while ((int)pfVar26 + 1 < 0x30);
  uVar19 = (undefined1)(int)*(float *)((*(int *)(gen_frame + 0x88)) + 300);
  (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x390)) + 0)) = uVar19;
  uVar23 = (undefined1)(int)*(float *)((*(int *)(gen_frame + 0x88)) + 0x130);
  (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x390)) + 1)) = uVar23;
  uVar20 = (undefined1)(int)*(float *)((*(int *)(gen_frame + 0x88)) + 0x134);
  (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x390)) + 2)) = uVar20;
  uVar24 = (undefined1)(int)*(float *)((*(int *)(gen_frame + 0x88)) + 0x120);
  (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x390)) + 3)) = uVar24;
  uVar21 = (undefined1)(int)*(float *)((*(int *)(gen_frame + 0x88)) + 0x124);
  (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x390)) + 4)) = uVar21;
  (*(float *)(gen_frame + 0x74)) = *(*(float * PTR32 *)(gen_frame + 0x4c));
  uVar25 = (undefined1)(int)*(float *)((*(int *)(gen_frame + 0x88)) + 0x128);
  (*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x390)) + 6)) = SUB82((ulonglong)gen_d2bits(dVar16),6);
  (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x390)) + 5)) = uVar25;
  gen_piece_set(&(*(double *)(gen_frame + 0x390)), 0, 6, (unsigned long long)(CONCAT15(uVar25,CONCAT14(uVar21,CONCAT13(uVar24,CONCAT12(uVar20,CONCAT11(uVar23,uVar19)))))));
  fVar31 = (float10)*(float *)&REFG(undefined, 0x14a0ac0);
  fVar32 = (float10)*(*(float * PTR32 *)(gen_frame + 0x4c));
  fVar1 = ((float)GEN_TOF(((fVar32 - (float10)REFG(double, 0x1088108) * fVar31) / ((float10)REFG(double, 0x1088108) * fVar31))));
  (*(float *)(gen_frame + 0x80)) = fVar1;
  fVar33 = (float10)fVar1;
  if (fVar33 < (float10)0) {
    (*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF(-fVar33));
    (*(float *)(gen_frame + 0x8)) = fVar36;
    (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
    pfVar26 = &(*(float *)(gen_frame + 0x80));
    if (!((float10)0 < (float10)((float)GEN_TOF(-fVar33)))) {
      pfVar26 = &(*(float *)(gen_frame + 0x8));
    }
    if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar26)) ||
        (REFG(float, 0x1087f04) < *pfVar26 || REFG(uint, 0x1087f04) == *pfVar26)) {
      pfVar26 = &(*(float *)(gen_frame + 0x28));
    }
    fVar33 = (float10)*pfVar26 * (float10)*(double *)&REFG(undefined, 0x10df010);
  }
  else {
    ((float *)(gen_frame + 0x1c))[0] = fVar1;
    (*(float *)(gen_frame + 0x14)) = fVar36;
    (*(float *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
    pfVar26 = ((float *)(gen_frame + 0x1c));
    if (!((float10)0 < fVar33)) {
      pfVar26 = &(*(float *)(gen_frame + 0x14));
    }
    if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar26)) ||
        (REFG(float, 0x1087f04) < *pfVar26 || REFG(uint, 0x1087f04) == *pfVar26)) {
      pfVar26 = &(*(float *)(gen_frame + 0x2c));
    }
    fVar33 = (float10)*pfVar26 * (float10)*(double *)&REFG(undefined, 0x10df008);
  }
  fVar15 = (float10)*(double *)&REFG(undefined, 0x1092098);
  ((float *)(gen_frame + 0x1c))[2] = fVar36;
  (*(float *)(gen_frame + 0x84)) = REFG(float, 0x1087f04);
  pfVar26 = &(*(float *)(gen_frame + 0x6c));
  (*(float *)(gen_frame + 0x48)) = (float)(fVar33 + fVar15);
  fVar1 = ((float)GEN_TOF((((fVar32 - fVar31 * (float10)*(double *)&REFG(undefined, 0x1094818)) +
                  (float10)*(double *)&REFG(undefined, 0x10944e0)) / (fVar31 * (float10)REFG(double, 0x1094800)))));
  (*(float *)(gen_frame + 0x6c)) = fVar1;
  if (!((float10)0 < (float10)fVar1)) {
    pfVar26 = ((float *)(gen_frame + 0x1c)) + 2;
  }
  if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar26)) || (REFG(float, 0x1087f04) < *pfVar26 || REFG(uint, 0x1087f04) == *pfVar26))
  {
    pfVar26 = &(*(float *)(gen_frame + 0x84));
  }
  fVar1 = *pfVar26;
  iVar18 = param_4 * 3;
  bVar13 = *(byte *)((int)&(*(double *)(gen_frame + 0x390)) + iVar18);
  fVar27 = gen_bits2f((uint)*(byte *)((int)&(*(double *)(gen_frame + 0x390)) + iVar18 + 1));
  fVar17 = gen_bits2f((uint)*(byte *)((int)&(*(double *)(gen_frame + 0x390)) + iVar18 + 2));
  (*(float *)(gen_frame + 0xc)) = (float)((float10)1 - (float10)fVar1);
  (*(float *)(gen_frame + 0x84)) = gen_bits2f((uint)bVar13);
  (*(float *)(gen_frame + 0x84)) = fVar27;
  pfVar26 = ((float *)(gen_frame + 0x90)) + 2;
  (*(float * PTR32 *)(gen_frame + 0x70)) = pfVar26;
  (*(float *)(gen_frame + 0x84)) = fVar17;
  pfVar28 = (float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x8c))) + 8);
  uVar30 = 1;
  do {
    (*(float *)(gen_frame + 0x8c)) = gen_bits2f(uVar30 - 1);
    iVar18 = uVar30 - 2;
    fVar2 = ((float)GEN_TOF(((float10)1 - (float10)(int)(uVar30 - 1) / (float10)*(double *)&REFG(undefined, 0x10df020))));
    (*(float *)(gen_frame + 0x84)) = fVar2;
    if (iVar18 < 0) {
      iVar18 = 0;
    }
    uVar22 = uVar30;
    if (0x2f < (int)uVar30) {
      uVar22 = 0x2f;
    }
    fVar3 = pfVar26[-2];
    (*(float *)(gen_frame + 0x6c)) = fVar3;
    fVar4 = (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x18)) - (float10)fVar3);
    (*(float *)(gen_frame + 0x30)) = fVar4;
    fVar5 = pfVar26[-1];
    (*(float *)(gen_frame + 0x80)) = fVar5;
    fVar6 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x18))[1] - (float10)fVar5);
    (*(float *)(gen_frame + 0x34)) = fVar6;
    fVar7 = *pfVar26;
    (*(float *)(gen_frame + 0x7c)) = fVar7;
    fVar8 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x18))[2] - (float10)fVar7);
    (*(float *)(gen_frame + 0x38)) = fVar8;
    fVar9 = ((float)GEN_TOF(((float10)(float)((float10)((float *)(gen_frame + 0x90))[(int)(iVar18 * 4 + 2)] -
                                    (float10)((float *)(gen_frame + 0x90))[(int)(uVar22 * 4 + 2)]) * (float10)fVar6 -
                   (float10)(float)((float10)((float *)(gen_frame + 0x90))[(int)(iVar18 * 4 + 1)] -
                                   (float10)((float *)(gen_frame + 0x90))[(int)(uVar22 * 4 + 1)]) * (float10)fVar8)));
    (*(float *)(gen_frame + 0x50)) = fVar9;
    fVar10 = ((float)GEN_TOF(((float10)(float)((float10)((float *)(gen_frame + 0x90))[(int)(iVar18 * 4)] -
                                     (float10)((float *)(gen_frame + 0x90))[(int)(uVar22 * 4)]) * (float10)fVar8 -
                    (float10)fVar4 *
                    (float10)(float)((float10)((float *)(gen_frame + 0x90))[(int)(iVar18 * 4 + 2)] -
                                    (float10)((float *)(gen_frame + 0x90))[(int)(uVar22 * 4 + 2)]))));
    (*(float *)(gen_frame + 0x54)) = fVar10;
    fVar11 = ((float)GEN_TOF(((float10)fVar4 *
                     (float10)(float)((float10)((float *)(gen_frame + 0x90))[(int)(iVar18 * 4 + 1)] -
                                     (float10)((float *)(gen_frame + 0x90))[(int)(uVar22 * 4 + 1)]) -
                    (float10)fVar6 *
                    (float10)(float)((float10)((float *)(gen_frame + 0x90))[(int)(iVar18 * 4)] - (float10)((float *)(gen_frame + 0x90))[(int)(uVar22 * 4)]
                                    ))));
    (*(float *)(gen_frame + 0x58)) = fVar11;
    fVar12 = ((float)GEN_TOF(((float10)fVar11 * (float10)fVar11 +
                    ((float10)fVar9 * (float10)fVar9 + (float10)fVar10 * (float10)fVar10))));
    (*(float *)(gen_frame + 0x8c)) = fVar12;
    fVar31 = (float10)fVar12;
    if (fVar31 <= (float10)REFG(float, 0x10905c4)) {
      (*(float *)(gen_frame + 0x50)) = fVar36;
      (*(float *)(gen_frame + 0x54)) = fVar36;
      (*(float *)(gen_frame + 0x58)) = fVar36;
    }
    else {
      fVar36 = ((float)GEN_TOF(SQRT(fVar31)));
      (*(float *)(gen_frame + 0x8c)) = fVar36;
      fVar36 = (float)((float10)1 / (float10)fVar36);
      (*(float *)(gen_frame + 0x8c)) = fVar36;
      fVar31 = (float10)fVar36;
      (*(float *)(gen_frame + 0x50)) = (float)(fVar31 * (float10)fVar9);
      (*(float *)(gen_frame + 0x54)) = (float)((float10)fVar10 * fVar31);
      (*(float *)(gen_frame + 0x58)) = (float)(fVar31 * (float10)fVar11);
    }
    fVar36 = ((float)GEN_TOF(((float10)fVar8 * (float10)fVar8 +
                    ((float10)fVar4 * (float10)fVar4 + (float10)fVar6 * (float10)fVar6))));
    (*(float *)(gen_frame + 0x8c)) = fVar36;
    fVar36 = ((float)GEN_TOF(SQRT((float10)fVar36)));
    (*(float *)(gen_frame + 0x8c)) = fVar36;
    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x88)) + 2)) = ((undefined2)0x27f);
    fVar36 = ((float)GEN_TOF((((float10)fVar36 * (float10)*(double *)&REFG(undefined, 0x10928e8)) / (float10)param_3)));
    (*(float *)(gen_frame + 0x8c)) = fVar36;
    fVar34 = (float10)fVar36;
    fVar31 = (float10)(*(float *)(gen_frame + 0x50));
    (*(float *)(gen_frame + 0x50)) = (float)(fVar34 * fVar31);
    fVar35 = (float10)(*(float *)(gen_frame + 0x54));
    (*(float *)(gen_frame + 0x54)) = (float)(fVar35 * fVar34);
    fVar32 = (float10)(*(float *)(gen_frame + 0x58));
    (*(float *)(gen_frame + 0x58)) = (float)(fVar34 * fVar32);
    fVar31 = (float10)(float)(fVar34 * fVar31);
    pfVar28[-2] = (float)((float10)fVar3 - fVar31);
    fVar35 = (float10)(float)(fVar35 * fVar34);
    fVar32 = (float10)(float)(fVar34 * fVar32);
    fVar36 = (float)((float10)1 - (float10)fVar2);
    (*(float *)(gen_frame + 0x8c)) = fVar36;
    fVar34 = (float10)fVar36;
    (*(float *)(gen_frame + 0x8c)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
    iVar18 = (int)TRUNC((fVar34 * (float10)(float)((float10)1 - (float10)fVar1)) *
                        (float10)*(double *)&REFG(undefined, 0x1088100));
    (*(float *)(gen_frame + 0x8c)) = gen_bits2f(iVar18);
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8c)) + 0)) = (undefined1)iVar18;
    uVar19 = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8c)) + 0));
    fVar2 = ((float)GEN_TOF((((float10)1 - fVar34) * (float10)(float)(fVar33 + fVar15))));
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar2)));
    fVar4 = (float)(fVar34 * (float10)*(double *)&REFG(undefined, 0x109ca50) + (float10)*(double *)&REFG(undefined, 0x10920a8));
    (*(float *)(gen_frame + 0x8c)) = fVar4;
    pfVar26 = pfVar26 + 4;
    (*(float * PTR32 *)(gen_frame + 0x70)) = pfVar26;
    (*(float *)(gen_frame + 0x8c)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
    pfVar28[-1] = (float)((float10)fVar5 - fVar35);
    *pfVar28 = (float)((float10)fVar7 - fVar32);
    fVar36 = 0.0;
    iVar18 = (int)TRUNC((float)bVar13 * fVar4);
    (*(float *)(gen_frame + 0x8c)) = gen_bits2f(iVar18);
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8c)) + 0)) = (undefined1)iVar18;
    uVar20 = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8c)) + 0));
    *(undefined1 *)(pfVar28 + 1) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8c)) + 0));
    (*(int *)(gen_frame + 0x88)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(int *)(gen_frame + 0x88)));
    (*(float *)(gen_frame + 0x8c)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
    iVar18 = (int)TRUNC((float)(int)gen_fl2bits(fVar27) * fVar4);
    (*(float *)(gen_frame + 0x8c)) = gen_bits2f(iVar18);
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8c)) + 0)) = (undefined1)iVar18;
    uVar21 = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8c)) + 0));
    *(undefined1 *)((int)pfVar28 + 5) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8c)) + 0));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x88)) + 3)) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8c)) + 0));
    (*(int *)(gen_frame + 0x88)) = CONCAT13((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8c)) + 0)),(undefined3)(*(int *)(gen_frame + 0x88)));
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x74)) + 2)) = ((undefined2)0x27f);
    (*(float *)(gen_frame + 0x74)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x74)) + 0))));
    (*(float *)(gen_frame + 0x8c)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
    iVar18 = (int)TRUNC(fVar4 * (float)(int)gen_fl2bits(fVar17));
    (*(float *)(gen_frame + 0x8c)) = gen_bits2f(iVar18);
    fVar4 = (*(float *)(gen_frame + 0x8c));
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8c)) + 0)) = (undefined1)iVar18;
    pfVar28[4] = (float)(fVar31 + (float10)fVar3);
    pfVar28[5] = (float)(fVar35 + (float10)fVar5);
    pfVar28[6] = (float)(fVar32 + (float10)fVar7);
    fVar3 = REFG(float, 0x1087f04);
    *(undefined1 *)(pfVar28 + 7) = uVar20;
    pfVar28[8] = fVar3;
    *(undefined1 *)((int)pfVar28 + 6) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8c)) + 0));
    pfVar28[3] = fVar2;
    *(undefined1 *)((int)pfVar28 + 0x1e) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8c)) + 0));
    *(undefined1 *)((int)pfVar28 + 7) = uVar19;
    pfVar28[2] = 0.0;
    *(undefined1 *)((int)pfVar28 + 0x1d) = uVar21;
    *(undefined1 *)((int)pfVar28 + 0x1f) = uVar19;
    pfVar28[9] = fVar2;
    uVar22 = uVar30;
    bVar14 = (int)uVar30 < 0x30;
    pfVar28 = pfVar28 + 0xc;
    uVar30 = uVar30 + 1;
  } while (bVar14);
  (*(float *)(gen_frame + 0x8c)) = fVar4;
  F_00c47745((*(uint *)(gen_frame + 0x39c)) ^ (uint)(uint)(gen_frame + 0x3a0));
  return uVar22;
}

/* ref: FUN_00993780 */
uint F_00993780(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x993780u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  int iVar16;
  float * pfVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  (*(float *)(gen_frame + 0x4c)) = *(float *)(param_1 + 8);
  fVar18 = (float10)*(float *)(param_1 + 8);
  (*(float *)(gen_frame + 0x84)) = gen_bits2f(param_4);
  ((undefined1 *)(gen_frame + 0x94))[0] = (char)(int)*(float *)(param_1 + 0x2c);
  ((float *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[0], REFG(float, 0x10df028));
  ((undefined1 *)(gen_frame + 0x94))[1] = (char)(int)*(float *)(param_1 + 0x30);
  ((undefined1 *)(gen_frame + 0x94))[2] = (char)(int)*(float *)(param_1 + 0x34);
  ((float *)(gen_frame + 0x0))[1] = gen_bits2f(REFG(float, 0x10947f8));
  ((undefined1 *)(gen_frame + 0x94))[3] = (char)(int)*(float *)(param_1 + 0x20);
  ((undefined1 *)(gen_frame + 0x94))[4] = (char)(int)*(float *)(param_1 + 0x24);
  ((undefined1 *)(gen_frame + 0x94))[5] = (char)(int)*(float *)(param_1 + 0x28);
  (*(float *)(gen_frame + 0x4c)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x8c)) = 0.0;
  pfVar17 = &(*(float *)(gen_frame + 0x90));
  fVar1 = (float)(fVar18 / (float10)*(double *)&REFG(undefined, 0x1088070));
  (*(float *)(gen_frame + 0x90)) = fVar1;
  if (!((float10)fVar1 < (float10)1)) {
    pfVar17 = &(*(float *)(gen_frame + 0x4c));
  }
  if (!((float10)0 < (float10)*pfVar17)) {
    pfVar17 = &(*(float *)(gen_frame + 0x8c));
  }
  fVar1 = *pfVar17;
  ((float *)(gen_frame + 0x0))[3] = fVar1;
  (*(float *)(gen_frame + 0x8c)) = 0.0;
  pfVar17 = &(*(float *)(gen_frame + 0x90));
  fVar2 = ((float)GEN_TOF(((fVar18 - (float10)*(float *)&REFG(undefined, 0x132f56c)) / (float10)*(double *)&REFG(undefined, 0x1088070))));
  (*(float *)(gen_frame + 0x90)) = fVar2;
  if (!((float10)fVar2 < (float10)1)) {
    pfVar17 = &(*(float *)(gen_frame + 0x4c));
  }
  if (!((float10)0 < (float10)*pfVar17)) {
    pfVar17 = &(*(float *)(gen_frame + 0x8c));
  }
  fVar2 = *pfVar17;
  (*(float *)(gen_frame + 0x4c)) = *(float *)(param_1 + 0x50);
  (*(float *)(gen_frame + 0x90)) = fVar2;
  (*(float *)(gen_frame + 0x8c)) = *(float *)(param_1 + 0x40);
  fVar18 = (float10)*(float *)(param_1 + 0x50);
  fVar19 = (float10)*(float *)(param_1 + 0x40);
  fVar3 = (float)(fVar18 - fVar19);
  ((float *)(gen_frame + 0x0))[2] = fVar3;
  (*(float *)(gen_frame + 0x60)) = fVar3;
  (*(float *)(gen_frame + 0x4c)) = *(float *)(param_1 + 0x54);
  (*(float *)(gen_frame + 0x8c)) = *(float *)(param_1 + 0x44);
  fVar20 = (float10)*(float *)(param_1 + 0x54);
  fVar21 = (float10)*(float *)(param_1 + 0x44);
  fVar4 = (float)(fVar20 - fVar21);
  (*(float *)(gen_frame + 0x8c)) = fVar4;
  (*(float *)(gen_frame + 0x64)) = fVar4;
  (*(float *)(gen_frame + 0x4c)) = *(float *)(param_1 + 0x58);
  (*(float *)(gen_frame + 0x88)) = *(float *)(param_1 + 0x48);
  fVar22 = (float10)*(float *)(param_1 + 0x58);
  fVar23 = (float10)*(float *)(param_1 + 0x48);
  fVar5 = (float)(fVar22 - fVar23);
  (*(float *)(gen_frame + 0x4c)) = fVar5;
  (*(float *)(gen_frame + 0x68)) = fVar5;
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar3 * (float10)fVar1);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar4 * (float10)fVar1);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar5 * (float10)fVar1);
  fVar6 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * (float10)fVar1) + fVar19)));
  (*(float *)(gen_frame + 0x20)) = fVar6;
  fVar7 = ((float)GEN_TOF(((float10)(float)((float10)fVar4 * (float10)fVar1) + fVar21)));
  (*(float *)(gen_frame + 0x24)) = fVar7;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar5 * (float10)fVar1) + fVar23)));
  (*(float *)(gen_frame + 0x28)) = fVar1;
  (*(float *)(gen_frame + 0x40)) = (float)((float10)fVar3 * (float10)fVar2);
  (*(float *)(gen_frame + 0x44)) = (float)((float10)fVar4 * (float10)fVar2);
  (*(float *)(gen_frame + 0x48)) = (float)((float10)fVar5 * (float10)fVar2);
  fVar3 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * (float10)fVar2) + fVar19)));
  (*(float *)(gen_frame + 0x10)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar4 * (float10)fVar2) + fVar21)));
  (*(float *)(gen_frame + 0x14)) = fVar4;
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)fVar5 * (float10)fVar2) + fVar23)));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  (*(float *)(gen_frame + 0x60)) = (float)(fVar19 + fVar18);
  (*(float *)(gen_frame + 0x64)) = (float)(fVar21 + fVar20);
  (*(float *)(gen_frame + 0x68)) = (float)(fVar23 + fVar22);
  fVar24 = (float10)REFG(double, 0x1088108);
  fVar5 = ((float)GEN_TOF(((float10)(float)(fVar19 + fVar18) * fVar24)));
  (*(float *)(gen_frame + 0x30)) = fVar5;
  fVar8 = ((float)GEN_TOF(((float10)(float)(fVar21 + fVar20) * fVar24)));
  (*(float *)(gen_frame + 0x34)) = fVar8;
  fVar9 = ((float)GEN_TOF((fVar24 * (float10)(float)(fVar23 + fVar22))));
  (*(float *)(gen_frame + 0x38)) = fVar9;
  fVar10 = *param_2;
  (*(float *)(gen_frame + 0x90)) = fVar10;
  fVar5 = (float)((float10)fVar10 - (float10)fVar5);
  (*(float *)(gen_frame + 0x70)) = fVar5;
  fVar11 = param_2[1];
  (*(float *)(gen_frame + 0x4c)) = fVar11;
  fVar8 = (float)((float10)fVar11 - (float10)fVar8);
  (*(float *)(gen_frame + 0x74)) = fVar8;
  fVar12 = param_2[2];
  (*(float *)(gen_frame + 0x8c)) = fVar12;
  fVar9 = (float)((float10)fVar12 - (float10)fVar9);
  (*(float *)(gen_frame + 0x78)) = fVar9;
  (*(float *)(gen_frame + 0x50)) = (float)(fVar19 - fVar18);
  (*(float *)(gen_frame + 0x54)) = (float)(fVar21 - fVar20);
  (*(float *)(gen_frame + 0x58)) = (float)(fVar23 - fVar22);
  fVar6 = (float)((float10)fVar10 - (float10)fVar6);
  (*(float *)(gen_frame + 0x30)) = fVar6;
  fVar7 = (float)((float10)fVar11 - (float10)fVar7);
  (*(float *)(gen_frame + 0x34)) = fVar7;
  fVar1 = (float)((float10)fVar12 - (float10)fVar1);
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar24 = (float10)fVar7;
  fVar25 = (float10)fVar6;
  fVar26 = (float10)fVar1;
  fVar1 = ((float)GEN_TOF((fVar26 * fVar26 + (fVar25 * fVar25 + fVar24 * fVar24))));
  (*(float *)(gen_frame + 0x88)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x88)) = fVar1;
  (*(float *)(gen_frame + 0x48)) = (float)((float10)fVar1 / (float10)param_3);
  fVar1 = (float)((float10)fVar10 - (float10)fVar3);
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar3 = (float)((float10)param_2[1] - (float10)fVar4);
  (*(float *)(gen_frame + 0x34)) = fVar3;
  fVar2 = (float)((float10)param_2[2] - (float10)fVar2);
  (*(float *)(gen_frame + 0x38)) = fVar2;
  fVar24 = (float10)fVar3;
  fVar25 = (float10)fVar1;
  fVar26 = (float10)fVar2;
  fVar1 = ((float)GEN_TOF((fVar26 * fVar26 + (fVar25 * fVar25 + fVar24 * fVar24))));
  (*(float *)(gen_frame + 0x88)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x88)) = fVar1;
  (*(float *)(gen_frame + 0x4c)) = (float)((float10)fVar1 / (float10)param_3);
  fVar22 = (float10)(float)(fVar23 - fVar22);
  fVar23 = (float10)fVar8;
  fVar20 = (float10)(float)(fVar21 - fVar20);
  fVar21 = (float10)fVar9;
  (*(float *)(gen_frame + 0x60)) = (float)(fVar23 * fVar22 - fVar21 * fVar20);
  fVar18 = (float10)(float)(fVar19 - fVar18);
  fVar19 = (float10)fVar5;
  (*(float *)(gen_frame + 0x64)) = (float)(fVar18 * fVar21 - fVar19 * fVar22);
  (*(float *)(gen_frame + 0x68)) = (float)(fVar20 * fVar19 - fVar23 * fVar18);
  F_0046f390(&(*(float *)(gen_frame + 0x60)));
  fVar11 = (*(float *)(gen_frame + 0x84));
  fVar18 = (float10)(*(float *)(gen_frame + 0x60));
  fVar1 = ((float *)(gen_frame + 0x0))[(int)((int)gen_fl2bits((*(float *)(gen_frame + 0x84))))];
  (*(float *)(gen_frame + 0x84)) = fVar1;
  fVar19 = (float10)fVar1;
  (*(float *)(gen_frame + 0x88)) = fVar1;
  (*(float *)(gen_frame + 0x70)) = (float)(fVar19 * fVar18);
  fVar20 = (float10)(*(float *)(gen_frame + 0x64));
  (*(float *)(gen_frame + 0x74)) = (float)(fVar20 * fVar19);
  fVar21 = (float10)(*(float *)(gen_frame + 0x68));
  (*(float *)(gen_frame + 0x78)) = (float)(fVar21 * fVar19);
  fVar22 = (float10)(*(float *)(gen_frame + 0x48));
  fVar2 = ((float)GEN_TOF((fVar22 * (float10)(float)(fVar19 * fVar18))));
  (*(float *)(gen_frame + 0x50)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)(fVar20 * fVar19) * fVar22)));
  (*(float *)(gen_frame + 0x54)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)(float)(fVar21 * fVar19) * fVar22)));
  (*(float *)(gen_frame + 0x58)) = fVar4;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar2);
  (*(float *)(gen_frame + 0x30)) = fVar2;
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)fVar3);
  (*(float *)(gen_frame + 0x34)) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)fVar4);
  (*(float *)(gen_frame + 0x38)) = fVar4;
  fVar19 = (float10)fVar1;
  (*(float *)(gen_frame + 0x70)) = (float)(fVar19 * fVar18);
  (*(float *)(gen_frame + 0x74)) = (float)(fVar20 * fVar19);
  (*(float *)(gen_frame + 0x78)) = (float)(fVar19 * fVar21);
  fVar5 = ((float)GEN_TOF(((float10)(float)(fVar19 * fVar18) * fVar22)));
  (*(float *)(gen_frame + 0x50)) = fVar5;
  fVar6 = ((float)GEN_TOF(((float10)(float)(fVar20 * fVar19) * fVar22)));
  (*(float *)(gen_frame + 0x54)) = fVar6;
  fVar7 = ((float)GEN_TOF(((float10)(float)(fVar19 * fVar21) * fVar22)));
  (*(float *)(gen_frame + 0x58)) = fVar7;
  fVar5 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x60)) = fVar5;
  fVar6 = (float)((float10)fVar6 + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x64)) = fVar6;
  fVar7 = (float)((float10)fVar7 + (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x68)) = fVar7;
  fVar19 = (float10)fVar1;
  (*(float *)(gen_frame + 0x70)) = (float)(fVar19 * fVar18);
  (*(float *)(gen_frame + 0x74)) = (float)(fVar20 * fVar19);
  (*(float *)(gen_frame + 0x78)) = (float)(fVar19 * fVar21);
  fVar22 = (float10)(*(float *)(gen_frame + 0x4c));
  fVar8 = ((float)GEN_TOF((fVar22 * (float10)(float)(fVar19 * fVar18))));
  (*(float *)(gen_frame + 0x50)) = fVar8;
  fVar9 = ((float)GEN_TOF(((float10)(float)(fVar20 * fVar19) * fVar22)));
  (*(float *)(gen_frame + 0x54)) = fVar9;
  fVar10 = ((float)GEN_TOF(((float10)(float)(fVar19 * fVar21) * fVar22)));
  (*(float *)(gen_frame + 0x58)) = fVar10;
  fVar8 = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)fVar8);
  (*(float *)(gen_frame + 0x20)) = fVar8;
  fVar9 = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)fVar9);
  (*(float *)(gen_frame + 0x24)) = fVar9;
  fVar10 = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)fVar10);
  (*(float *)(gen_frame + 0x28)) = fVar10;
  fVar19 = (float10)fVar1;
  (*(float *)(gen_frame + 0x70)) = (float)(fVar19 * fVar18);
  (*(float *)(gen_frame + 0x74)) = (float)(fVar19 * fVar20);
  param_5[6] = fVar5;
  (*(float *)(gen_frame + 0x78)) = (float)(fVar21 * fVar19);
  param_5[7] = fVar6;
  param_5[8] = fVar7;
  fVar1 = ((float)GEN_TOF(((float10)(float)(fVar19 * fVar18) * fVar22)));
  (*(float *)(gen_frame + 0x50)) = fVar1;
  param_5[0xc] = fVar8;
  param_5[0xd] = fVar9;
  iVar16 = (int)gen_fl2bits(fVar11) * 3;
  fVar5 = ((float)GEN_TOF(((float10)(float)(fVar19 * fVar20) * fVar22)));
  (*(float *)(gen_frame + 0x54)) = fVar5;
  uVar13 = ((undefined1 *)(gen_frame + 0x94))[(int)(iVar16 + 1)];
  uVar14 = ((undefined1 *)(gen_frame + 0x94))[(int)(iVar16)];
  uVar15 = ((undefined1 *)(gen_frame + 0x94))[(int)(iVar16 + 2)];
  *param_5 = fVar2;
  fVar2 = ((float)GEN_TOF(((float10)(float)(fVar21 * fVar19) * fVar22)));
  (*(float *)(gen_frame + 0x58)) = fVar2;
  param_5[0xe] = fVar10;
  param_5[1] = fVar3;
  *(undefined1 *)((int)param_5 + 0xd) = uVar13;
  *(undefined1 *)((int)param_5 + 0x25) = uVar13;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)fVar1);
  (*(float *)(gen_frame + 0x70)) = fVar1;
  *(undefined1 *)((int)param_5 + 0x3d) = uVar13;
  param_5[0x12] = fVar1;
  *(undefined1 *)((int)param_5 + 0x55) = uVar13;
  fVar1 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x74)) = fVar1;
  param_5[2] = fVar4;
  fVar3 = REFG(float, 0x1087f04);
  param_5[0x13] = fVar1;
  fVar1 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x78)) = fVar1;
  *(undefined1 *)(param_5 + 3) = uVar14;
  *(undefined1 *)((int)param_5 + 0xe) = uVar15;
  *(undefined1 *)((int)param_5 + 0xf) = 0xff;
  param_5[4] = fVar3;
  param_5[5] = 0.0;
  *(undefined1 *)(param_5 + 9) = uVar14;
  *(undefined1 *)((int)param_5 + 0x26) = uVar15;
  *(undefined1 *)((int)param_5 + 0x27) = 0xff;
  param_5[10] = fVar3;
  param_5[0xb] = fVar3;
  *(undefined1 *)(param_5 + 0xf) = uVar14;
  *(undefined1 *)((int)param_5 + 0x3e) = uVar15;
  *(undefined1 *)((int)param_5 + 0x3f) = 0xff;
  param_5[0x10] = 0.0;
  param_5[0x11] = 0.0;
  param_5[0x14] = fVar1;
  *(undefined1 *)(param_5 + 0x15) = uVar14;
  *(undefined1 *)((int)param_5 + 0x56) = uVar15;
  *(undefined1 *)((int)param_5 + 0x57) = 0xff;
  param_5[0x16] = 0.0;
  param_5[0x17] = fVar3;
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return CONCAT31((int3)((uint)gen_fl2bits(fVar11) >> 8),uVar14);
}

/* ref: FUN_00993d90 */
byte F_00993d90(unsigned int gen_a0)
{
  GEN_ENTER(0x993d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint * puVar4;
  uint uVar5;
  char * PTR32 * ppcVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_004ff310(((undefined1 *)(gen_frame + 0x40)),0,0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)(gen_frame + 0x35)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x746578;
  (*(undefined4 *)(gen_frame + 0x24)) = 5;
  (*(undefined4 *)(gen_frame + 0x31)) = 0x101;
  (*(undefined1 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 5000;
  (*(undefined1 *)(gen_frame + 0x30)) = 0;
  ((char * PTR32 *)(gen_frame + 0x4))[0] = "common/graphics/texture/-target_line_glow.tex";
  ((char * PTR32 *)(gen_frame + 0x4))[1] = "common/graphics/texture/-target_line.tex";
  ((char * PTR32 *)(gen_frame + 0x4))[2] = "common/graphics/texture/-line005_o.tex";
  ((char * PTR32 *)(gen_frame + 0x4))[3] = "common/graphics/texture/-line005_o.tex";
  ppcVar6 = ((char * PTR32 *)(gen_frame + 0x4));
  puVar4 = (uint *)((int)this + 0x50);
  (*(int *)(gen_frame + 0x48)) = 2;
  do {
    (*(int *)(gen_frame + 0x44)) = 2;
    do {
      uVar5 = F_00513d20(((undefined1 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x3c)),*ppcVar6,&(*(undefined4 *)(gen_frame + 0x14)),0,0);
      *puVar4 = uVar5;
      ppcVar6 = ppcVar6 + 1;
      puVar4 = puVar4 + 1;
      iVar1 = (*(int *)(gen_frame + 0x44)) + -1;
      (*(int *)(gen_frame + 0x44)) = iVar1;
    } while (iVar1 != 0);
    iVar1 = (*(int *)(gen_frame + 0x48)) + -1;
    (*(int *)(gen_frame + 0x48)) = iVar1;
  } while (iVar1 != 0);
  F_004d58e0(((undefined1 *)(gen_frame + 0x4c)),0,0,0x23,0);
  F_004d58e0(((undefined1 *)(gen_frame + 0x50)),0,0xc,0x44,8);
  F_004d58e0(((undefined1 *)(gen_frame + 0x54)),0,0x10,0x22,9);
  uVar5 = F_004deb40(REFG(void * PTR32, 0x1370b90),((undefined1 *)(gen_frame + 0x4c)),3);
  *(uint *)((int)this + 0x74) = uVar5;
  uVar5 = F_004dcc90(0x38400,1,0);
  *(uint *)((int)this + 0x6c) = uVar5;
  uVar5 = F_004dccf0(0xd800,1,1,0);
  *(uint *)((int)this + 0x70) = uVar5;
  uVar5 = F_004dcd60(0x40,2,0);
  *(uint *)((int)this + 0x68) = uVar5;
  uVar5 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_TransformMatrix");
  *(uint *)((int)this + 0x60) = uVar5;
  uVar5 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))),"g_SamplerColorMap");
  *(uint *)((int)this + 100) = uVar5;
  F_00c48350((undefined *)((int)this + 0x78),0,0xc0);
  F_00c48350((undefined *)((int)this + 0x138),0,0xc0);
  uVar2 = REFG(float, 0x109482c);
  uVar3 = REFG(float, 0x1090708);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x109482c);
  *(undefined4 *)((int)this + 0x48) = uVar2;
  uVar2 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x10) = uVar2;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = uVar3;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = uVar2;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: FUN_00993fa0 */
uint F_00993fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x993fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int * piVar3;
  int local_8;
  
  piVar3 = (int *)((int)this + 0x50);
  local_8 = 2;
  do {
    iVar2 = 2;
    do {
      uVar1 = 0;
      if (*piVar3 != 0) {
        uVar1 = F_0050c620(*piVar3,0,0);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0x68);
  if (piVar3 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
  if (piVar3 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x6c);
  if (piVar3 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  piVar3 = (int *)((int)this + 0x78);
  iVar2 = 0x30;
  do {
    if (*piVar3 != 0) {
      *(int *)((int)this + 0x1f8) = *(int *)((int)this + 0x1f8) + -1;
      uVar1 = 0;
      if (*piVar3 != 0) {
        uVar1 = F_00406ad0(*piVar3);
      }
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = (int *)((int)this + 0x138);
  iVar2 = 0x30;
  do {
    if (*piVar3 != 0) {
      *(int *)((int)this + 0x1f8) = *(int *)((int)this + 0x1f8) + -1;
      uVar1 = 0;
      if (*piVar3 != 0) {
        uVar1 = F_00406ad0(*piVar3);
      }
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00994090 */
byte F_00994090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x994090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  int * piVar3;
  undefined * this_00;
  uint uVar4;
  int * piVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if ((*(int *)((int)this + 0x200) == 0) && (param_1 != param_2)) {
    piVar3 = (int *)((int)this + 0x138);
    (*(int *)(gen_frame + 0x0)) = param_1;
    (*(int *)(gen_frame + 0x4)) = param_2;
    iVar2 = 0;
    piVar5 = piVar3;
    do {
      piVar1 = (int *)*piVar5;
      if (((piVar1 != (int *)0x0) && (*piVar1 == param_1)) && (piVar1[1] == param_2)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < 0x30);
    iVar2 = 0;
    do {
      if (*piVar3 == 0) {
        *(int *)((int)this + 0x1f8) = *(int *)((int)this + 0x1f8) + 1;
        this_00 = (undefined *)F_00406b90(0x60,0,0);
        if (this_00 != (undefined *)0x0) {
          uVar4 = F_00993410(this_00,&(*(int *)(gen_frame + 0x0)));
          *(uint *)((int)this + iVar2 * 4 + 0x138) = uVar4;
          return 1;
        }
        *(undefined4 *)((int)this + iVar2 * 4 + 0x138) = 0;
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 0x30);
  }
  return 0;
}

/* ref: FUN_00994150 */
byte F_00994150(unsigned int gen_a0)
{
  GEN_ENTER(0x994150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  uint uVar2;
  char * PTR32 * ppcVar3;
  uint * puVar4;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_004ff310(((undefined1 *)(gen_frame + 0x98)),0,0);
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined2 *)(gen_frame + 0x8d)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0x746578;
  (*(undefined4 *)(gen_frame + 0x7c)) = 5;
  (*(undefined4 *)(gen_frame + 0x89)) = 0x101;
  (*(undefined1 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 5000;
  (*(undefined1 *)(gen_frame + 0x88)) = 0;
  ((char * PTR32 *)(gen_frame + 0xc))[0] = "common/graphics/texture/-ch_ele_b00af.tex";
  ((char * PTR32 *)(gen_frame + 0xc))[1] = "common/graphics/texture/-ch_msk_002af.tex";
  ((char * PTR32 *)(gen_frame + 0xc))[2] = "common/graphics/texture/-ch_dist001cf.tex";
  ((char * PTR32 *)(gen_frame + 0xc))[3] = "common/graphics/texture/-ch_ele_000af.tex";
  (*(char * PTR32 *)(gen_frame + 0x1c)) = "common/graphics/texture/-ch_msk_002af.tex";
  (*(char * PTR32 *)(gen_frame + 0x20)) = "common/graphics/texture/-ch_dist001cf.tex";
  (*(char * PTR32 *)(gen_frame + 0x24)) = "common/graphics/texture/-ch_ele_000af.tex";
  (*(char * PTR32 *)(gen_frame + 0x28)) = "common/graphics/texture/-ch_msk_002af.tex";
  (*(char * PTR32 *)(gen_frame + 0x2c)) = "common/graphics/texture/-ch_dist001cf.tex";
  (*(char * PTR32 *)(gen_frame + 0x30)) = "common/graphics/texture/-ch_ele_000af.tex";
  (*(char * PTR32 *)(gen_frame + 0x34)) = "common/graphics/texture/-ch_msk_002af.tex";
  (*(char * PTR32 *)(gen_frame + 0x38)) = "common/graphics/texture/-ch_dist001cf.tex";
  (*(char * PTR32 *)(gen_frame + 0x3c)) = "common/graphics/texture/-ch_ele_000af.tex";
  (*(char * PTR32 *)(gen_frame + 0x40)) = "common/graphics/texture/-ch_msk_002af.tex";
  (*(char * PTR32 *)(gen_frame + 0x44)) = "common/graphics/texture/-ch_dist001cf.tex";
  (*(char * PTR32 *)(gen_frame + 0x48)) = "common/graphics/texture/-ch_ele_000af.tex";
  (*(char * PTR32 *)(gen_frame + 0x4c)) = "common/graphics/texture/-ch_msk_002af.tex";
  (*(char * PTR32 *)(gen_frame + 0x50)) = "common/graphics/texture/-ch_dist001cf.tex";
  (*(char * PTR32 *)(gen_frame + 0x54)) = "common/graphics/texture/-ch_ele_000af.tex";
  (*(char * PTR32 *)(gen_frame + 0x58)) = "common/graphics/texture/-ch_msk_002af.tex";
  (*(char * PTR32 *)(gen_frame + 0x5c)) = "common/graphics/texture/-ch_dist001cf.tex";
  (*(char * PTR32 *)(gen_frame + 0x60)) = "common/graphics/texture/-ch_ele_000af.tex";
  (*(char * PTR32 *)(gen_frame + 0x64)) = "common/graphics/texture/-ch_msk_002af.tex";
  (*(char * PTR32 *)(gen_frame + 0x68)) = "common/graphics/texture/-ch_dist001cf.tex";
  ppcVar3 = ((char * PTR32 *)(gen_frame + 0xc));
  puVar4 = (uint *)((int)this + 0x10);
  (*(int *)(gen_frame + 0xa0)) = 8;
  do {
    (*(int *)(gen_frame + 0x9c)) = 3;
    do {
      uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x98)),&(*(undefined4 *)(gen_frame + 0x94)),*ppcVar3,&(*(undefined4 *)(gen_frame + 0x6c)),0,0);
      *puVar4 = uVar2;
      ppcVar3 = ppcVar3 + 1;
      puVar4 = puVar4 + 1;
      iVar1 = (*(int *)(gen_frame + 0x9c)) + -1;
      (*(int *)(gen_frame + 0x9c)) = iVar1;
    } while (iVar1 != 0);
    iVar1 = (*(int *)(gen_frame + 0xa0)) + -1;
    (*(int *)(gen_frame + 0xa0)) = iVar1;
  } while (iVar1 != 0);
  F_004d58e0(((undefined1 *)(gen_frame + 0xa4)),0,0,0x23,0);
  F_004d58e0(((undefined1 *)(gen_frame + 0xa8)),0,0xc,0x44,8);
  F_004d58e0(((undefined1 *)(gen_frame + 0xac)),0,0x10,0x22,9);
  F_004d58e0(((undefined1 *)(gen_frame + 0xb0)),0,0x18,0x22,10);
  F_004d58e0(((undefined1 *)(gen_frame + 0xb4)),0,0x20,0x22,0xb);
  uVar2 = F_004deb40(REFG(void * PTR32, 0x1370b90),((undefined1 *)(gen_frame + 0xa4)),5);
  *(uint *)((int)this + 0x8c) = uVar2;
  uVar2 = F_004dcc90(0x5000,1,0);
  *(uint *)((int)this + 0x84) = uVar2;
  uVar2 = F_004dccf0(0x600,1,1,0);
  *(uint *)((int)this + 0x88) = uVar2;
  uVar2 = F_004dcd60(0x40,2,0);
  *(uint *)((int)this + 0x80) = uVar2;
  uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_TransformMatrix");
  *(uint *)((int)this + 0x70) = uVar2;
  uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))),"g_SamplerColorMap");
  *(uint *)((int)this + 0x74) = uVar2;
  uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))),"g_SamplerMaskMap");
  *(uint *)((int)this + 0x78) = uVar2;
  uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))),"g_SamplerDistortionMap");
  *(uint *)((int)this + 0x7c) = uVar2;
  F_00c48350((undefined *)((int)this + 0x90),0,0x200);
  *(undefined4 *)((int)this + 0x294) = 0;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 1;
}

/* ref: FUN_00994410 */
uint F_00994410(unsigned int gen_a0)
{
  GEN_ENTER(0x994410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  int local_8;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x80);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x8c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x8c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x84);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  piVar2 = (int *)((int)this + 0x10);
  local_8 = 8;
  do {
    iVar3 = 3;
    do {
      if (*piVar2 != 0) {
        F_0050c620(*piVar2,0,0);
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar2 = (int *)((int)this + 0x90);
  iVar3 = 0x80;
  do {
    uVar1 = 0;
    if (*piVar2 != 0) {
      uVar1 = F_00406ad0(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x290) = 0;
  return uVar1;
}

/* ref: FUN_009944e0 */
uint F_009944e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9944e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * in_EAX = 0;
  
  if (((*param_1 != 0) &&
      (in_EAX = (int *)((int)this + param_1[1] * 4 + 0x90),
      *(int *)((int)this + param_1[1] * 4 + 0x90) != 0)) && (*(int *)(*in_EAX + 0x28) == *param_1))
  {
    *(int *)((int)this + 0x290) = *(int *)((int)this + 0x290) + -1;
    in_EAX = (int *)((int)this + param_1[1] * 4 + 0x90);
    if (*(int *)((int)this + param_1[1] * 4 + 0x90) != 0) {
      iVar1 = *in_EAX;
      in_EAX = (int *)0x0;
      if (iVar1 != 0) {
        in_EAX = (int *)F_00406ad0(iVar1);
      }
      *(undefined4 *)((int)this + param_1[1] * 4 + 0x90) = 0;
    }
    *param_1 = 0;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00994550 */
unsigned int F_00994550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x994550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = REFG(float, 0x10a0d00);
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0xff808080;
  *(undefined4 *)((int)this + 0x10) = uVar1;
  iVar2 = 0;
  do {
    if ((&REFG(undefined4, 0x14a06d8))[iVar2] == 0) {
      (&REFG(undefined4, 0x14a06d8))[iVar2] = this;
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return 0;
}

/* ref: FUN_009945a0 */
unsigned int F_009945a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9945a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    F_00406b30(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  piVar1 = &REFG(undefined4, 0x14a06d8);
  do {
    if ((undefined *)*piVar1 == this) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x14a0718);
  return 0;
}

/* ref: FUN_009945e0 */
uint F_009945e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9945e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1f0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  byte bVar8;
  float fVar9;
  float * pfVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  
  fVar9 = gen_bits2f(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1e0));
  (*(float *)(gen_frame + 0x1dc)) = fVar9;
  if (*(int *)this != 0) {
    if (*(int *)((int)this + 4) != 0) {
      F_00406b30(*(int *)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    *(undefined4 *)((int)this + 8) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10c))))(*(int * PTR32 *)this,((undefined1 *)(gen_frame + 0x180)));
    (*(float *)(gen_frame + 0x160)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c0))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x164)) = gen_bits2f((*(uint *)(gen_frame + 0x1c4)));
    (*(float *)(gen_frame + 0x168)) = 0.0;
    pfVar10 = (float *)F_004ee970(&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0x160)),((undefined1 *)(gen_frame + 0x180)));
    (*(float *)(gen_frame + 0x130)) = *pfVar10;
    (*(float *)(gen_frame + 0x134)) = pfVar10[1];
    (*(float *)(gen_frame + 0x138)) = pfVar10[2];
    (*(float *)(gen_frame + 0x160)) = (*(float *)(gen_frame + 0x1c0));
    (*(float *)(gen_frame + 0x164)) = gen_bits2f((*(uint *)(gen_frame + 0x1c4)));
    (*(float *)(gen_frame + 0x168)) = 0.0;
    pfVar10 = (float *)F_004ee970(&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0x160)),((undefined1 *)(gen_frame + 0x180)));
    (*(float *)(gen_frame + 0x150)) = *pfVar10;
    (*(float *)(gen_frame + 0x154)) = pfVar10[1];
    (*(float *)(gen_frame + 0x160)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c0))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x158)) = pfVar10[2];
    (*(float *)(gen_frame + 0x164)) = gen_bits2f((*(uint *)(gen_frame + 0x1c4)) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x168)) = 0.0;
    pfVar10 = (float *)F_004ee970(&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0x160)),((undefined1 *)(gen_frame + 0x180)));
    (*(float *)(gen_frame + 0x110)) = *pfVar10;
    (*(float *)(gen_frame + 0x114)) = pfVar10[1];
    (*(float *)(gen_frame + 0x118)) = pfVar10[2];
    (*(float *)(gen_frame + 0x160)) = (*(float *)(gen_frame + 0x1c0));
    (*(float *)(gen_frame + 0x164)) = gen_bits2f((*(uint *)(gen_frame + 0x1c4)) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x168)) = 0.0;
    pfVar10 = (float *)F_004ee970(&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0x160)),((undefined1 *)(gen_frame + 0x180)));
    (*(float *)(gen_frame + 0xa0)) = *pfVar10;
    (*(float *)(gen_frame + 0xa4)) = pfVar10[1];
    fVar9 = (float)((float10)(*(float *)(gen_frame + 0x150)) - (float10)(*(float *)(gen_frame + 0x130)));
    (*(float *)(gen_frame + 0xfc)) = fVar9;
    (*(float *)(gen_frame + 0x140)) = fVar9;
    (*(float *)(gen_frame + 0xa8)) = pfVar10[2];
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x154)) - (float10)(*(float *)(gen_frame + 0x134)));
    (*(float *)(gen_frame + 0x128)) = fVar1;
    (*(float *)(gen_frame + 0x144)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x158)) - (float10)(*(float *)(gen_frame + 0x138)));
    (*(float *)(gen_frame + 0x12c)) = fVar2;
    (*(float *)(gen_frame + 0x148)) = fVar2;
    fVar9 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                   ((float10)fVar1 * (float10)fVar1 + (float10)fVar9 * (float10)fVar9))));
    (*(float *)(gen_frame + 0x178)) = fVar9;
    fVar9 = ((float)GEN_TOF(SQRT((float10)fVar9)));
    (*(float *)(gen_frame + 0x178)) = fVar9;
    uVar7 = (uint)((double)fVar9 / *(double *)&REFG(undefined, 0x10920a8));
    fVar9 = 0.0;
    if (uVar7 != 0) {
      *(uint *)((int)this + 8) = uVar7;
      uVar11 = F_00406bb0(-(uint)((int)((ulonglong)uVar7 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar7 * 0x10),0,0);
      *(uint *)((int)this + 4) = uVar11;
      fVar9 = 0.0;
      (*(float *)(gen_frame + 0x178)) = 0.0;
      if (0 < (int)uVar7) {
        (*(float *)(gen_frame + 0xf8)) = (float)(int)(uVar7 - 1);
        (*(int *)(gen_frame + 0x174)) = 0;
        do {
          (*(float *)(gen_frame + 0x17c)) = (float)((float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x178))) / (float10)(*(float *)(gen_frame + 0xf8)));
          fVar12 = (float10)(float)((float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x178))) / (float10)(*(float *)(gen_frame + 0xf8)));
          if (uVar7 == 1) {
            (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x130));
            (*(float *)(gen_frame + 0x44)) = (*(float *)(gen_frame + 0x134));
            (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x138));
            pfVar10 = &(*(float *)(gen_frame + 0x40));
          }
          else {
            pfVar10 = &(*(float *)(gen_frame + 0x20));
            (*(float *)(gen_frame + 0xc0)) = (*(float *)(gen_frame + 0xfc));
            (*(float *)(gen_frame + 0xc4)) = (*(float *)(gen_frame + 0x128));
            (*(float *)(gen_frame + 0xc8)) = (*(float *)(gen_frame + 0x12c));
            (*(float *)(gen_frame + 0xd0)) = (float)((float10)(*(float *)(gen_frame + 0xfc)) * fVar12);
            (*(float *)(gen_frame + 0xd4)) = (float)((float10)(*(float *)(gen_frame + 0x128)) * fVar12);
            (*(float *)(gen_frame + 0xd8)) = (float)((float10)(*(float *)(gen_frame + 0x12c)) * fVar12);
            fVar9 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0xfc)) * fVar12) + (float10)(*(float *)(gen_frame + 0x130)))));
            (*(float *)(gen_frame + 0x50)) = fVar9;
            fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x128)) * fVar12) + (float10)(*(float *)(gen_frame + 0x134)))));
            (*(float *)(gen_frame + 0x54)) = fVar1;
            fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x12c)) * fVar12) + (float10)(*(float *)(gen_frame + 0x138)))));
            (*(float *)(gen_frame + 0x58)) = fVar2;
            (*(float *)(gen_frame + 0x20)) = fVar9;
            (*(float *)(gen_frame + 0x24)) = fVar1;
            (*(float *)(gen_frame + 0x28)) = fVar2;
          }
          fVar9 = *pfVar10;
          (*(float *)(gen_frame + 0x100)) = fVar9;
          fVar1 = pfVar10[1];
          (*(float *)(gen_frame + 0x104)) = fVar1;
          fVar2 = pfVar10[2];
          (*(float *)(gen_frame + 0x108)) = fVar2;
          if (uVar7 == 1) {
            (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x110));
            (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x114));
            (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x118));
            pfVar10 = &(*(float *)(gen_frame + 0x30));
          }
          else {
            pfVar10 = &(*(float *)(gen_frame + 0xe0));
            fVar3 = (float)((float10)(*(float *)(gen_frame + 0xa0)) - (float10)(*(float *)(gen_frame + 0x110)));
            (*(float *)(gen_frame + 0x90)) = fVar3;
            fVar4 = (float)((float10)(*(float *)(gen_frame + 0xa4)) - (float10)(*(float *)(gen_frame + 0x114)));
            (*(float *)(gen_frame + 0x94)) = fVar4;
            fVar5 = (float)((float10)(*(float *)(gen_frame + 0xa8)) - (float10)(*(float *)(gen_frame + 0x118)));
            (*(float *)(gen_frame + 0x98)) = fVar5;
            fVar3 = (float)((float10)fVar3 * fVar12);
            (*(float *)(gen_frame + 0x70)) = fVar3;
            fVar4 = (float)((float10)fVar4 * fVar12);
            (*(float *)(gen_frame + 0x74)) = fVar4;
            fVar5 = (float)(fVar12 * (float10)fVar5);
            (*(float *)(gen_frame + 0x78)) = fVar5;
            fVar3 = (float)((float10)(*(float *)(gen_frame + 0x110)) + (float10)fVar3);
            (*(float *)(gen_frame + 0x60)) = fVar3;
            fVar4 = (float)((float10)(*(float *)(gen_frame + 0x114)) + (float10)fVar4);
            (*(float *)(gen_frame + 0x64)) = fVar4;
            fVar5 = (float)((float10)(*(float *)(gen_frame + 0x118)) + (float10)fVar5);
            (*(float *)(gen_frame + 0x68)) = fVar5;
            (*(float *)(gen_frame + 0xe0)) = fVar3;
            (*(float *)(gen_frame + 0xe4)) = fVar4;
            (*(float *)(gen_frame + 0xe8)) = fVar5;
          }
          (*(float *)(gen_frame + 0x150)) = *pfVar10;
          (*(float *)(gen_frame + 0x154)) = pfVar10[1];
          (*(float *)(gen_frame + 0x158)) = pfVar10[2];
          fVar3 = (float)((float10)*pfVar10 - (float10)fVar9);
          (*(float *)(gen_frame + 0x140)) = fVar3;
          fVar4 = (float)((float10)pfVar10[1] - (float10)fVar1);
          (*(float *)(gen_frame + 0x144)) = fVar4;
          fVar5 = (float)((float10)pfVar10[2] - (float10)fVar2);
          (*(float *)(gen_frame + 0x148)) = fVar5;
          fVar6 = ((float)GEN_TOF(((float10)fVar5 * (float10)fVar5 +
                         ((float10)fVar4 * (float10)fVar4 + (float10)fVar3 * (float10)fVar3))));
          (*(float *)(gen_frame + 0x17c)) = fVar6;
          fVar6 = ((float)GEN_TOF(SQRT((float10)fVar6)));
          (*(float *)(gen_frame + 0x17c)) = fVar6;
          fVar12 = (float10)fVar6;
          (*(float *)(gen_frame + 0x0)) = fVar9;
          (*(float *)(gen_frame + 0x4)) = fVar1;
          (*(float *)(gen_frame + 0x8)) = fVar2;
          fVar9 = (float)((float10)1 / fVar12);
          (*(float *)(gen_frame + 0x17c)) = fVar9;
          fVar13 = (float10)fVar9;
          (*(float *)(gen_frame + 0x80)) = (float)(fVar13 * (float10)fVar3);
          (*(float *)(gen_frame + 0x84)) = (float)((float10)fVar4 * fVar13);
          (*(float *)(gen_frame + 0x88)) = (float)(fVar13 * (float10)fVar5);
          (*(float *)(gen_frame + 0x10)) = (float)(fVar13 * (float10)fVar3);
          (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar4 * fVar13);
          (*(float *)(gen_frame + 0x18)) = (float)(fVar13 * (float10)fVar5);
          fVar9 = (float)((float10)1 + fVar12);
          (*(float *)(gen_frame + 0x17c)) = fVar9;
          bVar8 = F_00a1c690(&(*(float *)(gen_frame + 0x0)),fVar9,*(int *)((int)this + 4) + (*(int *)(gen_frame + 0x174)),0);
          if (bVar8 == 0) {
            pfVar10 = ((float *)GEN_TOP((*(int *)((int)this + 4) + (*(int *)(gen_frame + 0x174)))));
            (*(float *)(gen_frame + 0xb0)) = (float)((float10)(*(float *)(gen_frame + 0x150)) + (float10)(*(float *)(gen_frame + 0x100)));
            (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0x154)) + (float10)(*(float *)(gen_frame + 0x104)));
            (*(float *)(gen_frame + 0xb8)) = (float)((float10)(*(float *)(gen_frame + 0x158)) + (float10)(*(float *)(gen_frame + 0x108)));
            fVar12 = (float10)REFG(double, 0x1088108);
            fVar9 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x150)) + (float10)(*(float *)(gen_frame + 0x100))) * fVar12)));
            (*(float *)(gen_frame + 0x160)) = fVar9;
            fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x154)) + (float10)(*(float *)(gen_frame + 0x104))) * fVar12)));
            (*(float *)(gen_frame + 0x164)) = fVar1;
            fVar2 = ((float)GEN_TOF((fVar12 * (float10)(float)((float10)(*(float *)(gen_frame + 0x158)) + (float10)(*(float *)(gen_frame + 0x108))))));
            (*(float *)(gen_frame + 0x168)) = fVar2;
            *pfVar10 = fVar9;
            pfVar10[1] = fVar1;
            pfVar10[2] = fVar2;
          }
          else {
            *((float *)GEN_TOP((*(int *)((int)this + 4) + 4 + (*(int *)(gen_frame + 0x174))))) =
                 ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 4) + 4 + (*(int *)(gen_frame + 0x174))))) +
                        (float10)REFG(double, 0x1088130))));
          }
          (*(int *)(gen_frame + 0x174)) = (*(int *)(gen_frame + 0x174)) + 0x10;
          fVar9 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x178))) + 1);
          (*(float *)(gen_frame + 0x178)) = fVar9;
        } while ((int)gen_fl2bits(fVar9) < (int)uVar7);
      }
    }
  }
  F_00c47745((uint)gen_fl2bits((*(float *)(gen_frame + 0x1dc))) ^ (uint)(uint)(gen_frame + 0x1e0));
  return (uint)gen_fl2bits(fVar9);
}

/* ref: FUN_00994cb0 */
uint F_00994cb0(void)
{
  GEN_ENTER(0x994cb0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_00c48350(&REFG(undefined4, 0x14a06d8),0,0x40);
  F_004ff310(((undefined1 *)(gen_frame + 0x38)),0,0);
  (*(undefined4 *)(gen_frame + 0x34)) = 0x746578;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5;
  (*(undefined4 *)(gen_frame + 0x29)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x2d)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 5000;
  (*(undefined1 *)(gen_frame + 0x28)) = 0;
  REFG(undefined4, 0x14a06d0) = F_00513d20(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x34)),"common/graphics/texture/zone001_y.tex",&(*(undefined4 *)(gen_frame + 0xc)),0
                              ,0);
  F_004d58e0(((undefined1 *)(gen_frame + 0x3c)),0,0,0x23,0);
  F_004d58e0(((undefined1 *)(gen_frame + 0x40)),0,0xc,0x24,8);
  F_004d58e0(((undefined1 *)(gen_frame + 0x44)),0,0x1c,0x22,9);
  REFG(undefined4, 0x14a06bc) = F_004deb40(REFG(void * PTR32, 0x1370b90),((undefined1 *)(gen_frame + 0x3c)),3);
  REFG(undefined4, 0x14a06c0) = F_004dcc90(0x1b000,1,0);
  REFG(undefined4, 0x14a06c4) = F_004dcd60(0x40,2,0);
  REFG(undefined4, 0x14a06cc) = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_TransformMatrix");
  uVar1 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))),"g_SamplerColorMap");
  REFG(undefined4, 0x14a06c8) = uVar1;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: FUN_00994de0 */
uint F_00994de0(unsigned int gen_a0)
{
  GEN_ENTER(0x994de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  float10 fVar2;
  
  uVar1 = REFG(float, 0x1087f04);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10df038);
  *(undefined4 *)((int)this + 0x134) = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x138) = uVar1;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = uVar1;
  *(undefined4 *)((int)this + 0x144) = uVar1;
  *(undefined4 *)((int)this + 0x148) = uVar1;
  *(undefined4 *)((int)this + 0x14c) = uVar1;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0x3c;
  *(undefined1 *)((int)this + 0x1574) = 1;
  *(undefined4 *)((int)this + 0x1578) = 0;
  *(undefined4 *)((int)this + 0x157c) = 0;
  *(undefined4 *)((int)this + 0x1580) = 0;
  *(undefined4 *)((int)this + 0x1584) = 0;
  *(undefined4 *)((int)this + 0x1588) = 0;
  *(undefined4 *)((int)this + 0x158c) = 0;
  fVar2 = (float10)(float)((float10)1 / (float10)((float)GEN_TOF(SQRT(fVar2))));
  *(float *)((int)this + 0x128) = (float)((float10)REFG(double, 0x1088108) * fVar2);
  *(float *)((int)this + 300) = (float)((float10)REFG(double, 0x1094890) * fVar2);
  *(float *)((int)this + 0x130) = (float)(fVar2 * (float10)*(double *)&REFG(undefined, 0x10df030));
  return (uint)this;
}

/* ref: FUN_00994ed0 */
unsigned int F_00994ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x994ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x78) = *param_1;
  *(undefined4 *)((int)this + 0x7c) = param_1[1];
  *(undefined4 *)((int)this + 0x80) = param_1[2];
  *(undefined4 *)((int)this + 0x84) = param_1[4];
  *(undefined4 *)((int)this + 0x88) = param_1[5];
  *(undefined4 *)((int)this + 0x8c) = param_1[6];
  *(undefined4 *)((int)this + 0x90) = param_1[8];
  *(undefined4 *)((int)this + 0x94) = param_1[9];
  *(undefined4 *)((int)this + 0x98) = param_1[10];
  *(undefined4 *)((int)this + 0x9c) = param_1[0xc];
  *(undefined4 *)((int)this + 0xa0) = param_1[0xd];
  *(undefined4 *)((int)this + 0xa4) = param_1[0xe];
  F_009db630((int)this + 0xa8,param_2);
  F_00984c30(this);
  return 0;
}

/* ref: FUN_00994f60 */
uint F_00994f60(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0x994f60u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  gen_args[6] = gen_a6;
  memcpy(&gen_args[7], &gen_a7, sizeof gen_a7);
  memcpy(&gen_args[8], &gen_a8, sizeof gen_a8);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  uVar5 = (*(uint *)&gen_args[6]);
  pfVar4 = (float *)F_00980f90(&(*(float *)(gen_frame + 0xc)),(*(uint *)&gen_args[6]),(*(int *)&gen_args[0]) + 0xe8);
  if ((!GEN_ISNAN((*(float *)(gen_frame + 0x18))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0x18)) <= *(float *)&REFG(undefined, 0x1088114))) {
    pfVar4 = &(*(float *)&gen_args[8]);
    (*(uint *)&gen_args[6]) = (uint)gen_fl2bits((float)((float10)(*(float *)&gen_args[7]) + (float10)*(double *)&REFG(undefined, 0x10928e8)));
    if (!((float10)(float)((float10)(*(float *)&gen_args[7]) + (float10)*(double *)&REFG(undefined, 0x10928e8)) < (float10)(*(float *)&gen_args[8]))
       ) {
      pfVar4 = (float *)&(*(uint *)&gen_args[6]);
    }
    fVar1 = ((float)GEN_TOF(((float10)*(float *)uVar5 - (float10)*(float *)((*(int *)&gen_args[0]) + 0x3c))));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)*(float *)(uVar5 + 4) - (float10)*(float *)((*(int *)&gen_args[0]) + 0x40))));
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)*(float *)(uVar5 + 8) - (float10)*(float *)((*(int *)&gen_args[0]) + 0x44))));
    (*(float *)(gen_frame + 0x24)) = fVar3;
    fVar7 = (float10)fVar2;
    fVar8 = (float10)fVar1;
    fVar9 = (float10)fVar3;
    fVar1 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar9 * fVar9 + (fVar8 * fVar8 + fVar7 * fVar7)))))));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar7 = (float10)fVar1;
    fVar8 = (float10)*pfVar4;
    if (fVar7 <= fVar8) {
      fVar9 = (float10)(*(float *)(gen_frame + 0x18));
      (*(float *)&gen_args[8]) = REFG(float, 0x10928e4);
      (*(uint *)&gen_args[6]) = REFG(float, 0x109cb08);
      pfVar4 = &(*(float *)(gen_frame + 0xc));
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0xc)) / fVar9);
      (*(float *)(gen_frame + 0xc)) = fVar1;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) / fVar9);
      (*(float *)(gen_frame + 0x10)) = fVar2;
      (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x14)) / fVar9);
      (*(float *)(gen_frame + 0x18)) = (float)(fVar9 / fVar9);
      if (!(fVar1 < REFG(float, 0x10928e4))) {
        pfVar4 = &(*(float *)&gen_args[8]);
      }
      if (!(*(double *)&REFG(undefined, 0x10944c0) < (double)*pfVar4)) {
        pfVar4 = (float *)&(*(uint *)&gen_args[6]);
      }
      fVar10 = (float10)REFG(double, 0x1088108);
      pfVar6 = &(*(float *)(gen_frame + 0x10));
      fVar9 = (float10)1;
      fVar3 = ((float)GEN_TOF((fVar9 - (float10)((float)GEN_TOF(ABS((float10)(float)((float10)*pfVar4 * fVar10)))))));
      (*(float *)(gen_frame + 0x28)) = fVar3;
      if (!(fVar2 < REFG(float, 0x10928e4))) {
        pfVar6 = &(*(float *)&gen_args[8]);
      }
      if (!(*(double *)&REFG(undefined, 0x10944c0) < (double)*pfVar6)) {
        pfVar6 = (float *)&(*(uint *)&gen_args[6]);
      }
      fVar11 = fVar9 - (float10)((float)GEN_TOF(ABS((float10)(float)((float10)*pfVar6 * fVar10))));
      (*(float *)(gen_frame + 0xc)) = (float)((float10)fVar1 * fVar10 + fVar10);
      (*(float *)(gen_frame + 0x10)) = (float)(fVar10 - (float10)fVar2 * fVar10);
      fVar10 = (float10)(*(float *)&gen_args[7]);
      if (!(fVar7 < fVar10)) {
        if (fVar8 < fVar7) {
          fVar9 = (float10)0;
        }
        else {
          fVar9 = fVar9 - (fVar7 - fVar10) / (fVar8 - fVar10);
        }
      }
      (*(float *)&gen_args[8]) = ((float)GEN_TOF(((((float10)fVar3 * (float10)(*(float *)&gen_args[1])) * (float10)(float)fVar11) *
                       (float10)(float)fVar9)));
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0x150) + 0x58))))
                        (*(int * PTR32 *)((*(int *)&gen_args[0]) + 0x150),1,(undefined4)gen_fl2bits((*(float *)&gen_args[8])));
      return uVar5;
    }
  }
  return (uint)pfVar4;
}

/* ref: FUN_009953b0 */
uint F_009953b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x9953b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  
  pfVar3 = param_3;
  if ((param_3 < (float *)0x800) && (pfVar3 = param_3, param_2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x158);
    pfVar2 = (float *)((int)((int)(uintptr_t)param_3) * 0x68);
    pfVar3 = pfVar2;
    if (*(int *)(iVar1 + 0x1040 + (int)pfVar2) == param_2) {
      pfVar3 = (float *)((int)pfVar2 + iVar1 + 0x1048);
      *pfVar3 = param_4;
      *(float *)((int)pfVar2 + iVar1 + 0x104c) = param_5;
      *(float *)((int)pfVar2 + iVar1 + 0x1050) = param_6;
      *(float *)((int)pfVar2 + iVar1 + 0x1054) = param_7;
      iVar1 = *(int *)((int)pfVar2 + iVar1 + 0x1030);
      if ((iVar1 != 0) &&
         (((*(uint *)(iVar1 + 0x1d0) & 0x40000) == 0 || (*(int *)(iVar1 + 0x1e0) != 0)))) {
        pfVar3 = (float *)F_0098b780(iVar1,(uint)pfVar3);
      }
    }
  }
  return (uint)pfVar3;
}

/* ref: FUN_00995470 */
uint F_00995470(unsigned int gen_a0)
{
  GEN_ENTER(0x995470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10df044));
  F_00985d20((undefined *)((int)this + 0x848));
  F_00985e70((undefined *)((int)this + 0x7b8));
  F_00985d90((undefined *)((int)this + 0x728));
  F_00985e00((undefined *)((int)this + 0x698));
  iVar2 = 3;
  puVar3 = (undefined4 *)((int)this + 0x698);
  do {
    puVar4 = puVar3 + -0x68;
    *puVar4 = (*(undefined * PTR32 (*)[14])REFP(0x10de8d8));
    uVar1 = F_00986ad0(puVar3 + -0x58);
    iVar2 = iVar2 + -1;
    *puVar4 = (*(undefined * PTR32 (*)[14])REFP(0x10dd2b0));
    puVar3 = puVar4;
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10dd2ec));
  return uVar1;
}

/* ref: FUN_009954f0 */
uint F_009954f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9954f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de77c));
  F_00987100((undefined *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00995510 */
uint F_00995510(unsigned int gen_a0)
{
  GEN_ENTER(0x995510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de788));
  F_00987100((undefined *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00995530 */
uint F_00995530(unsigned int gen_a0)
{
  GEN_ENTER(0x995530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de794));
  F_00987100((undefined *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00995550 */
uint F_00995550(unsigned int gen_a0)
{
  GEN_ENTER(0x995550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de7a0));
  F_00987100((undefined *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00995570 */
unsigned int F_00995570(unsigned int gen_a0)
{
  GEN_ENTER(0x995570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10de7ac));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(gen_code32 *)((int)this + 0x18) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x20) = ((code *)REFP(0x979ff0));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(gen_code32 *)((int)this + 0x28) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(gen_code32 *)((int)this + 0x50) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x58) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x60) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(gen_code32 *)((int)this + 0x88) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x90) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x98) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(gen_code32 *)((int)this + 0xc0) = ((code *)REFP(0x979f10));
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(gen_code32 *)((int)this + 200) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0xd0) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(gen_code32 *)((int)this + 0xf8) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x100) = ((code *)REFP(0x979ff0));
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(gen_code32 *)((int)this + 0x108) = ((code *)REFP(0x97a060));
  *(undefined4 *)((int)this + 0x10c) = 0;
  return 0;
}

/* ref: FUN_00995690 */
uint F_00995690(unsigned int gen_a0)
{
  GEN_ENTER(0x995690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10df078));
  F_00986ad0((undefined *)((int)this + 0x410));
  F_00986ad0((undefined *)((int)this + 0x2b0));
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x268) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x26c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x26c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x268) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x230) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x234) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x234));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x230) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1e4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x1e4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x1ac) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x1ac));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x118) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x15c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x15c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x124) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x124));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x118) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xd4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xd4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x9c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x9c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x4c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x4c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x14))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dd8ec));
  return (uint)pcVar1;
}

/* ref: FUN_00995890 */
uint F_00995890(unsigned int gen_a0)
{
  GEN_ENTER(0x995890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10df09c));
  F_00986ad0((undefined *)((int)this + 0x300));
  F_00986ad0((undefined *)((int)this + 0x1a0));
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x118) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x15c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x15c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x124) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x124));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x118) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xd4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xd4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x9c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x9c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x4c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x4c));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x14))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dd910));
  return (uint)pcVar1;
}

/* ref: FUN_009959d0 */
uint F_009959d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9959d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10de7d0));
  *(undefined4 *)((int)this + 4) = 2;
  F_00987100((undefined *)((int)this + 8));
  F_00987100((undefined *)((int)this + 0x90));
  F_00987100((undefined *)((int)this + 0x118));
  F_00987100((undefined *)((int)this + 0x1a0));
  F_00987100((undefined *)((int)this + 0x228));
  F_00987100((undefined *)((int)this + 0x2b0));
  F_00987100((undefined *)((int)this + 0x338));
  return (uint)this;
}

/* ref: FUN_00995a30 */
uint F_00995a30(unsigned int gen_a0)
{
  GEN_ENTER(0x995a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10de7f8));
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 6;
  *(undefined4 *)((int)this + 0x10) = 6;
  F_00987100((undefined *)((int)this + 0x18));
  F_00987100((undefined *)((int)this + 0xa0));
  F_00987100((undefined *)((int)this + 0x128));
  F_00987100((undefined *)((int)this + 0x1b0));
  F_00987100((undefined *)((int)this + 0x238));
  F_00987100((undefined *)((int)this + 0x2c0));
  return (uint)this;
}

/* ref: FUN_00995aa0 */
uint F_00995aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x995aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10de828));
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 4;
  *(undefined4 *)((int)this + 0x10) = 4;
  F_00987100((undefined *)((int)this + 0x18));
  F_00987100((undefined *)((int)this + 0xa0));
  F_00987100((undefined *)((int)this + 0x128));
  F_00987100((undefined *)((int)this + 0x1b0));
  F_00987100((undefined *)((int)this + 0x238));
  F_00987100((undefined *)((int)this + 0x2c0));
  return (uint)this;
}

/* ref: FUN_00995b10 */
uint F_00995b10(unsigned int gen_a0)
{
  GEN_ENTER(0x995b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10de858));
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 2;
  *(undefined4 *)((int)this + 0xc) = 0;
  F_00987100((undefined *)((int)this + 0x10));
  F_00987100((undefined *)((int)this + 0x98));
  F_00987100((undefined *)((int)this + 0x120));
  F_00987100((undefined *)((int)this + 0x1a8));
  return (uint)this;
}

/* ref: FUN_00995b60 */
uint F_00995b60(unsigned int gen_a0)
{
  GEN_ENTER(0x995b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10de884));
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 0x10) = 1;
  F_00987100((undefined *)((int)this + 0x18));
  F_00987100((undefined *)((int)this + 0xa0));
  F_00987100((undefined *)((int)this + 0x128));
  F_00987100((undefined *)((int)this + 0x1b0));
  F_00987100((undefined *)((int)this + 0x238));
  return (uint)this;
}

/* ref: FUN_00995bc0 */
unsigned int F_00995bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x995bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de8b0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(gen_code32 *)((int)this + 0x18) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x20) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x28) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(gen_code32 *)((int)this + 0x50) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x58) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x60) = ((code *)REFP(0x97a060));
  *(gen_code32 *)((int)this + 0x88) = ((code *)REFP(0x979f10));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(gen_code32 *)((int)this + 0x90) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x98) = ((code *)REFP(0x97a060));
  *(gen_code32 *)((int)this + 0xc0) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 200) = ((code *)REFP(0x979ff0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(gen_code32 *)((int)this + 0xd0) = ((code *)REFP(0x97a060));
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  return 0;
}

/* ref: FUN_00995cb0 */
unsigned int F_00995cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x995cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10de8c0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(gen_code32 *)((int)this + 0x18) = ((code *)REFP(0x979f10));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(gen_code32 *)((int)this + 0x20) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x28) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(gen_code32 *)((int)this + 0x50) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x58) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x60) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(gen_code32 *)((int)this + 0x88) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x90) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x98) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(gen_code32 *)((int)this + 0xc0) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 200) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0xd0) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(undefined4 *)((int)this + 0xec) = 0;
  *(gen_code32 *)((int)this + 0xf8) = ((code *)REFP(0x979f10));
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(gen_code32 *)((int)this + 0x100) = ((code *)REFP(0x979ff0));
  *(gen_code32 *)((int)this + 0x108) = ((code *)REFP(0x97a060));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *(gen_code32 *)((int)this + 0x130) = ((code *)REFP(0x979f10));
  *(gen_code32 *)((int)this + 0x138) = ((code *)REFP(0x979ff0));
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(gen_code32 *)((int)this + 0x140) = ((code *)REFP(0x97a060));
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  return 0;
}

/* ref: FUN_00995e70 */
uint F_00995e70(unsigned int gen_a0)
{
  GEN_ENTER(0x995e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10de928));
  F_00995bc0((undefined *)((int)this + 8));
  F_00995bc0((undefined *)((int)this + 0xf8));
  F_00987100((undefined *)((int)this + 0x1e8));
  return (uint)this;
}

/* ref: FUN_00995ea0 */
unsigned int F_00995ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x995ea0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint * puVar6;
  uint * puVar7;
  undefined4 uVar8;
  undefined1 local_5;
  
  uVar5 = 0;
  local_5 = 0xff;
  if (param_2 != 0) {
    uVar8 = 0;
    puVar7 = param_1;
    do {
      uVar3 = *puVar7;
      puVar6 = puVar7 + 2;
      if (uVar3 < 0x50727033) {
        if (uVar3 < 0x50727031) {
          if (uVar3 == 0x426e5672) {
            local_5 = (undefined1)*puVar6;
          }
          else if (uVar3 == 0x44617461) {
            switch((unsigned int)(uintptr_t)(local_5)) {
            case 0: ;
              pvVar4 = (undefined *)F_0097abd0(0x1c);
              if (pvVar4 != (undefined *)0x0) {
                F_00987aa0(pvVar4);
              }
              F_00987af0(puVar6,puVar7[1]);
              break;
            case 1: ;
              pvVar4 = (undefined *)F_0097abd0(0x1c);
              if (pvVar4 != (undefined *)0x0) {
                F_00987990(pvVar4);
              }
              F_009879e0(puVar6,puVar7[1]);
              break;
            case 2: ;
              pvVar4 = (undefined *)F_0097abd0(0x1c);
              if (pvVar4 != (undefined *)0x0) {
                F_00987bb0(pvVar4);
              }
              F_00987c00(puVar6,puVar7[1]);
              break;
            case 3: ;
              pvVar4 = (undefined *)F_0097abd0(0x1c);
              if (pvVar4 != (undefined *)0x0) {
                F_00987880(pvVar4);
              }
              F_009878d0(puVar6,puVar7[1]);
            }
          }
        }
        else {
LAB_00995fba: ;
          if (REFG(char, 0x14a06d6) == '\0') {
            puVar2 = (undefined4 *)(REFG(int, 0x14a09d8) + REFG(int, 0x14a09e0));
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 100;
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = (*(undefined * PTR32 (*)[14])REFP(0x10dead4));
              puVar2[5] = uVar8;
              puVar2[6] = uVar8;
              puVar2[7] = uVar8;
              puVar2[8] = uVar8;
              *(undefined2 *)(puVar2 + 9) = 0;
              *(undefined2 *)(puVar2 + 10) = 0;
              *(byte *)((int)puVar2 + 0x2a) = *(byte *)((int)puVar2 + 0x2a) & 0xf8;
              *(undefined2 *)((int)puVar2 + 0x26) = 0xffff;
              puVar2[0xc] = 0;
              puVar2[0xb] = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
              puVar2[0xe] = &REFG(undefined, 0x14a0a44);
              puVar2[0xd] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar2[0xf] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar2[0x10] = &REFG(undefined, 0x14a0a44);
              puVar2[0x11] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar2[0x12] = &REFG(undefined, 0x14a0a44);
              puVar2[0x13] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar2[0x14] = &REFG(undefined, 0x14a0a44);
              puVar2[0x15] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar2[0x16] = &REFG(undefined, 0x14a0a44);
              puVar2[0x17] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar2[0x18] = &REFG(undefined, 0x14a0a44);
            }
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 100;
          }
          F_00988ab0(puVar6,puVar7[1]);
        }
      }
      else if ((uVar3 == 0x50727047) || (uVar3 == 0x50727053)) goto LAB_00995fba;
      puVar1 = puVar7 + 1;
      puVar7 = ((uint *)GEN_TOP(((int)puVar6 + (*puVar1 + 3 & 0xfffffffc))));
      uVar5 = uVar5 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar5 < param_2);
  }
  return 0;
}

/* ref: FUN_00996090 */
uint F_00996090(unsigned int gen_a0)
{
  GEN_ENTER(0x996090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[38])REFP(0x10df0bc));
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined1 *)((int)this + 0x1f) = 0xff;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[4])REFP(0x10ddce8));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x44) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x4c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x5c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 100) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x74) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x7c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x80) = *(uint *)((int)this + 0x80) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x8c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x94) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x98) = *(uint *)((int)this + 0x98) & 0xfffffff8;
  F_00988b80((undefined *)((int)this + 0x9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x108) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x110) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x114) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x118) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x11c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x124) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 300) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x134) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x13c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x148) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x150) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x154) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x15c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x160) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x164) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x16c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x174) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x178) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x184) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x188) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x18c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x194) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x19c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1a4) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1ac) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1b8) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1bc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1c0) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x1c4) = *(uint *)((int)this + 0x1c4) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1cc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1d0) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1d8) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x1dc) = *(uint *)((int)this + 0x1dc) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1e8) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ec) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1f0) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 500) = *(uint *)((int)this + 500) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1fc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x200) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x204) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x208) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x20c) = *(uint *)((int)this + 0x20c) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x210) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x214) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x218) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x21c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x220) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x224) = *(uint *)((int)this + 0x224) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x22c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x230) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x234) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x238) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x23c) = *(uint *)((int)this + 0x23c) & 0xfffffff8;
  *(undefined4 *)((int)this + 0x240) = 0;
  return (uint)this;
}

/* ref: FUN_00996350 */
unsigned int F_00996350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x996350u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * puVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  char local_5;
  
  uVar4 = 0;
  local_5 = -1;
  pcVar6 = param_1;
  if (param_2 != 0) {
    do {
      puVar1 = *(undefined * PTR32 *)pcVar6;
      pcVar5 = pcVar6 + 8;
      if (puVar1 < (undefined *)0x43724353) {
        if (puVar1 == (undefined *)0x43724352) goto LAB_009965df;
        if (puVar1 < (undefined *)0x49415b) {
          if ((undefined *)0x494157 < puVar1) goto LAB_009965df;
          if (puVar1 < (undefined *)0x43724a) {
            if ((puVar1 == (undefined *)0x437249) || (puVar1 == (undefined *)0x415273))
            goto LAB_009965df;
            if (puVar1 == (undefined *)0x436f6c) {
              F_00988c40(pcVar5,*(undefined4 *)(pcVar6 + 4));
            }
            else if (puVar1 == (undefined *)0x437243) goto LAB_009965df;
          }
          else if (puVar1 == (undefined *)0x455654) {
            local_5 = *pcVar5;
          }
          else if (puVar1 == (undefined *)0x477261) goto LAB_009965df;
        }
        else if (&REFG(undefined, 0x53636c) < puVar1) {
          if (((undefined *)0x565257 < puVar1) &&
             ((puVar1 < (undefined *)0x56525b || (puVar1 == (undefined *)0x41527352))))
          goto LAB_009965df;
        }
        else if ((puVar1 == &REFG(undefined, 0x53636c)) ||
                ((puVar1 == (undefined *)0x506f73 || (puVar1 == (undefined *)0x526f74)))) {
          F_00988990(pcVar5,*(undefined4 *)(pcVar6 + 4));
        }
      }
      else if (puVar1 < (undefined *)0x49415a53) {
        if (puVar1 == (undefined *)0x49415a52) goto LAB_009965df;
        if (puVar1 < (undefined *)0x47726153) {
          if ((puVar1 == (undefined *)0x47726152) || (puVar1 == (undefined *)0x43724952))
          goto LAB_009965df;
          if (puVar1 == (undefined *)0x44617461) {
            switch((unsigned int)(uintptr_t)(local_5)) {
            case '\0': ;
              puVar2 = (undefined4 *)F_0097abd0(4);
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10ddca4));
              }
              break;
            case '\x01': ;
              pvVar3 = (undefined *)F_0097abd0(0xb0);
              if (pvVar3 != (undefined *)0x0) {
                F_00987e10(pvVar3);
              }
              F_00987f50(pcVar5,*(undefined4 *)(pcVar6 + 4));
              break;
            case '\x02': ;
              pvVar3 = (undefined *)F_0097abd0(0x98);
              if (pvVar3 != (undefined *)0x0) {
                F_00988080(pvVar3);
              }
              F_00988180(pcVar5,*(undefined4 *)(pcVar6 + 4));
              break;
            case '\x03': ;
              pvVar3 = (undefined *)F_0097abd0(0x80);
              if (pvVar3 != (undefined *)0x0) {
                F_00988640(pvVar3);
              }
              F_00988710(pcVar5,*(undefined4 *)(pcVar6 + 4));
              break;
            case '\x04': ;
              pvVar3 = (undefined *)F_0097abd0(0x98);
              if (pvVar3 != (undefined *)0x0) {
                F_00988290(pvVar3);
              }
              F_00988390(pcVar5,*(undefined4 *)(pcVar6 + 4));
              break;
            case '\x05': ;
              pvVar3 = (undefined *)F_0097abd0(0x68);
              if (pvVar3 != (undefined *)0x0) {
                F_00988490(pvVar3);
              }
              F_00988550(pcVar5,*(undefined4 *)(pcVar6 + 4));
            }
          }
          else if (puVar1 == (undefined *)0x456d436e) goto LAB_0099648b;
        }
        else if ((puVar1 == (undefined *)0x49415852) || (puVar1 == (undefined *)0x49415952))
        goto LAB_009965df;
      }
      else if (puVar1 < (undefined *)0x56525853) {
        if (puVar1 == (undefined *)0x56525852) {
LAB_009965df: ;
          F_0097c440(pcVar5,*(undefined4 *)(pcVar6 + 4));
        }
        else if (puVar1 == (undefined *)0x5072436e) {
LAB_0099648b: ;
          REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + *pcVar5 * 0x44;
        }
        else if (puVar1 == (undefined *)0x53644e6d) {
          REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + (*(int *)(pcVar6 + 4) + 3U & 0xfffffffc);
        }
      }
      else if ((puVar1 == (undefined *)0x56525952) || (puVar1 == (undefined *)0x56525a52))
      goto LAB_009965df;
      uVar4 = uVar4 + 8 + (*(int *)(pcVar6 + 4) + 3U & 0xfffffffc);
      pcVar6 = pcVar5 + (*(int *)(pcVar6 + 4) + 3U & 0xfffffffc);
    } while (uVar4 < param_2);
  }
  return 0;
}

/* ref: FUN_00996630 */
uint F_00996630(unsigned int gen_a0)
{
  GEN_ENTER(0x996630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10df15c));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[4])REFP(0x10ddce8));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x44) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x4c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x5c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 100) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffff8;
  F_00988b80((undefined *)((int)this + 0x6c));
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd8) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xe4) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xec) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xf4) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xfc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x100) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x104) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x108) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x10c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x110) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x118) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x11c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x124) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 300) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x134) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x13c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x144) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x148) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x150) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x154) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x15c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x160) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x164) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x16c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x174) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x178) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x17c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x184) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x188) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 400) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x194) = *(uint *)((int)this + 0x194) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x19c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1a0) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1a8) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x1ac) = *(uint *)((int)this + 0x1ac) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1b8) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1bc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x1c0) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x1c4) = *(uint *)((int)this + 0x1c4) & 0xfffffff8;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  return (uint)this;
}

/* ref: FUN_00996890 */
unsigned int F_00996890(unsigned int gen_a0)
{
  GEN_ENTER(0x996890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1bc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x19c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x184) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x178) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x160) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x150) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x148) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x118) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x110) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x108) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x100) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd8) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xcc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x94) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x74) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[4])REFP(0x10dd358));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10dd77c));
  return 0;
}

/* ref: FUN_009969d0 */
unsigned int F_009969d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9969d0u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  char cVar2;
  undefined * puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined * pvVar7;
  uint * puVar8;
  uint uVar9;
  uint * puVar10;
  int iVar11;
  char * pcVar12;
  char * pcVar13;
  uint local_10;
  char local_5;
  
  local_5 = -1;
  local_10 = 0;
  pcVar13 = param_1;
  if (param_2 != 0) {
    do {
      puVar3 = *(undefined * PTR32 *)pcVar13;
      pcVar12 = pcVar13 + 8;
      if (puVar3 < (undefined *)0x544333) {
        if (puVar3 == (undefined *)0x544332) {
          if (REFG(char, 0x14a06d6) == '\0') {
            puVar6 = (undefined4 *)(REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8));
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 0xc;
            if (puVar6 != (undefined4 *)0x0) {
              *(ushort *)((int)puVar6 + 6) = *(ushort *)((int)puVar6 + 6) & 0xfff8;
              *puVar6 = (*(undefined * PTR32 (*)[12])REFP(0x10ddd50));
              *(undefined2 *)(puVar6 + 1) = 0;
              *(undefined1 *)(puVar6 + 2) = 0xff;
            }
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 0xc;
          }
        }
        else if (puVar3 < (undefined *)0x436f6d) {
          if (puVar3 == (undefined *)0x436f6c) {
            F_00988c40(pcVar12,*(undefined4 *)(pcVar13 + 4));
          }
          else if (puVar3 < (undefined *)0x5451) {
            if (puVar3 == (undefined *)0x5450) {
              puVar6 = (undefined4 *)F_0097abd0(0x10);
              if (puVar6 != (undefined4 *)0x0) {
                *(byte *)(puVar6 + 1) = *(byte *)(puVar6 + 1) & 0xf0;
                *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x10dddfc));
                *(undefined1 *)((int)puVar6 + 5) = 0xff;
                puVar6[2] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                puVar6[3] = &REFG(undefined, 0x14a0a44);
              }
              F_0097d900(pcVar12,*(undefined4 *)(pcVar13 + 4));
            }
            else if (puVar3 == (undefined *)0x5444) {
              uVar5 = F_0097abd0(0x10);
              if (uVar5 != 0) {
                F_0097d7d0(uVar5);
              }
              F_0097d810(pcVar12,*(undefined4 *)(pcVar13 + 4));
            }
            else if (puVar3 == (undefined *)0x544e) {
              uVar5 = F_0097abd0(0x10);
              if (uVar5 != 0) {
                F_0097d5e0(uVar5);
              }
              F_0097d620(pcVar12,*(undefined4 *)(pcVar13 + 4));
            }
          }
          else if (puVar3 == (undefined *)0x5452) {
            puVar6 = (undefined4 *)F_0097abd0(0x10);
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = (*(undefined * PTR32 (*)[7])REFP(0x10ddda8));
              *(undefined2 *)(puVar6 + 1) = 0xff00;
              puVar6[2] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar6[3] = &REFG(undefined, 0x14a0a44);
            }
            F_0097d710(pcVar12,*(undefined4 *)(pcVar13 + 4));
          }
          else if (puVar3 == (undefined *)0x415273) goto LAB_00996f9d;
        }
        else {
          if (puVar3 < (undefined *)0x526f75) {
            if (puVar3 != (undefined *)0x526f74) {
              if (puVar3 == (undefined *)0x477261) goto LAB_00996f9d;
              if (puVar3 != (undefined *)0x506f73) goto switchD_00996c26_caseD_1;
            }
          }
          else if (puVar3 != &REFG(undefined, 0x53636c)) {
            if (puVar3 == (undefined *)0x544331) {
              pvVar7 = (undefined *)F_0097abd0(0x28);
              if (pvVar7 != (undefined *)0x0) {
                F_0097d220(pvVar7);
              }
              F_0097d280(pcVar12,*(undefined4 *)(pcVar13 + 4));
            }
            goto switchD_00996c26_caseD_1;
          }
          F_00988990(pcVar12,*(undefined4 *)(pcVar13 + 4));
        }
      }
      else if (puVar3 < (undefined *)0x536d706d) {
        if (puVar3 == (undefined *)0x536d706c) {
          REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + 0xd0;
        }
        else if (puVar3 < (undefined *)0x44617462) {
          if (puVar3 == (undefined *)0x44617461) {
            switch((unsigned int)(uintptr_t)(local_5)) {
            case '\x03': ;
              F_0098a2a0(pcVar12,*(undefined4 *)(pcVar13 + 4));
              break;
            case '\x04': ;
              F_0097da40(pcVar12,*(undefined4 *)(pcVar13 + 4));
              break;
            case '\x05': ;
              F_0098a490(pcVar12,*(undefined4 *)(pcVar13 + 4));
              break;
            case '\x06': ;
              F_0098ab40(pcVar12,*(undefined4 *)(pcVar13 + 4));
              break;
            case '\t': ;
              F_0097dca0(pcVar12,*(undefined4 *)(pcVar13 + 4));
              break;
            case '\v': ;
              F_0097dfc0(pcVar12,*(undefined4 *)(pcVar13 + 4));
              break;
            case '\f': ;
              F_0098b1a0(pcVar12,*(undefined4 *)(pcVar13 + 4));
            }
          }
          else if (((undefined *)0x565257 < puVar3) &&
                  ((puVar3 < (undefined *)0x56525b || (puVar3 == (undefined *)0x41527352))))
          goto LAB_00996f9d;
        }
        else {
          if (puVar3 == (undefined *)0x47726152) goto LAB_00996f9d;
          if (puVar3 == (undefined *)0x50725654) {
            local_5 = *pcVar12;
            switch((unsigned int)(uintptr_t)(local_5)) {
            case '\x01': ;
              puVar6 = (undefined4 *)F_0097abd0(0xc);
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = (*(undefined * PTR32 (*)[4])REFP(0x10dde3c));
                *(undefined2 *)(puVar6 + 1) = 0;
                puVar6[2] = 0;
              }
              break;
            case '\x02': ;
              puVar6 = (undefined4 *)F_0097abd0(8);
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = (*(undefined * PTR32 (*)[2])REFP(0x10dde50));
                *(undefined1 *)(puVar6 + 1) = 0;
              }
              break;
            case '\x03': ;
              pvVar7 = (undefined *)F_0097abd0(0xf8);
              if (pvVar7 != (undefined *)0x0) {
                F_0098a1b0(pvVar7);
              }
              break;
            case '\x04': ;
              pvVar7 = (undefined *)F_0097abd0(0x34);
              if (pvVar7 != (undefined *)0x0) {
                F_0097d9c0(pvVar7);
              }
              break;
            case '\x05': ;
              pvVar7 = (undefined *)F_0097abd0(0x148);
              if (pvVar7 != (undefined *)0x0) {
                F_0098a310(pvVar7);
              }
              break;
            case '\x06': ;
              pvVar7 = (undefined *)F_0097abd0(0x344);
              if (pvVar7 != (undefined *)0x0) {
                F_0098a7c0(pvVar7);
              }
              break;
            case '\b': ;
              puVar6 = (undefined4 *)F_0097abd0(4);
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = (*(undefined * PTR32 (*)[1])REFP(0x10dde5c));
              }
              break;
            case '\t': ;
              pvVar7 = (undefined *)F_0097abd0(0x1c);
              if (pvVar7 != (undefined *)0x0) {
                F_0097dc50(pvVar7);
              }
              break;
            case '\n': ;
              puVar6 = (undefined4 *)F_0097abd0(8);
              uVar4 = REFG(float, 0x1087f04);
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = (*(undefined * PTR32 (*)[2])REFP(0x10dde64));
                puVar6[1] = uVar4;
              }
              break;
            case '\v': ;
              pvVar7 = (undefined *)F_0097abd0(0x24);
              if (pvVar7 != (undefined *)0x0) {
                F_0097df60(pvVar7);
              }
              break;
            case '\f': ;
              pvVar7 = (undefined *)F_0097abd0(0x1bc);
              if (pvVar7 != (undefined *)0x0) {
                F_0098af30(pvVar7);
              }
              break;
            case '\r': ;
              puVar6 = (undefined4 *)F_0097abd0(8);
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = (*(undefined * PTR32 (*)[2])REFP(0x10dde24));
                *(undefined1 *)(puVar6 + 1) = 0xff;
              }
            }
          }
        }
      }
      else if (puVar3 < (undefined *)0x56525853) {
        if (puVar3 == (undefined *)0x56525852) {
LAB_00996f9d: ;
          F_0097c440(pcVar12,*(undefined4 *)(pcVar13 + 4));
        }
        else if (puVar3 == (undefined *)0x5576534e) {
          cVar2 = *pcVar12;
          if ('\0' < cVar2) {
            uVar5 = (uint)cVar2;
            if (cVar2 == '\0') {
              puVar8 = (uint *)F_00406a50(4);
            }
            else {
              uVar9 = -(uint)((int)((ulonglong)uVar5 * 0x70 >> 0x20) != 0) |
                      (uint)((ulonglong)uVar5 * 0x70);
              puVar8 = (uint *)F_0097ac20(-(uint)(0xfffffffb < uVar9) | uVar9 + 4);
            }
            if (puVar8 != (uint *)0x0) {
              iVar11 = uVar5 - 1;
              *puVar8 = uVar5;
              puVar10 = puVar8 + 1;
              if (-1 < iVar11) {
                puVar8 = puVar8 + 7;
                do {
                  *puVar10 = (uint)(*(undefined * PTR32 (*)[5])REFP(0x10deb28));
                  puVar8[-5] = 0;
                  puVar8[-4] = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10deaac));
                  puVar8[-3] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[-2] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[-1] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  *puVar8 = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[1] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[2] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[3] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[4] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[6] = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10deaac));
                  puVar8[7] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[8] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[9] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[10] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[0xb] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[0xc] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[0xd] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[0xe] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[0x10] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
                  puVar8[0x11] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[0x12] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[0x13] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar8[0x14] = (uint)&REFG(undefined, 0x14a0a44);
                  puVar8[0x15] = puVar8[0x15] & 0xfffffff8;
                  puVar10 = puVar10 + 0x1c;
                  puVar8 = puVar8 + 0x1c;
                  iVar11 = iVar11 + -1;
                } while (-1 < iVar11);
              }
            }
          }
        }
        else if (puVar3 == (undefined *)0x55765374) {
          F_009896f0(pcVar12,*(undefined4 *)(pcVar13 + 4));
        }
      }
      else if ((puVar3 == (undefined *)0x56525952) || (puVar3 == (undefined *)0x56525a52))
      goto LAB_00996f9d;
switchD_00996c26_caseD_1: ;
      piVar1 = (int *)(pcVar13 + 4);
      pcVar13 = pcVar12 + (*piVar1 + 3U & 0xfffffffc);
      local_10 = local_10 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (local_10 < param_2);
  }
  return 0;
}

/* ref: FUN_00997040 */
unsigned int F_00997040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x997040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * piVar1;
  double dVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  uint * puVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint * puVar12;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_c;
  byte local_5;
  
  uVar9 = 0;
  dVar2 = *(double *)&REFG(undefined, 0x1094560);
  if (param_3 != 0) {
    do {
      puVar8 = (uint *)0x0;
      puVar4 = (uint *)(param_2 + 2);
      if (*param_2 == 0x447374) {
        uVar3 = param_2[1];
        uVar7 = 0;
        local_c = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        puVar5 = puVar4;
        iVar11 = REFG(int, 0x14a09d8);
        if (uVar3 != 0) {
          do {
            uVar10 = *puVar5;
            puVar6 = puVar5 + 2;
            if (uVar10 < 0x4b657944) {
              if (uVar10 == 0x4b657943) {
                local_c = (uint)(char)*puVar6;
                if (local_c != 0) {
                  if (REFG(char, 0x14a06d6) == '\0') {
                    uVar10 = iVar11 + 0xfU & 0xfffffff0;
                    puVar8 = (uint *)(REFG(int, 0x14a09e0) + uVar10);
                    iVar11 = uVar10 + (local_c * 8 + 0x13 & 0xfffffff0);
                    REFG(int, 0x14a09d8) = iVar11;
                  }
                  else {
                    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                   (local_c * 8 + 0x13 & 0xfffffff0);
                    puVar8 = (uint *)0x0;
                  }
                }
              }
              else if (uVar10 == 0x4276506f) {
                local_1c = (uint)(char)*puVar6;
              }
              else if (uVar10 == 0x42765072) {
                local_20 = (uint)(char)*puVar6;
              }
            }
            else if (uVar10 == 0x4b657973) {
              if (local_c != 0) {
                local_5 = 0;
                uVar10 = 0;
                do {
                  puVar12 = puVar6 + uVar10 * 4;
                  puVar8[uVar10 * 2 + 1] = puVar6[uVar10 * 4 + 3];
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       (ushort)puVar8[uVar10 * 2 + 2] ^
                       ((ushort)puVar8[uVar10 * 2 + 2] ^ (ushort)*puVar12) & 0x3fff;
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       *(ushort *)((int)puVar12 + 2) << 0xe |
                       (ushort)puVar8[uVar10 * 2 + 2] & 0x3fff;
                  *(char *)((int)puVar8 + uVar10 * 8 + 10) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[1]))) * dVar2);
                  *(char *)((int)puVar8 + uVar10 * 8 + 0xb) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[2]))) * dVar2);
                  local_5 = local_5 + 1;
                  uVar10 = (uint)local_5;
                  iVar11 = REFG(int, 0x14a09d8);
                } while (uVar10 < local_c);
              }
            }
            else if (uVar10 == 0x52616e54) {
              local_18 = (uint)(char)*puVar6;
            }
            uVar7 = uVar7 + 8 + (puVar5[1] + 3 & 0xfffffffc);
            puVar5 = ((uint *)GEN_TOP(((int)puVar6 + (puVar5[1] + 3 & 0xfffffffc))));
          } while (uVar7 < uVar3);
          if (puVar8 != (uint *)0x0) {
            *puVar8 = (((local_c & 0xffff) << 5 | local_18 & 7) * 4 | local_1c & 3) * 4 |
                      *puVar8 & 0xfe000180 | local_20 & 3;
            *(uint * PTR32 *)((int)this + 0xc) = puVar8;
          }
        }
        puVar8 = *(uint * PTR32 *)((int)this + 0xc);
        uVar3 = *puVar8 >> 9 & 0xffff;
        if (uVar3 == 0) {
          *puVar8 = *puVar8 & 0xfffffe7f;
        }
        else if (uVar3 == 1) {
          *puVar8 = *puVar8 & 0xfffffeff | 0x80;
        }
        else {
          *puVar8 = *puVar8 & 0xffffff7f | 0x100;
        }
      }
      else if (*param_2 == 0x44737452) {
        F_00988d70((undefined *)((int)this + 0x10),param_1,puVar4,param_2[1]);
        dVar2 = *(double *)&REFG(undefined, 0x1094560);
      }
      piVar1 = param_2 + 1;
      param_2 = ((int *)GEN_TOP(((int)puVar4 + (*piVar1 + 3U & 0xfffffffc))));
      uVar9 = uVar9 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (uVar9 < param_3);
  }
  return 0;
}

/* ref: FUN_009972e0 */
unsigned int F_009972e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9972e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * piVar1;
  double dVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  uint * puVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint * puVar12;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_c;
  byte local_5;
  
  uVar9 = 0;
  dVar2 = *(double *)&REFG(undefined, 0x1094560);
  if (param_3 != 0) {
    do {
      puVar8 = (uint *)0x0;
      puVar4 = (uint *)(param_2 + 2);
      if (*param_2 == 0x434f46) {
        uVar3 = param_2[1];
        uVar7 = 0;
        local_c = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        puVar5 = puVar4;
        iVar11 = REFG(int, 0x14a09d8);
        if (uVar3 != 0) {
          do {
            uVar10 = *puVar5;
            puVar6 = puVar5 + 2;
            if (uVar10 < 0x4b657944) {
              if (uVar10 == 0x4b657943) {
                local_c = (uint)(char)*puVar6;
                if (local_c != 0) {
                  if (REFG(char, 0x14a06d6) == '\0') {
                    uVar10 = iVar11 + 0xfU & 0xfffffff0;
                    puVar8 = (uint *)(REFG(int, 0x14a09e0) + uVar10);
                    iVar11 = uVar10 + (local_c * 8 + 0x13 & 0xfffffff0);
                    REFG(int, 0x14a09d8) = iVar11;
                  }
                  else {
                    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                   (local_c * 8 + 0x13 & 0xfffffff0);
                    puVar8 = (uint *)0x0;
                  }
                }
              }
              else if (uVar10 == 0x4276506f) {
                local_1c = (uint)(char)*puVar6;
              }
              else if (uVar10 == 0x42765072) {
                local_20 = (uint)(char)*puVar6;
              }
            }
            else if (uVar10 == 0x4b657973) {
              if (local_c != 0) {
                local_5 = 0;
                uVar10 = 0;
                do {
                  puVar12 = puVar6 + uVar10 * 4;
                  puVar8[uVar10 * 2 + 1] = puVar6[uVar10 * 4 + 3];
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       (ushort)puVar8[uVar10 * 2 + 2] ^
                       ((ushort)puVar8[uVar10 * 2 + 2] ^ (ushort)*puVar12) & 0x3fff;
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       *(ushort *)((int)puVar12 + 2) << 0xe |
                       (ushort)puVar8[uVar10 * 2 + 2] & 0x3fff;
                  *(char *)((int)puVar8 + uVar10 * 8 + 10) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[1]))) * dVar2);
                  *(char *)((int)puVar8 + uVar10 * 8 + 0xb) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[2]))) * dVar2);
                  local_5 = local_5 + 1;
                  uVar10 = (uint)local_5;
                  iVar11 = REFG(int, 0x14a09d8);
                } while (uVar10 < local_c);
              }
            }
            else if (uVar10 == 0x52616e54) {
              local_18 = (uint)(char)*puVar6;
            }
            uVar7 = uVar7 + 8 + (puVar5[1] + 3 & 0xfffffffc);
            puVar5 = ((uint *)GEN_TOP(((int)puVar6 + (puVar5[1] + 3 & 0xfffffffc))));
          } while (uVar7 < uVar3);
          if (puVar8 != (uint *)0x0) {
            *puVar8 = (((local_c & 0xffff) << 5 | local_18 & 7) * 4 | local_1c & 3) * 4 |
                      *puVar8 & 0xfe000180 | local_20 & 3;
            *(uint * PTR32 *)((int)this + 0xc) = puVar8;
          }
        }
        puVar8 = *(uint * PTR32 *)((int)this + 0xc);
        uVar3 = *puVar8 >> 9 & 0xffff;
        if (uVar3 == 0) {
          *puVar8 = *puVar8 & 0xfffffe7f;
        }
        else if (uVar3 == 1) {
          *puVar8 = *puVar8 & 0xfffffeff | 0x80;
        }
        else {
          *puVar8 = *puVar8 & 0xffffff7f | 0x100;
        }
      }
      else if (*param_2 == 0x434f4652) {
        F_00988d70((undefined *)((int)this + 0x10),param_1,puVar4,param_2[1]);
        dVar2 = *(double *)&REFG(undefined, 0x1094560);
      }
      piVar1 = param_2 + 1;
      param_2 = ((int *)GEN_TOP(((int)puVar4 + (*piVar1 + 3U & 0xfffffffc))));
      uVar9 = uVar9 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (uVar9 < param_3);
  }
  return 0;
}

/* ref: FUN_00997580 */
unsigned int F_00997580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x997580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * piVar1;
  double dVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  uint * puVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint * puVar12;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_c;
  byte local_5;
  
  uVar9 = 0;
  dVar2 = *(double *)&REFG(undefined, 0x1094560);
  if (param_3 != 0) {
    do {
      puVar8 = (uint *)0x0;
      puVar4 = (uint *)(param_2 + 2);
      if (*param_2 == 0x537053) {
        uVar3 = param_2[1];
        uVar7 = 0;
        local_c = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        puVar5 = puVar4;
        iVar11 = REFG(int, 0x14a09d8);
        if (uVar3 != 0) {
          do {
            uVar10 = *puVar5;
            puVar6 = puVar5 + 2;
            if (uVar10 < 0x4b657944) {
              if (uVar10 == 0x4b657943) {
                local_c = (uint)(char)*puVar6;
                if (local_c != 0) {
                  if (REFG(char, 0x14a06d6) == '\0') {
                    uVar10 = iVar11 + 0xfU & 0xfffffff0;
                    puVar8 = (uint *)(REFG(int, 0x14a09e0) + uVar10);
                    iVar11 = uVar10 + (local_c * 8 + 0x13 & 0xfffffff0);
                    REFG(int, 0x14a09d8) = iVar11;
                  }
                  else {
                    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                   (local_c * 8 + 0x13 & 0xfffffff0);
                    puVar8 = (uint *)0x0;
                  }
                }
              }
              else if (uVar10 == 0x4276506f) {
                local_1c = (uint)(char)*puVar6;
              }
              else if (uVar10 == 0x42765072) {
                local_20 = (uint)(char)*puVar6;
              }
            }
            else if (uVar10 == 0x4b657973) {
              if (local_c != 0) {
                local_5 = 0;
                uVar10 = 0;
                do {
                  puVar12 = puVar6 + uVar10 * 4;
                  puVar8[uVar10 * 2 + 1] = puVar6[uVar10 * 4 + 3];
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       (ushort)puVar8[uVar10 * 2 + 2] ^
                       ((ushort)puVar8[uVar10 * 2 + 2] ^ (ushort)*puVar12) & 0x3fff;
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       *(ushort *)((int)puVar12 + 2) << 0xe |
                       (ushort)puVar8[uVar10 * 2 + 2] & 0x3fff;
                  *(char *)((int)puVar8 + uVar10 * 8 + 10) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[1]))) * dVar2);
                  *(char *)((int)puVar8 + uVar10 * 8 + 0xb) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[2]))) * dVar2);
                  local_5 = local_5 + 1;
                  uVar10 = (uint)local_5;
                  iVar11 = REFG(int, 0x14a09d8);
                } while (uVar10 < local_c);
              }
            }
            else if (uVar10 == 0x52616e54) {
              local_18 = (uint)(char)*puVar6;
            }
            uVar7 = uVar7 + 8 + (puVar5[1] + 3 & 0xfffffffc);
            puVar5 = ((uint *)GEN_TOP(((int)puVar6 + (puVar5[1] + 3 & 0xfffffffc))));
          } while (uVar7 < uVar3);
          if (puVar8 != (uint *)0x0) {
            *puVar8 = (((local_c & 0xffff) << 5 | local_18 & 7) * 4 | local_1c & 3) * 4 |
                      *puVar8 & 0xfe000180 | local_20 & 3;
            *(uint * PTR32 *)((int)this + 0xc) = puVar8;
          }
        }
        puVar8 = *(uint * PTR32 *)((int)this + 0xc);
        uVar3 = *puVar8 >> 9 & 0xffff;
        if (uVar3 == 0) {
          *puVar8 = *puVar8 & 0xfffffe7f;
        }
        else if (uVar3 == 1) {
          *puVar8 = *puVar8 & 0xfffffeff | 0x80;
        }
        else {
          *puVar8 = *puVar8 & 0xffffff7f | 0x100;
        }
      }
      else if (*param_2 == 0x53705352) {
        F_00988d70((undefined *)((int)this + 0x10),param_1,puVar4,param_2[1]);
        dVar2 = *(double *)&REFG(undefined, 0x1094560);
      }
      piVar1 = param_2 + 1;
      param_2 = ((int *)GEN_TOP(((int)puVar4 + (*piVar1 + 3U & 0xfffffffc))));
      uVar9 = uVar9 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (uVar9 < param_3);
  }
  return 0;
}

/* ref: FUN_00997820 */
unsigned int F_00997820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x997820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * piVar1;
  double dVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  uint * puVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint * puVar12;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_c;
  byte local_5;
  
  uVar9 = 0;
  dVar2 = *(double *)&REFG(undefined, 0x1094560);
  if (param_3 != 0) {
    do {
      puVar8 = (uint *)0x0;
      puVar4 = (uint *)(param_2 + 2);
      if (*param_2 == 0x434f46) {
        uVar3 = param_2[1];
        uVar7 = 0;
        local_c = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        puVar5 = puVar4;
        iVar11 = REFG(int, 0x14a09d8);
        if (uVar3 != 0) {
          do {
            uVar10 = *puVar5;
            puVar6 = puVar5 + 2;
            if (uVar10 < 0x4b657944) {
              if (uVar10 == 0x4b657943) {
                local_c = (uint)(char)*puVar6;
                if (local_c != 0) {
                  if (REFG(char, 0x14a06d6) == '\0') {
                    uVar10 = iVar11 + 0xfU & 0xfffffff0;
                    puVar8 = (uint *)(REFG(int, 0x14a09e0) + uVar10);
                    iVar11 = uVar10 + (local_c * 8 + 0x13 & 0xfffffff0);
                    REFG(int, 0x14a09d8) = iVar11;
                  }
                  else {
                    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) +
                                   (local_c * 8 + 0x13 & 0xfffffff0);
                    puVar8 = (uint *)0x0;
                  }
                }
              }
              else if (uVar10 == 0x4276506f) {
                local_1c = (uint)(char)*puVar6;
              }
              else if (uVar10 == 0x42765072) {
                local_20 = (uint)(char)*puVar6;
              }
            }
            else if (uVar10 == 0x4b657973) {
              if (local_c != 0) {
                local_5 = 0;
                uVar10 = 0;
                do {
                  puVar12 = puVar6 + uVar10 * 4;
                  puVar8[uVar10 * 2 + 1] = puVar6[uVar10 * 4 + 3];
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       (ushort)puVar8[uVar10 * 2 + 2] ^
                       ((ushort)puVar8[uVar10 * 2 + 2] ^ (ushort)*puVar12) & 0x3fff;
                  *(ushort *)(puVar8 + uVar10 * 2 + 2) =
                       *(ushort *)((int)puVar12 + 2) << 0xe |
                       (ushort)puVar8[uVar10 * 2 + 2] & 0x3fff;
                  *(char *)((int)puVar8 + uVar10 * 8 + 10) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[1]))) * dVar2);
                  *(char *)((int)puVar8 + uVar10 * 8 + 0xb) =
                       (char)(int)(((double)GEN_TOD(gen_bits2f(puVar12[2]))) * dVar2);
                  local_5 = local_5 + 1;
                  uVar10 = (uint)local_5;
                  iVar11 = REFG(int, 0x14a09d8);
                } while (uVar10 < local_c);
              }
            }
            else if (uVar10 == 0x52616e54) {
              local_18 = (uint)(char)*puVar6;
            }
            uVar7 = uVar7 + 8 + (puVar5[1] + 3 & 0xfffffffc);
            puVar5 = ((uint *)GEN_TOP(((int)puVar6 + (puVar5[1] + 3 & 0xfffffffc))));
          } while (uVar7 < uVar3);
          if (puVar8 != (uint *)0x0) {
            *puVar8 = (((local_c & 0xffff) << 5 | local_18 & 7) * 4 | local_1c & 3) * 4 |
                      *puVar8 & 0xfe000180 | local_20 & 3;
            *(uint * PTR32 *)((int)this + 0xc) = puVar8;
          }
        }
        puVar8 = *(uint * PTR32 *)((int)this + 0xc);
        uVar3 = *puVar8 >> 9 & 0xffff;
        if (uVar3 == 0) {
          *puVar8 = *puVar8 & 0xfffffe7f;
        }
        else if (uVar3 == 1) {
          *puVar8 = *puVar8 & 0xfffffeff | 0x80;
        }
        else {
          *puVar8 = *puVar8 & 0xffffff7f | 0x100;
        }
      }
      else if (*param_2 == 0x434f4652) {
        F_00988d70((undefined *)((int)this + 0x10),param_1,puVar4,param_2[1]);
        dVar2 = *(double *)&REFG(undefined, 0x1094560);
      }
      piVar1 = param_2 + 1;
      param_2 = ((int *)GEN_TOP(((int)puVar4 + (*piVar1 + 3U & 0xfffffffc))));
      uVar9 = uVar9 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (uVar9 < param_3);
  }
  return 0;
}

/* ref: FUN_00997ac0 */
unsigned int F_00997ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x997ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  
  uVar3 = 0;
  puVar5 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = *puVar5;
      puVar4 = puVar5 + 2;
      if (uVar2 < 0x46454464) {
        if (uVar2 == 0x46454463) {
          *(uint *)((int)this + 0x30) = *puVar4;
        }
        else if (uVar2 == 0x477261) {
          F_00988d70((undefined *)((int)this + 0x14),param_1,puVar4,puVar5[1]);
        }
        else if (uVar2 == 0x4c656e) {
          F_00988d70((undefined *)((int)this + 4),param_1,puVar4,puVar5[1]);
        }
        else if (uVar2 == 0x537472) {
          F_00988d70((undefined *)((int)this + 0xc),param_1,puVar4,puVar5[1]);
        }
      }
      else if (uVar2 == 0x46534463) {
        *(uint *)((int)this + 0x2c) = *puVar4;
      }
      else if (uVar2 == 0x49526164) {
        F_00988d70((undefined *)((int)this + 0x1c),param_1,puVar4,puVar5[1]);
      }
      else if (uVar2 == 0x4f526164) {
        F_00988d70((undefined *)((int)this + 0x24),param_1,puVar4,puVar5[1]);
      }
      puVar1 = puVar5 + 1;
      puVar5 = ((uint *)GEN_TOP(((int)puVar4 + (*puVar1 + 3 & 0xfffffffc))));
      uVar3 = uVar3 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar3 < param_3);
  }
  return 0;
}

/* ref: FUN_00997bb0 */
uint F_00997bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x997bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10df25c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x24) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x2c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x34) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x3c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x44) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x54) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x5c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x60) = *(uint *)((int)this + 0x60) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x6c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x74) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x78) = *(uint *)((int)this + 0x78) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7c) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x88) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x90) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x94) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x98) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xa0) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xa8) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xb0) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc0) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 200) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xcc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xd0) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xd8) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xdc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xe0) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xe8) = &REFG(undefined, 0x14a0a44);
  return (uint)this;
}

/* ref: FUN_00997ce0 */
unsigned int F_00997ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x997ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xdc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xcc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x94) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7c) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x34) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dd8ec));
  return 0;
}

/* ref: FUN_00997d80 */
uint F_00997d80(unsigned int gen_a0)
{
  GEN_ENTER(0x997d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10df280));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x24) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x2c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x34) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x3c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x44) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4c) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x58) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x60) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x68) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x70) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x74) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x78) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x80) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x90) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x94) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x98) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xa0) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xa8) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xb0) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xb8) = &REFG(undefined, 0x14a0a44);
  return (uint)this;
}

/* ref: FUN_00997e60 */
unsigned int F_00997e60(unsigned int gen_a0)
{
  GEN_ENTER(0x997e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x94) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x74) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4c) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x34) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dd910));
  return 0;
}

/* ref: FUN_00997ed0 */
unsigned int F_00997ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x997ed0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x526f75) {
        if (uVar1 == 0x526f74) {
LAB_00997f0a: ;
          F_00988990(puVar3,puVar4[1]);
        }
        else if (uVar1 < 0x52644a) {
          if ((uVar1 == 0x526449) || (uVar1 == 0x417474)) {
LAB_00997f34: ;
            F_0097c440(puVar3,puVar4[1]);
          }
          else if (uVar1 == 0x506f73) goto LAB_00997f0a;
        }
        else if (uVar1 == 0x52644f) goto LAB_00997f34;
      }
      else if (((uVar1 == 0x41747452) || (uVar1 == 0x52644952)) || (uVar1 == 0x52644f52))
      goto LAB_00997f34;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00997f60 */
uint F_00997f60(unsigned int gen_a0)
{
  GEN_ENTER(0x997f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10df29c));
  F_00988b80((undefined *)((int)this + 4));
  F_00988b80((undefined *)((int)this + 0x70));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xdc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 *)((int)this + 0xe4) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xec) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(uint *)((int)this + 0xf0) = *(uint *)((int)this + 0xf0) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf4) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined * PTR32 *)((int)this + 0x100) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfc) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x108) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x104) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x110) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x118) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x114) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x120) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x128) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x124) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  return (uint)this;
}

/* ref: FUN_00998010 */
unsigned int F_00998010(unsigned int gen_a0)
{
  GEN_ENTER(0x998010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x124) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x114) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x104) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf4) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xdc) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 200) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x44) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x34) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd8b0));
  return 0;
}

/* ref: FUN_009980e0 */
unsigned int F_009980e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9980e0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x506f78) {
        if (uVar1 == 0x506f77) {
LAB_0099812b: ;
          F_0097c440(puVar3,puVar4[1]);
        }
        else if ((uVar1 == 0x416d62) || (uVar1 == 0x436f6c)) {
          F_00988c40(puVar3,puVar4[1]);
        }
      }
      else if (uVar1 == 0x526f74) {
        F_00988990(puVar3,puVar4[1]);
      }
      else if (uVar1 == 0x506f7752) goto LAB_0099812b;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00998160 */
uint F_00998160(unsigned int gen_a0)
{
  GEN_ENTER(0x998160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10df2b4));
  F_00988b80((undefined *)((int)this + 4));
  uVar1 = REFG(float, 0x1088068);
  *(undefined * PTR32 *)((int)this + 0x74) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined * PTR32 *)((int)this + 0x84) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x8c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x94) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x9c) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xa4) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xac) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined * PTR32 *)((int)this + 0xbc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc4) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xcc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 200) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xd4) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xdc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xe4) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(byte *)((int)this + 0xec) = *(byte *)((int)this + 0xec) & 0xf0;
  *(undefined4 *)((int)this + 0xf0) = uVar1;
  uVar1 = REFG(float, 0x1094838);
  *(undefined4 *)((int)this + 0xe8) = 1;
  *(undefined4 *)((int)this + 0xf4) = uVar1;
  return (uint)this;
}

/* ref: FUN_00998270 */
unsigned int F_00998270(unsigned int gen_a0)
{
  GEN_ENTER(0x998270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 200) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x44) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x34) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10dd87c));
  return 0;
}

/* ref: FUN_00998310 */
unsigned int F_00998310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x998310u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x526f75) {
        if (uVar1 == 0x526f74) {
LAB_00998341: ;
          F_00988990(puVar3,puVar4[1]);
        }
        else if (uVar1 == 0x436f6c) {
          F_00988c40(puVar3,puVar4[1]);
        }
        else if (uVar1 == 0x506f73) goto LAB_00998341;
      }
      else if (uVar1 == 0x44737453) {
        F_0097c440(puVar3,puVar4[1]);
      }
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00998390 */
unsigned int F_00998390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x998390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  undefined * this_00;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  
  uVar1 = 0;
  puVar3 = param_2;
  if (param_3 != 0) {
    do {
      uVar4 = *puVar3;
      puVar2 = puVar3 + 2;
      if (uVar4 < 0x524f55) {
        if (uVar4 != 0x524f54) {
          if (uVar4 < 0x496a42) {
            if (uVar4 == 0x496a41) {
              uVar4 = puVar3[1];
              this_00 = (undefined *)((int)this + 0x9c);
            }
            else if (uVar4 == 0x416e58) {
              uVar4 = puVar3[1];
              this_00 = (undefined *)((int)this + 0xc);
            }
            else if (uVar4 == 0x416e59) {
              uVar4 = puVar3[1];
              this_00 = (undefined *)((int)this + 0x24);
            }
            else {
              if (uVar4 != 0x416e5a) goto LAB_00998520;
              uVar4 = puVar3[1];
              this_00 = (undefined *)((int)this + 0x3c);
            }
          }
          else if (uVar4 == 0x496a53) {
            uVar4 = puVar3[1];
            this_00 = (undefined *)((int)this + 0x84);
          }
          else if (uVar4 == 0x496e53) {
            uVar4 = puVar3[1];
            this_00 = (undefined *)((int)this + 0x54);
          }
          else {
            if (uVar4 != 0x4f7553) goto LAB_00998520;
            uVar4 = puVar3[1];
            this_00 = (undefined *)((int)this + 0x6c);
          }
          goto LAB_0099851b;
        }
        *(char *)((int)this + 4) = (char)*puVar2;
      }
      else {
        if (uVar4 < 0x496a4153) {
          if (uVar4 == 0x496a4152) {
            uVar4 = puVar3[1];
            this_00 = (undefined *)((int)this + 0xa4);
          }
          else if (uVar4 == 0x416e5852) {
            uVar4 = puVar3[1];
            this_00 = (undefined *)((int)this + 0x14);
          }
          else if (uVar4 == 0x416e5952) {
            uVar4 = puVar3[1];
            this_00 = (undefined *)((int)this + 0x2c);
          }
          else {
            if (uVar4 != 0x416e5a52) goto LAB_00998520;
            uVar4 = puVar3[1];
            this_00 = (undefined *)((int)this + 0x44);
          }
        }
        else if (uVar4 == 0x496a5352) {
          uVar4 = puVar3[1];
          this_00 = (undefined *)((int)this + 0x8c);
        }
        else if (uVar4 == 0x496e5352) {
          uVar4 = puVar3[1];
          this_00 = (undefined *)((int)this + 0x5c);
        }
        else {
          if (uVar4 != 0x4f755352) goto LAB_00998520;
          uVar4 = puVar3[1];
          this_00 = (undefined *)((int)this + 0x74);
        }
LAB_0099851b: ;
        F_00988d70(this_00,param_1,puVar2,uVar4);
      }
LAB_00998520: ;
      uVar1 = uVar1 + 8 + (puVar3[1] + 3 & 0xfffffffc);
      puVar3 = ((uint *)GEN_TOP(((int)puVar2 + (puVar3[1] + 3 & 0xfffffffc))));
    } while (uVar1 < param_3);
  }
  return 0;
}

/* ref: FUN_00998550 */
unsigned int F_00998550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x998550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  uint uVar2;
  undefined * this_00;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  
  uVar2 = 0;
  puVar4 = param_2;
  if (param_3 != 0) {
    do {
      uVar5 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar5 < 0x416e5953) {
        if (uVar5 == 0x416e5952) {
          uVar5 = puVar4[1];
          this_00 = (undefined *)((int)this + 0x2c);
        }
        else if (uVar5 < 0x496a54) {
          if (uVar5 == 0x496a53) {
            this_00 = (undefined *)((int)this + 0x6c);
LAB_009986bc: ;
            uVar5 = puVar4[1];
          }
          else if (uVar5 < 0x416e5b) {
            if (uVar5 == 0x416e5a) {
              uVar5 = puVar4[1];
              this_00 = (undefined *)((int)this + 0x3c);
            }
            else {
              if (uVar5 == 0x416e58) {
                this_00 = (undefined *)((int)this + 0xc);
                goto LAB_009986bc;
              }
              if (uVar5 != 0x416e59) goto LAB_009986ca;
              uVar5 = puVar4[1];
              this_00 = (undefined *)((int)this + 0x24);
            }
          }
          else {
            if (uVar5 != 0x496a41) goto LAB_009986ca;
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0x84);
          }
        }
        else {
          if (uVar5 == 0x524f54) {
            *(char *)((int)this + 4) = (char)*puVar3;
            goto LAB_009986ca;
          }
          if (uVar5 == 0x526164) {
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0x54);
          }
          else {
            if (uVar5 != 0x416e5852) goto LAB_009986ca;
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0x14);
          }
        }
LAB_009986c5: ;
        F_00988d70(this_00,param_1,puVar3,uVar5);
      }
      else {
        if (0x47654d54 < uVar5) {
          if (uVar5 == 0x496a4152) {
            this_00 = (undefined *)((int)this + 0x8c);
            goto LAB_009986bc;
          }
          if (uVar5 == 0x496a5352) {
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0x74);
          }
          else {
            if (uVar5 != 0x52616452) goto LAB_009986ca;
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0x5c);
          }
          goto LAB_009986c5;
        }
        if (uVar5 == 0x47654d54) {
          *(char *)((int)this + 5) = (char)*puVar3;
        }
        else {
          if (uVar5 == 0x416e5a52) {
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0x44);
            goto LAB_009986c5;
          }
          if (uVar5 == 0x44697658) {
            *(char *)((int)this + 6) = (char)*puVar3;
          }
          else if (uVar5 == 0x44697659) {
            *(char *)((int)this + 7) = (char)*puVar3;
          }
        }
      }
LAB_009986ca: ;
      puVar1 = puVar4 + 1;
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (*puVar1 + 3 & 0xfffffffc))));
      uVar2 = uVar2 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_009986f0 */
unsigned int F_009986f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9986f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  
  uVar3 = 0;
  puVar5 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = *puVar5;
      puVar4 = puVar5 + 2;
      if (uVar2 < 0x416e5853) {
        if (uVar2 == 0x416e5852) {
          F_00988d70((undefined *)((int)this + 0x44),param_1,puVar4,puVar5[1]);
        }
        else if (uVar2 < 0x496a54) {
          if (uVar2 == 0x496a53) {
            F_00988d70((undefined *)((int)this + 0x84),param_1,puVar4,puVar5[1]);
          }
          else if (uVar2 == 0x416e58) {
            F_00988d70((undefined *)((int)this + 0x3c),param_1,puVar4,puVar5[1]);
          }
          else if (uVar2 == 0x416e59) {
            F_00988d70((undefined *)((int)this + 0x54),param_1,puVar4,puVar5[1]);
          }
          else if (uVar2 == 0x416e5a) {
            F_00988d70((undefined *)((int)this + 0x6c),param_1,puVar4,puVar5[1]);
          }
        }
        else if (uVar2 == 0x4c656e) {
          F_00988d70((undefined *)((int)this + 0xc),param_1,puVar4,puVar5[1]);
        }
        else if (uVar2 == 0x524f54) {
          *(char *)((int)this + 4) = (char)*puVar4;
        }
        else if (uVar2 == 0x526164) {
          F_00988d70((undefined *)((int)this + 0x24),param_1,puVar4,puVar5[1]);
        }
      }
      else if (uVar2 < 0x4469765a) {
        if (uVar2 == 0x44697659) {
          *(char *)((int)this + 7) = (char)*puVar4;
        }
        else if (uVar2 == 0x416e5952) {
          F_00988d70((undefined *)((int)this + 0x5c),param_1,puVar4,puVar5[1]);
        }
        else if (uVar2 == 0x416e5a52) {
          F_00988d70((undefined *)((int)this + 0x74),param_1,puVar4,puVar5[1]);
        }
        else if (uVar2 == 0x44697658) {
          *(char *)((int)this + 6) = (char)*puVar4;
        }
      }
      else if (uVar2 == 0x47654d54) {
        *(char *)((int)this + 5) = (char)*puVar4;
      }
      else if (uVar2 == 0x496a5352) {
        F_00988d70((undefined *)((int)this + 0x8c),param_1,puVar4,puVar5[1]);
      }
      puVar1 = puVar5 + 1;
      puVar5 = ((uint *)GEN_TOP(((int)puVar4 + (*puVar1 + 3 & 0xfffffffc))));
      uVar3 = uVar3 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar3 < param_3);
  }
  return 0;
}

/* ref: FUN_009988a0 */
unsigned int F_009988a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9988a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  uint uVar2;
  undefined * this_00;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  
  uVar2 = 0;
  puVar4 = param_2;
  if (param_3 != 0) {
    do {
      uVar5 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar5 < 0x416e5853) {
        if (uVar5 == 0x416e5852) {
          uVar5 = puVar4[1];
          this_00 = (undefined *)((int)this + 0x14);
        }
        else if (uVar5 < 0x416e5b) {
          if (uVar5 == 0x416e5a) {
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0x3c);
          }
          else {
            if (uVar5 == 0x416e58) {
              this_00 = (undefined *)((int)this + 0xc);
              goto LAB_00998987;
            }
            if (uVar5 != 0x416e59) goto LAB_00998995;
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0x24);
          }
        }
        else {
          if (uVar5 != 0x496a53) {
            if (uVar5 == 0x524f54) {
              *(char *)((int)this + 5) = (char)*puVar3;
            }
            goto LAB_00998995;
          }
          uVar5 = puVar4[1];
          this_00 = (undefined *)((int)this + 0x54);
        }
LAB_00998990: ;
        F_00988d70(this_00,param_1,puVar3,uVar5);
      }
      else if (uVar5 < 0x47654d55) {
        if (uVar5 == 0x47654d54) {
          *(char *)((int)this + 6) = (char)*puVar3;
        }
        else {
          if (uVar5 == 0x416e5952) {
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0x2c);
            goto LAB_00998990;
          }
          if (uVar5 == 0x416e5a52) {
            this_00 = (undefined *)((int)this + 0x44);
            goto LAB_00998987;
          }
        }
      }
      else {
        if (uVar5 == 0x496a5352) {
          this_00 = (undefined *)((int)this + 0x5c);
LAB_00998987: ;
          uVar5 = puVar4[1];
          goto LAB_00998990;
        }
        if (uVar5 == 0x4d644e6f) {
          *(char *)((int)this + 4) = (char)*puVar3;
        }
      }
LAB_00998995: ;
      puVar1 = puVar4 + 1;
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (*puVar1 + 3 & 0xfffffffc))));
      uVar2 = uVar2 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_009989c0 */
unsigned int F_009989c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9989c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  uint uVar2;
  undefined * this_00;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  
  uVar2 = 0;
  puVar4 = param_2;
  if (param_3 != 0) {
    do {
      uVar5 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar5 < 0x416e5953) {
        if (uVar5 == 0x416e5952) {
          this_00 = (undefined *)((int)this + 0x44);
LAB_00998abc: ;
          uVar5 = puVar4[1];
LAB_00998ac5: ;
          F_00988d70(this_00,param_1,puVar3,uVar5);
        }
        else {
          if (uVar5 < 0x496a54) {
            if (uVar5 == 0x496a53) {
              uVar5 = puVar4[1];
              this_00 = (undefined *)((int)this + 0x6c);
            }
            else if (uVar5 == 0x416e58) {
              uVar5 = puVar4[1];
              this_00 = (undefined *)((int)this + 0x24);
            }
            else {
              if (uVar5 == 0x416e59) {
                this_00 = (undefined *)((int)this + 0x3c);
                goto LAB_00998abc;
              }
              if (uVar5 != 0x416e5a) goto LAB_00998aca;
              uVar5 = puVar4[1];
              this_00 = (undefined *)((int)this + 0x54);
            }
            goto LAB_00998ac5;
          }
          if (uVar5 == 0x524f54) {
            *(char *)((int)this + 4) = (char)*puVar3;
          }
          else if (uVar5 == 0x416e5852) {
            this_00 = (undefined *)((int)this + 0x2c);
            goto LAB_00998abc;
          }
        }
      }
      else if (uVar5 < 0x47654d55) {
        if (uVar5 == 0x47654d54) {
          *(char *)((int)this + 5) = (char)*puVar3;
        }
        else {
          if (uVar5 == 0x416e5a52) {
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0x5c);
            goto LAB_00998ac5;
          }
          if (uVar5 == 0x44697658) {
            *(char *)((int)this + 6) = (char)*puVar3;
          }
          else if (uVar5 == 0x44697659) {
            *(char *)((int)this + 7) = (char)*puVar3;
          }
        }
      }
      else {
        if (uVar5 == 0x496a5352) {
          this_00 = (undefined *)((int)this + 0x74);
          goto LAB_00998abc;
        }
        if (uVar5 == 0x52616473) {
          uVar5 = puVar4[1];
          this_00 = (undefined *)((int)this + 0xc);
          goto LAB_00998ac5;
        }
      }
LAB_00998aca: ;
      puVar1 = puVar4 + 1;
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (*puVar1 + 3 & 0xfffffffc))));
      uVar2 = uVar2 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_00998af0 */
uint F_00998af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x998af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  
  uVar3 = 0;
  puVar5 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = *puVar5;
      puVar4 = puVar5 + 2;
      if (uVar2 < 0x5953) {
        if (uVar2 == 0x5952) {
          F_00988d70((undefined *)((int)this + 0x1c),param_1,puVar4,puVar5[1]);
        }
        else if (uVar2 == 0x58) {
          F_00988d70((undefined *)((int)this + 4),param_1,puVar4,puVar5[1]);
        }
        else if (uVar2 == 0x59) {
          F_00988d70((undefined *)((int)this + 0xc),param_1,puVar4,puVar5[1]);
        }
        else if (uVar2 == 0x5852) {
          F_00988d70((undefined *)((int)this + 0x14),param_1,puVar4,puVar5[1]);
        }
      }
      else if (uVar2 == 0x414354) {
        *(char *)((int)this + 0x24) = (char)*puVar4;
      }
      else if (uVar2 == 0x41435452) {
        *(char *)((int)this + 0x25) = (char)*puVar4;
      }
      puVar1 = puVar5 + 1;
      puVar5 = ((uint *)GEN_TOP(((int)puVar4 + (*puVar1 + 3 & 0xfffffffc))));
      uVar3 = uVar3 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar3 < param_3);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x14) + 0xc))))
                    ((undefined4)gen_fl2bits((float)(float10)0));
  if (((char)uVar3 == '\0') &&
     (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))))
                        ((undefined4)gen_fl2bits((float)(float10)0)), (char)uVar3 == '\0')) {
    *(undefined1 *)((int)this + 0x26) = 0;
    return uVar3;
  }
  *(undefined1 *)((int)this + 0x26) = 1;
  return uVar3;
}

/* ref: FUN_00998bf0 */
uint F_00998bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x998bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  uint * puVar4;
  uint * puVar5;
  uint uVar6;
  
  if (REFG(char, 0x14a06d6) == '\0') {
    uVar3 = REFG(int, 0x14a09d8) + 0xfU & 0xfffffff0;
    iVar2 = REFG(int, 0x14a09e0) + uVar3;
    REFG(int, 0x14a09d8) = uVar3 + 0x10;
  }
  else {
    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + 0x10;
    iVar2 = 0;
  }
  uVar3 = 0;
  *(int *)((int)this + 4) = iVar2;
  puVar5 = param_2;
  if (param_3 != 0) {
    do {
      uVar6 = *puVar5;
      puVar4 = puVar5 + 2;
      if (uVar6 < 0x5953) {
        if (uVar6 == 0x5952) {
          uVar6 = puVar5[1];
          this_00 = (undefined *)((int)this + 0x28);
        }
        else if (uVar6 < 0x5b) {
          if (uVar6 == 0x5a) {
            uVar6 = puVar5[1];
            this_00 = (undefined *)((int)this + 0x18);
          }
          else if (uVar6 == 0x58) {
            uVar6 = puVar5[1];
            this_00 = (undefined *)((int)this + 8);
          }
          else {
            if (uVar6 != 0x59) goto LAB_00998d0b;
            uVar6 = puVar5[1];
            this_00 = (undefined *)((int)this + 0x10);
          }
        }
        else {
          if (uVar6 != 0x5852) goto LAB_00998d0b;
          uVar6 = puVar5[1];
          this_00 = (undefined *)((int)this + 0x20);
        }
LAB_00998d06: ;
        F_00988d70(this_00,param_1,puVar4,uVar6);
      }
      else {
        if (uVar6 == 0x5a52) {
          uVar6 = puVar5[1];
          this_00 = (undefined *)((int)this + 0x30);
          goto LAB_00998d06;
        }
        if (uVar6 == 0x414354) {
          puVar1 = *(uint * PTR32 *)((int)this + 4);
          *puVar1 = *puVar1 ^ ((char)*puVar4 * 2 ^ *puVar1) & 0x1e;
        }
        else if (uVar6 == 0x41435452) {
          puVar1 = *(uint * PTR32 *)((int)this + 4);
          *puVar1 = *puVar1 ^ ((int)(char)*puVar4 << 5 ^ *puVar1) & 0x1e0;
        }
      }
LAB_00998d0b: ;
      uVar3 = uVar3 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)puVar4 + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar3 < param_3);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0xc))))
                    ((undefined4)gen_fl2bits((float)(float10)0));
  if ((((char)uVar3 == '\0') &&
      (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x28) + 0xc))))
                         ((undefined4)gen_fl2bits((float)(float10)0)), (char)uVar3 == '\0')) &&
     (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x30) + 0xc))))
                        ((undefined4)gen_fl2bits((float)(float10)0)), (char)uVar3 == '\0')) {
    **(uint * PTR32 *)((int)this + 4) = **(uint * PTR32 *)((int)this + 4) & 0xfffffffe;
    return uVar3;
  }
  **(uint * PTR32 *)((int)this + 4) = **(uint * PTR32 *)((int)this + 4) | 1;
  return uVar3;
}

/* ref: FUN_00998d80 */
unsigned int F_00998d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x998d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  
  uVar3 = 0;
  puVar5 = param_2;
  if (param_3 != 0) {
    do {
      uVar1 = *puVar5;
      puVar4 = puVar5 + 2;
      if (uVar1 < 0x4e616d66) {
        if (uVar1 == 0x4e616d65) {
          puVar2 = puVar4;
          do {
            uVar1 = *puVar2;
            *((byte *)GEN_TOP(((int)this + (4 - (int)puVar4) + (int)puVar2))) = (byte)uVar1;
            puVar2 = (uint *)((int)puVar2 + 1);
          } while ((byte)uVar1 != 0);
        }
        else if (uVar1 < 0x42505451) {
          if (uVar1 == 0x42505450) {
            *(byte *)((int)this + 0x2a) =
                 *(byte *)((int)this + 0x2a) ^
                 ((byte)*puVar4 * '\b' ^ *(byte *)((int)this + 0x2a)) & 0x38;
          }
          else if (uVar1 == 0x425054) {
            *(byte *)((int)this + 0x2a) =
                 *(byte *)((int)this + 0x2a) ^
                 ((byte)*puVar4 * '\x02' ^ *(byte *)((int)this + 0x2a)) & 6;
          }
          else if (uVar1 == 0x506f73) {
            F_00998bf0((undefined *)((int)this + 0x2c),param_1,puVar4,puVar5[1]);
          }
          else if (uVar1 == 0x42504944) {
            *(byte *)((int)this + 0x2b) = (byte)*puVar4;
          }
        }
        else if (uVar1 == 0x436f5546) {
          *(short *)((int)this + 0x26) = (short)*puVar4;
        }
        else if (uVar1 == 0x47656e44) {
          *(short *)((int)this + 0x24) = (short)(char)(byte)*puVar4;
        }
      }
      else if (uVar1 < 0x526e505b) {
        if (uVar1 == 0x526e505a) {
          *(uint *)((int)this + 0x1c) = *puVar4;
        }
        else if (uVar1 == 0x526e5054) {
          *(short *)((int)this + 0x28) = (short)*puVar4;
        }
        else if (uVar1 == 0x526e5058) {
          *(uint *)((int)this + 0x14) = *puVar4;
        }
        else if (uVar1 == 0x526e5059) {
          *(uint *)((int)this + 0x18) = *puVar4;
        }
      }
      else if (uVar1 == 0x526e5264) {
        *(uint *)((int)this + 0x20) = *puVar4;
      }
      else if (uVar1 == 0x62526e67) {
        *(byte *)((int)this + 0x2a) =
             *(byte *)((int)this + 0x2a) ^ (*(byte *)((int)this + 0x2a) ^ (byte)*puVar4) & 1;
      }
      uVar3 = uVar3 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)puVar4 + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar3 < param_3);
  }
  return 0;
}

/* ref: FUN_00998ee0 */
uint F_00998ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x998ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  
  if (REFG(char, 0x14a06d6) == '\0') {
    uVar2 = REFG(int, 0x14a09d8) + 0xfU & 0xfffffff0;
    iVar1 = REFG(int, 0x14a09e0) + uVar2;
    REFG(int, 0x14a09d8) = uVar2 + 0x10;
  }
  else {
    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + 0x10;
    iVar1 = 0;
  }
  uVar2 = 0;
  *(int *)((int)this + 4) = iVar1;
  puVar4 = param_2;
  if (param_3 != 0) {
    do {
      uVar5 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar5 < 0x52616e48) {
        if (uVar5 == 0x52616e47) {
          uVar5 = puVar4[1];
          this_00 = (undefined *)((int)this + 0x40);
        }
        else if (uVar5 < 0x5242726a) {
          if (uVar5 == 0x52427269) {
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0x60);
          }
          else {
            if (uVar5 == 0x41) {
              this_00 = (undefined *)((int)this + 0x10);
              goto LAB_00999040;
            }
            if (uVar5 != 0x427269) {
              if (uVar5 == 0x524742) {
                F_00989370((undefined *)((int)this + 8),param_1,puVar3,puVar4[1]);
              }
              goto LAB_0099904b;
            }
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0x58);
          }
        }
        else {
          if (uVar5 == 0x52616e41) {
            this_00 = (undefined *)((int)this + 0x50);
            goto LAB_00999040;
          }
          if (uVar5 != 0x52616e42) goto LAB_0099904b;
          uVar5 = puVar4[1];
          this_00 = (undefined *)((int)this + 0x48);
        }
LAB_00999044: ;
        F_00988d70(this_00,param_1,puVar3,uVar5);
      }
      else {
        if (uVar5 < 0x53636c43) {
          if (uVar5 == 0x53636c42) {
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0x28);
          }
          else {
            if (uVar5 == 0x52616e52) {
              this_00 = (undefined *)((int)this + 0x38);
              goto LAB_00999040;
            }
            if (uVar5 != 0x53636c41) goto LAB_0099904b;
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0x30);
          }
          goto LAB_00999044;
        }
        if (uVar5 == 0x53636c47) {
          this_00 = (undefined *)((int)this + 0x20);
LAB_00999040: ;
          uVar5 = puVar4[1];
          goto LAB_00999044;
        }
        if (uVar5 == 0x53636c52) {
          uVar5 = puVar4[1];
          this_00 = (undefined *)((int)this + 0x18);
          goto LAB_00999044;
        }
      }
LAB_0099904b: ;
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_3);
  }
  uVar2 = F_0097bce0(this);
  return uVar2;
}

/* ref: FUN_00999080 */
uint F_00999080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x999080u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  fVar4 = gen_bits2f((int)((**(uint * PTR32 *)(param_1 + 4) >> 2 & 3) - 2) >> 0x1f & (param_3 ^ param_2) ^
                     param_3);
  puVar1 = *(uint * PTR32 *)(param_1 + 4);
  if ((float10)fVar4 < ((float10)GEN_TOD(((ushort)(*(uint * PTR32 *)(param_1 + 4))[2] & 0x3fff)))) {
    fVar4 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c60) + (*puVar1 & 3) * 8))
                      (*(int *)(&REFG(undefined, 0x14a0c64) + (*puVar1 & 3) * 8) + param_1,
                       (undefined4)gen_fl2bits(fVar4));
    return (uint)gen_fl2bits(fVar4);
  }
  if (((float10)GEN_TOD(((ushort)puVar1[(*puVar1 >> 9 & 0xffff) * 2] & 0x3fff))) < (float10)fVar4) {
    uVar3 = **(uint * PTR32 *)(param_1 + 4) >> 2 & 3;
    fVar4 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c78) + uVar3 * 8))
                      (*(int *)(&REFG(undefined, 0x14a0c7c) + uVar3 * 8) + param_1,(undefined4)gen_fl2bits(fVar4))
    ;
    return (uint)gen_fl2bits(fVar4);
  }
  uVar3 = F_00988fa0(param_1,fVar4);
  iVar2 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar3 * 8))) >> 0xe) * 8;
  fVar4 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c30) + iVar2))
                    (*(int *)(&REFG(undefined, 0x14a0c34) + iVar2) + param_1,(undefined4)gen_fl2bits(fVar4),uVar3)
  ;
  return (uint)gen_fl2bits(fVar4);
}

/* ref: FUN_00999190 */
uint F_00999190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x999190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * puVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  
  if (REFG(char, 0x14a06d6) == '\0') {
    uVar4 = REFG(int, 0x14a09d8) + 0xfU & 0xfffffff0;
    iVar3 = REFG(int, 0x14a09e0) + uVar4;
    REFG(int, 0x14a09d8) = uVar4 + 0x10;
  }
  else {
    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + 0x10;
    iVar3 = 0;
  }
  uVar4 = 0;
  *(int *)((int)this + 4) = iVar3;
  pcVar6 = param_2;
  if (param_3 != 0) {
    do {
      puVar1 = *(undefined * PTR32 *)pcVar6;
      pcVar5 = pcVar6 + 8;
      if (&REFG(undefined, 0x536372) < puVar1) {
        if (puVar1 == (undefined *)0x43557654) {
          puVar2 = *(uint * PTR32 *)((int)this + 4);
          *puVar2 = *puVar2 ^ (*pcVar5 * 2 ^ *puVar2) & 2;
        }
        else if (puVar1 == (undefined *)0x526f7452) {
          F_00988d70((undefined *)((int)this + 100),param_1,pcVar5,*(undefined4 *)(pcVar6 + 4));
        }
      }
      else if (puVar1 == &REFG(undefined, 0x536372)) {
        F_00998af0((undefined *)((int)this + 0x30),param_1,pcVar5,*(undefined4 *)(pcVar6 + 4));
      }
      else if (puVar1 == (undefined *)0x526f74) {
        F_00988d70((undefined *)((int)this + 0x5c),param_1,pcVar5,*(undefined4 *)(pcVar6 + 4));
      }
      else if (puVar1 == &REFG(undefined, 0x53636c)) {
        F_00998af0((undefined *)((int)this + 8),param_1,pcVar5,*(undefined4 *)(pcVar6 + 4));
      }
      uVar4 = uVar4 + 8 + (*(int *)(pcVar6 + 4) + 3U & 0xfffffffc);
      pcVar6 = pcVar5 + (*(int *)(pcVar6 + 4) + 3U & 0xfffffffc);
    } while (uVar4 < param_3);
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))))((undefined4)gen_fl2bits((float)(float10)1))
  ;
  if (((((((char)uVar4 == '\0') &&
         (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x14) + 0xc))))
                            ((undefined4)gen_fl2bits((float)(float10)1)), (char)uVar4 == '\0')) &&
        (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))))
                           ((undefined4)gen_fl2bits((float)(float10)0)), (char)uVar4 == '\0')) &&
       ((uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc))))
                           ((undefined4)gen_fl2bits((float)(float10)0)), (char)uVar4 == '\0' &&
        (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x34) + 0xc))))
                           ((undefined4)gen_fl2bits((float)(float10)1)), (char)uVar4 == '\0')))) &&
      ((uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x3c) + 0xc))))
                          ((undefined4)gen_fl2bits((float)(float10)1)), (char)uVar4 == '\0' &&
       ((uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x44) + 0xc))))
                           ((undefined4)gen_fl2bits((float)(float10)0)), (char)uVar4 == '\0' &&
        (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4c) + 0xc))))
                           ((undefined4)gen_fl2bits((float)(float10)0)), (char)uVar4 == '\0'))))))
     && ((uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x5c) + 0xc))))
                            ((undefined4)gen_fl2bits((float)(float10)1)), (char)uVar4 == '\0' &&
         (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 100) + 0xc))))
                            ((undefined4)gen_fl2bits((float)(float10)1)), (char)uVar4 == '\0')))) {
    **(uint * PTR32 *)((int)this + 4) = **(uint * PTR32 *)((int)this + 4) & 0xfffffffe;
    return uVar4;
  }
  **(uint * PTR32 *)((int)this + 4) = **(uint * PTR32 *)((int)this + 4) | 1;
  return uVar4;
}

/* ref: FUN_00999390 */
unsigned int F_00999390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x999390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  uint uVar2;
  undefined * this_00;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  
  uVar2 = 0;
  puVar4 = param_2;
  if (param_3 != 0) {
    do {
      uVar5 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar5 < 0x436f6c46) {
        if (uVar5 == 0x436f6c45) {
          F_00998ee0((undefined *)((int)this + 0x8c),param_1,puVar3,puVar4[1]);
        }
        else {
          if (uVar5 == 0x4c656e) {
            uVar5 = puVar4[1];
            this_00 = (undefined *)((int)this + 0xc);
            goto LAB_00999422;
          }
          if (uVar5 == 0x436f6c42) {
            F_00998ee0((undefined *)((int)this + 0x20),param_1,puVar3,puVar4[1]);
          }
        }
      }
      else if (uVar5 == 0x4c656e52) {
        uVar5 = puVar4[1];
        this_00 = (undefined *)((int)this + 0x14);
LAB_00999422: ;
        F_00988d70(this_00,param_1,puVar3,uVar5);
      }
      else if (uVar5 == 0x4c6e4354) {
        *(char *)((int)this + 4) = (char)*puVar3;
      }
      puVar1 = puVar4 + 1;
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (*puVar1 + 3 & 0xfffffffc))));
      uVar2 = uVar2 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_00999450 */
unsigned int F_00999450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x999450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  
  uVar3 = 0;
  puVar5 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = *puVar5;
      puVar4 = puVar5 + 2;
      if (uVar2 < 0x46725275) {
        if (uVar2 == 0x46725274) {
          F_00998bf0((undefined *)((int)this + 0x28),param_1,puVar4,puVar5[1]);
        }
        else if (uVar2 < 0x436f6c43) {
          if (uVar2 == 0x436f6c42) {
            F_00998ee0((undefined *)((int)this + 0x60),param_1,puVar4,puVar5[1]);
          }
          else if (uVar2 == 0x444c54) {
            uVar2 = ((int)(char)*puVar4 << 9 ^ *(uint *)((int)this + 0xc)) & 0x600;
LAB_009995fa: ;
            *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) ^ uVar2;
          }
          else if (uVar2 == 0x467243) {
            F_00988d70((undefined *)((int)this + 0x14),param_1,puVar4,puVar5[1]);
          }
          else if (uVar2 == 0x504c54) {
            uVar2 = ((int)(char)*puVar4 << 0xb ^ *(uint *)((int)this + 0xc)) & 0x1800;
            goto LAB_009995fa;
          }
        }
        else if (uVar2 == 0x436f6c45) {
          F_00998ee0((undefined *)((int)this + 0xcc),param_1,puVar4,puVar5[1]);
        }
        else if (uVar2 == 0x46724352) {
          F_00988d70((undefined *)((int)this + 0x1c),param_1,puVar4,puVar5[1]);
        }
      }
      else if (uVar2 < 0x4e6f416f) {
        if (uVar2 == 0x4e6f416e) {
          F_00988d70((undefined *)((int)this + 0x138),param_1,puVar4,puVar5[1]);
        }
        else if (uVar2 == 0x46727354) {
          *(uint *)((int)this + 0xc) =
               *(uint *)((int)this + 0xc) ^
               ((int)(char)*puVar4 << 8 ^ *(uint *)((int)this + 0xc)) & 0x100;
        }
        else if (uVar2 == 0x4d644e6f) {
          *(char *)((int)this + 0xc) = (char)puVar5[1];
          F_00c46aa0((int)this + 4,puVar4,puVar5[1]);
        }
        else if (uVar2 == 0x4d6f7068) {
          F_00988d70((undefined *)((int)this + 0x140),param_1,puVar4,puVar5[1]);
        }
      }
      else {
        if (uVar2 == 0x624c6774) {
          uVar2 = ((int)(char)*puVar4 << 0xd ^ *(uint *)((int)this + 0xc)) & 0x6000;
          goto LAB_009995fa;
        }
        if (uVar2 == 0x62536870) {
          *(uint *)((int)this + 0xc) =
               *(uint *)((int)this + 0xc) ^
               ((int)(char)*puVar4 << 0xf ^ *(uint *)((int)this + 0xc)) & 0x8000;
        }
      }
      puVar1 = puVar5 + 1;
      puVar5 = ((uint *)GEN_TOP(((int)puVar4 + (*puVar1 + 3 & 0xfffffffc))));
      uVar3 = uVar3 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar3 < param_3);
  }
  return 0;
}

/* ref: FUN_00999630 */
unsigned int F_00999630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x999630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  
  uVar3 = 0;
  puVar5 = param_2;
  if (param_3 != 0) {
    do {
      uVar1 = *puVar5;
      puVar4 = puVar5 + 2;
      if (uVar1 < 0x436f6c43) {
        if (uVar1 == 0x436f6c42) {
          F_00998ee0((undefined *)((int)this + 0xbc),param_1,puVar4,puVar5[1]);
        }
        else if (uVar1 < 0x576444) {
          if (uVar1 == 0x576443) {
            F_00988d70((undefined *)((int)this + 0x58),param_1,puVar4,puVar5[1]);
          }
          else if (uVar1 < 0x4c656f) {
            if (uVar1 == 0x4c656e) {
              F_00988d70((undefined *)((int)this + 0x88),param_1,puVar4,puVar5[1]);
            }
            else if (uVar1 == 0x4346) {
              F_00988d70((undefined *)((int)this + 0x10),param_1,puVar4,puVar5[1]);
            }
            else if (uVar1 == 0x5764) {
              F_00988d70((undefined *)((int)this + 0x28),param_1,puVar4,puVar5[1]);
            }
            else if (uVar1 == 0x434652) {
              F_00988d70((undefined *)((int)this + 0x18),param_1,puVar4,puVar5[1]);
            }
          }
          else if (uVar1 == 0x506e43) {
            *(byte *)((int)this + 6) = (byte)*puVar4;
          }
          else if (uVar1 == 0x536674) {
            F_00988d70((undefined *)((int)this + 0xa0),param_1,puVar4,puVar5[1]);
          }
          else if (uVar1 == 0x576442) {
            F_00988d70((undefined *)((int)this + 0x40),param_1,puVar4,puVar5[1]);
          }
        }
        else if (uVar1 < 0x42645771) {
          if (uVar1 == 0x42645770) {
            *(byte *)((int)this + 8) =
                 *(byte *)((int)this + 8) ^
                 (((byte)*puVar4 != 0) * '\x04' ^ *(byte *)((int)this + 8)) & 4;
          }
          else if (uVar1 == 0x576445) {
            F_00988d70((undefined *)((int)this + 0x70),param_1,puVar4,puVar5[1]);
          }
          else if (uVar1 == 0x576452) {
            F_00988d70((undefined *)((int)this + 0x30),param_1,puVar4,puVar5[1]);
          }
          else if (uVar1 == 0x42577054) {
            *(byte *)((int)this + 5) = (byte)*puVar4;
          }
        }
        else if (uVar1 == 0x436f4542) {
          F_00998ee0((undefined *)((int)this + 0x200),param_1,puVar4,puVar5[1]);
        }
        else if (uVar1 == 0x436f4543) {
          F_00998ee0((undefined *)((int)this + 0x26c),param_1,puVar4,puVar5[1]);
        }
        else if (uVar1 == 0x436f4545) {
          F_00998ee0((undefined *)((int)this + 0x2d8),param_1,puVar4,puVar5[1]);
        }
      }
      else if (uVar1 < 0x53667453) {
        if (uVar1 == 0x53667452) {
          F_00988d70((undefined *)((int)this + 0xa8),param_1,puVar4,puVar5[1]);
        }
        else if (uVar1 < 0x4c6e4355) {
          if (uVar1 == 0x4c6e4354) {
            *(byte *)((int)this + 4) =
                 *(byte *)((int)this + 4) ^ ((byte)*puVar4 ^ *(byte *)((int)this + 4)) & 0xf;
          }
          else if (uVar1 == 0x436f6c43) {
            F_00998ee0((undefined *)((int)this + 0x128),param_1,puVar4,puVar5[1]);
          }
          else if (uVar1 == 0x436f6c45) {
            F_00998ee0((undefined *)((int)this + 0x194),param_1,puVar4,puVar5[1]);
          }
          else if (uVar1 == 0x4c656e52) {
            F_00988d70((undefined *)((int)this + 0x90),param_1,puVar4,puVar5[1]);
          }
        }
        else if (uVar1 == 0x4e424241) {
          *(byte *)((int)this + 4) = (byte)*puVar4 << 4 | *(byte *)((int)this + 4) & 0xf;
        }
        else if (uVar1 == 0x506e4343) {
          *(byte *)((int)this + 7) = (byte)*puVar4;
        }
        else if (uVar1 == 0x506e4473) {
          F_00988d70((undefined *)((int)this + 0xb4),param_1,puVar4,puVar5[1]);
        }
      }
      else if (uVar1 < 0x62456468) {
        if (uVar1 == 0x62456467) {
          bVar2 = ((byte)*puVar4 != 0 ^ *(byte *)((int)this + 8)) & 1;
LAB_009999ee: ;
          *(byte *)((int)this + 8) = *(byte *)((int)this + 8) ^ bVar2;
        }
        else if (uVar1 == 0x57644252) {
          F_00988d70((undefined *)((int)this + 0x48),param_1,puVar4,puVar5[1]);
        }
        else if (uVar1 == 0x57644352) {
          F_00988d70((undefined *)((int)this + 0x60),param_1,puVar4,puVar5[1]);
        }
        else if (uVar1 == 0x57644552) {
          F_00988d70((undefined *)((int)this + 0x78),param_1,puVar4,puVar5[1]);
        }
      }
      else {
        if (uVar1 == 0x624c636c) {
          bVar2 = (((byte)*puVar4 != 0) << 4 ^ *(byte *)((int)this + 8)) & 0x10;
          goto LAB_009999ee;
        }
        if (uVar1 == 0x624e7442) {
          *(byte *)((int)this + 8) =
               *(byte *)((int)this + 8) ^
               (((byte)*puVar4 != 0) * '\x02' ^ *(byte *)((int)this + 8)) & 2;
        }
        else if (uVar1 == 0x6253706c) {
          *(byte *)((int)this + 8) =
               *(byte *)((int)this + 8) ^
               (((byte)*puVar4 != 0) * '\b' ^ *(byte *)((int)this + 8)) & 8;
        }
      }
      uVar3 = uVar3 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)puVar4 + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar3 < param_3);
  }
  return 0;
}

/* ref: FUN_00999a20 */
uint F_00999a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x999a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  byte * pbVar1;
  undefined * puVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  byte * pbVar6;
  byte * pbVar7;
  
  uVar5 = 0;
  pbVar7 = param_2;
  if (param_3 != 0) {
    do {
      puVar2 = *(undefined * PTR32 *)pbVar7;
      pbVar6 = pbVar7 + 8;
      if (puVar2 < (undefined *)0x524553) {
        if (puVar2 == (undefined *)0x524552) {
          F_00988d70((undefined *)((int)this + 0xd8),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
        }
        else if (&REFG(undefined, 0x43454f) < puVar2) {
          if (puVar2 < (undefined *)0x48454a) {
            if (puVar2 == (undefined *)0x484549) {
              F_00988d70((undefined *)((int)this + 0x40),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
            }
            else if (puVar2 == (undefined *)0x484249) {
              F_00988d70((undefined *)((int)this + 0x28),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
            }
            else if (puVar2 == (undefined *)0x48424f) {
              F_00988d70((undefined *)((int)this + 0x58),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
            }
          }
          else if (puVar2 == (undefined *)0x48454f) {
            F_00988d70((undefined *)((int)this + 0x70),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
          }
          else if (puVar2 == (undefined *)0x524252) {
            F_00988d70((undefined *)((int)this + 0xc0),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
          }
        }
        else if (puVar2 == &REFG(undefined, 0x43454f)) {
          F_00998ee0((undefined *)((int)this + 0x150),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
        }
        else if (puVar2 < (undefined *)0x5746) {
          if (puVar2 == (undefined *)0x5745) {
            F_00988d70((undefined *)((int)this + 0xa0),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
          }
          else if (puVar2 == (undefined *)0x5242) {
            F_00988d70((undefined *)((int)this + 0xb8),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
          }
          else if (puVar2 == (undefined *)0x5245) {
            F_00988d70((undefined *)((int)this + 0xd0),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
          }
          else if (puVar2 == (undefined *)0x5742) {
            F_00988d70((undefined *)((int)this + 0x88),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
          }
        }
        else if (puVar2 == (undefined *)0x416e67) {
          F_00988d70((undefined *)((int)this + 0x10),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
        }
        else if (puVar2 == &REFG(undefined, 0x434549)) {
          F_00998ee0((undefined *)((int)this + 0xe4),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
        }
      }
      else if (puVar2 < (undefined *)0x48454953) {
        if (puVar2 == (undefined *)0x48454952) {
          F_00988d70((undefined *)((int)this + 0x48),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
        }
        else if (puVar2 < (undefined *)0x416e6753) {
          if (puVar2 == (undefined *)0x416e6752) {
            F_00988d70((undefined *)((int)this + 0x18),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
          }
          else if (puVar2 == (undefined *)0x574252) {
            F_00988d70((undefined *)((int)this + 0x90),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
          }
          else if (puVar2 == (undefined *)0x574552) {
            F_00988d70((undefined *)((int)this + 0xa8),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
          }
        }
        else if (puVar2 == (undefined *)0x48424952) {
          F_00988d70((undefined *)((int)this + 0x30),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
        }
        else if (puVar2 == (undefined *)0x48424f52) {
          F_00988d70((undefined *)((int)this + 0x60),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
        }
      }
      else if (puVar2 < (undefined *)0x50436e57) {
        if (puVar2 == (undefined *)0x50436e56) {
          bVar4 = *pbVar6;
          *(byte *)((int)this + 6) = bVar4;
          if (0x80 < bVar4) {
            *(undefined1 *)((int)this + 6) = 0x80;
          }
        }
        else if (puVar2 == (undefined *)0x48454f52) {
          F_00988d70((undefined *)((int)this + 0x78),param_1,pbVar6,*(undefined4 *)(pbVar7 + 4));
        }
        else if ((puVar2 == (undefined *)0x50436e55) &&
                (bVar4 = *pbVar6, *(byte *)((int)this + 5) = bVar4, 0x10 < bVar4)) {
          *(undefined1 *)((int)this + 5) = 0x10;
        }
      }
      else if (puVar2 == (undefined *)0x50494655) {
        *(undefined4 *)((int)this + 8) = *(undefined4 *)pbVar6;
      }
      else if ((puVar2 == (undefined *)0x50727443) &&
              (bVar4 = *pbVar6, *(byte *)((int)this + 4) = bVar4, 0x10 < bVar4)) {
        *(undefined1 *)((int)this + 4) = 0x10;
      }
      pbVar1 = pbVar7 + 4;
      pbVar7 = pbVar6 + (*(int *)pbVar1 + 3U & 0xfffffffc);
      uVar5 = uVar5 + 8 + (*(int *)pbVar1 + 3U & 0xfffffffc);
    } while (uVar5 < param_3);
  }
  uVar3 = 0x80 / (ulonglong)(longlong)(int)(uint)*(byte *)((int)this + 5);
  bVar4 = (byte)uVar3;
  if (bVar4 < *(byte *)((int)this + 6)) {
    *(byte *)((int)this + 6) = bVar4;
  }
  return (uint)uVar3;
}

/* ref: FUN_00999d60 */
unsigned int F_00999d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x999d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  (*(float *)(gen_frame + 0x4c)) = (float)(float10)1;
  (*(float *)(gen_frame + 0x50)) = (float)(float10)0;
  (*(float *)(gen_frame + 0x54)) = (float)(float10)0;
  (*(float *)(gen_frame + 0x40)) = 0.0;
  (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x48)) = 0.0;
  (*(float *)(gen_frame + 0x34)) = 0.0;
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
  F_009810e0(&(*(float *)(gen_frame + 0x4c)),(uint)&(*(float *)(gen_frame + 0x4c)),param_2);
  F_009810e0(&(*(float *)(gen_frame + 0x40)),(uint)&(*(float *)(gen_frame + 0x40)),param_2);
  F_009810e0(&(*(float *)(gen_frame + 0x34)),(uint)&(*(float *)(gen_frame + 0x34)),param_2);
  fVar1 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x54)) +
                                      ((float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x50)) +
                                      (float10)(*(float *)(gen_frame + 0x4c)) * (float10)(*(float *)(gen_frame + 0x4c)))))))));
  *(float *)param_3 = fVar1;
  fVar2 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x48)) * (float10)(*(float *)(gen_frame + 0x48)) +
                                      ((float10)(*(float *)(gen_frame + 0x40)) * (float10)(*(float *)(gen_frame + 0x40)) +
                                      (float10)(*(float *)(gen_frame + 0x44)) * (float10)(*(float *)(gen_frame + 0x44)))))))));
  *(float *)(param_3 + 4) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x3c)) * (float10)(*(float *)(gen_frame + 0x3c)) +
                 ((float10)(*(float *)(gen_frame + 0x34)) * (float10)(*(float *)(gen_frame + 0x34)) + (float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x38))))));
  (*(float *)(gen_frame + 0x58)) = fVar3;
  fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
  (*(float *)(gen_frame + 0x58)) = fVar3;
  *(float *)(param_3 + 8) = fVar3;
  fVar4 = (float10)1;
  ((float *)(gen_frame + 0x4))[1] = 0.0;
  ((float *)(gen_frame + 0x4))[2] = 0.0;
  ((float *)(gen_frame + 0x4))[3] = 0.0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  fVar1 = (float)(fVar4 / (float10)fVar1);
  (*(float *)(gen_frame + 0x34)) = fVar1;
  fVar2 = (float)(fVar4 / (float10)fVar2);
  (*(float *)(gen_frame + 0x38)) = fVar2;
  (*(float *)(gen_frame + 0x3c)) = (float)(fVar4 / (float10)fVar3);
  ((float *)(gen_frame + 0x4))[0] = fVar1;
  ((float *)(gen_frame + 0x4))[4] = fVar2;
  (*(float *)(gen_frame + 0x24)) = (float)(fVar4 / (float10)fVar3);
  F_00981dd0(param_1,((float *)(gen_frame + 0x4)),param_2);
  return 0;
}

/* ref: FUN_0099a240 */
uint F_0099a240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0x99a240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float fVar1;
  int * piVar2;
  uint uVar3;
  
  param_1[0x74] = param_1[0x74] & 0xfff00000;
  param_1[0x6e] = (undefined4)gen_fl2bits(param_6);
  param_1[0x6f] = (undefined4)gen_fl2bits(param_7);
  param_1[0x70] = (undefined4)gen_fl2bits(param_8);
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  param_1[0x71] = (undefined4)gen_fl2bits(param_9);
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  uVar3 = (0.0 < param_9 | 0x7e) << 0x14 | param_1[0x74] & 0xf7efffff;
  param_1[0x75] = param_2;
  uVar3 = (uVar3 << 8 ^ uVar3) & 0x10000000 ^ uVar3;
  param_1[0x74] = ((uint)((uVar3 & 0x1ff) == 0) * 0x20000000 ^ uVar3) & 0x20000000 ^ uVar3;
  param_1[0x76] = param_3;
  param_1[0x77] = param_4;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = 0;
  param_1[0x21] = 0;
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x132f428));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x132f42c));
  param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x132f430));
  param_1[4] = GEN_FLT_TO(param_1[4], REFG(float, 0x132f434));
  param_1[5] = GEN_FLT_TO(param_1[5], REFG(float, 0x132f438));
  param_1[6] = GEN_FLT_TO(param_1[6], REFG(float, 0x132f43c));
  param_1[7] = GEN_FLT_TO(param_1[7], REFG(float, 0x132f440));
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x132f444));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x132f448));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x132f44c));
  param_1[0xb] = GEN_FLT_TO(param_1[0xb], REFG(float, 0x132f450));
  param_1[0xc] = GEN_FLT_TO(param_1[0xc], REFG(float, 0x132f454));
  param_1[0x22] = GEN_FLT_TO(param_1[0x22], REFG(float, 0x132f3a8));
  param_1[0x23] = GEN_FLT_TO(param_1[0x23], REFG(float, 0x132f3ac));
  param_1[0x24] = GEN_FLT_TO(param_1[0x24], REFG(float, 0x132f3b0));
  param_1[0x25] = GEN_FLT_TO(param_1[0x25], REFG(float, 0x132f3b4));
  param_1[0x47] = GEN_FLT_TO(param_1[0x47], REFG(float, 0x14a0a2c));
  param_1[0x48] = GEN_FLT_TO(param_1[0x48], REFG(float, 0x14a0a30));
  param_1[0x49] = GEN_FLT_TO(param_1[0x49], REFG(float, 0x14a0a34));
  param_1[0x10] = GEN_FLT_TO(param_1[0x10], REFG(float, 0x132f3f8));
  param_1[0x11] = GEN_FLT_TO(param_1[0x11], REFG(float, 0x132f3fc));
  param_1[0x12] = GEN_FLT_TO(param_1[0x12], REFG(float, 0x132f400));
  param_1[0x13] = GEN_FLT_TO(param_1[0x13], REFG(float, 0x14a0a2c));
  fVar1 = (float)((float10)param_5 * (float10)param_7);
  param_1[0x14] = GEN_FLT_TO(param_1[0x14], REFG(float, 0x14a0a30));
  param_1[0x15] = GEN_FLT_TO(param_1[0x15], REFG(float, 0x14a0a34));
  param_1[0x16] = GEN_FLT_TO(param_1[0x16], REFG(float, 0x132f3f8));
  param_1[0x17] = GEN_FLT_TO(param_1[0x17], REFG(float, 0x132f3fc));
  param_1[0x18] = GEN_FLT_TO(param_1[0x18], REFG(float, 0x132f400));
  param_1[0x19] = GEN_FLT_TO(param_1[0x19], REFG(float, 0x14a0a2c));
  param_1[0x1a] = GEN_FLT_TO(param_1[0x1a], REFG(float, 0x14a0a30));
  param_1[0x1b] = GEN_FLT_TO(param_1[0x1b], REFG(float, 0x14a0a34));
  param_1[0x1c] = GEN_FLT_TO(param_1[0x1c], REFG(float, 0x14a0a2c));
  param_1[0x1d] = GEN_FLT_TO(param_1[0x1d], REFG(float, 0x14a0a30));
  param_1[0x1e] = GEN_FLT_TO(param_1[0x1e], REFG(float, 0x14a0a34));
  param_1[0x54] = GEN_FLT_TO(param_1[0x54], REFG(float, 0x14a0a2c));
  param_1[0x55] = GEN_FLT_TO(param_1[0x55], REFG(float, 0x14a0a30));
  param_1[0x56] = GEN_FLT_TO(param_1[0x56], REFG(float, 0x14a0a34));
  param_1[0x4a] = GEN_FLT_TO(param_1[0x4a], REFG(float, 0x132f3f8));
  param_1[0x4b] = GEN_FLT_TO(param_1[0x4b], REFG(float, 0x132f3fc));
  param_1[0x4c] = GEN_FLT_TO(param_1[0x4c], REFG(float, 0x132f400));
  param_1[0x4d] = GEN_FLT_TO(param_1[0x4d], REFG(float, 0x14a0a2c));
  param_1[0x4e] = GEN_FLT_TO(param_1[0x4e], REFG(float, 0x14a0a30));
  param_1[0x4f] = GEN_FLT_TO(param_1[0x4f], REFG(float, 0x14a0a34));
  param_1[0x6a] = (undefined4)gen_fl2bits(fVar1);
  piVar2 = (int *)param_1[0x76];
  param_1[0x6d] = (undefined4)gen_fl2bits(fVar1);
  param_1[0x6b] = (undefined4)gen_fl2bits(fVar1);
  *(undefined2 *)(param_1 + 0x68) = 0xffff;
  param_1[0x6c] = 0;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return (uint)param_1;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2);
    if (uVar3 == 2) break;
    piVar2 = (int *)piVar2[0x76];
  }
  if (piVar2 == (int *)0x0) {
    return (uint)param_1;
  }
  if ((char)piVar2[0x7e] == '\0') {
    return (uint)param_1;
  }
  param_1[0x74] = param_1[0x74] & 0xefefffff;
  return (uint)param_1;
}

/* ref: FUN_0099a640 */
uint F_0099a640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x99a640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;
  float fVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  param_1[0x74] = param_1[0x74] & 0xfff00000;
  param_1[0x6e] = (undefined4)gen_fl2bits(param_6);
  param_1[0x6f] = (undefined4)gen_fl2bits(param_7);
  param_1[0x70] = (undefined4)gen_fl2bits(param_8);
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  param_1[0x71] = (undefined4)gen_fl2bits(param_9);
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x69] = 0;
  param_1[0x21] = 0;
  uVar3 = (0.0 < param_9 | 0x7e) << 0x14 | param_1[0x74] & 0xf7efffff;
  uVar3 = (uVar3 << 8 ^ uVar3) & 0x10000000 ^ uVar3;
  param_1[0x74] = ((uint)((uVar3 & 0x1ff) == 0) * 0x20000000 ^ uVar3) & 0x20000000 ^ uVar3;
  param_1[0x75] = param_2;
  param_1[0x76] = param_3;
  param_1[0x77] = param_4;
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x132f428));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x132f42c));
  param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x132f430));
  param_1[4] = GEN_FLT_TO(param_1[4], REFG(float, 0x132f434));
  param_1[5] = GEN_FLT_TO(param_1[5], REFG(float, 0x132f438));
  param_1[6] = GEN_FLT_TO(param_1[6], REFG(float, 0x132f43c));
  param_1[7] = GEN_FLT_TO(param_1[7], REFG(float, 0x132f440));
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x132f444));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x132f448));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x132f44c));
  param_1[0xb] = GEN_FLT_TO(param_1[0xb], REFG(float, 0x132f450));
  param_1[0xc] = GEN_FLT_TO(param_1[0xc], REFG(float, 0x132f454));
  param_1[0x22] = GEN_FLT_TO(param_1[0x22], REFG(float, 0x132f3a8));
  param_1[0x23] = GEN_FLT_TO(param_1[0x23], REFG(float, 0x132f3ac));
  param_1[0x24] = GEN_FLT_TO(param_1[0x24], REFG(float, 0x132f3b0));
  param_1[0x25] = GEN_FLT_TO(param_1[0x25], REFG(float, 0x132f3b4));
  puVar5 = param_10;
  puVar6 = param_1 + 0x60;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x47] = GEN_FLT_TO(param_1[0x47], REFG(float, 0x14a0a2c));
  param_1[0x48] = GEN_FLT_TO(param_1[0x48], REFG(float, 0x14a0a30));
  param_1[0x49] = GEN_FLT_TO(param_1[0x49], REFG(float, 0x14a0a34));
  param_1[0x10] = GEN_FLT_TO(param_1[0x10], REFG(float, 0x132f3f8));
  param_1[0x11] = GEN_FLT_TO(param_1[0x11], REFG(float, 0x132f3fc));
  param_1[0x12] = GEN_FLT_TO(param_1[0x12], REFG(float, 0x132f400));
  param_1[0x13] = GEN_FLT_TO(param_1[0x13], REFG(float, 0x14a0a2c));
  param_1[0x14] = GEN_FLT_TO(param_1[0x14], REFG(float, 0x14a0a30));
  fVar1 = (float)((float10)param_5 * (float10)param_7);
  param_1[0x15] = GEN_FLT_TO(param_1[0x15], REFG(float, 0x14a0a34));
  param_1[0x16] = GEN_FLT_TO(param_1[0x16], REFG(float, 0x132f3f8));
  param_1[0x17] = GEN_FLT_TO(param_1[0x17], REFG(float, 0x132f3fc));
  param_1[0x18] = GEN_FLT_TO(param_1[0x18], REFG(float, 0x132f400));
  param_1[0x19] = GEN_FLT_TO(param_1[0x19], REFG(float, 0x14a0a2c));
  param_1[0x1a] = GEN_FLT_TO(param_1[0x1a], REFG(float, 0x14a0a30));
  param_1[0x1b] = GEN_FLT_TO(param_1[0x1b], REFG(float, 0x14a0a34));
  param_1[0x1c] = GEN_FLT_TO(param_1[0x1c], REFG(float, 0x14a0a2c));
  param_1[0x1d] = GEN_FLT_TO(param_1[0x1d], REFG(float, 0x14a0a30));
  param_1[0x1e] = GEN_FLT_TO(param_1[0x1e], REFG(float, 0x14a0a34));
  param_1[0x54] = GEN_FLT_TO(param_1[0x54], REFG(float, 0x14a0a2c));
  param_1[0x55] = GEN_FLT_TO(param_1[0x55], REFG(float, 0x14a0a30));
  param_1[0x56] = GEN_FLT_TO(param_1[0x56], REFG(float, 0x14a0a34));
  param_1[0x4a] = GEN_FLT_TO(param_1[0x4a], REFG(float, 0x132f3f8));
  param_1[0x4b] = GEN_FLT_TO(param_1[0x4b], REFG(float, 0x132f3fc));
  param_1[0x4c] = GEN_FLT_TO(param_1[0x4c], REFG(float, 0x132f400));
  param_1[0x4d] = GEN_FLT_TO(param_1[0x4d], REFG(float, 0x14a0a2c));
  param_1[0x4e] = GEN_FLT_TO(param_1[0x4e], REFG(float, 0x14a0a30));
  param_1[0x4f] = GEN_FLT_TO(param_1[0x4f], REFG(float, 0x14a0a34));
  param_1[0x6a] = (undefined4)gen_fl2bits(fVar1);
  piVar2 = (int *)param_1[0x76];
  param_1[0x6d] = (undefined4)gen_fl2bits(fVar1);
  param_1[0x6b] = (undefined4)gen_fl2bits(fVar1);
  *(undefined2 *)(param_1 + 0x68) = 0xffff;
  param_1[0x6c] = 0;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return (uint)param_1;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2);
    if (uVar3 == 2) break;
    piVar2 = (int *)piVar2[0x76];
  }
  if (piVar2 == (int *)0x0) {
    return (uint)param_1;
  }
  if ((char)piVar2[0x7e] == '\0') {
    return (uint)param_1;
  }
  param_1[0x74] = param_1[0x74] & 0xefefffff;
  return (uint)param_1;
}

/* ref: FUN_0099aa20 */
ulonglong F_0099aa20(unsigned int gen_a0)
{
  GEN_ENTER(0x99aa20u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  
  if ((REFG(undefined4, 0x14a0d4c) & 1) == 0) {
    REFG(undefined4, 0x14a0d4c) = REFG(undefined4, 0x14a0d4c) | 1;
    *(undefined4 *)&REFG(undefined, 0x14a0d3c) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a0d40) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a0d44) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a0d48) = 0;
  }
  if ((REFG(undefined4, 0x14a0d4c) & 2) == 0) {
    REFG(undefined4, 0x14a0d4c) = REFG(undefined4, 0x14a0d4c) | 2;
    *(undefined4 *)&REFG(undefined, 0x14a0d2c) = REFG(float, 0x10abc38);
    *(undefined4 *)&REFG(undefined, 0x14a0d30) = REFG(float, 0x10abc38);
    *(undefined4 *)&REFG(undefined, 0x14a0d34) = REFG(float, 0x10abc38);
    *(undefined4 *)&REFG(undefined, 0x14a0d38) = REFG(float, 0x10abc38);
  }
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)*param_1 * fVar1);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)param_1[1] * fVar1);
  (*(float *)(gen_frame + 0xc)) = (float)((float10)param_1[2] * fVar1);
  (*(float *)(gen_frame + 0x10)) = (float)(fVar1 * (float10)param_1[3]);
  F_0098ff40(&(*(float *)(gen_frame + 0x4)),&REFG(undefined, 0x14a0d2c),&(*(float *)(gen_frame + 0x4)));
  F_0098ffb0(&(*(float *)(gen_frame + 0x4)),&REFG(undefined, 0x14a0d3c),&(*(float *)(gen_frame + 0x4)));
  (*(undefined2 *)(gen_frame + 0x14)) = (short)(int)(*(float *)(gen_frame + 0x4));
  (*(undefined2 *)(gen_frame + 0x16)) = (short)(int)(*(float *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x18)) = (short)(int)(*(float *)(gen_frame + 0xc));
  (*(undefined2 *)(gen_frame + 0x1a)) = (short)(int)(*(float *)(gen_frame + 0x10));
  return CONCAT44(CONCAT22((short)(int)(*(float *)(gen_frame + 0x10)),(short)(int)(*(float *)(gen_frame + 0xc))),
                  CONCAT22((short)(int)(*(float *)(gen_frame + 0x8)),(short)(int)(*(float *)(gen_frame + 0x4))));
}

/* ref: FUN_0099ab10 */
uint F_0099ab10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x99ab10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 * puVar1;
  
  F_0099a240(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(float)(float10)0,
               (float)(float10)0);
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10ddf04));
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_3 + 0x10))(param_3)));
  param_1[0x2f] = *puVar1;
  param_1[0x30] = puVar1[1];
  param_1[0x31] = puVar1[2];
  param_1[0x32] = puVar1[3];
  param_1[0x33] = puVar1[4];
  param_1[0x34] = puVar1[5];
  param_1[0x35] = puVar1[6];
  param_1[0x36] = puVar1[7];
  param_1[0x37] = puVar1[8];
  param_1[0x38] = puVar1[9];
  param_1[0x39] = puVar1[10];
  param_1[0x3a] = puVar1[0xb];
  return (uint)param_1;
}

/* ref: FUN_0099b040 */
uint F_0099b040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x99b040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  float10 fVar1;
  
  fVar1 = (float10)0;
  F_0099a240(this,param_1,param_2,param_3,(float)fVar1,REFG(float, 0x1090708),(float)(float10)1,(float)fVar1
               ,(float)fVar1);
  *(undefined4 *)((int)this + 0x1ec) = param_4;
  *(undefined4 *)((int)this + 0x1f0) = param_5;
  *(undefined4 *)((int)this + 0x1fc) = param_7;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10df2ec));
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = param_6;
  *(undefined1 *)((int)this + 0x200) = (undefined1)param_8;
  return (uint)this;
}

/* ref: FUN_0099b290 */
uint F_0099b290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x99b290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  F_0099a240(param_1,param_2,param_3,param_4,param_7,param_8,(float)(float10)1,(float)(float10)0,
               (float)(float10)0);
  param_1[0x7b] = param_5;
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10df36c));
  param_1[0x7c] = param_6;
  return (uint)param_1;
}

/* ref: FUN_0099b2f0 */
uint F_0099b2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x99b2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  F_0099a240(param_1,param_2,param_3,param_4,param_7,param_8,(float)(float10)1,(float)(float10)0,
               (float)(float10)0);
  param_1[0x7b] = param_5;
  param_1[0x7c] = param_6;
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10df3ec));
  return (uint)param_1;
}

/* ref: FUN_0099b350 */
uint F_0099b350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x99b350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  F_0099a240(param_1,param_2,param_3,param_4,param_7,param_8,(float)(float10)1,(float)(float10)0,
               (float)(float10)0);
  param_1[0x7b] = param_5;
  param_1[0x7c] = param_6;
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10df46c));
  return (uint)param_1;
}

/* ref: FUN_0099b3b0 */
uint F_0099b3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x99b3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  F_0099a240(param_1,param_2,param_3,param_4,param_7,param_8,(float)(float10)1,(float)(float10)0,
               (float)(float10)0);
  param_1[0x7b] = param_5;
  param_1[0x7c] = param_6;
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10df4ec));
  return (uint)param_1;
}

/* ref: FUN_0099b410 */
uint F_0099b410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x99b410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  F_0099a240(param_1,param_2,param_3,param_4,param_7,param_8,(float)(float10)1,(float)(float10)0,
               (float)(float10)0);
  param_1[0x7b] = param_5;
  param_1[0x7c] = param_6;
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10df56c));
  return (uint)param_1;
}

/* ref: FUN_0099b470 */
uint F_0099b470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x99b470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  F_0099a240(param_1,param_2,param_3,param_4,param_7,param_8,(float)(float10)1,(float)(float10)0,
               (float)(float10)0);
  param_1[0x7b] = param_5;
  param_1[0x7c] = param_6;
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10df5ec));
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::ModelEmitterInstance::vf22 */
uint F_0099c8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x99c8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0098dc90(this,param_1,param_2);
  return param_1;
}

/* ref: FUN_0099d980 */
unsigned int F_0099d980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x99d980u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  int * piVar1;
  float10 fVar2;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 4) + 0x34))))(*(int * PTR32 *)(param_2 + 4))));
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))
            (piVar1,(undefined4)gen_fl2bits(param_5),(undefined4)gen_fl2bits(param_6));
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_3 + 4) + 0x34))))(*(int * PTR32 *)(param_3 + 4))));
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))
            (piVar1,(undefined4)gen_fl2bits(param_5),(undefined4)gen_fl2bits(param_6));
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x132f428));
  fVar2 = (float10)param_4;
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x132f42c));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x132f430));
  param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x132f434));
  param_1[4] = GEN_FLT_TO(param_1[4], REFG(float, 0x132f438));
  param_1[5] = GEN_FLT_TO(param_1[5], REFG(float, 0x132f43c));
  param_1[6] = GEN_FLT_TO(param_1[6], REFG(float, 0x132f440));
  param_1[7] = GEN_FLT_TO(param_1[7], REFG(float, 0x132f444));
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x132f448));
  param_1[9] = (undefined4)
               gen_fl2bits(((float)GEN_TOF((fVar2 * ((float10)local_1c - (float10)local_28) +
                                  (float10)local_28))));
  param_1[10] = (undefined4)
                gen_fl2bits(((float)GEN_TOF(((float10)local_24 +
                                   fVar2 * ((float10)local_18 - (float10)local_24)))));
  param_1[0xb] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)local_20 +
                                    ((float10)local_14 - (float10)local_20) * fVar2))));
  return 0;
}

/* ref: FUN_0099dad0 */
unsigned int F_0099dad0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x99dad0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x34))))(*(int * PTR32 *)(param_1 + 4))));
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))
            (piVar1,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4));
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x132f428));
  param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x132f42c));
  param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x132f430));
  param_2[3] = GEN_FLT_TO(param_2[3], REFG(float, 0x132f434));
  param_2[4] = GEN_FLT_TO(param_2[4], REFG(float, 0x132f438));
  param_2[5] = GEN_FLT_TO(param_2[5], REFG(float, 0x132f43c));
  param_2[6] = GEN_FLT_TO(param_2[6], REFG(float, 0x132f440));
  param_2[7] = GEN_FLT_TO(param_2[7], REFG(float, 0x132f444));
  param_2[8] = GEN_FLT_TO(param_2[8], REFG(float, 0x132f448));
  param_2[9] = local_10;
  param_2[10] = local_c;
  param_2[0xb] = local_8;
  return 0;
}

/* ref: FUN_0099dbb0 */
uint F_0099dbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x99dbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char cVar13;
  uint uVar14;
  float * pfVar15;
  int iVar16;
  float * pfVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  ulonglong uVar25;
  
  uVar14 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  ((byte *)(gen_frame + 0x38))[0x30] = (char)uVar14;
  ((byte *)(gen_frame + 0x38))[0x31] = (char)(uVar14 >> 8);
  ((byte *)(gen_frame + 0x38))[0x32] = (char)(uVar14 >> 0x10);
  ((byte *)(gen_frame + 0x38))[0x33] = (char)(uVar14 >> 0x18);
  cVar13 = *(char *)((int)this + 0x19f);
  if (cVar13 == '\0') {
    fVar18 = (float10)*(float *)((int)this + 0x2f8) + (float10)*(float *)((int)this + 0x2f4);
  }
  else if (cVar13 == '\x01') {
    fVar18 = (float10)*(float *)((int)this + 0x2f8) + (float10)*(float *)((int)this + 0x2f0);
  }
  else {
    if (cVar13 != '\x02') goto LAB_0099dc1f;
    fVar18 = (float10)*(float *)((int)this + 0x2f4) + (float10)*(float *)((int)this + 0x2f0);
  }
  *(float *)((int)this + 0x318) =
       ((float)GEN_TOF(((fVar18 * (float10)REFG(double, 0x1088108)) * (float10)*(float *)((int)this + 0x318))));
LAB_0099dc1f: ;
  fVar1 = *(float *)((int)this + 0x28);
  fVar2 = *(float *)((int)this + 0x2c);
  fVar3 = *(float *)((int)this + 0x30);
  pfVar15 = (float *)((int)this + 4);
  if (cVar13 != '\0') {
    if (cVar13 == '\x01') {
      pfVar15 = (float *)((int)this + 0x10);
    }
    else if (cVar13 == '\x02') {
      pfVar15 = (float *)((int)this + 0x1c);
    }
    else {
      pfVar15 = (float *)((int)this + 0x15c);
    }
  }
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x38)) + 12)) = (undefined4)gen_fl2bits(fVar1);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x38)) + 16)) = (undefined4)gen_fl2bits(fVar2);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x38)) + 20)) = (undefined4)gen_fl2bits(fVar3);
  fVar18 = (float10)*(float *)((int)this + 0x31c);
  fVar4 = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)(fVar18 * (float10)*pfVar15))));
  fVar5 = ((float)GEN_TOF(((float10)(float)((float10)pfVar15[1] * fVar18) + (float10)fVar2)));
  fVar6 = ((float)GEN_TOF(((float10)(float)(fVar18 * (float10)pfVar15[2]) + (float10)fVar3)));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x38)) + 24)) = (undefined4)gen_fl2bits(fVar4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x38)) + 28)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x38)) + 32)) = (undefined4)gen_fl2bits(fVar6);
  fVar7 = (float)((float10)fVar4 - (float10)fVar1);
  fVar8 = (float)((float10)fVar5 - (float10)fVar2);
  fVar9 = (float)((float10)fVar6 - (float10)fVar3);
  fVar18 = (float10)((float)GEN_TOF(((float10)fVar3 - (float10)*(float *)((int)this + 0x304))));
  fVar19 = (float10)fVar8;
  fVar20 = (float10)((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)((int)this + 0x300))));
  fVar21 = (float10)fVar9;
  fVar22 = (float10)((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)((int)this + 0x2fc))));
  fVar23 = (float10)fVar7;
  fVar24 = (float10)(float)(fVar22 * fVar21 - fVar23 * fVar18);
  fVar22 = (float10)(float)(fVar20 * fVar23 - fVar19 * fVar22);
  fVar10 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x310) * fVar24 -
                  (float10)*(float *)((int)this + 0x30c) * fVar22)));
  fVar23 = (float10)*(float *)((int)this + 0x308);
  fVar18 = (float10)(float)(fVar19 * fVar18 - fVar21 * fVar20);
  fVar11 = ((float)GEN_TOF((fVar23 * fVar22 - fVar18 * (float10)*(float *)((int)this + 0x310))));
  fVar12 = ((float)GEN_TOF((fVar18 * (float10)*(float *)((int)this + 0x30c) - fVar23 * fVar24)));
  fVar18 = (float10)fVar10;
  fVar19 = (float10)fVar11;
  fVar20 = (float10)fVar12;
  fVar18 = (float10)((float)GEN_TOF(((float10)1 /
                           (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar20 * fVar20 +
                                                                (fVar19 * fVar19 + fVar18 * fVar18))))
                                               ))))));
  fVar19 = (float10)*(float *)((int)this + 0x318);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x38)) + 0)) = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)fVar1 -
                                    (float10)((float)GEN_TOF((fVar19 * (float10)(float)(fVar18 * (float10)
                                                  fVar10))))))));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x38)) + 4)) = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)fVar2 -
                                    (float10)((float)GEN_TOF(((float10)(float)((float10)fVar11 * fVar18) *
                                                    fVar19)))))));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x38)) + 8)) = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)fVar3 -
                                    (float10)((float)GEN_TOF((fVar19 * (float10)(float)(fVar18 * (float10)
                                                  fVar12))))))));
  fVar18 = (float10)((float)GEN_TOF(((float10)fVar6 - (float10)*(float *)((int)this + 0x304))));
  fVar19 = (float10)fVar8;
  fVar20 = (float10)((float)GEN_TOF(((float10)fVar5 - (float10)*(float *)((int)this + 0x300))));
  fVar21 = (float10)fVar9;
  fVar22 = (float10)((float)GEN_TOF(((float10)fVar4 - (float10)*(float *)((int)this + 0x2fc))));
  fVar23 = (float10)fVar7;
  fVar24 = (float10)(float)(fVar22 * fVar21 - fVar23 * fVar18);
  fVar22 = (float10)(float)(fVar20 * fVar23 - fVar19 * fVar22);
  fVar1 = ((float)GEN_TOF((fVar24 * (float10)*(float *)((int)this + 0x310) -
                 fVar22 * (float10)*(float *)((int)this + 0x30c))));
  fVar23 = (float10)*(float *)((int)this + 0x308);
  fVar18 = (float10)(float)(fVar19 * fVar18 - fVar21 * fVar20);
  fVar2 = ((float)GEN_TOF((fVar23 * fVar22 - fVar18 * (float10)*(float *)((int)this + 0x310))));
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x30c) * fVar18 - fVar24 * fVar23)));
  fVar18 = (float10)fVar2;
  fVar19 = (float10)fVar1;
  fVar20 = (float10)fVar3;
  fVar18 = (float10)((float)GEN_TOF(((float10)1 /
                           (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar20 * fVar20 +
                                                                (fVar19 * fVar19 + fVar18 * fVar18))))
                                               ))))));
  fVar19 = (float10)*(float *)((int)this + 0x318);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x38)) + 36)) =
       (undefined4)
       gen_fl2bits(((float)GEN_TOF(((float10)((float)GEN_TOF((fVar19 * (float10)(float)(fVar18 * (float10)fVar1)))) +
                          (float10)fVar4))));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x38)) + 40)) =
       (undefined4)
       gen_fl2bits(((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar2 * fVar18) * fVar19))) +
                          (float10)fVar5))));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x38)) + 44)) =
       (undefined4)
       gen_fl2bits(((float)GEN_TOF(((float10)((float)GEN_TOF((fVar19 * (float10)(float)(fVar18 * (float10)fVar3)))) +
                          (float10)fVar6))));
  uVar25 = F_0099aa20((int)this + 0x88);
  (*(int *)(gen_frame + 0x24)) = 1;
  (*(int *)(gen_frame + 0x20)) = 4;
  pfVar15 = (float *)(((byte *)(gen_frame + 0x38)) + 8);
  pfVar17 = param_1;
  do {
    uVar14 = (*(int *)(gen_frame + 0x24)) - 2;
    if (0x7fffffff < uVar14) {
      uVar14 = 0;
    }
    iVar16 = (*(int *)(gen_frame + 0x24));
    if (3 < (*(int *)(gen_frame + 0x24))) {
      iVar16 = 3;
    }
    iVar16 = iVar16 * 0xc;
    fVar18 = (float10)((float)GEN_TOF(((float10)*(float *)(((byte *)(gen_frame + 0x38)) + uVar14 * 0xc + 8) -
                             (float10)*(float *)((int)this + 0x304))));
    fVar19 = (float10)((float)GEN_TOF(((float10)*(float *)(((byte *)(gen_frame + 0x38)) + uVar14 * 0xc + 4) -
                             (float10)*(float *)(((byte *)(gen_frame + 0x38)) + iVar16 + 4))));
    fVar20 = (float10)((float)GEN_TOF(((float10)*(float *)(((byte *)(gen_frame + 0x38)) + uVar14 * 0xc + 4) -
                             (float10)*(float *)((int)this + 0x300))));
    fVar21 = (float10)((float)GEN_TOF(((float10)*(float *)(((byte *)(gen_frame + 0x38)) + uVar14 * 0xc + 8) -
                             (float10)*(float *)(((byte *)(gen_frame + 0x38)) + iVar16 + 8))));
    fVar1 = (float)(fVar19 * fVar18 - fVar21 * fVar20);
    fVar22 = (float10)((float)GEN_TOF(((float10)*(float *)(((byte *)(gen_frame + 0x38)) + uVar14 * 0xc) -
                             (float10)*(float *)((int)this + 0x2fc))));
    fVar23 = (float10)((float)GEN_TOF(((float10)*(float *)(((byte *)(gen_frame + 0x38)) + uVar14 * 0xc) -
                             (float10)*(float *)(((byte *)(gen_frame + 0x38)) + iVar16))));
    fVar2 = (float)(fVar22 * fVar21 - fVar23 * fVar18);
    fVar3 = (float)(fVar20 * fVar23 - fVar19 * fVar22);
    fVar18 = (float10)fVar2;
    fVar19 = (float10)fVar1;
    fVar20 = (float10)fVar3;
    fVar18 = (float10)((float)GEN_TOF(((float10)1 /
                             (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar20 * fVar20 +
                                                                  (fVar19 * fVar19 + fVar18 * fVar18
                                                                  ))))))))));
    (*(float *)(gen_frame + 0xc)) = gen_bits2f((uint)uVar25);
    (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)(uVar25 >> 0x20));
    fVar19 = (float10)*(float *)((int)this + 0x318);
    fVar4 = pfVar15[-2];
    fVar20 = (float10)((float)GEN_TOF((fVar19 * (float10)(float)(fVar18 * (float10)fVar1))));
    fVar1 = pfVar15[-1];
    *pfVar17 = (float)((float10)fVar4 - fVar20);
    fVar21 = (float10)((float)GEN_TOF(((float10)(float)((float10)fVar2 * fVar18) * fVar19)));
    fVar2 = *pfVar15;
    pfVar17[1] = (float)((float10)fVar1 - fVar21);
    fVar18 = (float10)((float)GEN_TOF((fVar19 * (float10)(float)(fVar18 * (float10)fVar3))));
    pfVar17[2] = (float)((float10)fVar2 - fVar18);
    fVar3 = *(float *)((int)this + 0x314);
    pfVar17[4] = (*(float *)(gen_frame + 0xc));
    pfVar17[3] = fVar3;
    pfVar17[5] = (*(float *)(gen_frame + 0x10));
    pfVar17[0xc] = (float)(fVar20 + (float10)fVar4);
    pfVar17[0xd] = (float)(fVar21 + (float10)fVar1);
    pfVar17[0xe] = (float)(fVar18 + (float10)fVar2);
    fVar1 = *(float *)((int)this + 0x314);
    pfVar17[0x10] = (*(float *)(gen_frame + 0xc));
    pfVar17[0xf] = fVar1;
    (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + -1;
    pfVar17[0x11] = (*(float *)(gen_frame + 0x10));
    pfVar15 = pfVar15 + 3;
    pfVar17 = pfVar17 + 0x18;
  } while ((*(int *)(gen_frame + 0x20)) != 0);
  (*(undefined2 *)(gen_frame + 0x34)) = (undefined2)(int)TRUNC(*(double *)&REFG(undefined, 0x10912a8) * 0.0);
  *(undefined2 *)(param_1 + 0x12) = 1000;
  *(undefined2 *)((int)param_1 + 0x7a) = 500;
  *(undefined2 *)(param_1 + 0x2a) = 1000;
  *(undefined2 *)(param_1 + 6) = (*(undefined2 *)(gen_frame + 0x34));
  *(undefined2 *)((int)param_1 + 0x1a) = (*(undefined2 *)(gen_frame + 0x34));
  *(undefined2 *)((int)param_1 + 0x4a) = (*(undefined2 *)(gen_frame + 0x34));
  *(undefined2 *)(param_1 + 0x1e) = (*(undefined2 *)(gen_frame + 0x34));
  *(undefined2 *)(param_1 + 0x36) = (*(undefined2 *)(gen_frame + 0x34));
  *(undefined2 *)(param_1 + 0x4e) = (*(undefined2 *)(gen_frame + 0x34));
  *(undefined2 *)((int)param_1 + 0xaa) = 500;
  *(undefined2 *)((int)param_1 + 0xda) = 500;
  *(undefined2 *)((int)param_1 + 0x13a) = 1000;
  *(undefined2 *)(param_1 + 0x42) = 1000;
  *(undefined2 *)((int)param_1 + 0x10a) = 500;
  param_1[0x5a] = 1.3636631e-36;
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x38)) + 48)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::LineParticleInstance::vf25 */
uint F_0099e320(unsigned int gen_a0)
{
  GEN_ENTER(0x99e320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  F_0097ef70(this);
  F_0097f2c0(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xa4))))(*(int * PTR32 *)(this + 0x29c));
  if ((char)uVar2 != '\0') {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xf4))))(*(int * PTR32 *)(this + 0x29c));
    uVar1 = *(undefined4 *)(this + 0x298);
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    uVar2 = F_0098e3b0(this,uVar1,uVar1,(int)*(short *)(uVar2 + 0xb8),uVar2,uVar3);
  }
  return uVar2;
}

/* ref: FUN_0099e3a0 */
uint F_0099e3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x99e3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  char cVar2;
  int iVar3;
  float * pfVar4;
  float10 fVar5;
  ulonglong uVar6;
  
  cVar2 = *(char *)((int)this + 0x19f);
  pfVar4 = (float *)((int)this + 4);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      pfVar4 = (float *)((int)this + 0x10);
    }
    else if (cVar2 == '\x02') {
      pfVar4 = (float *)((int)this + 0x1c);
    }
    else {
      pfVar4 = (float *)((int)this + 0x15c);
    }
  }
  fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 0x2f0) + 0x24)));
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar5 = (float10)fVar1;
  (*(float *)(gen_frame + 0x1c)) = (float)(fVar5 * (float10)*pfVar4);
  (*(float *)(gen_frame + 0x20)) = (float)((float10)pfVar4[1] * fVar5);
  (*(float *)(gen_frame + 0x24)) = (float)(fVar5 * (float10)pfVar4[2]);
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)*pfVar4) +
                    (float10)*(float *)((int)this + 0x28))));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x2c) +
                    (float10)(float)((float10)pfVar4[1] * fVar5))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x30) +
                    (float10)(float)(fVar5 * (float10)pfVar4[2]))));
  *param_1 = *(undefined4 *)((int)this + 0x28);
  param_1[1] = *(undefined4 *)((int)this + 0x2c);
  param_1[2] = *(undefined4 *)((int)this + 0x30);
  param_1[3] = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2f0) + 0x20)));
  pfVar4 = *(float * PTR32 *)((int)this + 0x2f0);
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x88) * (float10)*pfVar4)));
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)pfVar4[1] * (float10)*(float *)((int)this + 0x8c))));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)pfVar4[2] * (float10)*(float *)((int)this + 0x90))));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)pfVar4[3] * (float10)*(float *)((int)this + 0x94))));
  uVar6 = F_0099aa20(&(*(float *)(gen_frame + 0x18)));
  param_1[0xc] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
  param_1[0xd] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x10)));
  *(ulonglong *)(param_1 + 4) = uVar6;
  param_1[0xe] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14)));
  param_1[0xf] = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2f0) + 0x20)));
  iVar3 = *(int *)((int)this + 0x2f0);
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*(float *)(iVar3 + 0x10) * (float10)*(float *)((int)this + 0x88))));
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)*(float *)(iVar3 + 0x14) * (float10)*(float *)((int)this + 0x8c))));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(iVar3 + 0x18) * (float10)*(float *)((int)this + 0x90))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(iVar3 + 0x1c) * (float10)*(float *)((int)this + 0x94))));
  uVar6 = F_0099aa20(&(*(float *)(gen_frame + 0x8)));
  *(ulonglong *)(param_1 + 0x10) = uVar6;
  return (uint)uVar6;
}

/* ref: FUN_0099e500 */
uint F_0099e500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x99e500u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  short * psVar8;
  float * pfVar9;
  float * pfVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  ulonglong uVar17;
  
  (*(int * PTR32 *)(gen_frame + 0x80)) = param_1;
  uVar4 = ((code *)*(gen_code32 *)(*(int *)param_1[0xa7] + 0xf4))((int *)param_1[0xa7]);
  uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  (*(float *)(gen_frame + 0xb8)) = gen_bits2f(param_1[0x22]);
  fVar11 = ((float10)GEN_TOD(gen_bits2f(param_1[0x22])));
  pfVar9 = (float *)param_1[0xbc];
  (*(uint *)(gen_frame + 0x6c)) = uVar5;
  (*(float *)(gen_frame + 0x70)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x30)) = (float)(fVar11 * (float10)*pfVar9);
  (*(float *)(gen_frame + 0xb8)) = gen_bits2f(param_1[0x23]);
  fVar12 = ((float10)GEN_TOD(gen_bits2f(param_1[0x23])));
  (*(float *)(gen_frame + 0x34)) = (float)(fVar12 * (float10)pfVar9[1]);
  (*(float *)(gen_frame + 0xb8)) = gen_bits2f(param_1[0x24]);
  fVar13 = ((float10)GEN_TOD(gen_bits2f(param_1[0x24])));
  (*(float *)(gen_frame + 0x38)) = (float)(fVar13 * (float10)pfVar9[2]);
  (*(float *)(gen_frame + 0xb8)) = gen_bits2f(param_1[0x25]);
  fVar14 = ((float10)GEN_TOD(gen_bits2f(param_1[0x25])));
  (*(float *)(gen_frame + 0x3c)) = (float)(fVar14 * (float10)pfVar9[3]);
  (*(float *)(gen_frame + 0x40)) = (float)((float10)pfVar9[4] * fVar11);
  (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar9[5] * fVar12);
  (*(float *)(gen_frame + 0x48)) = (float)(fVar13 * (float10)pfVar9[6]);
  (*(float *)(gen_frame + 0x4c)) = (float)(fVar14 * (float10)pfVar9[7]);
  if (*(char *)(uVar4 + 0xcf) != '\0') {
    F_009e4400(uVar5,(uint)&(*(float *)(gen_frame + 0x74)));
    (*(float *)(gen_frame + 0x70)) = ((float)GEN_TOF(((((float10)(*(float *)(gen_frame + 0x78)) + (float10)(*(float *)(gen_frame + 0x74))) + (float10)(*(float *)(gen_frame + 0x7c))) /
                      (float10)*(double *)&REFG(undefined, 0x10944e0))));
  }
  pvVar6 = (undefined *)F_0098e3b0(param_1,param_3,param_4,param_5,uVar4,uVar5);
  if (0 < (int)param_5) {
    pfVar9 = (float *)(param_2 + 8);
    pfVar10 = (float *)(param_3 + 4);
    (*(float *)(gen_frame + 0xb8)) = gen_bits2f(param_5);
    do {
      fVar11 = (float10)REFG(double, 0x1088108);
      if (*(char *)((int)pfVar10 + 0x4b) == '\x01') {
        fVar1 = pfVar10[-1];
        fVar12 = (float10)fVar1;
        fVar13 = (float10)(float)(fVar12 * fVar12);
        (*(float *)(gen_frame + 0xa0)) = ((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar13 * (float10)*(float *)(uVar4 + 0x18)) * fVar11))) +
                          (float10)*pfVar10)));
        (*(float *)(gen_frame + 0xa4)) = ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)*(float *)(uVar4 + 0x1c) * fVar13) * fVar11))) +
                          (float10)pfVar10[1])));
        (*(float *)(gen_frame + 0xa8)) = ((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar13 * (float10)*(float *)(uVar4 + 0x20)) * fVar11))) +
                          (float10)pfVar10[2])));
        if (*(char *)(uVar4 + 200) != -1) {
          param_3 = (uint)gen_fl2bits(((float)GEN_TOF((fVar12 * (float10)*(float *)(uVar4 + 0x8c) +
                                             (float10)*(float *)(uVar4 + 0x88)))));
          if (((float10)GEN_TOD(gen_bits2f(param_3))) < (float10)0) {
            fVar16 = 0.0;
LAB_0099e6e3: ;
            param_3 = (uint)gen_fl2bits(fVar16);
          }
          else {
            fVar16 = REFG(float, 0x1087f04);
            if (REFG(float, 0x1087f04) < gen_bits2f(param_3)) goto LAB_0099e6e3;
          }
          fVar11 = ((float10)GEN_TOD(fcos(
                                 (float10)(float)(((float10)GEN_TOD(gen_bits2f(param_3))) *
                                                 (float10)*(double *)&REFG(undefined, 0x1080228)))));
          fVar12 = (float10)REFG(double, 0x1088108);
          fVar13 = (float10)*(double *)&REFG(undefined, 0x1088118);
          (*(float *)(gen_frame + 0x84)) = ((float)GEN_TOF(((float10)(int)*(char *)(pfVar10 + 0x12) / fVar13)));
          fVar16 = ((float)GEN_TOF(((float10)(int)*(char *)((int)pfVar10 + 0x49) / fVar13)));
          (*(float *)(gen_frame + 0x88)) = fVar16;
          fVar2 = ((float)GEN_TOF(((float10)(int)*(char *)((int)pfVar10 + 0x4a) / fVar13)));
          (*(float *)(gen_frame + 0x8c)) = fVar2;
          fVar14 = (float10)pfVar10[0xb];
          (*(float *)(gen_frame + 0x84)) = ((float)GEN_TOF((fVar14 * (float10)((float)GEN_TOF(((float10)(int)*(char *)(pfVar10 + 0x12) /
                                                      fVar13))))));
          (*(float *)(gen_frame + 0x88)) = (float)((float10)fVar16 * fVar14);
          (*(float *)(gen_frame + 0x8c)) = (float)(fVar14 * (float10)fVar2);
          if (*(char *)(uVar4 + 0xce) == '\0') {
            F_00981170(&(*(float *)(gen_frame + 0x84)),(uint)&(*(float *)(gen_frame + 0x84)),(*(uint *)(gen_frame + 0x6c)));
          }
          fVar16 = (float)((float10)(*(float *)(gen_frame + 0x84)) - (float10)(*(float *)(gen_frame + 0xa0)));
          (*(float *)(gen_frame + 0x60)) = fVar16;
          fVar2 = (float)((float10)(*(float *)(gen_frame + 0x88)) - (float10)(*(float *)(gen_frame + 0xa4)));
          (*(float *)(gen_frame + 0x64)) = fVar2;
          fVar3 = (float)((float10)(*(float *)(gen_frame + 0x8c)) - (float10)(*(float *)(gen_frame + 0xa8)));
          (*(float *)(gen_frame + 0x68)) = fVar3;
          fVar11 = (float10)(float)(fVar12 - (float10)(float)fVar11 * fVar12);
          fVar16 = (float)(fVar11 * (float10)fVar16);
          (*(float *)(gen_frame + 0x24)) = fVar16;
          fVar2 = (float)((float10)fVar2 * fVar11);
          (*(float *)(gen_frame + 0x28)) = fVar2;
          fVar3 = (float)(fVar11 * (float10)fVar3);
          (*(float *)(gen_frame + 0x2c)) = fVar3;
          (*(float *)(gen_frame + 0xa0)) = (float)((float10)fVar16 + (float10)(*(float *)(gen_frame + 0xa0)));
          (*(float *)(gen_frame + 0xa4)) = (float)((float10)(*(float *)(gen_frame + 0xa4)) + (float10)fVar2);
          (*(float *)(gen_frame + 0xa8)) = (float)((float10)(*(float *)(gen_frame + 0xa8)) + (float10)fVar3);
        }
        fVar16 = REFG(float, 0x10a0d8c);
        if (*(char *)(uVar4 + 0xce) != '\0') {
          F_00981170(&(*(float *)(gen_frame + 0xa0)),(uint)&(*(float *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0x6c)));
        }
        fVar12 = (float10)fVar1;
        fVar11 = (float10)*(double *)&REFG(undefined, 0x1088100);
        (*(float *)(gen_frame + 0x90)) = fVar16;
        (*(float *)(gen_frame + 0x94)) = fVar16;
        (*(float *)(gen_frame + 0x98)) = fVar16;
        (*(float *)(gen_frame + 0x9c)) = fVar16;
        if (fVar12 <= (float10)(int)*(short *)(uVar4 + 0xa0)) {
          (*(float *)(gen_frame + 0x90)) = (float)*(byte *)(uVar4 + 0xa8);
          (*(float *)(gen_frame + 0x94)) = (float)*(byte *)(uVar4 + 0xa9);
          (*(float *)(gen_frame + 0x98)) = (float)*(byte *)(uVar4 + 0xaa);
          (*(float *)(gen_frame + 0x9c)) = (float)*(byte *)(uVar4 + 0xab);
        }
        else if ((float10)(int)*(short *)(uVar4 + 0xa6) <= fVar12) {
          (*(float *)(gen_frame + 0x90)) = (float)*(byte *)(uVar4 + 0xb4);
          (*(float *)(gen_frame + 0x94)) = (float)*(byte *)(uVar4 + 0xb5);
          (*(float *)(gen_frame + 0x98)) = (float)*(byte *)(uVar4 + 0xb6);
          (*(float *)(gen_frame + 0x9c)) = (float)*(byte *)(uVar4 + 0xb7);
        }
        else {
          iVar7 = 1;
          psVar8 = (short *)(uVar4 + 0xa2);
          do {
            if ((!GEN_ISNAN((float10)(int)*psVar8) && !GEN_ISNAN(fVar12)) && !((float10)(int)*psVar8 <= fVar12))
            {
              fVar13 = (float10)(int)*(short *)(uVar4 + 0x9e + iVar7 * 2);
              fVar14 = (float10)*(byte *)(uVar4 + 0xa4 + iVar7 * 4);
              fVar12 = (float10)((float)GEN_TOF(((fVar12 - fVar13) /
                                       ((float10)(int)*(short *)(uVar4 + 0xa0 + iVar7 * 2) - fVar13)
                                       )));
              (*(float *)(gen_frame + 0x90)) = ((float)GEN_TOF((fVar12 * ((float10)*(byte *)(uVar4 + 0xa8 + iVar7 * 4) - fVar14) +
                                fVar14)));
              fVar13 = (float10)*(byte *)(uVar4 + 0xa5 + iVar7 * 4);
              (*(float *)(gen_frame + 0x94)) = ((float)GEN_TOF((((float10)*(byte *)(uVar4 + 0xa9 + iVar7 * 4) - fVar13) * fVar12 +
                                fVar13)));
              fVar13 = (float10)*(byte *)(uVar4 + 0xa6 + iVar7 * 4);
              (*(float *)(gen_frame + 0x98)) = ((float)GEN_TOF((((float10)*(byte *)(uVar4 + 0xaa + iVar7 * 4) - fVar13) * fVar12 +
                                fVar13)));
              fVar13 = (float10)*(byte *)(uVar4 + 0xa7 + iVar7 * 4);
              (*(float *)(gen_frame + 0x9c)) = ((float)GEN_TOF((fVar13 + ((float10)*(byte *)(uVar4 + 0xab + iVar7 * 4) - fVar13) *
                                          fVar12)));
              break;
            }
            iVar7 = iVar7 + 1;
            psVar8 = psVar8 + 1;
          } while (iVar7 < 4);
        }
        fVar13 = (float10)(*(float *)(gen_frame + 0x90));
        fVar14 = (float10)(*(float *)(gen_frame + 0x94));
        fVar15 = (float10)(*(float *)(gen_frame + 0x98));
        fVar12 = (float10)(*(float *)(gen_frame + 0x9c));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(float)(fVar13 / fVar11) * (float10)(*(float *)(gen_frame + 0x30)))));
        (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)(float)(fVar14 / fVar11) * (float10)(*(float *)(gen_frame + 0x34)))));
        (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)(float)(fVar15 / fVar11) * (float10)(*(float *)(gen_frame + 0x38)))));
        (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)(float)(fVar12 / fVar11) * (float10)(*(float *)(gen_frame + 0x3c)))));
        uVar17 = F_0099aa20(&(*(float *)(gen_frame + 0x14)));
        (*(ulonglong *)(gen_frame + 0x50)) = uVar17;
        (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)(float)(fVar13 / fVar11) * (float10)(*(float *)(gen_frame + 0x40)))));
        (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)(float)(fVar14 / fVar11) * (float10)(*(float *)(gen_frame + 0x44)))));
        (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)(float)(fVar15 / fVar11) * (float10)(*(float *)(gen_frame + 0x48)))));
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(float)(fVar12 / fVar11) * (float10)(*(float *)(gen_frame + 0x4c)))));
        uVar17 = F_0099aa20(&(*(float *)(gen_frame + 0x4)));
        (*(ulonglong *)(gen_frame + 0x58)) = uVar17;
        uVar17 = (*(ulonglong *)(gen_frame + 0x58));
        fVar1 = (float)((float10)(*(float *)(gen_frame + 0xa0)) - (float10)pfVar10[3]);
        (*(float *)(gen_frame + 0xac)) = fVar1;
        fVar16 = (float)((float10)(*(float *)(gen_frame + 0xa4)) - (float10)pfVar10[4]);
        (*(float *)(gen_frame + 0xb0)) = fVar16;
        fVar2 = (float)((float10)(*(float *)(gen_frame + 0xa8)) - (float10)pfVar10[5]);
        (*(float *)(gen_frame + 0xb4)) = fVar2;
        fVar3 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                                            ((float10)fVar1 * (float10)fVar1 +
                                            (float10)fVar16 * (float10)fVar16)))))));
        (*(float *)(gen_frame + 0x74)) = fVar3;
        if ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar3 <= *(float *)&REFG(undefined, 0x1088114))) {
          if ((float10)fVar3 < (float10)*(float *)(uVar4 + 0x98)) {
            (*(float *)(gen_frame + 0x74)) = *(float *)(uVar4 + 0x98);
          }
          if ((float10)*(float *)(uVar4 + 0x9c) < (float10)(*(float *)(gen_frame + 0x74))) {
            (*(float *)(gen_frame + 0x74)) = *(float *)(uVar4 + 0x9c);
          }
          fVar11 = (float10)(float)((float10)1 / (float10)fVar3);
          (*(float *)(gen_frame + 0xac)) = (float)(fVar11 * (float10)fVar1);
          (*(float *)(gen_frame + 0xb0)) = (float)(fVar11 * (float10)fVar16);
          (*(float *)(gen_frame + 0xb4)) = (float)(fVar11 * (float10)fVar2);
          fVar12 = (float10)(float)((float10)(*(float *)(gen_frame + 0x74)) * (float10)(*(float *)(gen_frame + 0x70)));
          (*(float *)(gen_frame + 0xac)) = ((float)GEN_TOF((fVar12 * (float10)(float)(fVar11 * (float10)fVar1))));
          (*(float *)(gen_frame + 0xb0)) = ((float)GEN_TOF((fVar12 * (float10)(float)(fVar11 * (float10)fVar16))));
          (*(float *)(gen_frame + 0xb4)) = ((float)GEN_TOF((fVar12 * (float10)(float)(fVar11 * (float10)fVar2))));
        }
        pfVar10[3] = (*(float *)(gen_frame + 0xa0));
        pfVar10[4] = (*(float *)(gen_frame + 0xa4));
        pfVar10[5] = (*(float *)(gen_frame + 0xa8));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x58)) + 0)) = gen_bits2f((uint)uVar17);
        pfVar9[-2] = (*(float *)(gen_frame + 0xa0));
        pfVar9[-1] = (*(float *)(gen_frame + 0xa4));
        *pfVar9 = (*(float *)(gen_frame + 0xa8));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x58)) + 4)) = gen_bits2f((uint)(uVar17 >> 0x20));
        pfVar9[1] = *(float *)((*(int * PTR32 *)(gen_frame + 0x80))[0xbc] + 0x20);
        pfVar9[3] = (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x58)) + 4));
        pfVar9[2] = (float)(*(ulonglong *)(gen_frame + 0x58));
        pfVar9[10] = (float)((float10)(*(float *)(gen_frame + 0xac)) + (float10)(*(float *)(gen_frame + 0xa0)));
        pfVar9[0xb] = (float)((float10)(*(float *)(gen_frame + 0xb0)) + (float10)(*(float *)(gen_frame + 0xa4)));
        pfVar9[0xc] = (float)((float10)(*(float *)(gen_frame + 0xb4)) + (float10)(*(float *)(gen_frame + 0xa8)));
        pfVar9[0xd] = *(float *)((*(int * PTR32 *)(gen_frame + 0x80))[0xbc] + 0x20);
        *(ulonglong *)(pfVar9 + 0xe) = (*(ulonglong *)(gen_frame + 0x50));
        pvVar6 = (undefined *)(*(ulonglong *)(gen_frame + 0x50));
        (*(ulonglong *)(gen_frame + 0x58)) = uVar17;
      }
      else {
        pvVar6 = F_00c48350(pfVar9 + -2,0,0x60);
      }
      pfVar9 = pfVar9 + 0x18;
      pfVar10 = pfVar10 + 0x14;
      uVar5 = (int)gen_fl2bits((*(float *)(gen_frame + 0xb8))) - 1;
      (*(float *)(gen_frame + 0xb8)) = gen_bits2f(uVar5);
    } while (uVar5 != 0);
  }
  return (uint)pvVar6;
}

/* ref: Apricot::Engine::Instance::PowderParticleInstance::vf25 */
uint F_0099ec20(unsigned int gen_a0)
{
  GEN_ENTER(0x99ec20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  F_0097ef70(this);
  F_0097f2c0(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xa4))))(*(int * PTR32 *)(this + 0x29c));
  if ((char)uVar2 != '\0') {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xf4))))(*(int * PTR32 *)(this + 0x29c));
    uVar1 = *(undefined4 *)(this + 0x298);
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    uVar2 = F_0098e8f0(this,uVar1,uVar1,(int)*(short *)(uVar2 + 0xb8),uVar2,uVar3);
  }
  return uVar2;
}

/* ref: FUN_0099eca0 */
byte F_0099eca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x99eca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = F_0099aa20((int)this + 0x88);
  uVar1 = REFG(float, 0x10920d0);
  uVar5 = (uint)(uVar8 >> 0x20);
  uVar4 = (uint)uVar8;
  fVar6 = (float10)REFG(double, 0x1088108);
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x2f0) * fVar6)));
  fVar3 = *(float *)((int)this + 0x2f4);
  uVar7 = (uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0);
  *param_1 = uVar7;
  param_1[0x18] = uVar7;
  fVar3 = (float)(fVar6 * (float10)fVar3);
  param_1[1] = (uint)gen_fl2bits(fVar3);
  param_1[0x19] = (uint)gen_fl2bits(fVar3) ^ uVar1;
  param_1[0x24] = (uint)gen_fl2bits(fVar2);
  param_1[0xc] = (uint)gen_fl2bits(fVar2);
  param_1[0x25] = (uint)gen_fl2bits(fVar3) ^ uVar1;
  param_1[0xd] = (uint)gen_fl2bits(fVar3);
  uVar1 = *(uint *)((int)this + 0x2fc);
  param_1[0x27] = uVar1;
  param_1[0x1b] = uVar1;
  param_1[0xf] = uVar1;
  param_1[3] = uVar1;
  uVar1 = *(uint *)((int)this + 0x300);
  param_1[0x28] = uVar1;
  param_1[0x1c] = uVar1;
  param_1[0x10] = uVar1;
  param_1[4] = uVar1;
  uVar1 = *(uint *)((int)this + 0x304);
  param_1[0x29] = uVar1;
  param_1[0x1d] = uVar1;
  param_1[0x11] = uVar1;
  param_1[5] = uVar1;
  uVar1 = *(uint *)((int)this + 0x28);
  param_1[0x2a] = uVar1;
  param_1[0x1e] = uVar1;
  param_1[0x12] = uVar1;
  param_1[6] = uVar1;
  uVar1 = *(uint *)((int)this + 0x2c);
  param_1[0x2b] = uVar1;
  param_1[0x1f] = uVar1;
  param_1[0x13] = uVar1;
  param_1[7] = uVar1;
  uVar1 = *(uint *)((int)this + 0x30);
  param_1[0x2c] = uVar1;
  param_1[0x20] = uVar1;
  param_1[0x14] = uVar1;
  param_1[8] = uVar1;
  uVar1 = *(uint *)((int)this + 0x308);
  param_1[0x2f] = uVar5;
  param_1[0x23] = uVar5;
  param_1[0x17] = uVar5;
  param_1[0xb] = uVar5;
  param_1[0x26] = uVar1;
  param_1[0x1a] = uVar1;
  param_1[0xe] = uVar1;
  param_1[2] = uVar1;
  param_1[0x2e] = uVar4;
  param_1[0x22] = uVar4;
  param_1[0x16] = uVar4;
  param_1[10] = uVar4;
  param_1[9] = 0;
  param_1[0x15] = 0x7fff;
  param_1[0x21] = 0x7fff0000;
  param_1[0x2d] = 0x7fff7fff;
  return (byte)uVar8;
}

/* ref: FUN_0099ee40 */
byte F_0099ee40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x99ee40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = F_0099aa20((int)this + 0x88);
  uVar7 = REFG(float, 0x10920d0);
  uVar5 = (uint)(uVar8 >> 0x20);
  uVar4 = (uint)uVar8;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x2f0) * (float10)REFG(double, 0x1088108))));
  fVar3 = ((float)GEN_TOF(((float10)REFG(double, 0x1088108) * (float10)*(float *)((int)this + 0x2f4))));
  if (*(int *)((int)this + 0x310) == 0) {
    param_1[1] = (uint)gen_fl2bits(fVar3);
    param_1[0xc] = 0;
    param_1[0xd] = (uint)gen_fl2bits(fVar3);
    param_1[0x19] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    uVar6 = (uint)gen_fl2bits(fVar2) ^ uVar7;
    *param_1 = uVar6;
    param_1[0x18] = uVar6;
    uVar1 = *(uint *)((int)this + 0x2fc);
    param_1[0x27] = uVar1;
    param_1[0x1b] = uVar1;
    param_1[0xf] = uVar1;
    param_1[3] = uVar1;
    uVar1 = *(uint *)((int)this + 0x300);
    param_1[0x28] = uVar1;
    param_1[0x1c] = uVar1;
    param_1[0x10] = uVar1;
    param_1[4] = uVar1;
    uVar1 = *(uint *)((int)this + 0x304);
    param_1[0x29] = uVar1;
    param_1[0x1d] = uVar1;
    param_1[0x11] = uVar1;
    param_1[5] = uVar1;
    uVar1 = *(uint *)((int)this + 0x28);
    param_1[0x2a] = uVar1;
    param_1[0x1e] = uVar1;
    param_1[0x12] = uVar1;
    param_1[6] = uVar1;
    uVar1 = *(uint *)((int)this + 0x2c);
    param_1[0x2b] = uVar1;
    param_1[0x1f] = uVar1;
    param_1[0x13] = uVar1;
    param_1[7] = uVar1;
    uVar1 = *(uint *)((int)this + 0x30);
    param_1[0x2c] = uVar1;
    param_1[0x20] = uVar1;
    param_1[0x14] = uVar1;
    param_1[8] = uVar1;
    uVar1 = *(uint *)((int)this + 0x308);
    *(undefined2 *)(param_1 + 9) = 0;
    *(undefined2 *)((int)param_1 + 0x26) = 0;
    param_1[0x26] = uVar1;
    param_1[0x1a] = uVar1;
    param_1[0xe] = uVar1;
    param_1[2] = uVar1;
    *(ulonglong *)(param_1 + 0x2e) = uVar8;
    *(ulonglong *)(param_1 + 0x22) = uVar8;
    *(ulonglong *)(param_1 + 0x16) = uVar8;
    *(ulonglong *)(param_1 + 10) = uVar8;
    *(undefined2 *)(param_1 + 0x15) = 0x7fff;
    *(undefined2 *)((int)param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x21) = 0;
    *(undefined2 *)((int)param_1 + 0x86) = 0x7fff;
    *(undefined2 *)(param_1 + 0x2d) = 0x7fff;
    *(undefined2 *)((int)param_1 + 0xb6) = 0x7fff;
    param_1[0x30] = 0;
    param_1[0x31] = (uint)gen_fl2bits(fVar3);
    param_1[0x3c] = (uint)gen_fl2bits(fVar2);
    param_1[0x3d] = (uint)gen_fl2bits(fVar3);
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x54] = (uint)gen_fl2bits(fVar2);
    param_1[0x55] = 0;
    uVar1 = *(uint *)((int)this + 0x2fc);
    param_1[0x57] = uVar1;
    param_1[0x4b] = uVar1;
    param_1[0x3f] = uVar1;
    param_1[0x33] = uVar1;
    uVar1 = *(uint *)((int)this + 0x300);
    param_1[0x58] = uVar1;
    param_1[0x4c] = uVar1;
    param_1[0x40] = uVar1;
    param_1[0x34] = uVar1;
    uVar1 = *(uint *)((int)this + 0x304);
    param_1[0x59] = uVar1;
    param_1[0x4d] = uVar1;
    param_1[0x41] = uVar1;
    param_1[0x35] = uVar1;
    uVar1 = *(uint *)((int)this + 0x28);
    param_1[0x5a] = uVar1;
    param_1[0x4e] = uVar1;
    param_1[0x42] = uVar1;
    param_1[0x36] = uVar1;
    uVar1 = *(uint *)((int)this + 0x2c);
    param_1[0x5b] = uVar1;
    param_1[0x4f] = uVar1;
    param_1[0x43] = uVar1;
    param_1[0x37] = uVar1;
    uVar1 = *(uint *)((int)this + 0x30);
    param_1[0x5c] = uVar1;
    param_1[0x50] = uVar1;
    param_1[0x44] = uVar1;
    param_1[0x38] = uVar1;
    uVar1 = *(uint *)((int)this + 0x308);
    param_1[0x56] = uVar1;
    param_1[0x4a] = uVar1;
    param_1[0x3e] = uVar1;
    param_1[0x32] = uVar1;
    *(ulonglong *)(param_1 + 0x5e) = uVar8;
    *(ulonglong *)(param_1 + 0x52) = uVar8;
    *(ulonglong *)(param_1 + 0x46) = uVar8;
    *(ulonglong *)(param_1 + 0x3a) = uVar8;
    *(undefined2 *)(param_1 + 0x39) = 0;
    *(undefined2 *)((int)param_1 + 0xe6) = 0x7fff;
    *(undefined2 *)(param_1 + 0x45) = 0;
    *(undefined2 *)((int)param_1 + 0x116) = 0;
    *(undefined2 *)(param_1 + 0x51) = 0x7fff;
    *(undefined2 *)((int)param_1 + 0x146) = 0x7fff;
    *(undefined2 *)(param_1 + 0x5d) = 0x7fff;
    *(undefined2 *)((int)param_1 + 0x176) = 0;
    param_1[0x60] = uVar6;
    param_1[0x61] = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x78] = uVar6;
    param_1[0x84] = 0;
    uVar7 = (uint)gen_fl2bits(fVar3) ^ uVar7;
    param_1[0x79] = uVar7;
    param_1[0x85] = uVar7;
    uVar1 = *(uint *)((int)this + 0x2fc);
    param_1[0x87] = uVar1;
    param_1[0x7b] = uVar1;
    param_1[0x6f] = uVar1;
    param_1[99] = uVar1;
    uVar1 = *(uint *)((int)this + 0x300);
    param_1[0x88] = uVar1;
    param_1[0x7c] = uVar1;
    param_1[0x70] = uVar1;
    param_1[100] = uVar1;
    uVar1 = *(uint *)((int)this + 0x304);
    param_1[0x89] = uVar1;
    param_1[0x7d] = uVar1;
    param_1[0x71] = uVar1;
    param_1[0x65] = uVar1;
    uVar1 = *(uint *)((int)this + 0x28);
    param_1[0x8a] = uVar1;
    param_1[0x7e] = uVar1;
    param_1[0x72] = uVar1;
    param_1[0x66] = uVar1;
    uVar1 = *(uint *)((int)this + 0x2c);
    param_1[0x8b] = uVar1;
    param_1[0x7f] = uVar1;
    param_1[0x73] = uVar1;
    param_1[0x67] = uVar1;
    uVar1 = *(uint *)((int)this + 0x30);
    param_1[0x8c] = uVar1;
    param_1[0x80] = uVar1;
    param_1[0x74] = uVar1;
    param_1[0x68] = uVar1;
    uVar1 = *(uint *)((int)this + 0x308);
    param_1[0x86] = uVar1;
    param_1[0x7a] = uVar1;
    param_1[0x6e] = uVar1;
    param_1[0x62] = uVar1;
    *(ulonglong *)(param_1 + 0x8e) = uVar8;
    *(ulonglong *)(param_1 + 0x82) = uVar8;
    *(ulonglong *)(param_1 + 0x76) = uVar8;
    *(ulonglong *)(param_1 + 0x6a) = uVar8;
    *(undefined2 *)(param_1 + 0x69) = 0x7fff;
    *(undefined2 *)((int)param_1 + 0x1a6) = 0;
    *(undefined2 *)(param_1 + 0x75) = 0x7fff;
    *(undefined2 *)((int)param_1 + 0x1d6) = 0x7fff;
    *(undefined2 *)(param_1 + 0x81) = 0;
    *(undefined2 *)((int)param_1 + 0x206) = 0;
    *(undefined2 *)(param_1 + 0x8d) = 0;
    *(undefined2 *)((int)param_1 + 0x236) = 0x7fff;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x9c] = (uint)gen_fl2bits(fVar2);
    param_1[0x9d] = 0;
    param_1[0xa8] = 0;
    param_1[0xa9] = uVar7;
    param_1[0xb4] = (uint)gen_fl2bits(fVar2);
    param_1[0xb5] = uVar7;
    uVar7 = *(uint *)((int)this + 0x2fc);
    param_1[0xb7] = uVar7;
    param_1[0xab] = uVar7;
    param_1[0x9f] = uVar7;
    param_1[0x93] = uVar7;
    uVar7 = *(uint *)((int)this + 0x300);
    param_1[0xb8] = uVar7;
    param_1[0xac] = uVar7;
    param_1[0xa0] = uVar7;
    param_1[0x94] = uVar7;
    uVar7 = *(uint *)((int)this + 0x304);
    param_1[0xb9] = uVar7;
    param_1[0xad] = uVar7;
    param_1[0xa1] = uVar7;
    param_1[0x95] = uVar7;
    uVar7 = *(uint *)((int)this + 0x28);
    param_1[0xba] = uVar7;
    param_1[0xae] = uVar7;
    param_1[0xa2] = uVar7;
    param_1[0x96] = uVar7;
    uVar7 = *(uint *)((int)this + 0x2c);
    param_1[0xbb] = uVar7;
    param_1[0xaf] = uVar7;
    param_1[0xa3] = uVar7;
    param_1[0x97] = uVar7;
    uVar7 = *(uint *)((int)this + 0x30);
    param_1[0xbc] = uVar7;
    param_1[0xb0] = uVar7;
    param_1[0xa4] = uVar7;
    param_1[0x98] = uVar7;
    uVar7 = *(uint *)((int)this + 0x308);
    param_1[0xb1] = 0x7fff;
  }
  else {
    if (*(int *)((int)this + 0x310) != 1) goto LAB_0099fb82;
    param_1[1] = (uint)gen_fl2bits(fVar3);
    param_1[0xc] = 0;
    param_1[0xd] = (uint)gen_fl2bits(fVar3);
    param_1[0x19] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    uVar6 = (uint)gen_fl2bits(fVar2) ^ uVar7;
    *param_1 = uVar6;
    param_1[0x18] = uVar6;
    uVar1 = *(uint *)((int)this + 0x2fc);
    param_1[0x27] = uVar1;
    param_1[0x1b] = uVar1;
    param_1[0xf] = uVar1;
    param_1[3] = uVar1;
    uVar1 = *(uint *)((int)this + 0x300);
    param_1[0x28] = uVar1;
    param_1[0x1c] = uVar1;
    param_1[0x10] = uVar1;
    param_1[4] = uVar1;
    uVar1 = *(uint *)((int)this + 0x304);
    param_1[0x29] = uVar1;
    param_1[0x1d] = uVar1;
    param_1[0x11] = uVar1;
    param_1[5] = uVar1;
    uVar1 = *(uint *)((int)this + 0x28);
    param_1[0x2a] = uVar1;
    param_1[0x1e] = uVar1;
    param_1[0x12] = uVar1;
    param_1[6] = uVar1;
    uVar1 = *(uint *)((int)this + 0x2c);
    param_1[0x2b] = uVar1;
    param_1[0x1f] = uVar1;
    param_1[0x13] = uVar1;
    param_1[7] = uVar1;
    uVar1 = *(uint *)((int)this + 0x30);
    param_1[0x2c] = uVar1;
    param_1[0x20] = uVar1;
    param_1[0x14] = uVar1;
    param_1[8] = uVar1;
    uVar1 = *(uint *)((int)this + 0x308);
    *(undefined2 *)(param_1 + 9) = 0;
    *(undefined2 *)((int)param_1 + 0x26) = 0;
    param_1[0x26] = uVar1;
    param_1[0x1a] = uVar1;
    param_1[0xe] = uVar1;
    param_1[2] = uVar1;
    *(ulonglong *)(param_1 + 0x2e) = uVar8;
    *(ulonglong *)(param_1 + 0x22) = uVar8;
    *(ulonglong *)(param_1 + 0x16) = uVar8;
    *(ulonglong *)(param_1 + 10) = uVar8;
    *(undefined2 *)(param_1 + 0x15) = 0x7fff;
    *(undefined2 *)((int)param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x21) = 0;
    *(undefined2 *)((int)param_1 + 0x86) = 0x7fff;
    *(undefined2 *)(param_1 + 0x2d) = 0x7fff;
    *(undefined2 *)((int)param_1 + 0xb6) = 0x7fff;
    param_1[0x30] = 0;
    param_1[0x31] = (uint)gen_fl2bits(fVar3);
    param_1[0x3c] = (uint)gen_fl2bits(fVar2);
    param_1[0x3d] = (uint)gen_fl2bits(fVar3);
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x54] = (uint)gen_fl2bits(fVar2);
    param_1[0x55] = 0;
    uVar1 = *(uint *)((int)this + 0x2fc);
    param_1[0x57] = uVar1;
    param_1[0x4b] = uVar1;
    param_1[0x3f] = uVar1;
    param_1[0x33] = uVar1;
    uVar1 = *(uint *)((int)this + 0x300);
    param_1[0x58] = uVar1;
    param_1[0x4c] = uVar1;
    param_1[0x40] = uVar1;
    param_1[0x34] = uVar1;
    uVar1 = *(uint *)((int)this + 0x304);
    param_1[0x59] = uVar1;
    param_1[0x4d] = uVar1;
    param_1[0x41] = uVar1;
    param_1[0x35] = uVar1;
    uVar1 = *(uint *)((int)this + 0x28);
    param_1[0x5a] = uVar1;
    param_1[0x4e] = uVar1;
    param_1[0x42] = uVar1;
    param_1[0x36] = uVar1;
    uVar1 = *(uint *)((int)this + 0x2c);
    param_1[0x5b] = uVar1;
    param_1[0x4f] = uVar1;
    param_1[0x43] = uVar1;
    param_1[0x37] = uVar1;
    uVar1 = *(uint *)((int)this + 0x30);
    param_1[0x5c] = uVar1;
    param_1[0x50] = uVar1;
    param_1[0x44] = uVar1;
    param_1[0x38] = uVar1;
    uVar1 = *(uint *)((int)this + 0x308);
    *(undefined2 *)(param_1 + 0x39) = 0x7fff;
    param_1[0x56] = uVar1;
    param_1[0x4a] = uVar1;
    param_1[0x3e] = uVar1;
    param_1[0x32] = uVar1;
    *(ulonglong *)(param_1 + 0x5e) = uVar8;
    *(ulonglong *)(param_1 + 0x52) = uVar8;
    *(ulonglong *)(param_1 + 0x46) = uVar8;
    *(ulonglong *)(param_1 + 0x3a) = uVar8;
    *(undefined2 *)((int)param_1 + 0xe6) = 0;
    *(undefined2 *)(param_1 + 0x45) = 0;
    *(undefined2 *)((int)param_1 + 0x116) = 0;
    *(undefined2 *)(param_1 + 0x51) = 0x7fff;
    *(undefined2 *)((int)param_1 + 0x146) = 0x7fff;
    *(undefined2 *)(param_1 + 0x5d) = 0;
    *(undefined2 *)((int)param_1 + 0x176) = 0x7fff;
    param_1[0x60] = uVar6;
    param_1[0x61] = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x78] = uVar6;
    param_1[0x84] = 0;
    uVar7 = (uint)gen_fl2bits(fVar3) ^ uVar7;
    param_1[0x79] = uVar7;
    param_1[0x85] = uVar7;
    uVar1 = *(uint *)((int)this + 0x2fc);
    param_1[0x87] = uVar1;
    param_1[0x7b] = uVar1;
    param_1[0x6f] = uVar1;
    param_1[99] = uVar1;
    uVar1 = *(uint *)((int)this + 0x300);
    param_1[0x88] = uVar1;
    param_1[0x7c] = uVar1;
    param_1[0x70] = uVar1;
    param_1[100] = uVar1;
    uVar1 = *(uint *)((int)this + 0x304);
    param_1[0x89] = uVar1;
    param_1[0x7d] = uVar1;
    param_1[0x71] = uVar1;
    param_1[0x65] = uVar1;
    uVar1 = *(uint *)((int)this + 0x28);
    param_1[0x8a] = uVar1;
    param_1[0x7e] = uVar1;
    param_1[0x72] = uVar1;
    param_1[0x66] = uVar1;
    uVar1 = *(uint *)((int)this + 0x2c);
    param_1[0x8b] = uVar1;
    param_1[0x7f] = uVar1;
    param_1[0x73] = uVar1;
    param_1[0x67] = uVar1;
    uVar1 = *(uint *)((int)this + 0x30);
    param_1[0x8c] = uVar1;
    param_1[0x80] = uVar1;
    param_1[0x74] = uVar1;
    param_1[0x68] = uVar1;
    uVar1 = *(uint *)((int)this + 0x308);
    param_1[0x86] = uVar1;
    param_1[0x7a] = uVar1;
    param_1[0x6e] = uVar1;
    param_1[0x62] = uVar1;
    *(ulonglong *)(param_1 + 0x8e) = uVar8;
    *(ulonglong *)(param_1 + 0x82) = uVar8;
    *(ulonglong *)(param_1 + 0x76) = uVar8;
    *(ulonglong *)(param_1 + 0x6a) = uVar8;
    *(undefined2 *)(param_1 + 0x69) = 0;
    *(undefined2 *)((int)param_1 + 0x1a6) = 0x7fff;
    *(undefined2 *)(param_1 + 0x75) = 0x7fff;
    *(undefined2 *)((int)param_1 + 0x1d6) = 0x7fff;
    *(undefined2 *)(param_1 + 0x81) = 0;
    *(undefined2 *)((int)param_1 + 0x206) = 0;
    *(undefined2 *)(param_1 + 0x8d) = 0x7fff;
    *(undefined2 *)((int)param_1 + 0x236) = 0;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x9c] = (uint)gen_fl2bits(fVar2);
    param_1[0x9d] = 0;
    param_1[0xa8] = 0;
    param_1[0xa9] = uVar7;
    param_1[0xb4] = (uint)gen_fl2bits(fVar2);
    param_1[0xb5] = uVar7;
    uVar7 = *(uint *)((int)this + 0x2fc);
    param_1[0xb7] = uVar7;
    param_1[0xab] = uVar7;
    param_1[0x9f] = uVar7;
    param_1[0x93] = uVar7;
    uVar7 = *(uint *)((int)this + 0x300);
    param_1[0xb8] = uVar7;
    param_1[0xac] = uVar7;
    param_1[0xa0] = uVar7;
    param_1[0x94] = uVar7;
    uVar7 = *(uint *)((int)this + 0x304);
    param_1[0xb9] = uVar7;
    param_1[0xad] = uVar7;
    param_1[0xa1] = uVar7;
    param_1[0x95] = uVar7;
    uVar7 = *(uint *)((int)this + 0x28);
    param_1[0xba] = uVar7;
    param_1[0xae] = uVar7;
    param_1[0xa2] = uVar7;
    param_1[0x96] = uVar7;
    uVar7 = *(uint *)((int)this + 0x2c);
    param_1[0xbb] = uVar7;
    param_1[0xaf] = uVar7;
    param_1[0xa3] = uVar7;
    param_1[0x97] = uVar7;
    uVar7 = *(uint *)((int)this + 0x30);
    param_1[0xbc] = uVar7;
    param_1[0xb0] = uVar7;
    param_1[0xa4] = uVar7;
    param_1[0x98] = uVar7;
    uVar7 = *(uint *)((int)this + 0x308);
    param_1[0xb1] = 0x7fff;
  }
  param_1[0xbf] = uVar5;
  param_1[0xb3] = uVar5;
  param_1[0xa7] = uVar5;
  param_1[0x9b] = uVar5;
  param_1[0xbd] = 0;
  param_1[0xa5] = 0x7fff0000;
  param_1[0x99] = 0x7fff7fff;
  param_1[0x9a] = uVar4;
  param_1[0xa6] = uVar4;
  param_1[0xb2] = uVar4;
  param_1[0xbe] = uVar4;
  param_1[0x92] = uVar7;
  param_1[0x9e] = uVar7;
  param_1[0xaa] = uVar7;
  param_1[0xb6] = uVar7;
LAB_0099fb82: ;
  return (byte)uVar8;
}

/* ref: FUN_0099fb90 */
uint F_0099fb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x99fb90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  double dVar12;
  uint uVar13;
  int iVar14;
  float * pfVar15;
  undefined2 * puVar16;
  uint uVar17;
  float * pfVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  ulonglong uVar24;
  
  uVar24 = F_0099aa20(param_1 + 0x88);
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x28);
  uVar17 = 0;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0xc) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x80)));
  dVar12 = *(double *)&REFG(undefined, 0x10912a8);
  *(undefined4 *)(param_2 + 0x28) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x88)));
  *(ulonglong *)(param_2 + 0x10) = uVar24;
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x90))) != 0) {
    iVar14 = 0;
    puVar16 = (undefined2 *)(param_2 + 0x1a);
    do {
      pfVar18 = ((float *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0xc + iVar14)));
      uVar17 = uVar17 + 1;
      iVar14 = iVar14 + 0x20;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = (undefined2)(int)TRUNC((double)*pfVar18 * dVar12);
      puVar16[-1] = (undefined2)(*(uint *)(gen_frame + 0x8));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) =
           (undefined2)
           (int)TRUNC((double)*((float *)GEN_TOP((*(int *)(param_1 + 0x2f4) + -4 + iVar14))) * dVar12);
      *puVar16 = (undefined2)(*(uint *)(gen_frame + 0x8));
      puVar16 = puVar16 + 2;
    } while (uVar17 < *((uint *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x90))));
  }
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (*(char *)(param_1 + 0x19f) == '\0') {
    uVar17 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x84)));
    uVar13 = 0;
    if (uVar17 != 0) {
      pfVar18 = (float *)(param_2 + 0x34);
      uVar13 = uVar17;
      do {
        fVar19 = (float10)(int)(*(uint *)(gen_frame + 0x8));
        if ((int)(*(uint *)(gen_frame + 0x8)) < 0) {
          fVar19 = fVar19 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar20 = (float10)(int)uVar13;
        if ((int)uVar13 < 0) {
          fVar20 = fVar20 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar3 = ((float)GEN_TOF(((fVar19 * (float10)*(float *)&REFG(undefined, 0x132f3a4)) / fVar20 +
                       (float10)*(double *)&REFG(undefined, 0x1094620))));
        fVar19 = ((float10)GEN_TOD(fcos((float10)fVar3)));
        fVar20 = ((float10)GEN_TOD(fsin((float10)fVar3)));
        uVar17 = 0;
        fVar20 = (float10)(float)((float10)(float)fVar20 * (float10)REFG(double, 0x1088108));
        fVar21 = (float10)(float)((float10)(float)fVar19 * (float10)REFG(double, 0x1088108));
        fVar22 = (float10)(float)(-fVar20 * (float10)*(double *)&REFG(undefined, 0x1092098));
        fVar19 = (float10)0;
        fVar23 = (float10)(float)(fVar21 * (float10)*(double *)&REFG(undefined, 0x1092098));
        fVar3 = *(float *)(param_1 + 0x14);
        fVar4 = *(float *)(param_1 + 8);
        fVar5 = *(float *)(param_1 + 0x20);
        fVar6 = *(float *)(param_1 + 0x2c);
        fVar7 = *(float *)(param_1 + 0x10);
        fVar8 = *(float *)(param_1 + 4);
        fVar9 = *(float *)(param_1 + 0x1c);
        fVar10 = *(float *)(param_1 + 0x28);
        pfVar18[1] = ((float)GEN_TOF((((fVar22 * (float10)*(float *)(param_1 + 0x18) +
                              (float10)*(float *)(param_1 + 0xc) * fVar19) +
                             fVar23 * (float10)*(float *)(param_1 + 0x24)) +
                            (float10)*(float *)(param_1 + 0x30))));
        pfVar18[-1] = ((float)GEN_TOF(((fVar23 * (float10)fVar9 +
                              ((float10)fVar7 * fVar22 + (float10)fVar8 * fVar19)) + (float10)fVar10
                             )));
        *pfVar18 = ((float)GEN_TOF((((float10)fVar5 * fVar23 +
                           ((float10)fVar4 * fVar19 + (float10)fVar3 * fVar22)) + (float10)fVar6)));
        pfVar18[2] = *((float *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x80)));
        pfVar18[9] = *((float *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x88)));
        *(ulonglong *)(pfVar18 + 3) = uVar24;
        dVar12 = *(double *)&REFG(undefined, 0x10912a8);
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x90))) != 0) {
          iVar14 = 0;
          pfVar15 = pfVar18 + 5;
          do {
            iVar11 = *(int *)(param_1 + 0x2f4);
            pfVar1 = (float *)(iVar11 + 4 + iVar14);
            uVar17 = uVar17 + 1;
            iVar14 = iVar14 + 0x20;
            (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)
                      (int)TRUNC((double)((float)GEN_TOF(((fVar21 * (float10)*(float *)(iVar11 + -0x20 +
                                                                              iVar14) +
                                                 (float10)*pfVar1 * fVar20) +
                                                (float10)*(float *)(iVar11 + -0x14 + iVar14)))) *
                                 dVar12);
            *(undefined2 *)pfVar15 = (*(undefined2 *)(gen_frame + 0x4));
            iVar11 = *(int *)(param_1 + 0x2f4);
            (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)
                      (int)TRUNC((double)((float)GEN_TOF((((float10)*(float *)(iVar11 + -0x10 + iVar14) *
                                                  fVar21 + (float10)*(float *)(iVar11 + -0xc +
                                                                              iVar14) * fVar20) +
                                                (float10)*(float *)(iVar11 + -4 + iVar14)))) * dVar12)
            ;
            *(undefined2 *)((int)pfVar15 + 2) = (*(undefined2 *)(gen_frame + 0x4));
            pfVar15 = pfVar15 + 1;
          } while (uVar17 < *((uint *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x90))));
        }
        uVar13 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x84)));
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
        pfVar18 = pfVar18 + 0xc;
      } while ((*(uint *)(gen_frame + 0x8)) < uVar13);
    }
  }
  else if (*(char *)(param_1 + 0x19f) == '\x01') {
    uVar17 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x84)));
    uVar13 = 0;
    if (uVar17 != 0) {
      pfVar18 = (float *)(param_2 + 0x34);
      do {
        fVar19 = (float10)(int)(*(uint *)(gen_frame + 0x8));
        if ((int)(*(uint *)(gen_frame + 0x8)) < 0) {
          fVar19 = fVar19 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar20 = (float10)(int)uVar17;
        if ((int)uVar17 < 0) {
          fVar20 = fVar20 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar3 = ((float)GEN_TOF(((fVar19 * (float10)*(float *)&REFG(undefined, 0x132f3a4)) / fVar20 +
                       (float10)*(double *)&REFG(undefined, 0x1094620))));
        fVar19 = ((float10)GEN_TOD(fcos((float10)fVar3)));
        fVar20 = ((float10)GEN_TOD(fsin((float10)fVar3)));
        uVar17 = 0;
        fVar21 = (float10)(float)((float10)(float)fVar19 * (float10)REFG(double, 0x1088108));
        fVar20 = (float10)(float)((float10)(float)fVar20 * (float10)REFG(double, 0x1088108));
        fVar22 = (float10)(float)(fVar21 * (float10)*(double *)&REFG(undefined, 0x1092098));
        fVar19 = (float10)0;
        fVar23 = (float10)(float)(-fVar20 * (float10)*(double *)&REFG(undefined, 0x1092098));
        fVar3 = *(float *)(param_1 + 8);
        fVar4 = *(float *)(param_1 + 0x14);
        fVar5 = *(float *)(param_1 + 0x20);
        fVar6 = *(float *)(param_1 + 0x2c);
        fVar7 = *(float *)(param_1 + 4);
        fVar8 = *(float *)(param_1 + 0x10);
        fVar9 = *(float *)(param_1 + 0x1c);
        fVar10 = *(float *)(param_1 + 0x28);
        pfVar18[1] = ((float)GEN_TOF((((fVar22 * (float10)*(float *)(param_1 + 0xc) +
                              (float10)*(float *)(param_1 + 0x18) * fVar19) +
                             fVar23 * (float10)*(float *)(param_1 + 0x24)) +
                            (float10)*(float *)(param_1 + 0x30))));
        pfVar18[-1] = ((float)GEN_TOF(((fVar23 * (float10)fVar9 +
                              ((float10)fVar7 * fVar22 + (float10)fVar8 * fVar19)) + (float10)fVar10
                             )));
        *pfVar18 = ((float)GEN_TOF((((float10)fVar5 * fVar23 +
                           ((float10)fVar4 * fVar19 + fVar22 * (float10)fVar3)) + (float10)fVar6)));
        pfVar18[2] = *((float *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x80)));
        pfVar18[9] = *((float *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x88)));
        *(ulonglong *)(pfVar18 + 3) = uVar24;
        dVar12 = *(double *)&REFG(undefined, 0x10912a8);
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x90))) != 0) {
          iVar14 = 0;
          pfVar15 = pfVar18 + 5;
          do {
            iVar11 = *(int *)(param_1 + 0x2f4);
            pfVar2 = (float *)(iVar11 + 4 + iVar14);
            uVar17 = uVar17 + 1;
            pfVar1 = (float *)(iVar11 + iVar14);
            iVar14 = iVar14 + 0x20;
            (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)
                      (int)TRUNC((double)((float)GEN_TOF((((float10)*pfVar1 * fVar21 +
                                                 (float10)*pfVar2 * fVar20) +
                                                (float10)*(float *)(iVar11 + -0x14 + iVar14)))) *
                                 dVar12);
            *(undefined2 *)pfVar15 = (*(undefined2 *)(gen_frame + 0x4));
            iVar11 = *(int *)(param_1 + 0x2f4);
            (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)
                      (int)TRUNC((double)((float)GEN_TOF((((float10)*(float *)(iVar11 + -0x10 + iVar14) *
                                                  fVar21 + (float10)*(float *)(iVar11 + -0xc +
                                                                              iVar14) * fVar20) +
                                                (float10)*(float *)(iVar11 + -4 + iVar14)))) * dVar12)
            ;
            *(undefined2 *)((int)pfVar15 + 2) = (*(undefined2 *)(gen_frame + 0x4));
            pfVar15 = pfVar15 + 1;
          } while (uVar17 < *((uint *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x90))));
        }
        uVar17 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x84)));
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
        pfVar18 = pfVar18 + 0xc;
      } while ((*(uint *)(gen_frame + 0x8)) < uVar17);
      return uVar17;
    }
  }
  else {
    uVar17 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x84)));
    uVar13 = 0;
    if (uVar17 != 0) {
      pfVar18 = (float *)(param_2 + 0x34);
      do {
        fVar19 = (float10)(int)(*(uint *)(gen_frame + 0x8));
        if ((int)(*(uint *)(gen_frame + 0x8)) < 0) {
          fVar19 = fVar19 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar20 = (float10)(int)uVar17;
        if ((int)uVar17 < 0) {
          fVar20 = fVar20 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar3 = ((float)GEN_TOF(((fVar19 * (float10)*(float *)&REFG(undefined, 0x132f3a4)) / fVar20 +
                       (float10)*(double *)&REFG(undefined, 0x1094620))));
        fVar19 = ((float10)GEN_TOD(fcos((float10)fVar3)));
        fVar20 = ((float10)GEN_TOD(fsin((float10)fVar3)));
        uVar17 = 0;
        fVar21 = (float10)(float)((float10)(float)fVar19 * (float10)REFG(double, 0x1088108));
        fVar20 = (float10)(float)((float10)(float)fVar20 * (float10)REFG(double, 0x1088108));
        fVar22 = (float10)(float)(fVar21 * (float10)*(double *)&REFG(undefined, 0x1092098));
        fVar23 = (float10)(float)(-fVar20 * (float10)*(double *)&REFG(undefined, 0x1092098));
        fVar19 = (float10)0;
        fVar3 = *(float *)(param_1 + 0x14);
        fVar4 = *(float *)(param_1 + 8);
        fVar5 = *(float *)(param_1 + 0x20);
        fVar6 = *(float *)(param_1 + 0x2c);
        fVar7 = *(float *)(param_1 + 0x10);
        fVar8 = *(float *)(param_1 + 4);
        fVar9 = *(float *)(param_1 + 0x1c);
        fVar10 = *(float *)(param_1 + 0x28);
        pfVar18[1] = ((float)GEN_TOF((((fVar22 * (float10)*(float *)(param_1 + 0xc) +
                              fVar23 * (float10)*(float *)(param_1 + 0x18)) +
                             (float10)*(float *)(param_1 + 0x24) * fVar19) +
                            (float10)*(float *)(param_1 + 0x30))));
        pfVar18[-1] = ((float)GEN_TOF(((((float10)fVar7 * fVar23 + (float10)fVar8 * fVar22) +
                              (float10)fVar9 * fVar19) + (float10)fVar10)));
        *pfVar18 = ((float)GEN_TOF((((float10)fVar5 * fVar19 +
                           (fVar22 * (float10)fVar4 + (float10)fVar3 * fVar23)) + (float10)fVar6)));
        pfVar18[2] = *((float *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x80)));
        pfVar18[9] = *((float *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x88)));
        *(ulonglong *)(pfVar18 + 3) = uVar24;
        dVar12 = *(double *)&REFG(undefined, 0x10912a8);
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x90))) != 0) {
          iVar14 = 0;
          pfVar15 = pfVar18 + 5;
          do {
            iVar11 = *(int *)(param_1 + 0x2f4);
            pfVar2 = (float *)(iVar11 + 4 + iVar14);
            uVar17 = uVar17 + 1;
            pfVar1 = (float *)(iVar11 + iVar14);
            iVar14 = iVar14 + 0x20;
            (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)
                      (int)TRUNC((double)((float)GEN_TOF((((float10)*pfVar1 * fVar21 +
                                                 (float10)*pfVar2 * fVar20) +
                                                (float10)*(float *)(iVar11 + -0x14 + iVar14)))) *
                                 dVar12);
            *(undefined2 *)pfVar15 = (*(undefined2 *)(gen_frame + 0x4));
            iVar11 = *(int *)(param_1 + 0x2f4);
            (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)
                      (int)TRUNC((double)((float)GEN_TOF((((float10)*(float *)(iVar11 + -0x10 + iVar14) *
                                                  fVar21 + (float10)*(float *)(iVar11 + -0xc +
                                                                              iVar14) * fVar20) +
                                                (float10)*(float *)(iVar11 + -4 + iVar14)))) * dVar12)
            ;
            *(undefined2 *)((int)pfVar15 + 2) = (*(undefined2 *)(gen_frame + 0x4));
            pfVar15 = pfVar15 + 1;
          } while (uVar17 < *((uint *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x90))));
        }
        uVar17 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x2f4) + 0x84)));
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
        pfVar18 = pfVar18 + 0xc;
      } while ((*(uint *)(gen_frame + 0x8)) < uVar17);
      return uVar17;
    }
  }
  return uVar13;
}

/* ref: FUN_009a02c0 */
uint F_009a02c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a02c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float * pfVar1;
  undefined2 * puVar2;
  float fVar3;
  double dVar4;
  float * pfVar5;
  uint uVar6;
  undefined * pvVar7;
  float fVar8;
  int iVar9;
  undefined2 * puVar10;
  undefined2 * puVar11;
  undefined2 * PTR32 * ppuVar12;
  undefined2 * puVar13;
  undefined2 * PTR32 * ppuVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong * puVar18;
  byte * pbVar19;
  float10 fVar20;
  float10 fVar21;
  float fVar22;
  ulonglong uVar23;
  
  iVar17 = *((int *)GEN_TOP((*(int *)((int)param_1 + 0x31c) + 0x150)));
  (*(int *)(gen_frame + 0x64)) = iVar17;
  F_0098f2e0(param_1,*(int *)((int)param_1 + 0x31c));
  iVar16 = *(int *)((int)param_1 + 0x31c);
  *(float *)(iVar16 + 0x80) =
       ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x88) * (float10)*(float *)(iVar16 + 0x80))));
  *(float *)(iVar16 + 0x84) =
       ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0x84) * (float10)*(float *)((int)param_1 + 0x8c))));
  *(float *)(iVar16 + 0x88) =
       ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x90) * (float10)*(float *)(iVar16 + 0x88))));
  *(float *)(iVar16 + 0x8c) =
       ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0x8c) * (float10)*(float *)((int)param_1 + 0x94))));
  *(float *)(iVar16 + 0xa0) =
       ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x88) * (float10)*(float *)(iVar16 + 0xa0))));
  *(float *)(iVar16 + 0xa4) =
       ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0xa4) * (float10)*(float *)((int)param_1 + 0x8c))));
  *(float *)(iVar16 + 0xa8) =
       ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0xa8) * (float10)*(float *)((int)param_1 + 0x90))));
  *(float *)(iVar16 + 0xac) =
       ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0xac) * (float10)*(float *)((int)param_1 + 0x94))));
  if ((*(byte *)(iVar16 + 0x128) & 1) == 0) {
    (*(float *)(gen_frame + 0x68)) = 0.0;
    (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0xa0) - (float10)*(float *)(iVar16 + 0x80))));
    (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0xa4) - (float10)*(float *)(iVar16 + 0x84))));
    (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0xa8) - (float10)*(float *)(iVar16 + 0x88))));
    (*(float *)(gen_frame + 0x54)) = gen_bits2f(iVar17 + -1);
    (*(undefined2 * PTR32 *)(gen_frame + 0x30)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)(iVar16 + 0xac) - (float10)*(float *)(iVar16 + 0x8c)))))));
    (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((float10)1 / (float10)(iVar17 + -1))));
    if (0 < iVar17) {
      puVar18 = (ulonglong *)(param_2 + 0x40);
      iVar16 = (*(int *)(gen_frame + 0x64));
      do {
        iVar17 = *(int *)((int)param_1 + 0x31c);
        fVar20 = (float10)(*(float *)(gen_frame + 0x68));
        (*(float *)(gen_frame + 0x34)) = (float)(fVar20 * (float10)(*(float *)(gen_frame + 0x24)));
        (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x28)) * fVar20);
        (*(float *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0x2c)) * fVar20);
        (*(undefined2 * PTR32 *)(gen_frame + 0x40)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)((float)(fVar20 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x30)))))))));
        (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)(iVar17 + 0x80) +
                          (float10)(float)(fVar20 * (float10)(*(float *)(gen_frame + 0x24))))));
        (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)*(float *)(iVar17 + 0x84) +
                          (float10)(float)((float10)(*(float *)(gen_frame + 0x28)) * fVar20))));
        (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(((float10)*(float *)(iVar17 + 0x88) +
                          (float10)(float)((float10)(*(float *)(gen_frame + 0x2c)) * fVar20))));
        (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)(iVar17 + 0x8c) +
                          (float10)(float)(fVar20 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x30))))))))))));
        uVar23 = F_0099aa20(&(*(float *)(gen_frame + 0x44)));
        puVar18[-6] = uVar23;
        *puVar18 = uVar23;
        puVar18 = puVar18 + 0xc;
        (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x68)) + (float10)(*(float *)(gen_frame + 0x54)));
        iVar16 = iVar16 + -1;
        iVar17 = (*(int *)(gen_frame + 0x64));
      } while (iVar16 != 0);
    }
  }
  else {
    fVar22 = 0.0;
    iVar15 = 0;
    (*(float *)(gen_frame + 0x68)) = 0.0;
    *(float *)(iVar16 + 0x90) =
         ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x88) * (float10)*(float *)(iVar16 + 0x90))));
    *(float *)(iVar16 + 0x94) =
         ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0x94) * (float10)*(float *)((int)param_1 + 0x8c))));
    *(float *)(iVar16 + 0x98) =
         ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0x98) * (float10)*(float *)((int)param_1 + 0x90))));
    *(float *)(iVar16 + 0x9c) =
         ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0x9c) * (float10)*(float *)((int)param_1 + 0x94))));
    (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0x90) - (float10)*(float *)(iVar16 + 0x80))));
    (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0x94) - (float10)*(float *)(iVar16 + 0x84))));
    (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0x98) - (float10)*(float *)(iVar16 + 0x88))));
    (*(undefined2 * PTR32 *)(gen_frame + 0x30)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)(iVar16 + 0x9c) - (float10)*(float *)(iVar16 + 0x8c)))))));
    (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((float10)1 / (float10)*(int *)(iVar16 + 0x154))));
    if (0 < *(int *)(iVar16 + 0x154)) {
      puVar18 = (ulonglong *)(param_2 + 0x40);
      do {
        fVar20 = (float10)(*(float *)(gen_frame + 0x68));
        (*(float *)(gen_frame + 0x34)) = (float)(fVar20 * (float10)(*(float *)(gen_frame + 0x24)));
        (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x28)) * fVar20);
        (*(float *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0x2c)) * fVar20);
        (*(undefined2 * PTR32 *)(gen_frame + 0x40)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)((float)(fVar20 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x30)))))))));
        (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)(float)(fVar20 * (float10)(*(float *)(gen_frame + 0x24))) +
                          (float10)*(float *)(iVar16 + 0x80))));
        (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0x84) +
                          (float10)(float)((float10)(*(float *)(gen_frame + 0x28)) * fVar20))));
        (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0x88) +
                          (float10)(float)((float10)(*(float *)(gen_frame + 0x2c)) * fVar20))));
        (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)(iVar16 + 0x8c) +
                          (float10)(float)(fVar20 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x30))))))))))));
        uVar23 = F_0099aa20(&(*(float *)(gen_frame + 0x44)));
        puVar18[-6] = uVar23;
        *puVar18 = uVar23;
        iVar16 = *(int *)((int)param_1 + 0x31c);
        (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x68)) + (float10)(*(float *)(gen_frame + 0x54)));
        iVar15 = iVar15 + 1;
        puVar18 = puVar18 + 0xc;
        iVar17 = (*(int *)(gen_frame + 0x64));
      } while (iVar15 < *(int *)(iVar16 + 0x154));
    }
    iVar16 = *(int *)((int)param_1 + 0x31c);
    (*(float *)(gen_frame + 0x68)) = fVar22;
    (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0xa0) - (float10)*(float *)(iVar16 + 0x90))));
    (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0xa4) - (float10)*(float *)(iVar16 + 0x94))));
    (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((float10)*(float *)(iVar16 + 0xa8) - (float10)*(float *)(iVar16 + 0x98))));
    iVar15 = *(int *)(iVar16 + 0x154);
    iVar9 = (iVar17 - iVar15) + -1;
    (*(undefined2 * PTR32 *)(gen_frame + 0x30)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)(iVar16 + 0xac) - (float10)*(float *)(iVar16 + 0x9c)))))));
    (*(float *)(gen_frame + 0x54)) = gen_bits2f(iVar9);
    (*(float *)(gen_frame + 0x54)) = (float)((float10)1 / (float10)iVar9);
    if (iVar15 < iVar17) {
      puVar18 = (ulonglong *)(param_2 + 0x40 + iVar15 * 0x60);
      iVar15 = (*(int *)(gen_frame + 0x64)) - iVar15;
      do {
        iVar17 = *(int *)((int)param_1 + 0x31c);
        fVar20 = (float10)(*(float *)(gen_frame + 0x68));
        (*(float *)(gen_frame + 0x34)) = (float)(fVar20 * (float10)(*(float *)(gen_frame + 0x24)));
        (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x28)) * fVar20);
        (*(float *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0x2c)) * fVar20);
        (*(undefined2 * PTR32 *)(gen_frame + 0x40)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)((float)(fVar20 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x30)))))))));
        (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)(iVar17 + 0x90) +
                          (float10)(float)(fVar20 * (float10)(*(float *)(gen_frame + 0x24))))));
        (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)*(float *)(iVar17 + 0x94) +
                          (float10)(float)((float10)(*(float *)(gen_frame + 0x28)) * fVar20))));
        (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(((float10)*(float *)(iVar17 + 0x98) +
                          (float10)(float)((float10)(*(float *)(gen_frame + 0x2c)) * fVar20))));
        (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)(iVar17 + 0x9c) +
                          (float10)(float)(fVar20 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x30))))))))))));
        uVar23 = F_0099aa20(&(*(float *)(gen_frame + 0x44)));
        puVar18[-6] = uVar23;
        *puVar18 = uVar23;
        puVar18 = puVar18 + 0xc;
        (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x68)) + (float10)(*(float *)(gen_frame + 0x54)));
        iVar15 = iVar15 + -1;
        iVar17 = (*(int *)(gen_frame + 0x64));
      } while (iVar15 != 0);
    }
  }
  fVar22 = REFG(float, 0x109cab8);
  dVar4 = *(double *)&REFG(undefined, 0x10912a8);
  iVar16 = iVar17 + -1;
  (*(float *)(gen_frame + 0x54)) = gen_bits2f(iVar16);
  (*(uint *)(gen_frame + 0x5c)) = 0;
  (*(float *)(gen_frame + 0x54)) = (float)iVar16;
  (*(float *)(gen_frame + 0x60)) = (float)((float10)1 / (float10)iVar16);
  if (*((int *)GEN_TOP((*(int *)((int)param_1 + 0x31c) + 0x164))) != 0) {
    fVar20 = (float10)REFG(double, 0x1088108);
    iVar15 = 0;
    puVar10 = (undefined2 *)(param_2 + 0x18);
    (*(undefined2 * PTR32 *)(gen_frame + 0x58)) = puVar10;
    do {
      (*(float *)(gen_frame + 0x60)) = fVar22;
      if (0 < (*(int *)(gen_frame + 0x64))) {
        puVar13 = puVar10 + 1;
        puVar11 = puVar10;
        iVar17 = (*(int *)(gen_frame + 0x64));
        do {
          pfVar5 = ((float *)GEN_TOP((*(int *)((int)param_1 + 0x31c) + iVar15)));
          fVar21 = (float10)(*(float *)(gen_frame + 0x60));
          fVar8 = ((float)GEN_TOF(((float10)pfVar5[7] +
                         (fVar21 * (float10)*((float *)GEN_TOP((*(int *)((int)param_1 + 0x31c) + 0x14 +
                                                      iVar15))) - (float10)pfVar5[4] * fVar20))));
          (*(float *)(gen_frame + 0x60)) = fVar8;
          fVar3 = ((float)GEN_TOF((((float10)pfVar5[1] * fVar21 - (float10)*pfVar5 * fVar20) +
                         (float10)pfVar5[3])));
          (*(float *)(gen_frame + 0x68)) = fVar3;
          (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x68)) + 2)) = ((undefined2)0x27f);
          (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = (undefined2 *)(((undefined2)0x27f) | 0xc00);
          (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = (undefined2 *)(int)TRUNC((double)fVar3 * dVar4);
          (*(undefined2 *)((char *)&(*(undefined2 * PTR32 *)(gen_frame + 0x50)) + 0)) = SUB42((undefined2 *)(int)TRUNC((double)fVar3 * dVar4),0);
          *puVar11 = (*(undefined2 *)((char *)&(*(undefined2 * PTR32 *)(gen_frame + 0x50)) + 0));
          (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = (undefined2 *)(((undefined2)0x27f) | 0xc00);
          puVar2 = (undefined2 *)(int)TRUNC((double)fVar8 * dVar4);
          (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = puVar2;
          (*(undefined2 *)((char *)&(*(undefined2 * PTR32 *)(gen_frame + 0x50)) + 0)) = SUB42(puVar2,0);
          *puVar13 = (*(undefined2 *)((char *)&(*(undefined2 * PTR32 *)(gen_frame + 0x50)) + 0));
          pfVar5 = ((float *)GEN_TOP((*(int *)((int)param_1 + 0x31c) + iVar15)));
          fVar8 = ((float)GEN_TOF((((float10)pfVar5[4] * fVar20 + (float10)pfVar5[5] * fVar21) +
                         (float10)pfVar5[7])));
          (*(float *)(gen_frame + 0x60)) = fVar8;
          puVar2 = ((undefined2 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)*pfVar5 * fVar20 + (float10)pfVar5[1] * fVar21) +
                          (float10)pfVar5[3]))))));
          (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = puVar2;
          (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = (undefined2 *)(((undefined2)0x27f) | 0xc00);
          puVar2 = (undefined2 *)(int)TRUNC((double)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar2))) * dVar4);
          (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = puVar2;
          (*(undefined2 *)((char *)&(*(undefined2 * PTR32 *)(gen_frame + 0x50)) + 0)) = SUB42(puVar2,0);
          puVar11[0x18] = (*(undefined2 *)((char *)&(*(undefined2 * PTR32 *)(gen_frame + 0x50)) + 0));
          (*(float *)(gen_frame + 0x68)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(short)(uint)gen_fl2bits(fVar3)));
          (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = (undefined2 *)(((undefined2)0x27f) | 0xc00);
          puVar11 = puVar11 + 0x30;
          puVar2 = (undefined2 *)(int)TRUNC((double)fVar8 * dVar4);
          (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = puVar2;
          puVar2 = (*(undefined2 * PTR32 *)(gen_frame + 0x50));
          (*(undefined2 *)((char *)&(*(undefined2 * PTR32 *)(gen_frame + 0x50)) + 0)) = SUB42(puVar2,0);
          puVar13[0x18] = (*(undefined2 *)((char *)&(*(undefined2 * PTR32 *)(gen_frame + 0x50)) + 0));
          puVar13 = puVar13 + 0x30;
          iVar17 = iVar17 + -1;
          (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF((fVar21 + (float10)(float)((float10)1 / (float10)iVar16))));
          (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = puVar2;
        } while (iVar17 != 0);
      }
      uVar6 = (*(uint *)(gen_frame + 0x5c)) + 1;
      puVar10 = puVar10 + 2;
      iVar15 = iVar15 + 0x20;
      (*(uint *)(gen_frame + 0x5c)) = uVar6;
      (*(undefined2 * PTR32 *)(gen_frame + 0x58)) = puVar10;
      iVar17 = (*(int *)(gen_frame + 0x64));
    } while (uVar6 < *((uint *)GEN_TOP((*(int *)((int)param_1 + 0x31c) + 0x164))));
  }
  F_009e4500(&(*(float *)(gen_frame + 0x38)),*(undefined4 *)((int)param_1 + 800),iVar17);
  F_009e4500(&(*(float *)(gen_frame + 0x28)),*(undefined4 *)((int)param_1 + 0x324),iVar17);
  (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = (*(undefined2 * PTR32 *)(gen_frame + 0x30));
  (*(undefined2 * PTR32 *)(gen_frame + 0x58)) = (*(undefined2 * PTR32 *)(gen_frame + 0x40));
  ppuVar14 = &(*(undefined2 * PTR32 *)(gen_frame + 0x50));
  if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x30))))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x40))))))) {
    ppuVar14 = &(*(undefined2 * PTR32 *)(gen_frame + 0x58));
  }
  ppuVar12 = ((undefined2 * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x31c) + 0x130)));
  if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppuVar14))) < (float10)*((float *)GEN_TOP((*(int *)((int)param_1 + 0x31c) + 0x130)))) {
    ppuVar12 = ppuVar14;
  }
  (*(undefined2 * PTR32 *)(gen_frame + 0x58)) = *ppuVar12;
  if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppuVar12))) < *(double *)&REFG(undefined, 0x109ce00))) {
    fVar22 = 0.0;
    (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = (undefined2 *)0x0;
    (*(float *)(gen_frame + 0x60)) = 0.0;
    fVar8 = fVar22;
    pbVar19 = (byte *)param_2;
    if (0 < iVar17) {
      do {
        pfVar5 = (float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + 0x1c + (int)gen_fl2bits(fVar22) * 0x10);
        fVar8 = ((float)GEN_TOF((((float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x60))) / (float10)(*(float *)(gen_frame + 0x54))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x58))))))));
        fVar20 = (float10)fVar8;
        if ((float10)*pfVar5 < fVar20) {
          do {
            pfVar1 = pfVar5 + 4;
            pfVar5 = pfVar5 + 4;
            fVar22 = gen_bits2f((int)gen_fl2bits(fVar22) + 1);
          } while ((!GEN_ISNAN(fVar20) && !GEN_ISNAN((float10)*pfVar1)) && !(fVar20 <= (float10)*pfVar1));
        }
        F_009df9e0(&(*(float *)(gen_frame + 0x38)),fVar8,(uint)gen_fl2bits(fVar22),((byte *)(gen_frame + 0xc)));
        fVar20 = (float10)fVar8;
        (*(float *)(gen_frame + 0x4c)) = fVar22;
        iVar17 = (int)gen_fl2bits((*(float *)(gen_frame + 0x28))) + 0x1c + (int)((int)(uintptr_t)(*(undefined2 * PTR32 *)(gen_frame + 0x50))) * 0x10;
        puVar10 = (*(undefined2 * PTR32 *)(gen_frame + 0x50));
        if ((float10)*(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x28))) + 0x1c + (int)((int)(uintptr_t)(*(undefined2 * PTR32 *)(gen_frame + 0x50))) * 0x10) < fVar20)
        {
          do {
            pfVar5 = (float *)(iVar17 + 0x10);
            iVar17 = iVar17 + 0x10;
            puVar10 = (undefined2 *)((int)puVar10 + 1);
          } while ((!GEN_ISNAN(fVar20) && !GEN_ISNAN((float10)*pfVar5)) && !(fVar20 <= (float10)*pfVar5));
        }
        F_009df9e0(&(*(float *)(gen_frame + 0x28)),fVar8,(uint)puVar10,&(*(undefined4 *)(gen_frame + 0x18)));
        *(undefined4 *)pbVar19 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0));
        *(undefined4 *)(pbVar19 + 4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4));
        *(undefined4 *)(pbVar19 + 8) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
        *(undefined4 *)(pbVar19 + 0xc) = *((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 0x31c) + 300)));
        *(undefined4 *)(pbVar19 + 0x28) = *((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 0x31c) + 0x160)));
        *(undefined4 *)(pbVar19 + 0x30) = (*(undefined4 *)(gen_frame + 0x18));
        *(undefined4 *)(pbVar19 + 0x34) = (*(undefined4 *)(gen_frame + 0x1c));
        *(undefined4 *)(pbVar19 + 0x38) = (*(undefined4 *)(gen_frame + 0x20));
        *(undefined4 *)(pbVar19 + 0x3c) = *((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 0x31c) + 300)));
        fVar8 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x60))) + 1);
        *(undefined4 *)(pbVar19 + 0x58) = *((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 0x31c) + 0x160)));
        pbVar19 = pbVar19 + 0x60;
        (*(undefined2 * PTR32 *)(gen_frame + 0x50)) = puVar10;
        (*(float *)(gen_frame + 0x60)) = fVar8;
        fVar22 = (*(float *)(gen_frame + 0x4c));
      } while ((int)gen_fl2bits(fVar8) < (*(int *)(gen_frame + 0x64)));
    }
    return (uint)gen_fl2bits(fVar8);
  }
  pvVar7 = F_00c48350((undefined *)param_2,0,iVar17 * 0x60);
  return (uint)pvVar7;
}

/* ref: FUN_009a0a20 */
uint F_009a0a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a0a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  double dVar6;
  int iVar7;
  float * pfVar8;
  undefined2 * puVar9;
  undefined * pvVar10;
  uint uVar11;
  uint uVar12;
  undefined2 * puVar13;
  undefined2 * PTR32 * ppuVar14;
  int iVar15;
  undefined2 * puVar16;
  undefined2 * PTR32 * ppuVar17;
  int iVar18;
  int iVar19;
  undefined4 * puVar20;
  float10 fVar21;
  float10 fVar22;
  float fVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  iVar19 = *((int *)GEN_TOP((*(int *)((int)this + 0x31c) + 0x150)));
  (*(undefined * PTR32 *)(gen_frame + 0x78)) = param_1;
  (*(int *)(gen_frame + 0x74)) = iVar19;
  F_0098f2e0(this,*(int *)((int)this + 0x31c));
  iVar7 = *(int *)((int)this + 0x31c);
  *(float *)(iVar7 + 0x80) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x88) * (float10)*(float *)(iVar7 + 0x80))));
  *(float *)(iVar7 + 0x84) =
       ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x84) * (float10)*(float *)((int)this + 0x8c))));
  *(float *)(iVar7 + 0x88) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x90) * (float10)*(float *)(iVar7 + 0x88))));
  *(float *)(iVar7 + 0x8c) =
       ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x8c) * (float10)*(float *)((int)this + 0x94))));
  *(float *)(iVar7 + 0xa0) =
       ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xa0) * (float10)*(float *)((int)this + 0x88))));
  *(float *)(iVar7 + 0xa4) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x8c) * (float10)*(float *)(iVar7 + 0xa4))));
  *(float *)(iVar7 + 0xa8) =
       ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xa8) * (float10)*(float *)((int)this + 0x90))));
  *(float *)(iVar7 + 0xac) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x94) * (float10)*(float *)(iVar7 + 0xac))));
  *(float *)(iVar7 + 0xb0) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x88) * (float10)*(float *)(iVar7 + 0xb0))));
  *(float *)(iVar7 + 0xb4) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x8c) * (float10)*(float *)(iVar7 + 0xb4))));
  *(float *)(iVar7 + 0xb8) =
       ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xb8) * (float10)*(float *)((int)this + 0x90))));
  *(float *)(iVar7 + 0xbc) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x94) * (float10)*(float *)(iVar7 + 0xbc))));
  *(float *)(iVar7 + 0xd0) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x88) * (float10)*(float *)(iVar7 + 0xd0))));
  *(float *)(iVar7 + 0xd4) =
       ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xd4) * (float10)*(float *)((int)this + 0x8c))));
  *(float *)(iVar7 + 0xd8) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x90) * (float10)*(float *)(iVar7 + 0xd8))));
  *(float *)(iVar7 + 0xdc) =
       ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xdc) * (float10)*(float *)((int)this + 0x94))));
  uVar24 = (*(ulonglong *)(gen_frame + 0x84));
  if ((*(byte *)(iVar7 + 0x128) & 1) == 0) {
    (*(float *)(gen_frame + 0x7c)) = gen_bits2f(iVar19 + -1);
    (*(float *)(gen_frame + 0x90)) = 0.0;
    (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xa0) - (float10)*(float *)(iVar7 + 0x80))));
    (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xa4) - (float10)*(float *)(iVar7 + 0x84))));
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xa8) - (float10)*(float *)(iVar7 + 0x88))));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xac) - (float10)*(float *)(iVar7 + 0x8c))));
    (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xd0) - (float10)*(float *)(iVar7 + 0xb0))));
    (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xd4) - (float10)*(float *)(iVar7 + 0xb4))));
    (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xd8) - (float10)*(float *)(iVar7 + 0xb8))));
    (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xdc) - (float10)*(float *)(iVar7 + 0xbc))));
    (*(float *)(gen_frame + 0x7c)) = ((float)GEN_TOF(((float10)1 / (float10)(iVar19 + -1))));
    if (iVar19 < 1) goto LAB_009a11c7;
    puVar20 = (undefined4 *)((int)param_1 + 0x40);
    (*(float *)(gen_frame + 0x8c)) = gen_bits2f((*(int *)(gen_frame + 0x74)));
    do {
      iVar19 = *(int *)((int)this + 0x31c);
      fVar21 = (float10)(*(float *)(gen_frame + 0x90));
      (*(float *)(gen_frame + 0x40)) = (float)(fVar21 * (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar21);
      (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x38)) * fVar21);
      (*(undefined2 * PTR32 *)(gen_frame + 0x4c)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)((float)(fVar21 * (float10)(*(float *)(gen_frame + 0x3c))))));
      (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)(float)(fVar21 * (float10)(*(float *)(gen_frame + 0x30))) +
                        (float10)*(float *)(iVar19 + 0x80))));
      (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0x84) +
                        (float10)(float)((float10)(*(float *)(gen_frame + 0x34)) * fVar21))));
      (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0x88) +
                        (float10)(float)((float10)(*(float *)(gen_frame + 0x38)) * fVar21))));
      (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0x8c) +
                        (float10)(float)(fVar21 * (float10)(*(float *)(gen_frame + 0x3c))))));
      uVar24 = F_0099aa20(&(*(float *)(gen_frame + 0x1c)));
      fVar21 = (float10)(*(float *)(gen_frame + 0x90));
      iVar19 = *(int *)((int)this + 0x31c);
      (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f((int)(uVar24 >> 0x20));
      (*(float *)(gen_frame + 0x50)) = (float)(fVar21 * (float10)(*(float *)(gen_frame + 0x60)));
      (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x64)) * fVar21);
      (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x68)) * fVar21);
      (*(undefined2 * PTR32 *)(gen_frame + 0x5c)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)((float)(fVar21 * (float10)(*(float *)(gen_frame + 0x6c))))));
      (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)(float)(fVar21 * (float10)(*(float *)(gen_frame + 0x60))) +
                        (float10)*(float *)(iVar19 + 0xb0))));
      (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0xb4) +
                        (float10)(float)((float10)(*(float *)(gen_frame + 0x64)) * fVar21))));
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0xb8) +
                        (float10)(float)((float10)(*(float *)(gen_frame + 0x68)) * fVar21))));
      (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0xbc) +
                        (float10)(float)(fVar21 * (float10)(*(float *)(gen_frame + 0x6c))))));
      uVar25 = F_0099aa20(&(*(float *)(gen_frame + 0xc)));
      *(ulonglong *)(puVar20 + -0xc) = uVar25;
      *puVar20 = (int)uVar24;
      puVar20[1] = (undefined4)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)));
      (*(float *)(gen_frame + 0x90)) = (float)((float10)(*(float *)(gen_frame + 0x90)) + (float10)(*(float *)(gen_frame + 0x7c)));
      *(ulonglong *)(puVar20 + 0xc) = uVar25;
      puVar20 = puVar20 + 0x24;
      iVar19 = (int)gen_fl2bits((*(float *)(gen_frame + 0x8c))) + -1;
      (*(float *)(gen_frame + 0x8c)) = gen_bits2f(iVar19);
    } while (iVar19 != 0);
  }
  else {
    fVar23 = 0.0;
    iVar18 = 0;
    (*(float *)(gen_frame + 0x90)) = 0.0;
    *(float *)(iVar7 + 0x90) =
         ((float)GEN_TOF(((float10)*(float *)((int)this + 0x88) * (float10)*(float *)(iVar7 + 0x90))));
    *(float *)(iVar7 + 0x94) =
         ((float)GEN_TOF(((float10)*(float *)((int)this + 0x8c) * (float10)*(float *)(iVar7 + 0x94))));
    *(float *)(iVar7 + 0x98) =
         ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x98) * (float10)*(float *)((int)this + 0x90))));
    *(float *)(iVar7 + 0x9c) =
         ((float)GEN_TOF(((float10)*(float *)((int)this + 0x94) * (float10)*(float *)(iVar7 + 0x9c))));
    *(float *)(iVar7 + 0xc0) =
         ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xc0) * (float10)*(float *)((int)this + 0x88))));
    *(float *)(iVar7 + 0xc4) =
         ((float)GEN_TOF(((float10)*(float *)((int)this + 0x8c) * (float10)*(float *)(iVar7 + 0xc4))));
    *(float *)(iVar7 + 200) =
         ((float)GEN_TOF(((float10)*(float *)(iVar7 + 200) * (float10)*(float *)((int)this + 0x90))));
    *(float *)(iVar7 + 0xcc) =
         ((float)GEN_TOF(((float10)*(float *)((int)this + 0x94) * (float10)*(float *)(iVar7 + 0xcc))));
    (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x90) - (float10)*(float *)(iVar7 + 0x80))));
    (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x94) - (float10)*(float *)(iVar7 + 0x84))));
    (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x98) - (float10)*(float *)(iVar7 + 0x88))));
    (*(undefined2 * PTR32 *)(gen_frame + 0x4c)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x9c) - (float10)*(float *)(iVar7 + 0x8c)))))));
    (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xc0) - (float10)*(float *)(iVar7 + 0xb0))));
    (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xc4) - (float10)*(float *)(iVar7 + 0xb4))));
    (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 200) - (float10)*(float *)(iVar7 + 0xb8))));
    (*(undefined2 * PTR32 *)(gen_frame + 0x5c)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xcc) - (float10)*(float *)(iVar7 + 0xbc)))))));
    (*(float *)(gen_frame + 0x7c)) = ((float)GEN_TOF(((float10)1 / (float10)*(int *)(iVar7 + 0x154))));
    if (0 < *(int *)(iVar7 + 0x154)) {
      puVar20 = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x40);
      do {
        fVar21 = (float10)(*(float *)(gen_frame + 0x90));
        (*(float *)(gen_frame + 0x60)) = (float)(fVar21 * (float10)(*(float *)(gen_frame + 0x40)));
        (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x44)) * fVar21);
        (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x48)) * fVar21);
        (*(float *)(gen_frame + 0x6c)) = (float)(fVar21 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x4c))))));
        (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)(float)(fVar21 * (float10)(*(float *)(gen_frame + 0x40))) +
                          (float10)*(float *)(iVar7 + 0x80))));
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x84) +
                          (float10)(float)((float10)(*(float *)(gen_frame + 0x44)) * fVar21))));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x88) +
                          (float10)(float)((float10)(*(float *)(gen_frame + 0x48)) * fVar21))));
        (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x8c) +
                          (float10)(float)(fVar21 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x4c)))))))));
        uVar24 = F_0099aa20(&(*(float *)(gen_frame + 0xc)));
        fVar21 = (float10)(*(float *)(gen_frame + 0x90));
        iVar19 = *(int *)((int)this + 0x31c);
        (*(ulonglong *)(gen_frame + 0x84)) = uVar24;
        (*(float *)(gen_frame + 0x30)) = (float)(fVar21 * (float10)(*(float *)(gen_frame + 0x50)));
        (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x54)) * fVar21);
        (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x58)) * fVar21);
        (*(float *)(gen_frame + 0x3c)) = (float)(fVar21 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x5c))))));
        (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)(float)(fVar21 * (float10)(*(float *)(gen_frame + 0x50))) +
                          (float10)*(float *)(iVar19 + 0xb0))));
        (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0xb4) +
                          (float10)(float)((float10)(*(float *)(gen_frame + 0x54)) * fVar21))));
        (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0xb8) +
                          (float10)(float)((float10)(*(float *)(gen_frame + 0x58)) * fVar21))));
        (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0xbc) +
                          (float10)(float)(fVar21 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x5c)))))))));
        uVar24 = F_0099aa20(&(*(float *)(gen_frame + 0x1c)));
        *puVar20 = (uint)(*(ulonglong *)(gen_frame + 0x84));
        *(ulonglong *)(puVar20 + -0xc) = uVar24;
        (*(float *)(gen_frame + 0x90)) = (float)((float10)(*(float *)(gen_frame + 0x90)) + (float10)(*(float *)(gen_frame + 0x7c)));
        puVar20[1] = (undefined4)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)));
        *(ulonglong *)(puVar20 + 0xc) = uVar24;
        iVar7 = *(int *)((int)this + 0x31c);
        iVar18 = iVar18 + 1;
        puVar20 = puVar20 + 0x24;
        iVar19 = (*(int *)(gen_frame + 0x74));
        uVar24 = (*(ulonglong *)(gen_frame + 0x84));
      } while (iVar18 < *(int *)(iVar7 + 0x154));
    }
    iVar7 = *(int *)((int)this + 0x31c);
    (*(float *)(gen_frame + 0x90)) = fVar23;
    (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xa0) - (float10)*(float *)(iVar7 + 0x90))));
    (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xa4) - (float10)*(float *)(iVar7 + 0x94))));
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xa8) - (float10)*(float *)(iVar7 + 0x98))));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xac) - (float10)*(float *)(iVar7 + 0x9c))));
    (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xd0) - (float10)*(float *)(iVar7 + 0xc0))));
    (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xd4) - (float10)*(float *)(iVar7 + 0xc4))));
    (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xd8) - (float10)*(float *)(iVar7 + 200))));
    iVar18 = *(int *)(iVar7 + 0x154);
    iVar15 = (iVar19 - iVar18) + -1;
    (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF(((float10)*(float *)(iVar7 + 0xdc) - (float10)*(float *)(iVar7 + 0xcc))));
    (*(float *)(gen_frame + 0x7c)) = gen_bits2f(iVar15);
    (*(float *)(gen_frame + 0x7c)) = (float)((float10)1 / (float10)iVar15);
    if (iVar19 <= iVar18) goto LAB_009a11c7;
    puVar20 = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + iVar18 * 0x90 + 0x40);
    (*(float *)(gen_frame + 0x8c)) = gen_bits2f((*(int *)(gen_frame + 0x74)) - iVar18);
    do {
      iVar19 = *(int *)((int)this + 0x31c);
      fVar21 = (float10)(*(float *)(gen_frame + 0x90));
      (*(float *)(gen_frame + 0x40)) = (float)(fVar21 * (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar21);
      (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x38)) * fVar21);
      (*(undefined2 * PTR32 *)(gen_frame + 0x4c)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)((float)(fVar21 * (float10)(*(float *)(gen_frame + 0x3c))))));
      (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0x90) +
                        (float10)(float)(fVar21 * (float10)(*(float *)(gen_frame + 0x30))))));
      (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0x94) +
                        (float10)(float)((float10)(*(float *)(gen_frame + 0x34)) * fVar21))));
      (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0x98) +
                        (float10)(float)((float10)(*(float *)(gen_frame + 0x38)) * fVar21))));
      (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0x9c) +
                        (float10)(float)(fVar21 * (float10)(*(float *)(gen_frame + 0x3c))))));
      (*(ulonglong *)(gen_frame + 0x84)) = uVar24;
      uVar25 = F_0099aa20(&(*(float *)(gen_frame + 0x1c)));
      fVar21 = (float10)(*(float *)(gen_frame + 0x90));
      iVar19 = *(int *)((int)this + 0x31c);
      (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f((int)(uVar25 >> 0x20));
      (*(float *)(gen_frame + 0x50)) = (float)(fVar21 * (float10)(*(float *)(gen_frame + 0x60)));
      (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x64)) * fVar21);
      (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x68)) * fVar21);
      (*(undefined2 * PTR32 *)(gen_frame + 0x5c)) = ((undefined2 *)(uintptr_t)gen_fl2bits((float)((float)(fVar21 * (float10)(*(float *)(gen_frame + 0x6c))))));
      (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0xc0) +
                        (float10)(float)(fVar21 * (float10)(*(float *)(gen_frame + 0x60))))));
      (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0xc4) +
                        (float10)(float)((float10)(*(float *)(gen_frame + 0x64)) * fVar21))));
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 200) +
                        (float10)(float)((float10)(*(float *)(gen_frame + 0x68)) * fVar21))));
      (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(iVar19 + 0xcc) +
                        (float10)(float)(fVar21 * (float10)(*(float *)(gen_frame + 0x6c))))));
      uVar26 = F_0099aa20(&(*(float *)(gen_frame + 0xc)));
      uVar24 = CONCAT44((uint)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4))),(uint)(*(ulonglong *)(gen_frame + 0x84)));
      *(ulonglong *)(puVar20 + -0xc) = uVar26;
      *puVar20 = (int)uVar25;
      puVar20[1] = (undefined4)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)));
      (*(float *)(gen_frame + 0x90)) = (float)((float10)(*(float *)(gen_frame + 0x90)) + (float10)(*(float *)(gen_frame + 0x7c)));
      *(ulonglong *)(puVar20 + 0xc) = uVar26;
      puVar20 = puVar20 + 0x24;
      iVar19 = (int)gen_fl2bits((*(float *)(gen_frame + 0x8c))) + -1;
      (*(float *)(gen_frame + 0x8c)) = gen_bits2f(iVar19);
    } while (iVar19 != 0);
  }
  uVar24 = CONCAT44((uint)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4))),(uint)(*(ulonglong *)(gen_frame + 0x84)));
  iVar19 = (*(int *)(gen_frame + 0x74));
LAB_009a11c7: ;
  fVar23 = REFG(float, 0x109cab8);
  dVar6 = *(double *)&REFG(undefined, 0x10912a8);
  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f((uint)(uVar24 >> 0x20));
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 0)) = (uint)uVar24;
  iVar7 = iVar19 + -1;
  (*(float *)(gen_frame + 0x7c)) = gen_bits2f(iVar7);
  (*(undefined2 * PTR32 *)(gen_frame + 0x2c)) = (undefined2 *)0x0;
  (*(float *)(gen_frame + 0x7c)) = (float)iVar7;
  (*(float *)(gen_frame + 0x90)) = (float)((float10)1 / (float10)iVar7);
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x31c) + 0x164))) != 0) {
    fVar21 = (float10)REFG(double, 0x1088108);
    iVar18 = 0;
    puVar13 = (undefined2 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x18);
    (*(undefined2 * PTR32 *)(gen_frame + 0x70)) = puVar13;
    do {
      (*(float *)(gen_frame + 0x90)) = fVar23;
      if (0 < (*(int *)(gen_frame + 0x74))) {
        puVar9 = puVar13;
        puVar16 = puVar13 + 1;
        iVar19 = (*(int *)(gen_frame + 0x74));
        do {
          pfVar8 = ((float *)GEN_TOP((*(int *)((int)this + 0x31c) + iVar18)));
          fVar22 = (float10)(*(float *)(gen_frame + 0x90));
          fVar2 = ((float)GEN_TOF(((float10)pfVar8[7] +
                         (fVar22 * (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x31c) + 0x14 + iVar18)))
                         - (float10)pfVar8[4] * fVar21))));
          (*(float *)(gen_frame + 0x90)) = fVar2;
          fVar3 = ((float)GEN_TOF((((float10)pfVar8[1] * fVar22 - (float10)*pfVar8 * fVar21) +
                         (float10)pfVar8[3])));
          (*(float *)(gen_frame + 0x8c)) = fVar3;
          (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8c)) + 2)) = ((undefined2)0x27f);
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f((int)TRUNC((double)fVar3 * dVar6));
          (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = (undefined2)(int)TRUNC((double)fVar3 * dVar6);
          *puVar9 = (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4));
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
          iVar15 = (int)TRUNC((double)fVar2 * dVar6);
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f(iVar15);
          (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = (undefined2)iVar15;
          *puVar16 = (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4));
          iVar15 = *(int *)((int)this + 0x31c) + iVar18;
          fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar15 + 0x14) * fVar22 +
                         (float10)*(float *)(iVar15 + 0x1c))));
          (*(float *)(gen_frame + 0x90)) = fVar2;
          fVar4 = ((float)GEN_TOF(((float10)*(float *)(iVar15 + 4) * fVar22 +
                         (float10)*(float *)(iVar15 + 0xc))));
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = fVar4;
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
          iVar15 = (int)TRUNC((double)fVar4 * dVar6);
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f(iVar15);
          (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = (undefined2)iVar15;
          puVar9[0x18] = (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4));
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
          iVar15 = (int)TRUNC((double)fVar2 * dVar6);
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f(iVar15);
          (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = (undefined2)iVar15;
          puVar16[0x18] = (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4));
          pfVar8 = ((float *)GEN_TOP((*(int *)((int)this + 0x31c) + iVar18)));
          fVar2 = ((float)GEN_TOF((((float10)pfVar8[4] * fVar21 + (float10)pfVar8[5] * fVar22) +
                         (float10)pfVar8[7])));
          (*(float *)(gen_frame + 0x90)) = fVar2;
          fVar4 = ((float)GEN_TOF((((float10)*pfVar8 * fVar21 + (float10)pfVar8[1] * fVar22) +
                         (float10)pfVar8[3])));
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = fVar4;
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
          iVar15 = (int)TRUNC((double)fVar4 * dVar6);
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f(iVar15);
          (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = (undefined2)iVar15;
          puVar9[0x30] = (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4));
          (*(float *)(gen_frame + 0x8c)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(short)(uint)gen_fl2bits(fVar3)));
          iVar19 = iVar19 + -1;
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
          iVar15 = (int)TRUNC((double)fVar2 * dVar6);
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f(iVar15);
          iVar15 = (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)));
          (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = (undefined2)iVar15;
          puVar16[0x30] = (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4));
          (*(float *)(gen_frame + 0x90)) = ((float)GEN_TOF((fVar22 + (float10)(float)((float10)1 / (float10)iVar7))));
          puVar9 = puVar9 + 0x48;
          puVar16 = puVar16 + 0x48;
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f(iVar15);
        } while (iVar19 != 0);
      }
      puVar9 = (undefined2 *)((int)(*(undefined2 * PTR32 *)(gen_frame + 0x2c)) + 1);
      puVar13 = puVar13 + 2;
      iVar18 = iVar18 + 0x20;
      (*(undefined2 * PTR32 *)(gen_frame + 0x2c)) = puVar9;
      (*(undefined2 * PTR32 *)(gen_frame + 0x70)) = puVar13;
      iVar19 = (*(int *)(gen_frame + 0x74));
    } while (puVar9 < *((undefined2 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x31c) + 0x164))));
  }
  F_009e4500(&(*(float *)(gen_frame + 0x54)),*(undefined4 *)((int)this + 800),iVar19);
  F_009e4500(&(*(float *)(gen_frame + 0x64)),*(undefined4 *)((int)this + 0x324),iVar19);
  F_009e4500(&(*(float *)(gen_frame + 0x44)),*(undefined4 *)((int)this + 0x328),iVar19);
  (*(undefined2 * PTR32 *)(gen_frame + 0x2c)) = (*(undefined2 * PTR32 *)(gen_frame + 0x4c));
  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = (*(float *)(gen_frame + 0x6c));
  (*(undefined2 * PTR32 *)(gen_frame + 0x70)) = (*(undefined2 * PTR32 *)(gen_frame + 0x5c));
  ppuVar17 = (undefined2 * PTR32 *)((int)&(*(ulonglong *)(gen_frame + 0x84)) + 4);
  if (!((float10)(*(float *)(gen_frame + 0x6c)) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x5c))))))) {
    ppuVar17 = &(*(undefined2 * PTR32 *)(gen_frame + 0x70));
  }
  if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x4c))))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppuVar17)))) {
    ppuVar17 = &(*(undefined2 * PTR32 *)(gen_frame + 0x2c));
  }
  ppuVar14 = ((undefined2 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x31c) + 0x130)));
  if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppuVar17))) < (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x31c) + 0x130)))) {
    ppuVar14 = ppuVar17;
  }
  (*(undefined2 * PTR32 *)(gen_frame + 0x70)) = *ppuVar14;
  if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppuVar14))) < *(double *)&REFG(undefined, 0x109ce00))) {
    uVar11 = 0;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 0)) = 0;
    (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = 0.0;
    (*(float *)(gen_frame + 0x90)) = 0.0;
    uVar12 = uVar11;
    if (0 < iVar19) {
      puVar20 = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 8);
      do {
        pfVar8 = (float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x54))) + 0x1c + uVar11 * 0x10);
        pvVar10 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x90))) / (float10)(*(float *)(gen_frame + 0x7c))) *
                                 (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined2 * PTR32 *)(gen_frame + 0x70)))))))))));
        (*(undefined * PTR32 *)(gen_frame + 0x78)) = pvVar10;
        fVar21 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar10)));
        if ((float10)*pfVar8 < fVar21) {
          do {
            pfVar1 = pfVar8 + 4;
            pfVar8 = pfVar8 + 4;
            uVar11 = uVar11 + 1;
          } while ((!GEN_ISNAN(fVar21) && !GEN_ISNAN((float10)*pfVar1)) && !(fVar21 <= (float10)*pfVar1));
        }
        F_009df9e0(&(*(float *)(gen_frame + 0x54)),((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar10))),uVar11,&(*(undefined4 *)(gen_frame + 0x94)));
        fVar21 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x78)))));
        (*(uint *)(gen_frame + 0x80)) = uVar11;
        iVar19 = (int)gen_fl2bits((*(float *)(gen_frame + 0x64))) + 0x1c + (uint)(*(ulonglong *)(gen_frame + 0x84)) * 0x10;
        uVar11 = (uint)(*(ulonglong *)(gen_frame + 0x84));
        if ((float10)*(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x64))) + 0x1c + (uint)(*(ulonglong *)(gen_frame + 0x84)) * 0x10) < fVar21)
        {
          do {
            pfVar8 = (float *)(iVar19 + 0x10);
            iVar19 = iVar19 + 0x10;
            uVar11 = uVar11 + 1;
          } while ((!GEN_ISNAN(fVar21) && !GEN_ISNAN((float10)*pfVar8)) && !(fVar21 <= (float10)*pfVar8));
        }
        F_009df9e0(&(*(float *)(gen_frame + 0x64)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x78))))),uVar11,&(*(undefined4 *)(gen_frame + 0xa0)));
        fVar21 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x78)))));
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 0)) = uVar11;
        iVar19 = (int)gen_fl2bits((*(float *)(gen_frame + 0x44))) + 0x1c + (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4))) * 0x10;
        uVar11 = (uint)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)));
        if ((float10)*((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x44))) + 0x1c +
                               (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4))) * 0x10))) < fVar21) {
          do {
            pfVar8 = (float *)(iVar19 + 0x10);
            iVar19 = iVar19 + 0x10;
            uVar11 = uVar11 + 1;
          } while ((!GEN_ISNAN(fVar21) && !GEN_ISNAN((float10)*pfVar8)) && !(fVar21 <= (float10)*pfVar8));
        }
        F_009df9e0(&(*(float *)(gen_frame + 0x44)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x78))))),uVar11,&(*(undefined4 *)(gen_frame + 0xac)));
        puVar20[-2] = (*(undefined4 *)(gen_frame + 0x94));
        puVar20[-1] = (*(undefined4 *)(gen_frame + 0x98));
        *puVar20 = (*(undefined4 *)(gen_frame + 0x9c));
        puVar20[1] = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x31c) + 300)));
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x31c) + 0x160)));
        puVar20[10] = (*(undefined4 *)(gen_frame + 0xac));
        puVar20[0xb] = (*(undefined4 *)(gen_frame + 0xb0));
        puVar20[0xc] = (*(undefined4 *)(gen_frame + 0xb4));
        puVar20[8] = uVar5;
        puVar20[0xd] = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x31c) + 300)));
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x31c) + 0x160)));
        puVar20[0x16] = (*(undefined4 *)(gen_frame + 0xa0));
        puVar20[0x17] = (*(undefined4 *)(gen_frame + 0xa4));
        puVar20[0x14] = uVar5;
        puVar20[0x18] = (*(undefined4 *)(gen_frame + 0xa8));
        puVar20[0x19] = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x31c) + 300)));
        uVar12 = (int)gen_fl2bits((*(float *)(gen_frame + 0x90))) + 1;
        puVar20[0x20] = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x31c) + 0x160)));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x84)) + 4)) = gen_bits2f(uVar11);
        (*(float *)(gen_frame + 0x90)) = gen_bits2f(uVar12);
        uVar11 = (*(uint *)(gen_frame + 0x80));
        puVar20 = puVar20 + 0x24;
      } while ((int)uVar12 < (*(int *)(gen_frame + 0x74)));
    }
    (*(float *)(gen_frame + 0x90)) = gen_bits2f(uVar12);
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
    return uVar12;
  }
  pvVar10 = F_00c48350((*(undefined * PTR32 *)(gen_frame + 0x78)),0,iVar19 * 0x90);
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return (uint)pvVar10;
}

/* ref: FUN_009a1680 */
uint F_009a1680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a1680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  double dVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar10 = F_0099aa20((int)this + 0x88);
  uVar2 = (int)this + 4;
  if (*(char *)((int)this + 0x19f) == '\0') {
    uVar9 = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x109cab8);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1088068);
    uVar7 = REFG(float, 0x109cab8);
    uVar8 = REFG(float, 0x1088068);
    F_00981170(&(*(undefined4 *)(gen_frame + 0x28)),(uint)&(*(undefined4 *)(gen_frame + 0x1c)),uVar2);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar9;
    (*(undefined4 *)(gen_frame + 0x20)) = uVar8;
    (*(undefined4 *)(gen_frame + 0x24)) = uVar8;
    F_00981170(&(*(undefined4 *)(gen_frame + 0x34)),(uint)&(*(undefined4 *)(gen_frame + 0x1c)),uVar2);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar9;
    (*(undefined4 *)(gen_frame + 0x20)) = uVar7;
    (*(undefined4 *)(gen_frame + 0x24)) = uVar7;
    F_00981170(&(*(undefined4 *)(gen_frame + 0x40)),(uint)&(*(undefined4 *)(gen_frame + 0x1c)),uVar2);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar9;
    (*(undefined4 *)(gen_frame + 0x20)) = uVar8;
    (*(undefined4 *)(gen_frame + 0x24)) = uVar7;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x109cab8);
    if (*(char *)((int)this + 0x19f) == '\x01') {
      uVar9 = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x109cab8);
      uVar7 = REFG(float, 0x109cab8);
      F_00981170(&(*(undefined4 *)(gen_frame + 0x28)),(uint)&(*(undefined4 *)(gen_frame + 0x1c)),uVar2);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1088068);
      (*(undefined4 *)(gen_frame + 0x20)) = uVar9;
      (*(undefined4 *)(gen_frame + 0x24)) = uVar7;
      uVar8 = REFG(float, 0x1088068);
      F_00981170(&(*(undefined4 *)(gen_frame + 0x34)),(uint)&(*(undefined4 *)(gen_frame + 0x1c)),uVar2);
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar7;
      (*(undefined4 *)(gen_frame + 0x20)) = uVar9;
      (*(undefined4 *)(gen_frame + 0x24)) = uVar8;
      F_00981170(&(*(undefined4 *)(gen_frame + 0x40)),(uint)&(*(undefined4 *)(gen_frame + 0x1c)),uVar2);
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar8;
      (*(undefined4 *)(gen_frame + 0x20)) = uVar9;
      (*(undefined4 *)(gen_frame + 0x24)) = uVar8;
    }
    else {
      uVar9 = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1088068);
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      uVar7 = REFG(float, 0x109cab8);
      uVar8 = REFG(float, 0x1088068);
      F_00981170(&(*(undefined4 *)(gen_frame + 0x28)),(uint)&(*(undefined4 *)(gen_frame + 0x1c)),uVar2);
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar8;
      (*(undefined4 *)(gen_frame + 0x20)) = uVar8;
      (*(undefined4 *)(gen_frame + 0x24)) = uVar9;
      F_00981170(&(*(undefined4 *)(gen_frame + 0x34)),(uint)&(*(undefined4 *)(gen_frame + 0x1c)),uVar2);
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar7;
      (*(undefined4 *)(gen_frame + 0x20)) = uVar7;
      (*(undefined4 *)(gen_frame + 0x24)) = uVar9;
      F_00981170(&(*(undefined4 *)(gen_frame + 0x40)),(uint)&(*(undefined4 *)(gen_frame + 0x1c)),uVar2);
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar8;
      (*(undefined4 *)(gen_frame + 0x20)) = uVar7;
      (*(undefined4 *)(gen_frame + 0x24)) = uVar9;
    }
  }
  F_00981170(&(*(undefined4 *)(gen_frame + 0x4c)),(uint)&(*(undefined4 *)(gen_frame + 0x1c)),uVar2);
  dVar1 = *(double *)&REFG(undefined, 0x10912a8);
  *param_1 = (*(undefined4 *)(gen_frame + 0x28));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x2c));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x30));
  param_1[0xc] = (*(undefined4 *)(gen_frame + 0x34));
  param_1[0xd] = (*(undefined4 *)(gen_frame + 0x38));
  param_1[0xe] = (*(undefined4 *)(gen_frame + 0x3c));
  param_1[0x18] = (*(undefined4 *)(gen_frame + 0x40));
  param_1[0x19] = (*(undefined4 *)(gen_frame + 0x44));
  param_1[0x1a] = (*(undefined4 *)(gen_frame + 0x48));
  param_1[0x24] = (*(undefined4 *)(gen_frame + 0x4c));
  param_1[0x25] = (*(undefined4 *)(gen_frame + 0x50));
  param_1[0x26] = (*(undefined4 *)(gen_frame + 0x54));
  (*(int *)(gen_frame + 0x10)) = 0;
  puVar5 = param_1 + 3;
  do {
    (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)uVar10;
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)(uVar10 >> 0x20);
    puVar5[2] = (*(undefined4 *)(gen_frame + 0xc));
    puVar5[1] = (*(undefined4 *)(gen_frame + 0x8));
    *puVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2f0) + 0x80)));
    puVar5[7] = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2f0) + 0x84)));
    uVar2 = *(uint *)((int)this + 0x2f0);
    uVar4 = 0;
    if (*(int *)(uVar2 + 0x88) != 0) {
      iVar3 = (*(int *)(gen_frame + 0x10));
      puVar6 = puVar5 + 3;
      do {
        uVar4 = uVar4 + 1;
        (*(undefined2 *)(gen_frame + 0x14)) = (undefined2)
                   (int)TRUNC((double)*((float *)GEN_TOP((iVar3 + *(int *)((int)this + 0x2f0)))) * dVar1);
        *(undefined2 *)puVar6 = (*(undefined2 *)(gen_frame + 0x14));
        (*(undefined2 *)(gen_frame + 0x14)) = (undefined2)
                   (int)TRUNC((double)*((float *)GEN_TOP((iVar3 + 4 + *(int *)((int)this + 0x2f0)))) * dVar1);
        *(undefined2 *)((int)puVar6 + 2) = (*(undefined2 *)(gen_frame + 0x14));
        uVar2 = *(uint *)((int)this + 0x2f0);
        iVar3 = iVar3 + 0x20;
        puVar6 = puVar6 + 1;
      } while (uVar4 < *(uint *)(uVar2 + 0x88));
    }
    (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 8;
    puVar5 = puVar5 + 0xc;
  } while ((*(int *)(gen_frame + 0x10)) < 0x20);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_009a19a0 */
unsigned int F_009a19a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9a19a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  int iVar9;
  undefined2 * puVar10;
  float * pfVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  ulonglong uVar18;
  
  iVar12 = *(int *)(param_1 + 0x304);
  (*(float *)(gen_frame + 0x94)) = *(float *)(param_1 + 0x88);
  fVar13 = (float10)*(float *)(param_1 + 0x88);
  (*(int *)(gen_frame + 0x70)) = (int)*(char *)(iVar12 + 0xd1);
  iVar9 = (int)*(char *)(iVar12 + 0xd2);
  (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF((fVar13 * (float10)*(float *)(iVar12 + 0x80))));
  (*(float *)(gen_frame + 0x94)) = *(float *)(param_1 + 0x8c);
  (*(int *)(gen_frame + 0x54)) = iVar9;
  (*(int *)(gen_frame + 0x8c)) = 0;
  fVar14 = (float10)*(float *)(param_1 + 0x8c);
  (*(float *)(gen_frame + 0x5c)) = ((float)GEN_TOF((fVar14 * (float10)*(float *)(iVar12 + 0x84))));
  (*(float *)(gen_frame + 0x94)) = *(float *)(param_1 + 0x90);
  fVar15 = (float10)*(float *)(param_1 + 0x90);
  (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF((fVar15 * (float10)*(float *)(iVar12 + 0x88))));
  (*(float *)(gen_frame + 0x94)) = *(float *)(param_1 + 0x94);
  fVar16 = (float10)*(float *)(param_1 + 0x94);
  (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF((fVar16 * (float10)*(float *)(iVar12 + 0x8c))));
  (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)(iVar12 + 0x90) * fVar13)));
  (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)*(float *)(iVar12 + 0x94) * fVar14)));
  (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF((fVar15 * (float10)*(float *)(iVar12 + 0x98))));
  (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF((fVar16 * (float10)*(float *)(iVar12 + 0x9c))));
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF((((float10)(int)param_3 * (float10)*(float *)&REFG(undefined, 0x132f3a4)) /
                    (float10)(int)*(char *)(iVar12 + 0xd3))));
  if (0 < iVar9) {
    (*(double *)(gen_frame + 0x10)) = 0.0;
    (*(float *)(gen_frame + 0x40)) = (float)(iVar9 + -1);
    pfVar11 = (float *)param_2;
    do {
      iVar9 = *(int *)(param_1 + 0x304);
      (*(float *)(gen_frame + 0x94)) = (float)((float10)(*(int *)(gen_frame + 0x8c)) / (float10)(*(float *)(gen_frame + 0x40)));
      fVar13 = (float10)(float)((float10)(*(int *)(gen_frame + 0x8c)) / (float10)(*(float *)(gen_frame + 0x40)));
      fVar2 = ((float)GEN_TOF((fVar13 * ((float10)*(float *)(iVar9 + 0xc4) -
                               (float10)*(float *)(iVar9 + 0xc0)) +
                     (float10)*(float *)(iVar9 + 0xc0))));
      (*(float *)(gen_frame + 0x98)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar9 + 200) +
                     fVar13 * ((float10)*(float *)(iVar9 + 0xcc) - (float10)*(float *)(iVar9 + 200))
                     )));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x68)) + 4)) = fVar3;
      fVar4 = ((float)GEN_TOF(((float10)*(float *)(iVar9 + 0xb0) +
                     fVar13 * ((float10)*(float *)(iVar9 + 0xb4) - (float10)*(float *)(iVar9 + 0xb0)
                              ))));
      fVar5 = ((float)GEN_TOF(((float10)*(float *)(iVar9 + 0xb8) +
                     fVar13 * ((float10)*(float *)(iVar9 + 0xbc) - (float10)*(float *)(iVar9 + 0xb8)
                              ))));
      (*(float *)(gen_frame + 0x90)) = fVar5;
      fVar14 = (float10)fVar3;
      fVar15 = (float10)fVar2;
      fVar2 = (float)(fVar14 - fVar15);
      (*(float *)(gen_frame + 0x74)) = fVar2;
      fVar3 = (float)(fVar15 + fVar14);
      (*(float *)(gen_frame + 0x80)) = fVar3;
      fVar6 = ((float)GEN_TOF((fVar13 * (float10)*(float *)(iVar12 + 0xac) + (float10)(*(float *)(gen_frame + 0x2c)))));
      fVar13 = ((float10)GEN_TOD(fcos((float10)fVar6)));
      fVar7 = (float)fVar13;
      (*(float *)(gen_frame + 0x98)) = fVar7;
      fVar14 = ((float10)GEN_TOD(fsin((float10)fVar6)));
      fVar6 = ((float)GEN_TOF(-(float10)(float)fVar14));
      fVar13 = (float10)0;
      fVar17 = (float10)fVar4 * fVar13;
      fVar15 = (float10)fVar7;
      fVar16 = (float10)fVar2;
      fVar2 = ((float)GEN_TOF(((fVar16 * (float10)fVar6 + fVar17) + fVar15 * fVar13)));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x68)) + 4)) = fVar2;
      (*(double *)(gen_frame + 0x68)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar2),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x68)) + 0))));
      fVar4 = ((float)GEN_TOF(((fVar16 * fVar13 + (float10)fVar4) + (float10)(*(double *)(gen_frame + 0x10)))));
      (*(float *)(gen_frame + 0x98)) = fVar4;
      fVar14 = (float10)(float)fVar14 * fVar13;
      fVar7 = ((float)GEN_TOF(((fVar15 * fVar16 + fVar17) + fVar14)));
      (*(float *)(gen_frame + 0x74)) = fVar7;
      fVar16 = (float10)fVar3;
      (*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF((((float10)fVar5 * fVar13 + fVar15 * fVar16) + fVar14)));
      (*(float *)(gen_frame + 0x84)) = ((float)GEN_TOF((((float10)fVar5 + fVar16 * fVar13) + (float10)(*(double *)(gen_frame + 0x10)))));
      (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF(((fVar16 * (float10)fVar6 + (float10)fVar5 * fVar13) + fVar15 * fVar13)));
      fVar13 = (float10)fVar4;
      fVar14 = (float10)fVar7;
      fVar15 = (float10)fVar2;
      (*(float *)(gen_frame + 0x74)) = ((float)GEN_TOF((((fVar14 * (float10)*(float *)(param_1 + 4U) +
                          (float10)*(float *)(param_1 + 0x10) * fVar13) +
                         (float10)*(float *)(param_1 + 0x1c) * fVar15) +
                        (float10)*(float *)(param_1 + 0x28))));
      (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(((fVar15 * (float10)*(float *)(param_1 + 0x20) +
                         (fVar13 * (float10)*(float *)(param_1 + 0x14) +
                         (float10)*(float *)(param_1 + 8) * fVar14)) +
                        (float10)*(float *)(param_1 + 0x2c))));
      (*(float *)(gen_frame + 0x7c)) = ((float)GEN_TOF((((fVar14 * (float10)*(float *)(param_1 + 0xc) +
                          fVar13 * (float10)*(float *)(param_1 + 0x18)) +
                         fVar15 * (float10)*(float *)(param_1 + 0x24)) +
                        (float10)*(float *)(param_1 + 0x30))));
      F_00981170(&(*(float *)(gen_frame + 0x80)),(uint)&(*(float *)(gen_frame + 0x80)),param_1 + 4U);
      (*(float *)(gen_frame + 0x90)) = 0.0;
      if (0 < (*(int *)(gen_frame + 0x70))) {
        (*(float *)(gen_frame + 0x18)) = (float)((*(int *)(gen_frame + 0x70)) + -1);
        (*(double *)(gen_frame + 0x68)) = (double)(*(float *)(gen_frame + 0x80)) - (double)(*(float *)(gen_frame + 0x74));
        fVar2 = (*(float *)(gen_frame + 0x84)) - (*(float *)(gen_frame + 0x78));
        fVar3 = (*(float *)(gen_frame + 0x88)) - (*(float *)(gen_frame + 0x7c));
        (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x44)) - (float10)(*(float *)(gen_frame + 0x58)));
        (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x48)) - (float10)(*(float *)(gen_frame + 0x5c)));
        (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) - (float10)(*(float *)(gen_frame + 0x60)));
        (*(float *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0x50)) - (float10)(*(float *)(gen_frame + 0x64)));
        do {
          fVar14 = (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x90)));
          fVar13 = (float10)(*(float *)(gen_frame + 0x18));
          fVar15 = (float10)(float)(fVar14 / fVar13);
          fVar16 = (float10)((float)GEN_TOF((((float10)((float)GEN_TOF(((fVar15 * fVar15) * (fVar15 * fVar15)))) -
                                    fVar15) * (float10)*(float *)(iVar12 + 0xa8) + fVar15)));
          *pfVar11 = (float)((float10)(*(double *)(gen_frame + 0x68)) * fVar16 + (float10)(*(float *)(gen_frame + 0x74)));
          pfVar11[1] = (float)((float10)fVar2 * fVar16 + (float10)(*(float *)(gen_frame + 0x78)));
          pfVar11[2] = (float)(fVar16 * (float10)fVar3 + (float10)(*(float *)(gen_frame + 0x7c)));
          (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x30)) * fVar15);
          (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar15);
          (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x38)) * fVar15);
          (*(float *)(gen_frame + 0x28)) = (float)(fVar15 * (float10)(*(float *)(gen_frame + 0x3c)));
          (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x30)) * fVar15) + (float10)(*(float *)(gen_frame + 0x58)))));
          (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x34)) * fVar15) + (float10)(*(float *)(gen_frame + 0x5c)))));
          (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x38)) * fVar15) + (float10)(*(float *)(gen_frame + 0x60)))));
          (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)(float)(fVar15 * (float10)(*(float *)(gen_frame + 0x3c))) + (float10)(*(float *)(gen_frame + 0x64)))));
          uVar18 = F_0099aa20(&(*(float *)(gen_frame + 0x0)));
          *(ulonglong *)(pfVar11 + 4) = uVar18;
          pfVar11[3] = *((float *)GEN_TOP((*(int *)(param_1 + 0x304) + 0xa0)));
          pfVar11[10] = *((float *)GEN_TOP((*(int *)(param_1 + 0x304) + 0xa4)));
          dVar8 = *(double *)&REFG(undefined, 0x10912a8);
          iVar12 = *(int *)(param_1 + 0x304);
          iVar9 = 0;
          param_2 = 0;
          if ('\0' < *(char *)(iVar12 + 0xd0)) {
            fVar14 = (float10)(float)(fVar14 / fVar13) - (float10)REFG(double, 0x1088108);
            fVar13 = (float10)(*(float *)(gen_frame + 0x94)) - (float10)REFG(double, 0x1088108);
            puVar10 = (undefined2 *)((int)pfVar11 + 0x1a);
            do {
              iVar12 = *(int *)(param_1 + 0x304);
              pfVar1 = (float *)(iVar12 + 4 + iVar9);
              param_2 = param_2 + 1;
              iVar9 = iVar9 + 0x20;
              (*(float *)(gen_frame + 0x98)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
              iVar12 = (int)TRUNC((double)((float)GEN_TOF((((float10)*(float *)(iVar12 + -0x20 + iVar9) *
                                                   fVar14 + (float10)*pfVar1 * fVar13) +
                                                 (float10)*(float *)(iVar12 + -0x14 + iVar9)))) *
                                  dVar8);
              (*(float *)(gen_frame + 0x98)) = gen_bits2f(iVar12);
              (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x98)) + 0)) = (undefined2)iVar12;
              puVar10[-1] = (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x98)) + 0));
              iVar12 = *(int *)(param_1 + 0x304);
              (*(float *)(gen_frame + 0x98)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
              fVar4 = gen_bits2f((int)TRUNC((double)((float)GEN_TOF((((float10)*(float *)(iVar12 + -0x10 +
                                                                                iVar9) * fVar14 +
                                                            (float10)*(float *)(iVar12 + -0xc +
                                                                               iVar9) * fVar13) +
                                                           (float10)*(float *)(iVar12 + -4 + iVar9))))
                                            * dVar8));
              (*(float *)(gen_frame + 0x98)) = fVar4;
              fVar4 = (*(float *)(gen_frame + 0x98));
              (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x98)) + 0)) = (undefined2)(uint)gen_fl2bits(fVar4);
              *puVar10 = (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x98)) + 0));
              iVar12 = *(int *)(param_1 + 0x304);
              puVar10 = puVar10 + 2;
              (*(float *)(gen_frame + 0x98)) = fVar4;
            } while ((int)param_2 < (int)*(char *)(iVar12 + 0xd0));
          }
          iVar9 = (int)gen_fl2bits((*(float *)(gen_frame + 0x90))) + 1;
          pfVar11 = pfVar11 + 0xc;
          (*(float *)(gen_frame + 0x90)) = gen_bits2f(iVar9);
        } while (iVar9 < (*(int *)(gen_frame + 0x70)));
      }
      iVar9 = (*(int *)(gen_frame + 0x8c)) + 1;
      (*(int *)(gen_frame + 0x8c)) = iVar9;
    } while (iVar9 < (*(int *)(gen_frame + 0x54)));
  }
  return 0;
}

/* ref: FUN_009a2040 */
uint F_009a2040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a2040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00990ad0(param_2);
  return uVar1;
}

/* ref: Client::Graphics::Vfx::VfxResourceObject::vf1 */
uint F_009a2060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9a2060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_004ff2f0(((undefined1 *)(gen_frame + 0x34)));
  F_00503ef0(((undefined1 *)(gen_frame + 0x34)),param_1);
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  F_004ff3e0(&(*(undefined4 *)(gen_frame + 0x38)),param_1);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5;
  (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x24)) = 5000;
  (*(undefined2 *)(gen_frame + 0x28)) = 0x100;
  (*(undefined4 *)(gen_frame + 0x2b)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x2a)) = 0;
  uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),param_1,&(*(undefined4 *)(gen_frame + 0xc)),0,0);
  if (uVar2 != 0) {
    F_0050b500(param_2,uVar2);
    if (REFG(undefined * PTR32, 0x14a0a14) != (code *)0x0) {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
      if (puVar3 != (undefined4 *)0x0) {
        piVar1 = *(int * PTR32 *)(uVar2 + 0xa0);
        *puVar3 = (*(undefined * PTR32 (*)[3])REFP(0x10de620));
        puVar3[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
        puVar3[2] = piVar1;
        puVar3[3] = 1;
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        }
        *puVar3 = (*(undefined * PTR32 (*)[3])REFP(0x10deeb4));
        puVar3[1] = (*(undefined * PTR32 (*)[1])REFP(0x10deeac));
        return (uint)puVar3;
      }
    }
  }
  return 0;
}

/* ref: FUN_009a2150 */
uint F_009a2150(void)
{
  GEN_ENTER(0x9a2150u, 0u, 0u, 0u, 0u);
  undefined * this;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  float * pfVar4;
  uint uVar5;
  int iVar6;
  
  this_00 = REFG(void * PTR32, 0x1371284);
  this = REFG(void * PTR32, 0x1371280);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a09a8) + 0x90))))(REFG(int * PTR32, 0x14a09a8));
  uVar5 = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a09a8) + 0x94))))(REFG(int * PTR32, 0x14a09a8),uVar5);
      if (uVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = uVar3 - 0x90;
      }
      uVar3 = F_0065d500(this_00,iVar6);
      pfVar4 = (float *)(iVar6 + 0x18);
      if ((float10)*(float *)(iVar6 + 0x18) < (float10)*(float *)(iVar6 + 0x14)) {
        pfVar4 = (float *)(iVar6 + 0x14);
      }
      if (!((float10)*(float *)(iVar6 + 0x1c) < (float10)*pfVar4)) {
        pfVar4 = (float *)(iVar6 + 0x1c);
      }
      if (*(double *)&REFG(undefined, 0x109cac8) <
          (double)((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x20) * (float10)*pfVar4)))) {
        bVar1 = (byte)*(undefined2 *)(iVar6 + 8);
        if (((bVar1 >> 2 & 1) != 0) ||
           (bVar1 = bVar1 >> 3,
           uVar3 = (uint)CONCAT11((char)((ushort)*(undefined2 *)(iVar6 + 8) >> 8),bVar1),
           (bVar1 & 1) != 0)) {
          uVar3 = F_0065d950(this,iVar6);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return uVar3;
}

/* ref: FUN_009a2220 */
uint F_009a2220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a2220u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar4 = 0;
  ((short *)(gen_frame + 0x48))[0] = 0;
  ((short *)(gen_frame + 0x48))[1] = 0;
  ((short *)(gen_frame + 0x48))[2] = 0;
  ((short *)(gen_frame + 0x48))[3] = 0;
  ((short *)(gen_frame + 0x48))[4] = 0;
  ((short *)(gen_frame + 0x48))[5] = 0;
  ((short *)(gen_frame + 0x48))[6] = 0;
  ((short *)(gen_frame + 0x48))[7] = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      iVar2 = *piVar5;
      iVar3 = piVar5[1];
      ((char *)(gen_frame + 0x4))[(int)(uVar4 * 4)] = (char)*piVar5;
      ((char *)(gen_frame + 0x4))[(int)(uVar4 * 4 + 1)] = (char)((short *)(gen_frame + 0x48))[(int)(iVar2)];
      cVar1 = (&REFG(undefined, 0x10df6b0))[iVar3 * 4];
      ((short *)(gen_frame + 0x48))[(int)(iVar2)] = ((short *)(gen_frame + 0x48))[(int)(iVar2)] + *(short *)(&REFG(undefined, 0x10df698) + iVar3 * 2);
      ((char *)(gen_frame + 0x4))[(int)(uVar4 * 4 + 2)] = cVar1;
      uVar4 = uVar4 + 1;
      ((char *)(gen_frame + 0x4))[(int)(uVar4 * 4 + -1)] = *(char *)(&REFG(undefined * PTR32, 0x10df680) + piVar5[2]) + (char)piVar5[3];
      piVar5 = piVar5 + 4;
    } while (uVar4 < param_2);
  }
  piVar5 = (int *)F_004deb40(REFG(void * PTR32, 0x1370b90),((char *)(gen_frame + 0x4)),param_2);
  if (piVar5 != (int *)0x0) {
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) ||
       (puVar6 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x10,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0))),
       puVar6 == (undefined4 *)0x0)) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *puVar6 = (*(undefined * PTR32 (*)[3])REFP(0x10dee6c));
      puVar6[1] = (*(undefined * PTR32 (*)[1])REFP(0x10de728));
      puVar6[2] = piVar5;
      puVar6[3] = 1;
      ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5);
      *puVar6 = (*(undefined * PTR32 (*)[3])REFP(0x10df674));
      puVar6[1] = (*(undefined * PTR32 (*)[1])REFP(0x10df66c));
    }
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return (uint)puVar6;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf9 */
uint F_009a2340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a2340u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint * puVar2;
  
  (*(undefined * PTR32 *)&gen_args[0])[0x26d] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
  puVar2 = (uint *)F_004d4a30(&(*(undefined4 *)&gen_args[1]),((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) == (undefined1)0x0) + 2,
                                (uint)(byte)(*(undefined * PTR32 *)&gen_args[0])[0x26c],*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x268))),0,
                                (float)(float10)0,(float)(float10)0);
  uVar1 = *puVar2;
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0x3c))) =
       uVar1 & 0x7fffffff;
  return uVar1 & 0x7fffffff;
}

/* ref: Apricot::ApricotDeviceListenner::vf10 */
uint F_009a23a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a23a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined4 in_EAX = 0;
  uint * puVar2;
  
  (*(undefined * PTR32 *)&gen_args[0])[0x26c] = (undefined1)((*(int *)&gen_args[1]) != 0);
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x268))) = (uint)((*(int *)&gen_args[1]) == 2);
  puVar2 = (uint *)F_004d4a30(&(*(int *)&gen_args[1]),((*(undefined * PTR32 *)&gen_args[0])[0x26d] == (undefined1)0x0) + 2,
                                CONCAT31((int3)((uint)in_EAX >> 8),(*(int *)&gen_args[1]) != 0),
                                (uint)((*(int *)&gen_args[1]) == 2),0,(float)(float10)0,(float)(float10)0);
  uVar1 = *puVar2;
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0x3c))) =
       uVar1 & 0x7fffffff;
  return uVar1 & 0x7fffffff;
}

/* ref: Apricot::ApricotDeviceListenner::vf12 */
uint F_009a2410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9a2410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * this_00;
  
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(REFG(int, 0x1371288) + 0x1c);
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
    puVar3 = (undefined4 *)F_004d4760(this_00,0x3c);
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    *puVar3 = 9;
    puVar3[1] = uVar1;
    puVar3[4] = uVar2;
  }
  else {
    if (param_1 - 1U != 0) {
      return param_1 - 1U;
    }
    uVar1 = *(undefined4 *)(param_2 + 8);
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
    uVar2 = *((undefined4 *)GEN_TOP((REFG(int, 0x1371288) + 0x110 + (*(uint *)((int)this_00 + 8) >> 0x13 & 0xf) * 4)));
    puVar3 = (undefined4 *)F_004d4760(this_00,0x3c);
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    *puVar3 = 9;
    puVar3[1] = uVar1;
    puVar3[4] = uVar2;
  }
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[5] = 0x80000000;
  puVar3[6] = 0;
  uVar4 = F_004d4810(this_00,puVar3);
  return uVar4;
}

/* ref: Apricot::ApricotDeviceListenner::vf25 */
unsigned int F_009a24e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9a24e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  byte bVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    if (param_1 == 0) {
      uVar3 = 1;
    }
    else if (param_1 == 1) {
      uVar3 = 2;
    }
    else {
      if (param_1 != 2) {
        return 0;
      }
      uVar3 = 5;
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
    puVar2 = (undefined4 *)F_004d4760(this_00,0x48);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 4;
      puVar2[1] = uVar3;
      puVar2[2] = 0;
      puVar2[3] = param_2;
      bVar1 = F_004dc830(this_00,puVar2 + 4);
      if (bVar1 != 0) {
        F_004d4810(this_00,puVar2);
      }
    }
  }
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf26 */
unsigned int F_009a2570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9a2570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 uVar1;
  
  if ((param_4 != 0) && (param_3 != 0)) {
    if (param_1 == 0) {
      uVar1 = 1;
    }
    else if (param_1 == 1) {
      uVar1 = 2;
    }
    else {
      if (param_1 != 2) {
        return 0;
      }
      uVar1 = 5;
    }
    F_004d4bf0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))),uVar1
                 ,0,0,param_4,param_2,param_3);
  }
  return 0;
}

/* ref: FUN_009a2a50 */
uint F_009a2a50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9a2a50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined1 gen_out[0x4];
  float fVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00992610(param_1,param_2);
  *((undefined4 *)GEN_TOP((param_1 + *(int *)(param_1 + 0x24) * 0x30))) = *(undefined4 *)&REFG(undefined, 0x10dcc1c);
  iVar2 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x10 + iVar2 * 0x30) = *(undefined4 *)(param_1 + 0x150);
  iVar2 = param_1 + 0x10 + iVar2 * 0x30;
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x158);
  if ((double)*(float *)(param_1 + 0x18) <= *(double *)&REFG(undefined, 0x1088070)) {
    *(float *)(param_1 + 0x1c) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x20) * (float10)param_2 +
                (float10)*(float *)(param_1 + 0x1c))));
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x1c) * (float10)param_2 +
                 (float10)*(float *)(param_1 + 0x18))));
  *(float *)(param_1 + 0x18) = fVar1;
  if ((float10)fVar1 <= (float10)*(float *)&REFG(undefined, 0x14a0ac0)) {
    F_00c47745(uVar3 ^ (uint)(uint)(gen_out + 0x0));
    return 1;
  }
  F_00c47745(uVar3 ^ (uint)(uint)(gen_out + 0x0));
  return 0;
}

/* ref: FUN_009a2b10 */
uint F_009a2b10(unsigned int gen_a0)
{
  GEN_ENTER(0x9a2b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198) * (float10)*(double *)&REFG(undefined, 0x10943d8))));
  piVar4 = (int *)((int)this + 0x78);
  iVar3 = 0x30;
  uVar2 = REFG(undefined4, 0x137104c);
  do {
    if (*piVar4 != 0) {
      uVar2 = F_009a2a50(*piVar4,fVar1);
      if ((char)uVar2 == '\0') {
        *(int *)((int)this + 0x1f8) = *(int *)((int)this + 0x1f8) + -1;
        uVar2 = 0;
        if (*piVar4 != 0) {
          uVar2 = F_00406ad0(*piVar4);
        }
        *piVar4 = 0;
      }
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = (int *)((int)this + 0x138);
  iVar3 = 0x30;
  do {
    if (*piVar4 != 0) {
      uVar2 = F_00993580(*piVar4,fVar1);
      if ((char)uVar2 == '\0') {
        *(int *)((int)this + 0x1f8) = *(int *)((int)this + 0x1f8) + -1;
        uVar2 = 0;
        if (*piVar4 != 0) {
          uVar2 = F_00406ad0(*piVar4);
        }
        *piVar4 = 0;
      }
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar2;
}

/* ref: FUN_009a2bc0 */
uint F_009a2bc0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x9a2bc0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm5 = (float)gen_a2;
  float in_xmm6 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int * piVar1;
  float fVar2;
  undefined4 uVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 * puVar6;
  uint uVar7;
  ushort * puVar8;
  uint uVar9;
  uint * puVar10;
  int iVar11;
  int iVar12;
  undefined4 * puVar13;
  ushort uVar14;
  ushort uVar15;
  float10 fVar16;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  iVar12 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *((uint *)GEN_TOP((*(int *)(iVar12 + 0x1a8) + 8))) =
       *((uint *)GEN_TOP((*(int *)(iVar12 + 0x1a8) + 8))) & 0x7ffffff | 0xf0000000;
  *((uint *)GEN_TOP((*(int *)(iVar12 + 0x1a8) + 8))) =
       *((uint *)GEN_TOP((*(int *)(iVar12 + 0x1a8) + 8))) & 0xfe7fffff | 0x6000000;
  *((uint *)GEN_TOP((*(int *)(iVar12 + 0x1a8) + 8))) =
       *((uint *)GEN_TOP((*(int *)(iVar12 + 0x1a8) + 8))) & 0xffd7ffff | 0x500000;
  (*(int *)(gen_frame + 0x54)) = iVar12;
  uVar9 = *(uint *)(iVar12 + 0x1a8);
  *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) & 0xfffffffe | 0x7fffe;
  (*(int *)(gen_frame + 0x68)) = in_ecx;
  if (*(int *)(in_ecx + 0x1f8) != 0) {
    iVar12 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
    (*(int *)(gen_frame + 0x44)) = iVar12;
    fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar12 + 0xa4) * (float10)REFG(double, 0x1088108))));
    (*(float *)(gen_frame + 0x5c)) = fVar2;
    fVar16 = F_00c4d590(in_xmm3,in_xmm5,in_xmm6,(float10)fVar2);
    (*(float *)(gen_frame + 0x5c)) = (float)fVar16;
    puVar6 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x70)),iVar12 + 0x10,iVar12 + 0x50);
    iVar12 = (*(int *)(gen_frame + 0x68));
    puVar13 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar6 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)(iVar12 + 0x68),0,0x40,2);
    iVar12 = (*(int *)(gen_frame + 0x68));
    uVar9 = 0;
    if (puVar6 != (undefined4 *)0x0) {
      puVar13 = ((undefined4 *)(gen_frame + 0x0));
      for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar6 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar6 = puVar6 + 1;
      }
      *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x68)) + 0x68) + 0x24))) = 0;
      uVar7 = F_004d68c0(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x68)) + 0x6c),0,0x38400,2);
      (*(uint *)(gen_frame + 0x40)) = uVar7;
      uVar9 = 0;
      if (uVar7 != 0) {
        puVar8 = (ushort *)F_004d6a30(*(undefined * PTR32 *)(iVar12 + 0x70),0,0xd800,2);
        if (puVar8 != (ushort *)0x0) {
          F_00668a10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xb4)),0x17);
          if ((*(undefined * PTR32 *)(gen_frame + 0xb8)) == (undefined *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0xb8)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xb4)));
          }
          iVar11 = (*(int *)(gen_frame + 0x54));
          *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x54)) + 0x1a8) + 0x60))) = uVar9;
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x54)) + 0x1a8) + 0xa8 + *(int *)((*(int *)(gen_frame + 0x68)) + 0x60) * 4))) =
               *(undefined4 *)((*(int *)(gen_frame + 0x68)) + 0x68);
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x54)) + 0x1a8) + 0x4c))) = *(undefined4 *)((*(int *)(gen_frame + 0x68)) + 0x74);
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x54)) + 0x1a8) + 0x48))) = *(undefined4 *)((*(int *)(gen_frame + 0x68)) + 0x70);
          uVar3 = *(undefined4 *)((*(int *)(gen_frame + 0x68)) + 0x6c);
          iVar12 = *(int *)((*(int *)(gen_frame + 0x54)) + 0x1a8);
          *(uint *)(iVar12 + 0x6c) = *(uint *)(iVar12 + 0x6c) & 0x800000ff;
          *(undefined1 *)(iVar12 + 0x6c) = 0x18;
          *(uint *)(iVar12 + 0x6c) = *(uint *)(iVar12 + 0x6c) & 0x7fffffff;
          *(undefined4 *)(iVar12 + 0x68) = uVar3;
          (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x1302354) | 0x7800001;
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x54)) + 0x1a8) + 0x2ac + *(int *)((*(int *)(gen_frame + 0x68)) + 100) * 8))) = 0x36a
          ;
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x54)) + 0x1a8) + 0x50))) = 0xd;
          puVar10 = (uint *)F_004d4a30(&(*(int * PTR32 *)(gen_frame + 0x6c)),3,0,0,0,(float)(float10)0,(float)(float10)0);
          *((uint *)GEN_TOP((*(int *)(iVar11 + 0x1a8) + 0x3c))) = *puVar10 & 0x7fffffff;
          uVar14 = 0;
          (*(uint *)(gen_frame + 0x58)) = 0;
          (*(int *)(gen_frame + 0x48)) = 0;
          (*(int * PTR32 *)(gen_frame + 0x50)) = (int *)((*(int *)(gen_frame + 0x68)) + 0x58);
          do {
            (*(int * PTR32 *)(gen_frame + 0x60)) = (int *)((*(int *)(gen_frame + 0x68)) + 0x78);
            (*(uint *)(gen_frame + 0x64)) = 0;
            (*(int * PTR32 *)(gen_frame + 0x6c)) = (int *)0x30;
            do {
              if (*(*(int * PTR32 *)(gen_frame + 0x60)) != 0) {
                F_00992c10(*(*(int * PTR32 *)(gen_frame + 0x60)),(*(int *)(gen_frame + 0x44)) + 0x90,(*(float *)(gen_frame + 0x5c)),(*(int *)(gen_frame + 0x48)),
                             (*(uint *)(gen_frame + 0x40)) + (uint)uVar14 * 0x18);
                (*(uint *)(gen_frame + 0x64)) = (*(uint *)(gen_frame + 0x64)) + 0x11a;
                uVar5 = uVar14 + 1;
                iVar12 = 0x2f;
                do {
                  uVar15 = uVar14;
                  *puVar8 = uVar15;
                  puVar8[1] = uVar5;
                  puVar8[2] = uVar5 + 1;
                  puVar8[3] = uVar5 + 1;
                  puVar8[4] = uVar5;
                  puVar8[5] = uVar5 + 2;
                  puVar8 = puVar8 + 6;
                  uVar5 = uVar5 + 2;
                  iVar12 = iVar12 + -1;
                  uVar14 = uVar15 + 2;
                } while (iVar12 != 0);
                uVar14 = uVar15 + 4;
              }
              uVar9 = (*(uint *)(gen_frame + 0x4c));
              (*(int * PTR32 *)(gen_frame + 0x60)) = (*(int * PTR32 *)(gen_frame + 0x60)) + 1;
              piVar1 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x6c)) + -1);
              (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar1;
            } while (piVar1 != (int *)0x0);
            if ((short)(*(uint *)(gen_frame + 0x64)) != 0) {
              (*(uint *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x4c)) & 0xffa88541 | 0x288540;
              *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x54)) + 0x1a8) + 0x38))) = uVar9 & 0x7a88541 | 0x288540;
              *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x54)) + 0x1a8) + 0x2a8 + *(int *)((*(int *)(gen_frame + 0x68)) + 100) * 8))) =
                   *(undefined4 *)((*(int * PTR32 *)(gen_frame + 0x50))[-2] + 0xfc);
              (*(int * PTR32 *)(gen_frame + 0x6c)) = *(int * PTR32 *)((*(int *)(gen_frame + 0x54)) + 0x1a8);
              puVar6 = (undefined4 *)F_004d4760(*(int * PTR32 *)((*(int *)(gen_frame + 0x54)) + 0x1a8),0x54);
              (*(int * PTR32 *)(gen_frame + 0x60)) = puVar6;
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = 5;
                puVar6[2] = 0;
                puVar6[3] = 0;
                puVar6[4] = (uint)uVar14;
                puVar6[6] = (*(uint *)(gen_frame + 0x64)) & 0xffff;
                puVar6[1] = 5;
                puVar6[5] = (*(uint *)(gen_frame + 0x58)) & 0xffff;
                bVar4 = F_004dc830((*(int * PTR32 *)(gen_frame + 0x6c)),puVar6 + 7);
                if (bVar4 != 0) {
                  F_004d4810((*(int * PTR32 *)(gen_frame + 0x6c)),(*(int * PTR32 *)(gen_frame + 0x60)));
                }
              }
              (*(uint *)(gen_frame + 0x58)) = (*(uint *)(gen_frame + 0x58)) + (*(uint *)(gen_frame + 0x64));
            }
            (*(int * PTR32 *)(gen_frame + 0x6c)) = (int *)((*(int *)(gen_frame + 0x68)) + 0x138);
            (*(uint *)(gen_frame + 0x64)) = 0;
            (*(int * PTR32 *)(gen_frame + 0x60)) = (undefined4 *)0x30;
            do {
              if (*(*(int * PTR32 *)(gen_frame + 0x6c)) != 0) {
                F_00993780(*(*(int * PTR32 *)(gen_frame + 0x6c)),(*(int *)(gen_frame + 0x44)) + 0x90,(*(float *)(gen_frame + 0x5c)),(*(int *)(gen_frame + 0x48)),
                             (*(uint *)(gen_frame + 0x40)) + (uint)uVar14 * 0x18);
                (*(uint *)(gen_frame + 0x64)) = (*(uint *)(gen_frame + 0x64)) + 6;
                *puVar8 = uVar14;
                puVar8[1] = uVar14 + 1;
                puVar8[2] = uVar14 + 2;
                puVar8[3] = uVar14 + 2;
                puVar8[4] = uVar14 + 1;
                puVar8[5] = uVar14 + 3;
                puVar8 = puVar8 + 6;
                uVar14 = uVar14 + 4;
              }
              uVar9 = (*(uint *)(gen_frame + 0x4c));
              (*(int * PTR32 *)(gen_frame + 0x6c)) = (*(int * PTR32 *)(gen_frame + 0x6c)) + 1;
              puVar6 = (undefined4 *)((int)(*(int * PTR32 *)(gen_frame + 0x60)) + -1);
              (*(int * PTR32 *)(gen_frame + 0x60)) = puVar6;
            } while (puVar6 != (undefined4 *)0x0);
            if ((short)(*(uint *)(gen_frame + 0x64)) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x54)) + 0x1a8) + 0x50))) = 0xd;
              (*(uint *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x4c)) & 0xff880141 | 0x80140;
              *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x54)) + 0x1a8) + 0x38))) = uVar9 & 0x7880141 | 0x80140;
              *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x54)) + 0x1a8) + 0x2a8 + *(int *)((*(int *)(gen_frame + 0x68)) + 100) * 8))) =
                   *(undefined4 *)(*(*(int * PTR32 *)(gen_frame + 0x50)) + 0xfc);
              (*(int * PTR32 *)(gen_frame + 0x6c)) = *(int * PTR32 *)((*(int *)(gen_frame + 0x54)) + 0x1a8);
              puVar6 = (undefined4 *)F_004d4760(*(int * PTR32 *)((*(int *)(gen_frame + 0x54)) + 0x1a8),0x54);
              (*(int * PTR32 *)(gen_frame + 0x60)) = puVar6;
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = 5;
                puVar6[2] = 0;
                puVar6[3] = 0;
                puVar6[4] = (uint)uVar14;
                puVar6[6] = (*(uint *)(gen_frame + 0x64)) & 0xffff;
                puVar6[1] = 5;
                puVar6[5] = (*(uint *)(gen_frame + 0x58)) & 0xffff;
                bVar4 = F_004dc830((*(int * PTR32 *)(gen_frame + 0x6c)),puVar6 + 7);
                if (bVar4 != 0) {
                  F_004d4810((*(int * PTR32 *)(gen_frame + 0x6c)),(*(int * PTR32 *)(gen_frame + 0x60)));
                }
              }
              (*(uint *)(gen_frame + 0x58)) = (*(uint *)(gen_frame + 0x58)) + (*(uint *)(gen_frame + 0x64));
            }
            (*(int * PTR32 *)(gen_frame + 0x50)) = (*(int * PTR32 *)(gen_frame + 0x50)) + 1;
            iVar12 = (*(int *)(gen_frame + 0x48)) + 1;
            (*(int *)(gen_frame + 0x48)) = iVar12;
          } while (iVar12 < 2);
          F_004d6ae0(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x68)) + 0x70));
          (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xb4)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
          F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xb4)));
          iVar12 = (*(int *)(gen_frame + 0x68));
        }
        uVar9 = F_004d6970(*(undefined * PTR32 *)(iVar12 + 0x6c));
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return uVar9;
}

/* ref: FUN_009a3130 */
byte F_009a3130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9a3130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(int *)((int)this + 0x1fc) == 0) && (param_1 != param_2)) {
    iVar3 = 0;
    piVar1 = (int *)((int)this + 0x78);
    do {
      if (*piVar1 == 0) {
        *(int *)((int)this + 0x1f8) = *(int *)((int)this + 0x1f8) + 1;
        uVar2 = F_00406b90(0x160,0,0);
        if (uVar2 != 0) {
          uVar2 = F_009a28f0(uVar2,param_1,param_2);
          *(uint *)((int)this + iVar3 * 4 + 0x78) = uVar2;
          return 1;
        }
        *(undefined4 *)((int)this + iVar3 * 4 + 0x78) = 0;
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < 0x30);
  }
  return 0;
}

/* ref: FUN_009a36c0 */
uint F_009a36c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9a36c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined4 uVar1;
  undefined * pvVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  int iVar8;
  undefined4 * puVar9;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  iVar8 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *((uint *)GEN_TOP((*(int *)(iVar8 + 0x1a8) + 8))) =
       *((uint *)GEN_TOP((*(int *)(iVar8 + 0x1a8) + 8))) & 0x7ffffff | 0xf0000000;
  *((uint *)GEN_TOP((*(int *)(iVar8 + 0x1a8) + 8))) =
       *((uint *)GEN_TOP((*(int *)(iVar8 + 0x1a8) + 8))) & 0xfe7fffff | 0x6000000;
  *((uint *)GEN_TOP((*(int *)(iVar8 + 0x1a8) + 8))) =
       *((uint *)GEN_TOP((*(int *)(iVar8 + 0x1a8) + 8))) & 0xffd7ffff | 0x500000;
  (*(int *)(gen_frame + 0x5c)) = iVar8;
  uVar6 = *(uint *)(iVar8 + 0x1a8);
  *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) & 0xfffffffe | 0x7fffe;
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = this;
  if (*(int *)((int)this + 0x290) != 0) {
    iVar8 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
    (*(int *)(gen_frame + 0x48)) = iVar8;
    puVar4 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x60)),iVar8 + 0x10,iVar8 + 0x50);
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x58));
    puVar9 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)pvVar2 + 0x80),0,0x40,2);
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x58));
    uVar6 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar9 = ((undefined4 *)(gen_frame + 0x0));
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar4 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar4 = puVar4 + 1;
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x80) + 0x24))) = 0;
      uVar5 = F_004d68c0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x84),0,0x5000,2);
      (*(uint *)(gen_frame + 0x44)) = uVar5;
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = F_004d6a30(*(undefined * PTR32 *)((int)pvVar2 + 0x88),0,0x600,2);
        (*(uint *)(gen_frame + 0x4c)) = uVar6;
        if (uVar6 != 0) {
          F_00668a10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xa4)),0x18);
          if ((*(undefined * PTR32 *)(gen_frame + 0xa8)) == (undefined *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0xa8)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xa4)));
          }
          iVar3 = (*(int *)(gen_frame + 0x5c));
          *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x5c)) + 0x1a8) + 0x60))) = uVar6;
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x5c)) + 0x1a8) + 0xa8 + *(int *)((int)pvVar2 + 0x70) * 4))) =
               *(undefined4 *)((int)pvVar2 + 0x80);
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x5c)) + 0x1a8) + 0x4c))) = *(undefined4 *)((int)pvVar2 + 0x8c);
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x5c)) + 0x1a8) + 0x48))) = *(undefined4 *)((int)pvVar2 + 0x88);
          iVar8 = *(int *)((*(int *)(gen_frame + 0x5c)) + 0x1a8);
          uVar1 = *(undefined4 *)((int)pvVar2 + 0x84);
          *(uint *)(iVar8 + 0x6c) = *(uint *)(iVar8 + 0x6c) & 0x800000ff;
          *(undefined1 *)(iVar8 + 0x6c) = 0x28;
          *(uint *)(iVar8 + 0x6c) = *(uint *)(iVar8 + 0x6c) & 0x7fffffff;
          *(undefined4 *)(iVar8 + 0x68) = uVar1;
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x5c)) + 0x1a8) + 0x50))) = 0xd;
          puVar7 = (uint *)F_004d4a30(&(*(int *)(gen_frame + 0x5c)),3,0,0,0,(float)(float10)0,(float)(float10)0);
          *((uint *)GEN_TOP((*(int *)(iVar3 + 0x1a8) + 0x3c))) = *puVar7 & 0x7fffffff;
          puVar7 = (uint *)F_004d4af0(&(*(int *)(gen_frame + 0x5c)),2,0,2,0xd,(float)(float10)0,0,0,0);
          *((uint *)GEN_TOP((*(int *)(iVar3 + 0x1a8) + 0x2ac + *(int *)((int)pvVar2 + 0x74) * 8))) =
               *puVar7 & 0xfffffff;
          puVar7 = (uint *)F_004d4af0(&(*(int *)(gen_frame + 0x5c)),2,2,2,0xd,(float)(float10)0,0,0,0);
          *((uint *)GEN_TOP((*(int *)(iVar3 + 0x1a8) + 0x2ac + *(int *)((int)pvVar2 + 0x78) * 8))) =
               *puVar7 & 0xfffffff;
          puVar7 = (uint *)F_004d4af0(&(*(int *)(gen_frame + 0x5c)),0,0,2,0xd,(float)(float10)0,0,0,0);
          *((uint *)GEN_TOP((*(int *)(iVar3 + 0x1a8) + 0x2ac + *(int *)((int)pvVar2 + 0x7c) * 8))) =
               *puVar7 & 0xfffffff;
          (*(int *)(gen_frame + 0x50)) = 0;
          (*(undefined * PTR32 *)(gen_frame + 0x58)) = (undefined *)0x0;
          (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)((int)pvVar2 + 0x90);
          (*(int *)(gen_frame + 0x5c)) = 0x80;
          do {
            if (*(*(int * PTR32 *)(gen_frame + 0x54)) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x1a8) + 0x2a8 + *(int *)((int)pvVar2 + 0x74) * 8))) =
                   *((undefined4 *)GEN_TOP((*(int *)((int)pvVar2 + *(int *)*(*(int * PTR32 *)(gen_frame + 0x54)) * 0xc + 0x10) + 0xfc)));
              *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x1a8) + 0x2a8 + *(int *)((int)pvVar2 + 0x78) * 8))) =
                   *((undefined4 *)GEN_TOP((*(int *)((int)pvVar2 + *(int *)*(*(int * PTR32 *)(gen_frame + 0x54)) * 0xc + 0x14) + 0xfc)));
              *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x1a8) + 0x2a8 + *(int *)((int)pvVar2 + 0x7c) * 8))) =
                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar2 + (*(int *)*(*(int * PTR32 *)(gen_frame + 0x54)) * 3 + 6) * 4))) + 0xfc)));
              F_009a31b0((undefined *)*(*(int * PTR32 *)(gen_frame + 0x54)),(*(int *)(gen_frame + 0x48)) + 0x90,(*(uint *)(gen_frame + 0x44)),(*(int *)(gen_frame + 0x50)),(*(uint *)(gen_frame + 0x4c)),(*(undefined * PTR32 *)(gen_frame + 0x58)));
              (*(int *)(gen_frame + 0x50)) = (*(int *)(gen_frame + 0x50)) + 4;
              (*(undefined * PTR32 *)(gen_frame + 0x58)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 6);
            }
            (*(int * PTR32 *)(gen_frame + 0x54)) = (*(int * PTR32 *)(gen_frame + 0x54)) + 1;
            iVar8 = (*(int *)(gen_frame + 0x5c)) + -1;
            (*(int *)(gen_frame + 0x5c)) = iVar8;
          } while (iVar8 != 0);
          F_004d6ae0(*(undefined * PTR32 *)((int)pvVar2 + 0x88));
          (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xa4)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
          F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xa4)));
        }
        uVar6 = F_004d6970(*(undefined * PTR32 *)((int)pvVar2 + 0x84));
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xbc)) ^ (uint)(uint)(gen_frame + 0xc0));
  return uVar6;
}

/* ref: FUN_009a3a70 */
uint F_009a3a70(void)
{
  GEN_ENTER(0x9a3a70u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x260];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  byte bVar8;
  int * piVar9;
  float * pfVar10;
  undefined4 * puVar11;
  uint uVar12;
  float * pfVar13;
  undefined4 uVar14;
  uint * puVar15;
  int iVar16;
  uint uVar17;
  undefined4 * puVar18;
  uint uVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float fVar23;
  
  piVar9 = (int *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x250));
  (*(int * PTR32 *)(gen_frame + 0x24c)) = piVar9;
  uVar19 = 0;
  if ((REFG(int, 0x14a06b8) == 0) && (REFG(undefined4, 0x14a0d50) = REFG(undefined4, 0x14a0d50) + 1, REFG(void * PTR32, 0x1379694) != (undefined *)0x0)) {
    pfVar10 = (float *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
    (*(float *)(gen_frame + 0xf0)) = *pfVar10;
    (*(float *)(gen_frame + 0xf4)) = pfVar10[1];
    (*(float *)(gen_frame + 0xf8)) = pfVar10[2];
    (*(uint *)(gen_frame + 0x130)) = 0;
    uVar17 = 1;
    (*(int * PTR32 *)(gen_frame + 0x158)) = &REFG(undefined4, 0x14a06d8);
    do {
      puVar11 = (undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x158));
      (*(undefined4 * PTR32 *)(gen_frame + 0x150)) = puVar11;
      if (puVar11 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)(*(int *)*puVar11 + 0x10c))((int *)*puVar11,&(*(float *)(gen_frame + 0x1e0)));
        fVar20 = F_004f4e90(&(*(float *)(gen_frame + 0x1e0)),&(*(float *)(gen_frame + 0xf0)));
        if (!((float10)*(double *)&REFG(undefined, 0x10df708) < fVar20)) {
          uVar19 = uVar19 + (*(undefined4 * PTR32 *)(gen_frame + 0x150))[2];
          (*(uint *)(gen_frame + 0x130)) = ~uVar17 & (*(uint *)(gen_frame + 0x130)) | uVar17;
        }
      }
      piVar9 = (*(int * PTR32 *)(gen_frame + 0x158)) + 1;
      uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      (*(int * PTR32 *)(gen_frame + 0x158)) = piVar9;
    } while ((int)piVar9 < 0x14a0718);
    if (uVar19 < 0x101) {
      if (uVar19 == 0) goto LAB_009a468c;
    }
    else {
      uVar19 = 0x100;
    }
    uVar19 = F_004d68c0(REFG(void * PTR32, 0x14a06c0),0,uVar19 * 0x1b0,2);
    (*(uint *)(gen_frame + 0x108)) = uVar19;
    piVar9 = (int *)0x0;
    if (uVar19 != 0) {
      ((uint *)(gen_frame + 0x110))[1] = *(uint *)(REFG(int, 0x137127c) + 0x66f4);
      uVar19 = *(uint *)(REFG(int, 0x137127c) + 0x66f4) + 0x10;
      (*(uint *)(gen_frame + 0x138)) = uVar19;
      puVar11 = (undefined4 *)F_004f45d0(((float *)(gen_frame + 0x1e8)) + 2,uVar19);
      puVar18 = ((undefined4 *)(gen_frame + 0x0));
      for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar18 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar18 = puVar18 + 1;
      }
      (*(undefined4 *)(gen_frame + 0x160)) = ((undefined4 *)(gen_frame + 0x0))[0];
      (*(undefined4 *)(gen_frame + 0x164)) = ((undefined4 *)(gen_frame + 0x0))[1];
      (*(undefined4 *)(gen_frame + 0x168)) = ((undefined4 *)(gen_frame + 0x0))[2];
      (*(undefined4 *)(gen_frame + 0x170)) = (*(undefined4 *)(gen_frame + 0x10));
      (*(undefined4 *)(gen_frame + 0x16c)) = 0;
      (*(undefined4 *)(gen_frame + 0x174)) = (*(undefined4 *)(gen_frame + 0x14));
      (*(undefined4 *)(gen_frame + 0x17c)) = 0;
      (*(undefined4 *)(gen_frame + 0x18c)) = 0;
      (*(undefined4 *)(gen_frame + 0x178)) = (*(undefined4 *)(gen_frame + 0x18));
      (*(undefined4 *)(gen_frame + 0x190)) = (*(undefined4 *)(gen_frame + 0x30));
      (*(undefined4 *)(gen_frame + 0x180)) = (*(undefined4 *)(gen_frame + 0x20));
      (*(undefined4 *)(gen_frame + 0x194)) = (*(undefined4 *)(gen_frame + 0x34));
      (*(undefined4 *)(gen_frame + 0x184)) = (*(undefined4 *)(gen_frame + 0x24));
      (*(undefined4 *)(gen_frame + 0x198)) = (*(undefined4 *)(gen_frame + 0x38));
      (*(undefined4 *)(gen_frame + 0x188)) = (*(undefined4 *)(gen_frame + 0x28));
      (*(float *)(gen_frame + 0x19c)) = REFG(float, 0x1087f04);
      (*(int *)(gen_frame + 0x140)) = 0;
      (*(int * PTR32 *)(gen_frame + 0x158)) = (int *)0x0;
      do {
        piVar9 = (*(int * PTR32 *)(gen_frame + 0x158));
        iVar16 = (*(int *)(gen_frame + 0x140));
        ((int *)(gen_frame + 0x48))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x158)))] = (*(int *)(gen_frame + 0x140));
        (*(uint *)(gen_frame + 0x124)) = REFG(undefined4, 0x14a0d50);
        (*(uint *)(gen_frame + 0x13c)) = 0;
        if (piVar9 == (int *)0x0) {
          (*(uint *)(gen_frame + 0x144)) = REFG(float, 0x10abe50);
          (*(undefined4 * PTR32 *)(gen_frame + 0x150)) = (undefined4 *)0x0;
          uVar19 = REFG(float, 0x10abe50);
        }
        else {
          (*(uint *)(gen_frame + 0x144)) = REFG(float, 0x10add88);
          (*(undefined4 * PTR32 *)(gen_frame + 0x150)) = (undefined4 *)0x0;
          uVar19 = REFG(float, 0x10add88);
        }
        do {
          if (((*(uint *)(gen_frame + 0x130)) >> ((byte)(*(undefined4 * PTR32 *)(gen_frame + 0x150)) & 0x1f) & 1) != 0) {
            iVar6 = (&REFG(undefined4, 0x14a06d8))[(int)(*(undefined4 * PTR32 *)(gen_frame + 0x150))];
            if (piVar9 == (int *)0x0) {
              (*(float *)(gen_frame + 0x118)) = REFG(float, 0x10addc0);
              fVar23 = REFG(float, 0x109482c);
LAB_009a3d9b: ;
              (*(float *)(gen_frame + 0x128)) = fVar23;
            }
            else if (piVar9 == (int *)0x1) {
              (*(float *)(gen_frame + 0x118)) = REFG(float, 0x10df700);
              fVar23 = REFG(float, 0x1087f04);
              goto LAB_009a3d9b;
            }
            uVar17 = *(uint *)(iVar6 + 8);
            (*(float * PTR32 *)(gen_frame + 0x154)) = (float *)(uint)*(byte *)(iVar6 + 0xc);
            fVar20 = (float10)(*(float *)(gen_frame + 0x118));
            (*(float * PTR32 *)(gen_frame + 0x154)) = (float *)(uint)*(byte *)(iVar6 + 0xd);
            (*(uint *)(gen_frame + 0x12c)) = uVar17;
            (*(float *)(gen_frame + 0x100)) = ((float)GEN_TOF((fVar20 * (float10)*(byte *)(iVar6 + 0xc))));
            (*(uint *)(gen_frame + 0x120)) = 0;
            (*(float * PTR32 *)(gen_frame + 0x154)) = (float *)(uint)*(byte *)(iVar6 + 0xe);
            (*(float *)(gen_frame + 0x104)) = ((float)GEN_TOF(((float10)*(byte *)(iVar6 + 0xd) * fVar20)));
            (*(float *)(gen_frame + 0x10c)) = ((float)GEN_TOF(((float10)(int)(uint)*(byte *)(iVar6 + 0xe) * fVar20)));
            if (uVar17 != 0) {
              pfVar10 = ((float *)GEN_TOP((*(int *)(iVar6 + 4) + 8)));
              (*(float * PTR32 *)(gen_frame + 0x134)) = ((float *)GEN_TOP(((*(uint *)(gen_frame + 0x108)) + (iVar16 * 9 + 0x12) * 4)));
              (*(float * PTR32 *)(gen_frame + 0x154)) = pfVar10;
              do {
                (*(float *)(gen_frame + 0x14c)) = gen_bits2f((*(uint *)(gen_frame + 0x124)) & 7);
                uVar12 = ((*(uint *)(gen_frame + 0x124)) & 0x1f) >> 3;
                (*(float *)(gen_frame + 0x14c)) = gen_bits2f(uVar12);
                (*(float *)(gen_frame + 0x148)) = ((float)GEN_TOF(((float10)((*(uint *)(gen_frame + 0x124)) & 7) * (float10)*(double *)&REFG(double, 0x10948e0))));
                (*(uint *)(gen_frame + 0x124)) = (*(uint *)(gen_frame + 0x124)) + 2;
                (*(float *)(gen_frame + 0x14c)) = (float)((float10)uVar12 * (float10)*(double *)&REFG(undefined, 0x1094878));
                (*(float * PTR32 *)(gen_frame + 0x154)) = pfVar10;
                if (0xff < (*(uint *)(gen_frame + 0x13c))) break;
                (*(uint *)(gen_frame + 0x11c)) = uVar19 ^ REFG(uint, 0x10920d0);
                (*(uint *)(gen_frame + 0x70)) = uVar19 ^ REFG(uint, 0x10920d0);
                (*(uint *)(gen_frame + 0x74)) = uVar19;
                (*(undefined4 *)(gen_frame + 0x78)) = 0;
                pfVar13 = (float *)F_004eec80(&(*(uint *)(gen_frame + 0x70)),(uint)&(*(undefined4 *)(gen_frame + 0x160)));
                ((int *)(gen_frame + 0x48))[2] = (*(uint *)(gen_frame + 0x144));
                (*(float *)(gen_frame + 0xb0)) = (float)((float10)*pfVar13 + (float10)pfVar10[-2]);
                ((int *)(gen_frame + 0x48))[3] = (*(uint *)(gen_frame + 0x144));
                (*(undefined4 *)(gen_frame + 0x58)) = 0;
                (*(float *)(gen_frame + 0xb4)) = (float)((float10)pfVar13[1] + (float10)pfVar10[-1]);
                (*(float *)(gen_frame + 0xb8)) = (float)((float10)pfVar13[2] + (float10)*pfVar10);
                pfVar13 = (float *)F_004eec80(((int *)(gen_frame + 0x48)) + 2,(uint)&(*(undefined4 *)(gen_frame + 0x160)));
                ((uint *)(gen_frame + 0x88))[2] = (*(uint *)(gen_frame + 0x11c));
                ((uint *)(gen_frame + 0x88))[3] = (*(uint *)(gen_frame + 0x11c));
                (*(float *)(gen_frame + 0xc0)) = (float)((float10)pfVar10[-2] + (float10)*pfVar13);
                (*(undefined4 *)(gen_frame + 0x98)) = 0;
                (*(float *)(gen_frame + 0xc4)) = (float)((float10)pfVar13[1] + (float10)pfVar10[-1]);
                (*(float *)(gen_frame + 0xc8)) = (float)((float10)pfVar13[2] + (float10)*pfVar10);
                pfVar13 = (float *)F_004eec80(((uint *)(gen_frame + 0x88)) + 2,(uint)&(*(undefined4 *)(gen_frame + 0x160)));
                (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0x144));
                (*(uint *)(gen_frame + 0x64)) = (*(uint *)(gen_frame + 0x11c));
                (*(float *)(gen_frame + 0xd0)) = (float)((float10)pfVar10[-2] + (float10)*pfVar13);
                (*(undefined4 *)(gen_frame + 0x68)) = 0;
                (*(float *)(gen_frame + 0xd4)) = (float)((float10)pfVar13[1] + (float10)pfVar10[-1]);
                (*(float *)(gen_frame + 0xd8)) = (float)((float10)pfVar13[2] + (float10)*pfVar10);
                pfVar13 = (float *)F_004eec80(&(*(uint *)(gen_frame + 0x60)),(uint)&(*(undefined4 *)(gen_frame + 0x160)));
                fVar7 = (*(float *)(gen_frame + 0x148));
                (*(float *)(gen_frame + 0x15c)) = pfVar10[-2];
                fVar20 = (float10)pfVar10[-2];
                fVar23 = (float)(fVar20 + (float10)*pfVar13);
                (*(float *)(gen_frame + 0xe0)) = fVar23;
                (*(float *)(gen_frame + 0x15c)) = pfVar10[-1];
                fVar21 = (float10)pfVar10[-1];
                fVar1 = (float)(fVar21 + (float10)pfVar13[1]);
                (*(float *)(gen_frame + 0xe4)) = fVar1;
                (*(float *)(gen_frame + 0x15c)) = *pfVar10;
                fVar22 = (float10)*pfVar10;
                fVar2 = (float)(fVar22 + (float10)pfVar13[2]);
                (*(float *)(gen_frame + 0xe8)) = fVar2;
                fVar3 = (float)((float10)(*(float *)(gen_frame + 0xf0)) - fVar20);
                (*(float *)(gen_frame + 0xa0)) = fVar3;
                fVar4 = (float)((float10)(*(float *)(gen_frame + 0xf4)) - fVar21);
                (*(float *)(gen_frame + 0xa4)) = fVar4;
                fVar5 = (float)((float10)(*(float *)(gen_frame + 0xf8)) - fVar22);
                (*(float *)(gen_frame + 0xa8)) = fVar5;
                fVar20 = (float10)fVar4;
                fVar21 = (float10)fVar3;
                fVar22 = (float10)fVar5;
                fVar3 = ((float)GEN_TOF((fVar22 * fVar22 + (fVar21 * fVar21 + fVar20 * fVar20))));
                (*(float *)(gen_frame + 0x15c)) = fVar3;
                fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
                (*(float *)(gen_frame + 0x15c)) = fVar3;
                if ((float10)REFG(float, 0x10a0d00) <= (float10)fVar3) {
                  fVar20 = (float10)0;
                }
                else if (fVar3 <= REFG(float, 0x10a0d14)) {
                  fVar20 = (float10)1;
                }
                else {
                  fVar20 = (float10)1 -
                           ((float10)fVar3 - (float10)*(double *)&REFG(undefined, 0x10cdac8)) *
                           (float10)REFG(double, 0x1088108);
                }
                (*(float *)(gen_frame + 0x15c)) = (float)fVar20;
                fVar20 = (float10)(float)fVar20;
                if (!(fVar20 <= (float10)0)) {
                  fVar3 = (float)(fVar20 * (float10)(*(float *)(gen_frame + 0x128)));
                  (*(float *)(gen_frame + 0x15c)) = fVar3;
                  (*(float *)(gen_frame + 0x1b8)) = fVar3;
                  ((float *)(gen_frame + 0x1a0))[0] = (*(float *)(gen_frame + 0xb0));
                  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x148)) + (float10)*(double *)&REFG(double, 0x10948e0));
                  (*(float *)(gen_frame + 0x148)) = fVar4;
                  ((float *)(gen_frame + 0x1a0))[1] = (*(float *)(gen_frame + 0xb4));
                  (*(float *)(gen_frame + 0x1e0)) = fVar4;
                  (*(float *)(gen_frame + 0x1bc)) = fVar7;
                  (*(float *)(gen_frame + 0x1c0)) = (*(float *)(gen_frame + 0x14c));
                  ((float *)(gen_frame + 0x1c4))[0] = (*(float *)(gen_frame + 0xc0));
                  (*(float *)(gen_frame + 0x1e4)) = (*(float *)(gen_frame + 0x14c));
                  fVar5 = (float)((float10)(*(float *)(gen_frame + 0x14c)) + (float10)*(double *)&REFG(undefined, 0x1094878));
                  (*(float *)(gen_frame + 0x14c)) = fVar5;
                  (*(float *)(gen_frame + 0x204)) = fVar7;
                  (*(float *)(gen_frame + 0x208)) = fVar5;
                  ((float *)(gen_frame + 0x1a0))[2] = (*(float *)(gen_frame + 0xb8));
                  (*(float *)(gen_frame + 0x22c)) = fVar5;
                  ((float *)(gen_frame + 0x1c4))[1] = (*(float *)(gen_frame + 0xc4));
                  ((float *)(gen_frame + 0x1e8))[0] = (*(float *)(gen_frame + 0xd0));
                  ((float *)(gen_frame + 0x20c))[0] = fVar23;
                  ((float *)(gen_frame + 0x1a0))[3] = (*(float *)(gen_frame + 0x100));
                  ((float *)(gen_frame + 0x1c4))[2] = (*(float *)(gen_frame + 0xc8));
                  ((float *)(gen_frame + 0x1c4))[3] = (*(float *)(gen_frame + 0x100));
                  ((float *)(gen_frame + 0x1e8))[1] = (*(float *)(gen_frame + 0xd4));
                  ((float *)(gen_frame + 0x1e8))[3] = (*(float *)(gen_frame + 0x100));
                  ((float *)(gen_frame + 0x20c))[1] = fVar1;
                  ((float *)(gen_frame + 0x20c))[3] = (*(float *)(gen_frame + 0x100));
                  (*(float *)(gen_frame + 0x1b0)) = (*(float *)(gen_frame + 0x104));
                  (*(float *)(gen_frame + 0x1b4)) = (*(float *)(gen_frame + 0x10c));
                  (*(float *)(gen_frame + 0x1d4)) = (*(float *)(gen_frame + 0x104));
                  (*(float *)(gen_frame + 0x1d8)) = (*(float *)(gen_frame + 0x10c));
                  (*(float *)(gen_frame + 0x1dc)) = fVar3;
                  ((float *)(gen_frame + 0x1e8))[2] = (*(float *)(gen_frame + 0xd8));
                  (*(float *)(gen_frame + 0x1f8)) = (*(float *)(gen_frame + 0x104));
                  (*(float *)(gen_frame + 0x1fc)) = (*(float *)(gen_frame + 0x10c));
                  (*(float *)(gen_frame + 0x200)) = fVar3;
                  ((float *)(gen_frame + 0x20c))[2] = fVar2;
                  (*(float *)(gen_frame + 0x21c)) = (*(float *)(gen_frame + 0x104));
                  (*(float *)(gen_frame + 0x220)) = (*(float *)(gen_frame + 0x10c));
                  (*(float *)(gen_frame + 0x224)) = fVar3;
                  (*(float *)(gen_frame + 0x228)) = fVar4;
                  pfVar10 = ((float *)(gen_frame + 0x1a0));
                  pfVar13 = (*(float * PTR32 *)(gen_frame + 0x134)) + -0x12;
                  for (iVar16 = 9; iVar16 != 0; iVar16 = iVar16 + -1) {
                    *pfVar13 = *pfVar10;
                    pfVar10 = pfVar10 + 1;
                    pfVar13 = pfVar13 + 1;
                  }
                  pfVar10 = ((float *)(gen_frame + 0x1c4));
                  pfVar13 = (*(float * PTR32 *)(gen_frame + 0x134)) + -9;
                  for (iVar16 = 9; iVar16 != 0; iVar16 = iVar16 + -1) {
                    *pfVar13 = *pfVar10;
                    pfVar10 = pfVar10 + 1;
                    pfVar13 = pfVar13 + 1;
                  }
                  pfVar10 = ((float *)(gen_frame + 0x1e8));
                  pfVar13 = (*(float * PTR32 *)(gen_frame + 0x134));
                  for (iVar16 = 9; iVar16 != 0; iVar16 = iVar16 + -1) {
                    *pfVar13 = *pfVar10;
                    pfVar10 = pfVar10 + 1;
                    pfVar13 = pfVar13 + 1;
                  }
                  (*(uint *)(gen_frame + 0x13c)) = (*(uint *)(gen_frame + 0x13c)) + 1;
                  (*(int *)(gen_frame + 0x140)) = (*(int *)(gen_frame + 0x140)) + 6;
                  pfVar10 = ((float *)(gen_frame + 0x1e8));
                  pfVar13 = (*(float * PTR32 *)(gen_frame + 0x134)) + 9;
                  for (iVar16 = 9; iVar16 != 0; iVar16 = iVar16 + -1) {
                    *pfVar13 = *pfVar10;
                    pfVar10 = pfVar10 + 1;
                    pfVar13 = pfVar13 + 1;
                  }
                  pfVar10 = ((float *)(gen_frame + 0x1c4));
                  pfVar13 = (*(float * PTR32 *)(gen_frame + 0x134)) + 0x12;
                  for (iVar16 = 9; iVar16 != 0; iVar16 = iVar16 + -1) {
                    *pfVar13 = *pfVar10;
                    pfVar10 = pfVar10 + 1;
                    pfVar13 = pfVar13 + 1;
                  }
                  pfVar10 = ((float *)(gen_frame + 0x20c));
                  pfVar13 = (*(float * PTR32 *)(gen_frame + 0x134)) + 0x1b;
                  for (iVar16 = 9; iVar16 != 0; iVar16 = iVar16 + -1) {
                    *pfVar13 = *pfVar10;
                    pfVar10 = pfVar10 + 1;
                    pfVar13 = pfVar13 + 1;
                  }
                  (*(float * PTR32 *)(gen_frame + 0x134)) = (*(float * PTR32 *)(gen_frame + 0x134)) + 0x36;
                  pfVar10 = (*(float * PTR32 *)(gen_frame + 0x154));
                  uVar17 = (*(uint *)(gen_frame + 0x12c));
                }
                uVar12 = (*(uint *)(gen_frame + 0x120)) + 1;
                pfVar10 = pfVar10 + 4;
                (*(uint *)(gen_frame + 0x120)) = uVar12;
                (*(float * PTR32 *)(gen_frame + 0x154)) = pfVar10;
                uVar19 = (*(uint *)(gen_frame + 0x144));
              } while (uVar12 < uVar17);
            }
          }
          puVar11 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x150)) + 1);
          (*(undefined4 * PTR32 *)(gen_frame + 0x150)) = puVar11;
          iVar16 = (*(int *)(gen_frame + 0x140));
          piVar9 = (*(int * PTR32 *)(gen_frame + 0x158));
        } while ((int)puVar11 < 0x10);
        ((uint *)(gen_frame + 0x88))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x158)))] = (*(uint *)(gen_frame + 0x13c));
        piVar9 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x158)) + 1);
        (*(int * PTR32 *)(gen_frame + 0x158)) = piVar9;
      } while ((int)piVar9 < 2);
      piVar9 = (int *)F_004d6970(REFG(void * PTR32, 0x14a06c0));
      if ((*(int *)(gen_frame + 0x140)) != 0) {
        uVar19 = *(uint *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
        *((uint *)GEN_TOP((*(int *)(uVar19 + 0x1a8) + 8))) =
             *((uint *)GEN_TOP((*(int *)(uVar19 + 0x1a8) + 8))) & 0x7ffffff | 0xf0000000;
        *((uint *)GEN_TOP((*(int *)(uVar19 + 0x1a8) + 8))) =
             *((uint *)GEN_TOP((*(int *)(uVar19 + 0x1a8) + 8))) & 0xfe7fffff | 0x6000000;
        *((uint *)GEN_TOP((*(int *)(uVar19 + 0x1a8) + 8))) =
             *((uint *)GEN_TOP((*(int *)(uVar19 + 0x1a8) + 8))) & 0xffd7ffff | 0x500000;
        *((uint *)GEN_TOP((*(int *)(uVar19 + 0x1a8) + 8))) =
             *((uint *)GEN_TOP((*(int *)(uVar19 + 0x1a8) + 8))) & 0xfffffffe | 0x7fffe;
        (*(undefined * PTR32 *)(gen_frame + 0x238)) = (undefined *)0x0;
        (*(undefined4 *)(gen_frame + 0x23c)) = 0;
        (*(undefined4 *)(gen_frame + 0x240)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x234)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
        (*(uint *)(gen_frame + 0x12c)) = uVar19;
        if (*(int *)(REFG(int, 0x137127c) + 0xabfc) == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0xabfc) + 0x98)));
        }
        F_00b52c10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x234)),uVar14);
        if ((*(undefined * PTR32 *)(gen_frame + 0x238)) == (undefined *)0x0) {
          uVar17 = 0;
        }
        else {
          uVar17 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0x238)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x234)));
        }
        *((uint *)GEN_TOP((*(int *)(uVar19 + 0x1a8) + 0x60))) = uVar17;
        puVar11 = (undefined4 *)F_004f11a0(((float *)(gen_frame + 0x1e8)) + 2,(*(uint *)(gen_frame + 0x138)),((uint *)(gen_frame + 0x110))[1] + 0x50);
        puVar18 = ((undefined4 *)(gen_frame + 0x0));
        for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
          *puVar18 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar18 = puVar18 + 1;
        }
        puVar11 = (undefined4 *)F_004d9920(REFG(void * PTR32, 0x14a06c4),0,0x40,2);
        uVar19 = (*(uint *)(gen_frame + 0x12c));
        if (puVar11 != (undefined4 *)0x0) {
          puVar18 = ((undefined4 *)(gen_frame + 0x0));
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar11 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar11 = puVar11 + 1;
          }
        }
        *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x14a06c4) + 0x24))) = 0;
        *((undefined * PTR32 *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x12c)) + 0x1a8) + 0xa8 + REFG(int, 0x14a06cc) * 4))) = REFG(void * PTR32, 0x14a06c4);
        ((uint *)(gen_frame + 0x110))[1] = REFG(undefined4, 0x1302354) & 0xff80714f | 0x140;
        ((uint *)(gen_frame + 0x110))[0] = REFG(undefined4, 0x1302354) & 0xff80754f | 0x540;
        *((uint *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x12c)) + 0x1a8) + 0x2ac + REFG(int, 0x14a06c8) * 8))) =
             REFG(undefined4, 0x1375a5c) & 0xfffff6a | 0x36a;
        *((undefined4 *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x12c)) + 0x1a8) + 0x2a8 + REFG(int, 0x14a06c8) * 8))) =
             *(undefined4 *)(REFG(int, 0x14a06d0) + 0xfc);
        *((undefined4 *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x12c)) + 0x1a8) + 0x50))) = 0xd;
        puVar15 = (uint *)F_004d4a30(&(*(uint *)(gen_frame + 0x138)),3,0,0,0,(float)(float10)0,(float)(float10)0);
        *((uint *)GEN_TOP((*(int *)(uVar19 + 0x1a8) + 0x3c))) = *puVar15 & 0x7fffffff;
        *((undefined4 *)GEN_TOP((*(int *)(uVar19 + 0x1a8) + 0x4c))) = REFG(undefined4, 0x14a06bc);
        (*(int * PTR32 *)(gen_frame + 0x158)) = (int *)0x0;
        do {
          *((uint *)GEN_TOP((*(int *)(uVar19 + 0x1a8) + 0x38))) =
               *(uint *)((int)((uint *)(gen_frame + 0x110)) + (int)(*(int * PTR32 *)(gen_frame + 0x158))) & 0x7ffffff;
          iVar16 = *(int *)(uVar19 + 0x1a8);
          *(undefined * PTR32 *)(iVar16 + 0x68) = REFG(void * PTR32, 0x14a06c0);
          *(uint *)(iVar16 + 0x6c) =
               *(uint *)(iVar16 + 0x6c) ^
               (*(int *)((int)((int *)(gen_frame + 0x48)) + (int)(*(int * PTR32 *)(gen_frame + 0x158))) * 0x2400 ^ *(uint *)(iVar16 + 0x6c)) &
               0x7fffff00;
          *(undefined1 *)(iVar16 + 0x6c) = 0x24;
          *(uint *)(iVar16 + 0x6c) = *(uint *)(iVar16 + 0x6c) & 0x7fffffff;
          (*(undefined4 * PTR32 *)(gen_frame + 0x150)) = *(undefined4 * PTR32 *)(uVar19 + 0x1a8);
          (*(uint *)(gen_frame + 0x138)) = *(int *)((int)((uint *)(gen_frame + 0x88)) + (int)(*(int * PTR32 *)(gen_frame + 0x158))) * 6;
          puVar11 = (undefined4 *)F_004d4760(*(undefined4 * PTR32 *)(uVar19 + 0x1a8),0x48);
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = 4;
            puVar11[1] = 5;
            puVar11[2] = 0;
            puVar11[3] = (*(uint *)(gen_frame + 0x138));
            bVar8 = F_004dc830((*(undefined4 * PTR32 *)(gen_frame + 0x150)),puVar11 + 4);
            if (bVar8 != 0) {
              F_004d4810((*(undefined4 * PTR32 *)(gen_frame + 0x150)),puVar11);
            }
          }
          piVar9 = (*(int * PTR32 *)(gen_frame + 0x158)) + 1;
          (*(int * PTR32 *)(gen_frame + 0x158)) = piVar9;
        } while ((int)piVar9 < 8);
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x234)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
        piVar9 = (int *)F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x234)));
      }
    }
  }
LAB_009a468c: ;
  F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0x24c)) ^ (uint)(uint)(gen_frame + 0x250));
  return (uint)piVar9;
}

/* ref: FUN_009a46a0 */
uint F_009a46a0(void)
{
  GEN_ENTER(0x9a46a0u, 0u, 0u, 0u, 0u);
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  return 0x14a0d58;
}

/* ref: FUN_009a46d0 */
unsigned int F_009a46d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a46d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  F_00994ed0(&REFG(float, 0x14a0d58),param_1,param_2);
  return 0;
}

/* ref: FUN_009a4720 */
uint F_009a4720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a4720u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 1;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    uVar1 = F_00c47de6(((code *)REFP(0x107c350)));
  }
  *(float *)&REFG(undefined, 0x14a0e98) = (float)param_1;
  *(float *)&REFG(undefined, 0x14a0e9c) = (float)param_2;
  return uVar1;
}

/* ref: FUN_009a4970 */
uint F_009a4970(unsigned int gen_a0)
{
  GEN_ENTER(0x9a4970u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  return (uint)(*(short *)(REFG(int, 0x14a0eb0) + 0x46004 + param_1 * 2) != 0);
}

/* ref: FUN_009a49f0 */
byte F_009a49f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9a49f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
    REFG(undefined1, 0x14a22cc) = (byte)param_1;
    return (byte)param_1;
  }
  REFG(undefined1, 0x14a22cc) = (byte)param_1;
  return 1;
}

/* ref: FUN_009a4a40 */
unsigned int F_009a4a40(unsigned int gen_a0)
{
  GEN_ENTER(0x9a4a40u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
    ((code *)*(gen_code32 *)*param_1)(param_1,1);
    if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && (uVar1 != 0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
    }
  }
  return 0;
}

/* ref: FUN_009a4aa0 */
uint F_009a4aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9a4aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))
                      (param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009a4ae0 */
unsigned int F_009a4ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x9a4ae0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  F_00978eb0(param_1);
  return 0;
}

/* ref: FUN_009a4b20 */
unsigned int F_009a4b20(unsigned int gen_a0)
{
  GEN_ENTER(0x9a4b20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  F_00978f00(param_1);
  return 0;
}

/* ref: FUN_009a4b60 */
uint F_009a4b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9a4b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = F_009851b0(&REFG(float, 0x14a0d58),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_009a4bb0 */
uint F_009a4bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9a4bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = F_00985260(&REFG(float, 0x14a0d58),param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_009a4c10 */
byte F_009a4c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9a4c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xcc))
                      (param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return (byte)uVar1;
  }
  return 0;
}

/* ref: FUN_009a4c60 */
uint F_009a4c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9a4c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = F_00978f90(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_009a4cc0 */
uint F_009a4cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a4cc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar3 = param_2;
  if ((param_2 < 0x800) && (param_1 != 0)) {
    uVar3 = param_2 * 0x68;
    iVar1 = uVar3 + 0x1000 + REFG(int, 0x14a0eb0);
    if ((*(int *)(uVar3 + 0x1040 + REFG(int, 0x14a0eb0)) == param_1) && (*(int *)(iVar1 + 0x3c) != 3)) {
      uVar3 = *(uint *)(iVar1 + 0x30);
      if ((uVar3 != 0) && (piVar2 = *(int * PTR32 *)(uVar3 + 0x270), piVar2 != (int *)0x0)) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,iVar1);
      }
      *(undefined4 *)(iVar1 + 0x3c) = 3;
    }
  }
  return uVar3;
}

/* ref: FUN_009a4d50 */
ushort F_009a4d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a4d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ushort uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = F_00984f40(&REFG(float, 0x14a0d58),param_1,param_2);
  return uVar1;
}

/* ref: FUN_009a4da0 */
byte F_009a4da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a4da0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  byte bVar3;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  if ((((param_2 < 0x800) && (param_1 != 0)) &&
      (iVar1 = param_2 * 0x68 + 0x1000 + REFG(int, 0x14a0eb0),
      *(int *)(param_2 * 0x68 + 0x1040 + REFG(int, 0x14a0eb0)) == param_1)) &&
     (iVar2 = *(int *)(iVar1 + 0x3c), iVar2 != 3)) {
    if (iVar2 == 4) {
      return 1;
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 != 0) {
      bVar3 = F_0097ec70(iVar1);
      return bVar3 == 0;
    }
  }
  return 0;
}

/* ref: FUN_009a4e20 */
uint F_009a4e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9a4e20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = param_2;
  if (((param_2 < 0x800) && (param_1 != 0)) &&
     (uVar1 = param_2 * 0x68 + 0x1000 + REFG(int, 0x14a0eb0),
     *(int *)(param_2 * 0x68 + 0x1040 + REFG(int, 0x14a0eb0)) == param_1)) {
    *(byte *)(uVar1 + 0x62) =
         *(byte *)(uVar1 + 0x62) ^ (*(byte *)(uVar1 + 0x62) ^ (byte)param_3) & 1;
  }
  return uVar1;
}

/* ref: FUN_009a4e90 */
uint F_009a4e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9a4e90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = param_2;
  if (((param_2 < 0x800) && (param_1 != 0)) &&
     (uVar1 = param_2 * 0x68 + 0x1000 + REFG(int, 0x14a0eb0),
     *(int *)(param_2 * 0x68 + 0x1040 + REFG(int, 0x14a0eb0)) == param_1)) {
    *(byte *)(uVar1 + 0x62) =
         *(byte *)(uVar1 + 0x62) ^ ((char)param_3 * '\x02' ^ *(byte *)(uVar1 + 0x62)) & 2;
  }
  return uVar1;
}

/* ref: FUN_009a4f00 */
uint F_009a4f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9a4f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = param_2;
  if ((((param_2 < 0x800) && (param_1 != 0)) &&
      (uVar1 = param_2 * 0x68 + 0x1000 + REFG(int, 0x14a0eb0),
      *(int *)(param_2 * 0x68 + 0x1040 + REFG(int, 0x14a0eb0)) == param_1)) && (*(int *)(uVar1 + 0x30) != 0)
     ) {
    *(byte *)(uVar1 + 0x5e) = (byte)param_4;
    *(ushort *)(uVar1 + 0x60) = *(ushort *)(uVar1 + 0x60) | 1 << ((byte)param_4 & 0x1f);
  }
  return uVar1;
}

/* ref: FUN_009a4f70 */
uint F_009a4f70(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x9a4f70u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  iVar1 = REFG(int, 0x14a0eb0);
  pfVar3 = param_2;
  if ((param_2 < (float *)0x800) && (pfVar3 = param_2, param_1 != 0)) {
    pfVar2 = (float *)((int)((int)(uintptr_t)param_2) * 0x68);
    pfVar3 = pfVar2;
    if (*(int *)((int)pfVar2 + REFG(int, 0x14a0eb0) + 0x1040) == param_1) {
      pfVar3 = (float *)((int)pfVar2 + REFG(int, 0x14a0eb0) + 0x1048);
      *pfVar3 = param_3;
      *(float *)((int)pfVar2 + iVar1 + 0x104c) = param_4;
      *(float *)((int)pfVar2 + iVar1 + 0x1050) = param_5;
      *(float *)((int)pfVar2 + iVar1 + 0x1054) = param_6;
      iVar1 = *(int *)((int)pfVar2 + iVar1 + 0x1030);
      if ((iVar1 != 0) &&
         (((*(uint *)(iVar1 + 0x1d0) & 0x40000) == 0 || (*(int *)(iVar1 + 0x1e0) != 0)))) {
        pfVar3 = (float *)F_0098b780(iVar1,(uint)pfVar3);
      }
    }
  }
  return (uint)pfVar3;
}

/* ref: FUN_009a5020 */
uint F_009a5020(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9a5020u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = param_2;
  if ((((param_2 < 0x800) && (param_1 != 0)) &&
      (uVar1 = param_2 * 0x68 + 0x1000 + REFG(int, 0x14a0eb0),
      *(int *)(param_2 * 0x68 + 0x1040 + REFG(int, 0x14a0eb0)) == param_1)) &&
     ((uVar1 = *(uint *)(uVar1 + 0x30), uVar1 != 0 &&
      (((*(uint *)(uVar1 + 0x1d0) & 0x40000) == 0 || (*(int *)(uVar1 + 0x1e0) != 0)))))) {
    uVar1 = *(uint *)(uVar1 + 0x1ec);
    *(float *)(uVar1 + 0x94) = param_3;
  }
  return uVar1;
}

/* ref: FUN_009a50b0 */
uint F_009a50b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9a50b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = param_2;
  if ((((param_2 < 0x800) && (param_1 != 0)) &&
      (uVar1 = param_2 * 0x68 + 0x1000 + REFG(int, 0x14a0eb0),
      *(int *)(param_2 * 0x68 + 0x1040 + REFG(int, 0x14a0eb0)) == param_1)) &&
     ((uVar1 = *(uint *)(uVar1 + 0x30), uVar1 != 0 &&
      (((*(uint *)(uVar1 + 0x1d0) & 0x40000) == 0 || (*(int *)(uVar1 + 0x1e0) != 0)))))) {
    *(float *)(uVar1 + 0x318) = param_3;
  }
  return uVar1;
}

/* ref: FUN_009a51a0 */
uint F_009a51a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9a51a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  int * piVar1;
  uint uVar2;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  if (*(int *)(REFG(int, 0x14a0eb0) + param_1 * 4) == 0) {
    return 0;
  }
  piVar1 = *(int * PTR32 *)(REFG(int, 0x14a0eb0) + param_1 * 4);
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_009a51f0 */
uint F_009a51f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9a51f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;
  undefined1 * param_5 = (undefined1 *)(uintptr_t)gen_a4;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  *param_3 = 0;
  *param_2 = 0;
  *param_5 = 0;
  *param_4 = 0;
  return (uint)param_4;
}

/* ref: FUN_009a52c0 */
uint F_009a52c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9a52c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = (uint)(param_1 - REFG(int, 0x14a09f4)) >> 10;
  *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
  REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
  REFG(undefined4, 0x14a09e8) = uVar1;
  return uVar1;
}

/* ref: FUN_009a5320 */
float10 F_009a5320(unsigned int gen_a0)
{
  GEN_ENTER(0x9a5320u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 extraout_ST1;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM4_Da = 0;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  fVar1 = F_00978c20((float)(float10)0,REFG(float, 0x10928e4));
  fVar1 = F_00c4c8d0(in_XMM2_Da,in_XMM3_Da,in_XMM4_Da,(float10)(float)((float10)1 - fVar1));
  fVar2 = ((float10)GEN_TOD(fsin((float10)(float)fVar1)));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  fVar3 = F_00978c20((float)(float10)0,*(float *)&REFG(undefined, 0x132f3a4));
  fVar1 = ((float10)GEN_TOD(fcos((float10)(float)fVar1)));
  *(float *)(param_1 + 4) = (float)fVar1;
  fVar1 = ((float10)GEN_TOD(fsin((float10)(float)fVar3)));
  *(float *)param_1 = (float)((float10)(float)fVar1 * (float10)(float)fVar2);
  fVar1 = ((float10)GEN_TOD(fcos((float10)(float)fVar3)));
  *(float *)(param_1 + 8) = (float)((float10)(float)fVar1 * (float10)(float)fVar2);
  return extraout_ST1;
}

/* ref: FUN_009a5420 */
float10 F_009a5420(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x9a5420u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 extraout_ST1;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM4_Da = 0;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  fVar2 = ((float10)GEN_TOD(fcos((float10)param_2)));
  fVar1 = F_00978c20((float)(float10)0,(float)(float10)1);
  fVar3 = ((float10)GEN_TOD(fcos((float10)param_3)));
  fVar2 = F_00c4c8d0(in_XMM2_Da,in_XMM3_Da,in_XMM4_Da,
                       (float10)((float)GEN_TOF(((float10)(float)fVar2 -
                                       (float10)(float)fVar1 *
                                       ((float10)(float)fVar2 - (float10)(float)fVar3)))));
  fVar1 = ((float10)GEN_TOD(fsin((float10)(float)fVar2)));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  fVar3 = F_00978c20((float)(float10)0,*(float *)&REFG(undefined, 0x132f3a4));
  fVar2 = ((float10)GEN_TOD(fcos((float10)(float)fVar2)));
  param_1[1] = (float)fVar2;
  fVar2 = ((float10)GEN_TOD(fsin((float10)(float)fVar3)));
  *param_1 = (float)((float10)(float)fVar2 * (float10)(float)fVar1);
  fVar2 = ((float10)GEN_TOD(fcos((float10)(float)fVar3)));
  param_1[2] = (float)((float10)(float)fVar2 * (float10)(float)fVar1);
  return extraout_ST1;
}

/* ref: FUN_009a5550 */
uint F_009a5550(void)
{
  GEN_ENTER(0x9a5550u, 0u, 0u, 0u, 0u);
  if ((*(uint *)&REFG(undefined, 0x14a23d8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a23d8) = *(uint *)&REFG(undefined, 0x14a23d8) | 1;
    *(undefined4 *)&REFG(undefined, 0x14a2308) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a230c) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2314) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2318) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a231c) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2328) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2324) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2330) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a232c) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2338) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2334) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2340) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a233c) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2348) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2344) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2350) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a234c) = 0;
    F_00c47de6(((code *)REFP(0x107c360)));
  }
  return 0x14a22f0;
}

/* ref: FUN_009a55d0 */
uint F_009a55d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9a55d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  *(float *)&REFG(undefined, 0x14a0ea4) = param_3;
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x5c))((int *)*param_1,5,&REFG(undefined, 0x14a0e98),1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x5c))((int *)*param_1,0xc,param_2,1);
  return uVar1;
}

/* ref: FUN_009a5640 */
uint F_009a5640(unsigned int gen_a0)
{
  GEN_ENTER(0x9a5640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined1 *)((int)this + 0xe0) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x70))))
                    (*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x68),0,
                     *(undefined4 *)((int)this + 0x78),1);
  *(uint *)((int)this + 0x74) = uVar1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x6c))))
                    (*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x6c),0,
                     *(undefined4 *)((int)this + 0x88),1);
  *(uint *)((int)this + 0x84) = uVar1;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  F_00c48350((undefined *)((int)this + 0x34),0,0x30);
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  F_00990560(((undefined1 *)(gen_frame + 0xc)),0x14a0e40);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))(*(int * PTR32 *)this,0,((undefined1 *)(gen_frame + 0xc)),4);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x3c))))(*(int * PTR32 *)this,6);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x38))))(*(int * PTR32 *)this,7);
  return uVar1;
}

/* ref: FUN_009a5720 */
uint F_009a5720(unsigned int gen_a0)
{
  GEN_ENTER(0x9a5720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x54))))(*(int * PTR32 *)this,0,&REFG(undefined, 0x14a0e40),4);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x54))))(*(int * PTR32 *)this,4,&REFG(float, 0x132f458),4);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x48))))
            (*(int * PTR32 *)this,0,*(undefined4 *)((int)this + 0x68),*(undefined4 *)((int)this + 0x80),
             0x30);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x50))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x24));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x58))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x28));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x60))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x2c));
  F_00979860(this);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x20))))
            (*(int * PTR32 *)this,(uint)((byte)(*(uint *)((int)this + 0x30) >> 8) & 1),
             (uint)((byte)(*(uint *)((int)this + 0x30) >> 9) & 1),0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x24))))
            (*(int * PTR32 *)this,(uint)((byte)(*(uint *)((int)this + 0x30) >> 10) & 1));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x2c))))(*(int * PTR32 *)this,*(uint *)((int)this + 0x30) & 0xf);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x28))))(*(int * PTR32 *)this,*(uint *)((int)this + 0x30) >> 4 & 0xf);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 100))))(*(int * PTR32 *)this,1,*(undefined4 *)((int)this + 0x94));
  return uVar1;
}

/* ref: FUN_009a5830 */
uint F_009a5830(unsigned int gen_a0)
{
  GEN_ENTER(0x9a5830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x54))))(*(int * PTR32 *)this,0,&REFG(undefined, 0x14a0e40),4);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x54))))(*(int * PTR32 *)this,4,(int)this + 0xa0,3);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x48))))
            (*(int * PTR32 *)this,0,*(undefined4 *)((int)this + 0x68),*(undefined4 *)((int)this + 0x80),
             0x30);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x4c))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x6c));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x50))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x24));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x58))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x28));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x60))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x2c));
  F_00979860(this);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x20))))
            (*(int * PTR32 *)this,(uint)((byte)(*(uint *)((int)this + 0x30) >> 8) & 1),
             (uint)((byte)(*(uint *)((int)this + 0x30) >> 9) & 1),0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x24))))
            (*(int * PTR32 *)this,(uint)((byte)(*(uint *)((int)this + 0x30) >> 10) & 1));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x2c))))(*(int * PTR32 *)this,*(uint *)((int)this + 0x30) & 0xf);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x28))))(*(int * PTR32 *)this,*(uint *)((int)this + 0x30) >> 4 & 0xf);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x68))))
                    (*(int * PTR32 *)this,2,*(uint *)((int)this + 0x90) >> 1,
                     *(undefined4 *)((int)this + 0x98),*(undefined4 *)((int)this + 0x94));
  return uVar1;
}

/* ref: FUN_009a5960 */
uint F_009a5960(unsigned int gen_a0)
{
  GEN_ENTER(0x9a5960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x54))))(*(int * PTR32 *)this,0,&REFG(undefined, 0x14a0e40),4);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x54))))(*(int * PTR32 *)this,4,&REFG(float, 0x132f458),4);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x48))))
            (*(int * PTR32 *)this,0,*(undefined4 *)((int)this + 0x68),*(undefined4 *)((int)this + 0x80),
             0x30);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x4c))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x6c));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x50))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x24));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x58))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x28));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x60))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x2c));
  F_00979860(this);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x20))))
            (*(int * PTR32 *)this,(uint)((byte)(*(uint *)((int)this + 0x30) >> 8) & 1),
             (uint)((byte)(*(uint *)((int)this + 0x30) >> 9) & 1),0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x24))))
            (*(int * PTR32 *)this,(uint)((byte)(*(uint *)((int)this + 0x30) >> 10) & 1));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x2c))))(*(int * PTR32 *)this,*(uint *)((int)this + 0x30) & 0xf);
  piVar1 = *(int * PTR32 *)this;
  uVar2 = *(uint *)((int)this + 0x30) >> 4 & 0xf;
  if (uVar2 == 3) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,2);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x68))))
              (*(int * PTR32 *)this,2,*(uint *)((int)this + 0x90) >> 1,*(undefined4 *)((int)this + 0x98),
               *(undefined4 *)((int)this + 0x94));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x28))))(*(int * PTR32 *)this,1);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x68))))
                      (*(int * PTR32 *)this,2,*(uint *)((int)this + 0x90) >> 1,
                       *(undefined4 *)((int)this + 0x98),*(undefined4 *)((int)this + 0x94));
    return uVar2;
  }
  ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,uVar2);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x68))))
                    (*(int * PTR32 *)this,2,*(uint *)((int)this + 0x90) >> 1,
                     *(undefined4 *)((int)this + 0x98),*(undefined4 *)((int)this + 0x94));
  return uVar2;
}

/* ref: FUN_009a5af0 */
uint F_009a5af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9a5af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  undefined4 * puVar3;
  uint uVar4;
  code * pcVar5;
  int * piVar6;
  float10 fVar7;
  undefined4 uVar8;
  float * pfVar9;
  
  uVar4 = *param_2;
  if ((*(int *)(uVar4 + 8) != 0) && (*(int *)(uVar4 + 0xc) != 0)) {
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x54))))(*(int * PTR32 *)this,0,&REFG(undefined, 0x14a0e40),4);
    puVar3 = (undefined4 *)param_2[2];
    (*(undefined4 *)(gen_frame + 0x10)) = puVar3[1];
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = *puVar3;
    (*(undefined4 *)(gen_frame + 0x14)) = puVar3[2];
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = puVar3[3];
    (*(undefined4 *)(gen_frame + 0x20)) = puVar3[4];
    (*(undefined4 *)(gen_frame + 0x24)) = puVar3[5];
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = puVar3[6];
    (*(undefined4 *)(gen_frame + 0x30)) = puVar3[7];
    (*(undefined4 *)(gen_frame + 0x34)) = puVar3[8];
    (*(undefined4 *)(gen_frame + 0x40)) = puVar3[10];
    (*(undefined4 *)(gen_frame + 0x3c)) = puVar3[9];
    (*(undefined4 *)(gen_frame + 0x44)) = puVar3[0xb];
    (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x1087f04);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x54))))(*(int * PTR32 *)this,4,&(*(undefined4 *)(gen_frame + 0xc)),4);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x54))))(*(int * PTR32 *)this,8,param_2[4],1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x54))))(*(int * PTR32 *)this,9,param_2[3],1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))(*(int * PTR32 *)this,6,param_2[5],1);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))(*(int * PTR32 *)this,7,&REFG(float, 0x14a0dc4),1);
    puVar3 = (undefined4 *)param_2[2];
    (*(undefined4 *)(gen_frame + 0x10)) = puVar3[1];
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = *puVar3;
    (*(undefined4 *)(gen_frame + 0x14)) = puVar3[2];
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = puVar3[3];
    (*(undefined4 *)(gen_frame + 0x20)) = puVar3[4];
    (*(undefined4 *)(gen_frame + 0x24)) = puVar3[5];
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = puVar3[6];
    (*(undefined4 *)(gen_frame + 0x30)) = puVar3[7];
    (*(undefined4 *)(gen_frame + 0x34)) = puVar3[8];
    (*(undefined4 *)(gen_frame + 0x40)) = puVar3[10];
    (*(undefined4 *)(gen_frame + 0x3c)) = puVar3[9];
    (*(undefined4 *)(gen_frame + 0x44)) = puVar3[0xb];
    (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x1087f04);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))(*(int * PTR32 *)this,0xb,&(*(undefined4 *)(gen_frame + 0x3c)),1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))(*(int * PTR32 *)this,0x14,param_2[8],param_2[7] * 2);
    if (param_2[6] != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))(*(int * PTR32 *)this,8,param_2[6],3);
    }
    if ((char)param_1 == '\0') {
      piVar6 = *(int * PTR32 *)this;
      pcVar5 = *(gen_code32 *)(*piVar6 + 0x5c);
      pfVar9 = (float *)&REFG(float, 0x14a0a2c);
    }
    else {
      uVar4 = F_009a46a0();
      pfVar9 = &(*(float *)(gen_frame + 0x4c));
      F_00980f90(pfVar9,param_2[2] + 0x24,uVar4 + 0xe8);
      piVar6 = *(int * PTR32 *)this;
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x4c)) / (float10)(*(float *)(gen_frame + 0x58)));
      (*(float *)(gen_frame + 0x4c)) = fVar1;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x50)) / (float10)(*(float *)(gen_frame + 0x58)));
      (*(float *)(gen_frame + 0x50)) = fVar2;
      fVar7 = (float10)REFG(double, 0x1088108);
      fVar1 = (float)((float10)fVar1 * fVar7);
      (*(float *)(gen_frame + 0x4c)) = fVar1;
      fVar2 = (float)((float10)fVar2 * (float10)*(double *)&REFG(undefined, 0x10968b0));
      (*(float *)(gen_frame + 0x50)) = fVar2;
      (*(float *)(gen_frame + 0x4c)) = (float)((float10)fVar1 + fVar7);
      (*(float *)(gen_frame + 0x50)) = (float)(fVar7 + (float10)fVar2);
      pcVar5 = *(gen_code32 *)(*piVar6 + 0x5c);
    }
    (*pcVar5)(piVar6,0xd,pfVar9,1);
    if (param_2[9] != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))(*(int * PTR32 *)this,0x1e,param_2[9],1);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))(*(int * PTR32 *)this,0x1f,param_2[9] + 0xc,1);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))(*(int * PTR32 *)this,0x20,param_2[9] + 0x18,1);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))(*(int * PTR32 *)this,0x21,*(undefined4 *)(param_2[9] + 0x24),4);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x4c))))(*(int * PTR32 *)this,*(undefined4 *)(*param_2 + 0xc));
    uVar4 = param_2[1];
    piVar6 = *(int * PTR32 *)this;
    if (uVar4 != 0) {
      ((code *)*(gen_code32 *)(*piVar6 + 0x48))(piVar6,0,*(undefined4 *)(*param_2 + 8),0,0x24);
      uVar8 = *(undefined4 *)(param_2[1] + 8);
      piVar6 = *(int * PTR32 *)this;
    }
    else {
      uVar8 = *(undefined4 *)(*param_2 + 8);
    }
    ((code *)*(gen_code32 *)(*piVar6 + 0x48))(piVar6,(uint)(uVar4 != 0),uVar8,0,0x24);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x50))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x24));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x58))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x28));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x60))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x2c));
    F_00979860(this);
    F_00979800(this);
    piVar6 = *(int * PTR32 *)this;
    uVar4 = *(uint *)((int)this + 0x30) >> 4 & 0xf;
    if (uVar4 == 3) {
      ((code *)*(gen_code32 *)(*piVar6 + 0x28))(piVar6,2);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x68))))
                (*(int * PTR32 *)this,2,0,(uint)*(ushort *)(*param_2 + 0x16),
                 (uint)*(ushort *)(*param_2 + 0x14));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x28))))(*(int * PTR32 *)this,1);
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x68))))
                        (*(int * PTR32 *)this,2,0,(uint)*(ushort *)(*param_2 + 0x16),
                         (uint)*(ushort *)(*param_2 + 0x14));
      return uVar4;
    }
    ((code *)*(gen_code32 *)(*piVar6 + 0x28))(piVar6,uVar4);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x68))))
                      (*(int * PTR32 *)this,2,0,(uint)*(ushort *)(*param_2 + 0x16),
                       (uint)*(ushort *)(*param_2 + 0x14));
  }
  return uVar4;
}

/* ref: FUN_009a5f10 */
uint F_009a5f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0x9a5f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  F_00982720(((undefined1 *)(gen_frame + 0x4c)),param_2,&REFG(undefined, 0x14a0e40));
  F_00990560(((undefined1 *)(gen_frame + 0xc)),(uint)((undefined1 *)(gen_frame + 0x4c)));
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x48))((int *)*param_1,0,param_1[1],0,0xc);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x4c))((int *)*param_1,param_1[2]);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x54))((int *)*param_1,0,((undefined1 *)(gen_frame + 0x4c)),4);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x54))((int *)*param_1,4,&REFG(float, 0x132f458),4);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x5c))((int *)*param_1,0,((undefined1 *)(gen_frame + 0xc)),4);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x5c))((int *)*param_1,4,param_3,1);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x5c))((int *)*param_1,6,param_4,1);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x5c))((int *)*param_1,0x14,param_5,param_6 * 2);
  ((float *)(gen_frame + 0x8c))[0] = param_7;
  ((float *)(gen_frame + 0x8c))[1] = 0.0;
  ((float *)(gen_frame + 0x8c))[2] = 0.0;
  ((float *)(gen_frame + 0x8c))[3] = 0.0;
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x5c))((int *)*param_1,0xe,((float *)(gen_frame + 0x8c)),1);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x50))((int *)*param_1,param_1[9]);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x58))((int *)*param_1,param_1[10]);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x60))((int *)*param_1,param_1[0xb]);
  F_00979860(param_1);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x20))
            ((int *)*param_1,(uint)((byte)((uint)param_1[0xc] >> 8) & 1),
             (uint)((byte)((uint)param_1[0xc] >> 9) & 1),0);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x24))
            ((int *)*param_1,(uint)((byte)((uint)param_1[0xc] >> 10) & 1));
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x2c))((int *)*param_1,param_1[0xc] & 0xf);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x20))((int *)*param_1,1,0,1);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x24))((int *)*param_1,0);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x28))((int *)*param_1,1);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x2c))((int *)*param_1,param_1[0xc] & 0xf);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x68))((int *)*param_1,2,0,0x24,8);
  return uVar1;
}

/* ref: FUN_009a60f0 */
uint F_009a60f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7, float gen_a8, float gen_a9)
{
  GEN_ENTER(0x9a60f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float fVar1;
  uint uVar2;
  
  fVar1 = ((float)GEN_TOF((((float10)param_10 + (float10)REFG(double, 0x1088108)) +
                 ((float10)param_10 + (float10)REFG(double, 0x1088108)))));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  F_00982720(&(*(undefined4 *)(gen_frame + 0xcc)),param_2,&REFG(undefined, 0x14a0e40));
  F_00990560(((undefined1 *)(gen_frame + 0xc)),(uint)&(*(undefined4 *)(gen_frame + 0xcc)));
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x48))((int *)*param_1,0,param_1[1],0,0xc);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x4c))((int *)*param_1,param_1[2]);
  (*(undefined4 *)(gen_frame + 0x8c)) = (*(undefined4 *)(gen_frame + 0xcc));
  (*(undefined4 *)(gen_frame + 0x90)) = (*(undefined4 *)(gen_frame + 0xd0));
  (*(undefined4 *)(gen_frame + 0x94)) = (*(undefined4 *)(gen_frame + 0xd4));
  (*(undefined4 *)(gen_frame + 0x98)) = (*(undefined4 *)(gen_frame + 0xd8));
  (*(undefined4 *)(gen_frame + 0x9c)) = (*(undefined4 *)(gen_frame + 0xdc));
  (*(undefined4 *)(gen_frame + 0xa0)) = (*(undefined4 *)(gen_frame + 0xe0));
  (*(undefined4 *)(gen_frame + 0xa4)) = (*(undefined4 *)(gen_frame + 0xe4));
  (*(undefined4 *)(gen_frame + 0xa8)) = (*(undefined4 *)(gen_frame + 0xe8));
  (*(undefined4 *)(gen_frame + 0xac)) = (*(undefined4 *)(gen_frame + 0xec));
  (*(undefined4 *)(gen_frame + 0xb0)) = (*(undefined4 *)(gen_frame + 0xf0));
  (*(undefined4 *)(gen_frame + 0xb4)) = (*(undefined4 *)(gen_frame + 0xf4));
  (*(undefined4 *)(gen_frame + 0xb8)) = (*(undefined4 *)(gen_frame + 0xf8));
  (*(undefined4 *)(gen_frame + 0xbc)) = (*(undefined4 *)(gen_frame + 0xfc));
  (*(undefined4 *)(gen_frame + 0xc0)) = (*(undefined4 *)(gen_frame + 0x100));
  (*(undefined4 *)(gen_frame + 0xc4)) = (*(undefined4 *)(gen_frame + 0x104));
  (*(undefined4 *)(gen_frame + 0xc8)) = (*(undefined4 *)(gen_frame + 0x108));
  ((float *)(gen_frame + 0x4c))[0] = fVar1;
  ((float *)(gen_frame + 0x4c))[1] = 0.0;
  ((float *)(gen_frame + 0x4c))[2] = 0.0;
  ((float *)(gen_frame + 0x4c))[3] = 0.0;
  ((float *)(gen_frame + 0x4c))[4] = 0.0;
  ((float *)(gen_frame + 0x4c))[5] = gen_bits2f(REFG(float, 0x1087f04));
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(float *)(gen_frame + 0x74)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = REFG(float, 0x1087f04);
  F_009828d0(&(*(undefined4 *)(gen_frame + 0xcc)),((float *)(gen_frame + 0x4c)),&(*(undefined4 *)(gen_frame + 0x8c)));
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x54))((int *)*param_1,0,&(*(undefined4 *)(gen_frame + 0xcc)),4);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x54))((int *)*param_1,4,&REFG(float, 0x132f458),4);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x5c))((int *)*param_1,0,((undefined1 *)(gen_frame + 0xc)),4);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x5c))((int *)*param_1,4,param_3,1);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x5c))((int *)*param_1,6,param_4,1);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x5c))((int *)*param_1,0x14,param_5,param_6 * 2);
  (*(float *)(gen_frame + 0x10c)) = param_8;
  (*(float *)(gen_frame + 0x110)) = param_9;
  (*(undefined4 *)(gen_frame + 0x114)) = 0;
  (*(float *)(gen_frame + 0x118)) = param_7;
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x5c))((int *)*param_1,0xe,&(*(float *)(gen_frame + 0x10c)),1);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x50))((int *)*param_1,param_1[9]);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x58))((int *)*param_1,param_1[10]);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x60))((int *)*param_1,param_1[0xb]);
  F_00979860(param_1);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x20))
            ((int *)*param_1,(uint)((byte)((uint)param_1[0xc] >> 8) & 1),
             (uint)((byte)((uint)param_1[0xc] >> 9) & 1),0);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x24))
            ((int *)*param_1,(uint)((byte)((uint)param_1[0xc] >> 10) & 1));
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x2c))((int *)*param_1,param_1[0xc] & 0xf);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x20))((int *)*param_1,1,0,1);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x24))((int *)*param_1,0);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x28))((int *)*param_1,1);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x2c))((int *)*param_1,param_1[0xc] & 0xf);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x68))((int *)*param_1,2,0,0x24,8);
  return uVar2;
}

/* ref: FUN_009a6440 */
uint F_009a6440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9a6440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 * puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = (undefined1)param_2;
  *(undefined1 *)((int)this + 9) = (undefined1)param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10df044));
  *(undefined1 *)((int)this + 10) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0xc) = param_5;
  *(undefined4 *)((int)this + 0x10) = param_6;
  puVar1 = (undefined4 *)((int)this + 0x18);
  param_2 = 3;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[14])REFP(0x10de8d8));
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 8) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0xffffffff;
    puVar1[0xb] = 0;
    puVar1[0xc] = uVar2;
    puVar1[0xd] = uVar2;
    puVar1[0xe] = uVar2;
    puVar1[0xf] = uVar2;
    F_00995cb0(puVar1 + 0x10);
    puVar1 = puVar1 + 0x68;
    param_2 = param_2 + -1;
  } while (-1 < param_2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x698) = (*(undefined * PTR32 (*)[2])REFP(0x10de794));
  F_00987100((undefined *)((int)this + 0x6a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x728) = (*(undefined * PTR32 (*)[2])REFP(0x10de788));
  F_00987100((undefined *)((int)this + 0x730));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7b8) = (*(undefined * PTR32 (*)[2])REFP(0x10de7a0));
  F_00987100((undefined *)((int)this + 0x7c0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x848) = (*(undefined * PTR32 (*)[2])REFP(0x10de77c));
  F_00987100((undefined *)((int)this + 0x850));
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf5 */
uint F_009a6520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a6520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (param_1 == -3) {
    uVar2 = F_009a5550();
    return *(uint *)(uVar2 + 0xc);
  }
  if (param_1 == -2) {
    uVar2 = F_009a5550();
    return *(uint *)(uVar2 + 0x10);
  }
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x18) - *(int *)(this + 0x14) >> 2)) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x14) + param_1 * 4)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_009a6570 */
uint F_009a6570(unsigned int gen_a0)
{
  GEN_ENTER(0x9a6570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  undefined4 * puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 * puVar7;
  uint * puVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = *(uint *)((int)this + 8);
  uVar6 = *(uint *)((int)this + 0x54);
  (*(int *)(gen_frame + 0x14)) = 0;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    goto switchD_009a659b_caseD_0;
  case 1: ;
  case 2: ;
    (*(int *)(gen_frame + 0x14)) = 1;
    uVar6 = 0;
    break;
  case 4: ;
    uVar6 = 1;
    (*(int *)(gen_frame + 0x14)) = 1;
    break;
  case 5: ;
    (*(int *)(gen_frame + 0x14)) = 3;
    break;
  case 6: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
    (*(int *)(gen_frame + 0x14)) = 2;
  }
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x20)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0;
  uVar5 = 6;
  (*(uint *)(gen_frame + 0x18)) = 6;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 1: ;
  case 2: ;
    uVar5 = 2;
    break;
  case 3: ;
  case 4: ;
  case 6: ;
  case 8: ;
  case 9: ;
  case 0xc: ;
    uVar5 = 3;
    break;
  case 5: ;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this)));
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
    uVar5 = (*(uint *)(gen_frame + 0x18));
    if ((char)uVar1 == '\0') goto switchD_009a65e6_caseD_d;
    uVar5 = (*(uint *)(gen_frame + 0x18)) & 0xfffffffd | 5;
    break;
  case 10: ;
    uVar5 = 0;
    break;
  case 0xb: ;
    uVar5 = 1;
    break;
  case 0xd: ;
switchD_009a65e6_caseD_d: ;
    uVar5 = uVar5 & 0xfffffffc | 4;
  }
  uVar1 = (((*(uint *)(&REFG(undefined, 0x10dd1c0) + *(int *)((int)this + 0x18) * 4) & 3 | (uVar6 & 7) << 8) * 4 |
           (uint)(*(char *)((int)this + 0x34) != '\0')) * 2 |
          (uint)(*(char *)((int)this + 0x33) != '\0')) * 8;
  uVar6 = 0;
  (*(uint *)(gen_frame + 0x18)) = uVar1 | uVar5 & 0xfffe3f27;
  (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) ^ ((uint)(*(int *)((int)this + 0x60) != 0) * 8 ^ (*(uint *)(gen_frame + 0x24))) & 8;
  if ((uVar1 & 0x1c000) != 0) {
    piVar3 = (int *)((int)this + 0x3768);
    do {
      uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
      *(bool *)((int)&(*(undefined4 *)(gen_frame + 0x1c)) + uVar6) = uVar1 == 1;
      uVar6 = uVar6 + 1;
      piVar3 = piVar3 + 0x9c;
    } while (uVar6 < ((*(uint *)(gen_frame + 0x18)) >> 0xe & 7));
  }
  if (0 < (*(int *)(gen_frame + 0x14))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4128) + 0xc))))((int)this + 0x4128);
    uVar1 = (*(uint *)(gen_frame + 0x20)) ^ ((char)uVar1 != '\0' ^ (*(uint *)(gen_frame + 0x20))) & 1;
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    if ((uVar1 & 1) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4128) + 0x10))))((int)this + 0x4128);
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') * 2 ^ (*(uint *)(gen_frame + 0x20))) & 2;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4128) + 0x14))))((int)this + 0x4128);
      uVar6 = (*(uint *)(gen_frame + 0x20));
      uVar5 = (*(uint *)(gen_frame + 0x20)) & 0xffffff83;
      uVar1 = ((((*(byte *)((int)this + 0x4135) & 1) * 2 | *(byte *)((int)this + 0x4134) & 1) * 4 |
               *(uint *)((int)this + 0x4130) & 3) * 2 | (uint)((char)uVar1 != '\0')) * 4;
      (*(uint *)(gen_frame + 0x20)) = uVar1 | uVar5;
      if ((uVar6 & 2) != 0) {
        (*(uint *)(gen_frame + 0x20)) = uVar1 & 0xffffffbb | uVar5;
      }
    }
  }
  if (1 < (*(int *)(gen_frame + 0x14))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x41e0) + 8))))((int)this + 0x41e0);
    uVar1 = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 7 ^ (*(uint *)(gen_frame + 0x20))) & 0x80;
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    if ((char)uVar1 < '\0') {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x41e0) + 0xc))))((int)this + 0x41e0);
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 8 ^ (*(uint *)(gen_frame + 0x20))) & 0x100;
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x41e0) + 0x10))))((int)this + 0x41e0);
      uVar6 = (*(uint *)(gen_frame + 0x20));
      uVar1 = (((*(uint *)((int)this + 0x41f0) & 3) * 8 | *(uint *)((int)this + 0x41ec) & 7) * 4 |
              *(uint *)((int)this + 0x41e8) & 3) * 2;
      uVar2 = (*(uint *)(gen_frame + 0x20)) & 0xfffe01ff;
      (*(uint *)(gen_frame + 0x20)) = (uVar1 | (char)uVar5 != '\0') << 9 | uVar2;
      if ((uVar6 & 0x100) != 0) {
        (*(uint *)(gen_frame + 0x20)) = (uVar1 & 0x7fff3e) << 9 | uVar2;
      }
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x42c8) + 8))))((int)this + 0x42c8);
    uVar1 = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 0x11 ^ (*(uint *)(gen_frame + 0x20))) & 0x20000;
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    if ((uVar1 & 0x20000) != 0) {
      (*(uint *)(gen_frame + 0x20)) = (((((uint)(*(char *)((int)this + 0x42d0) != '\0') * 2 |
                    (uint)(*(char *)((int)this + 0x42cf) != '\0')) * 2 |
                   (uint)(*(char *)((int)this + 0x42ce) != '\0')) * 2 |
                  (uint)(*(char *)((int)this + 0x42cd) != '\0')) * 4 |
                 *(uint *)((int)this + 0x42d4) & 3) << 0x12 | uVar1 & 0xff03ffff;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4330) + 8))))((int)this + 0x4330);
    (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 0x1b ^ (*(uint *)(gen_frame + 0x20))) & 0x8000000;
  }
  if (2 < (*(int *)(gen_frame + 0x14))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4210) + 8))))((int)this + 0x4210);
    uVar1 = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 0x18 ^ (*(uint *)(gen_frame + 0x20))) & 0x1000000;
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    if ((uVar1 & 0x1000000) != 0) {
      (*(uint *)(gen_frame + 0x20)) = uVar1 ^ (*(int *)((int)this + 0x4218) << 0x19 ^ uVar1) & 0x6000000;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4270) + 8))))((int)this + 0x4270);
    uVar1 = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 0x1c ^ (*(uint *)(gen_frame + 0x20))) & 0x10000000;
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    if ((uVar1 & 0x10000000) != 0) {
      (*(uint *)(gen_frame + 0x20)) = *(int *)((int)this + 0x4278) << 0x1d | uVar1 & 0x1fffffff;
    }
  }
  if (*(int *)((int)this + 8) == 5) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this)));
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
    (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) ^ (uVar1 << 8 ^ (*(uint *)(gen_frame + 0x18))) & 0x300;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this)));
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) ^ (uVar1 << 10 ^ (*(uint *)(gen_frame + 0x18))) & 0xc00;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this)));
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) ^ (uVar1 << 0xc ^ (*(uint *)(gen_frame + 0x18))) & 0x3000;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this)));
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
    uVar1 = (*(uint *)(gen_frame + 0x24)) ^ (uVar1 & 0xff ^ (*(uint *)(gen_frame + 0x24))) & 1;
    (*(uint *)(gen_frame + 0x24)) = uVar1;
    if ((uVar1 & 1) != 0) {
      (*(uint *)(gen_frame + 0x24)) = uVar1 ^ (*(int *)((int)this + 0x4388) * 2 ^ uVar1) & 6;
    }
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x74))(this);
  puVar8 = &(*(uint *)(gen_frame + 0x18));
  (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) ^ ((uVar1 & 0xff) << 5 ^ (*(uint *)(gen_frame + 0x18))) & 0x20;
  puVar7 = ((undefined1 *)(gen_frame + 0x8));
  this_00 = (undefined *)F_009a5550();
  puVar4 = (undefined4 *)F_00985860(this_00,puVar7,puVar8);
  *(undefined4 *)((int)this + 0x445c) = *puVar4;
  *(undefined4 *)((int)this + 0x4460) = puVar4[1];
  uVar1 = puVar4[2];
  *(uint *)((int)this + 0x4464) = uVar1;
switchD_009a659b_caseD_0: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_009a6b20 */
uint F_009a6b20(unsigned int gen_a0)
{
  GEN_ENTER(0x9a6b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10df078));
  F_00987100((undefined *)((int)this + 8));
  F_00987100((undefined *)((int)this + 0x90));
  F_00987100((undefined *)((int)this + 0x118));
  F_00987100((undefined *)((int)this + 0x1a0));
  F_00987100((undefined *)((int)this + 0x228));
  F_00995cb0((undefined *)((int)this + 0x2b0));
  F_00995cb0((undefined *)((int)this + 0x410));
  return (uint)this;
}

/* ref: FUN_009a6b80 */
uint F_009a6b80(unsigned int gen_a0)
{
  GEN_ENTER(0x9a6b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10df09c));
  F_00987100((undefined *)((int)this + 8));
  F_00987100((undefined *)((int)this + 0x90));
  F_00987100((undefined *)((int)this + 0x118));
  F_00995cb0((undefined *)((int)this + 0x1a0));
  F_00995cb0((undefined *)((int)this + 0x300));
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::FunctionCurve::vf5 */
uint F_009a7da0(unsigned int gen_a0)
{
  GEN_ENTER(0x9a7da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = REFG(undefined4, 0x14a0a38);
  if (*(uint * PTR32 *)(this + 4) != (uint *)0x0) {
    uVar1 = **(uint * PTR32 *)(this + 4);
  }
  uVar1 = uVar1 >> 4 & 7;
  if (uVar1 == 0) {
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    fVar3 = (float10)1;
  }
  else {
    if (uVar1 == 1) {
      if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
        F_00994de0(&REFG(float, 0x14a0d58));
        F_00c47de6(((code *)REFP(0x107c350)));
      }
      fVar3 = (float10)1;
      fVar2 = (float10)0;
      goto LAB_009a7e0d;
    }
    if (uVar1 != 2) {
      return (int)(*(double *)&REFG(undefined, 0x1088118) * 0.0);
    }
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    fVar3 = (float10)0;
  }
  fVar2 = (float10)REFG(float, 0x1090708);
LAB_009a7e0d: ;
  fVar3 = F_00978c20((float)fVar2,(float)fVar3);
  return (int)(fVar3 * (float10)*(double *)&REFG(undefined, 0x1088118));
}

/* ref: Apricot::Engine::Data::Communicator::Value::vf3 */
double F_009a7e90(unsigned int gen_a0)
{
  GEN_ENTER(0x9a7e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 8);
  if ((GEN_ISNAN(fVar3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
      ((GEN_ISNAN(fVar3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar3 == *(float *)&REFG(undefined, 0x1088114))) {
switchD_009a7eb6_default: ;
    return (double)*(float *)(this + 4);
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0xc))) {
  case 0: ;
  case 3: ;
    fVar1 = (float10)fVar3;
    break;
  case 1: ;
  case 4: ;
    fVar2 = (float)(float10)0;
    goto LAB_009a7ed3;
  case 2: ;
  case 5: ;
    fVar1 = (float10)0;
    break;
  default: ;
    goto switchD_009a7eb6_default;
  }
  fVar2 = gen_bits2f((uint)gen_fl2bits(fVar3) ^ REFG(uint, 0x10920d0));
  fVar3 = (float)fVar1;
LAB_009a7ed3: ;
  F_009a46a0();
  fVar1 = F_00978c20(fVar2,fVar3);
  return (double)((float)GEN_TOF((fVar1 + (float10)*(float *)(this + 4))));
}

/* ref: FUN_009a8190 */
unsigned int F_009a8190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9a8190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  uint uVar2;
  undefined4 * this_00;
  uint uVar3;
  undefined * pvVar4;
  uint * puVar5;
  uint * puVar6;
  
  uVar3 = 0;
  puVar6 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = *puVar6;
      puVar5 = puVar6 + 2;
      if (uVar2 < 0x50727054) {
        if (uVar2 == 0x50727053) {
          if (REFG(char, 0x14a06d6) == '\0') {
            this_00 = (undefined4 *)(REFG(int, 0x14a09d8) + REFG(int, 0x14a09e0));
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 100;
            if (this_00 == (undefined4 *)0x0) goto LAB_009a83c6;
            *this_00 = (*(undefined * PTR32 (*)[14])REFP(0x10dead4));
            this_00[5] = 0;
            this_00[6] = 0;
            this_00[7] = 0;
            this_00[8] = 0;
            *(undefined2 *)(this_00 + 9) = 0;
            *(undefined2 *)(this_00 + 10) = 0;
            *(byte *)((int)this_00 + 0x2a) = *(byte *)((int)this_00 + 0x2a) & 0xf8;
            *(undefined2 *)((int)this_00 + 0x26) = 0xffff;
            this_00[0xc] = 0;
            this_00[0xb] = (*(undefined * PTR32 (*)[5])REFP(0x10deabc));
            this_00[0xd] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
            this_00[0xe] = &REFG(undefined, 0x14a0a44);
            this_00[0xf] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
            this_00[0x10] = &REFG(undefined, 0x14a0a44);
            this_00[0x11] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
            this_00[0x12] = &REFG(undefined, 0x14a0a44);
            this_00[0x13] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
            this_00[0x14] = &REFG(undefined, 0x14a0a44);
            this_00[0x15] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
            this_00[0x16] = &REFG(undefined, 0x14a0a44);
            this_00[0x17] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
            this_00[0x18] = &REFG(undefined, 0x14a0a44);
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 100;
LAB_009a83c6: ;
            this_00 = (undefined4 *)0x0;
          }
          *(undefined4 * PTR32 *)((int)this + 4) = this_00;
        }
        else if (uVar2 < 0x50727032) {
          if (uVar2 != 0x50727031) {
            if (uVar2 == 0x426e5672) {
              *(char *)((int)this + 0x1c) = (char)*puVar5;
            }
            else if (uVar2 == 0x44617461) {
              switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x1c))) {
              case 0: ;
                pvVar4 = (undefined *)F_0097abd0(0x1c);
                if (pvVar4 == (undefined *)0x0) {
                  pvVar4 = (undefined *)0x0;
                }
                else {
                  pvVar4 = (undefined *)F_00987aa0(pvVar4);
                }
                *(undefined * PTR32 *)((int)this + 0x20) = pvVar4;
                F_00997580(pvVar4,param_1,puVar5,puVar6[1]);
                break;
              case 1: ;
                pvVar4 = (undefined *)F_0097abd0(0x1c);
                if (pvVar4 == (undefined *)0x0) {
                  pvVar4 = (undefined *)0x0;
                }
                else {
                  pvVar4 = (undefined *)F_00987990(pvVar4);
                }
                *(undefined * PTR32 *)((int)this + 0x20) = pvVar4;
                F_009972e0(pvVar4,param_1,puVar5,puVar6[1]);
                break;
              case 2: ;
                pvVar4 = (undefined *)F_0097abd0(0x1c);
                if (pvVar4 == (undefined *)0x0) {
                  pvVar4 = (undefined *)0x0;
                }
                else {
                  pvVar4 = (undefined *)F_00987bb0(pvVar4);
                }
                *(undefined * PTR32 *)((int)this + 0x20) = pvVar4;
                F_00997820(pvVar4,param_1,puVar5,puVar6[1]);
                break;
              case 3: ;
                pvVar4 = (undefined *)F_0097abd0(0x1c);
                if (pvVar4 == (undefined *)0x0) {
                  pvVar4 = (undefined *)0x0;
                }
                else {
                  pvVar4 = (undefined *)F_00987880(pvVar4);
                }
                *(undefined * PTR32 *)((int)this + 0x20) = pvVar4;
                F_00997040(pvVar4,param_1,puVar5,puVar6[1]);
              }
            }
            else if (uVar2 == 0x4c696665) {
              *(int *)((int)this + 0x14) = (int)(short)*puVar5;
            }
            goto switchD_009a820d_default;
          }
          if (REFG(char, 0x14a06d6) == '\0') {
            pvVar4 = (undefined *)(REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8));
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 100;
            if (pvVar4 != (undefined *)0x0) {
              this_00 = (undefined4 *)F_00988a10(pvVar4);
              *(undefined4 * PTR32 *)((int)this + 8) = this_00;
              goto LAB_009a83cb;
            }
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 100;
          }
          this_00 = (undefined4 *)0x0;
          *(undefined4 *)((int)this + 8) = 0;
        }
        else {
          if (uVar2 != 0x50727032) {
            if (uVar2 != 0x50727047) goto switchD_009a820d_default;
            if (REFG(char, 0x14a06d6) == '\0') {
              pvVar4 = (undefined *)(REFG(int, 0x14a09d8) + REFG(int, 0x14a09e0));
              REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 100;
              if (pvVar4 == (undefined *)0x0) goto LAB_009a8341;
              pvVar4 = (undefined *)F_00988a10(pvVar4);
            }
            else {
              REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 100;
LAB_009a8341: ;
              pvVar4 = (undefined *)0x0;
            }
            *(undefined * PTR32 *)((int)this + 0x10) = pvVar4;
            F_00998d80(pvVar4,param_1,puVar5,puVar6[1]);
            goto switchD_009a820d_default;
          }
          if (REFG(char, 0x14a06d6) == '\0') {
            pvVar4 = (undefined *)(REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8));
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 100;
            if (pvVar4 != (undefined *)0x0) {
              this_00 = (undefined4 *)F_00988a10(pvVar4);
              *(undefined4 * PTR32 *)((int)this + 0xc) = this_00;
              goto LAB_009a83cb;
            }
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 100;
          }
          this_00 = (undefined4 *)0x0;
          *(undefined4 *)((int)this + 0xc) = 0;
        }
LAB_009a83cb: ;
        F_00998d80(this_00,param_1,puVar5,puVar6[1]);
      }
      else if (uVar2 < 0x62537448) {
        if (uVar2 == 0x62537447) {
          *(bool *)((int)this + 0x18) = *puVar5 != 0;
        }
        else if (uVar2 == 0x526f5470) {
          *(char *)((int)this + 0x1b) = (char)*puVar5;
        }
        else if (uVar2 == 0x6253636c) goto LAB_009a84a1;
      }
      else if (uVar2 == 0x62545363) {
        *(bool *)((int)this + 0x1a) = *puVar5 != 0;
      }
      else if (uVar2 == 0x62565363) {
LAB_009a84a1: ;
        *(bool *)((int)this + 0x19) = *puVar5 != 0;
      }
switchD_009a820d_default: ;
      puVar1 = puVar6 + 1;
      puVar6 = ((uint *)GEN_TOP(((int)puVar5 + (*puVar1 + 3 & 0xfffffffc))));
      uVar3 = uVar3 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar3 < param_3);
  }
  return 0;
}

/* ref: FUN_009a84f0 */
uint F_009a84f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9a84f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10ddb1c));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar2 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(REFG(int, 0x14a0eb0) + uVar2 * 4) = 0;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      uVar3 = F_00406b30(puVar1 + -1);
      uVar2 = (uint)uVar3;
    }
    else {
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      uVar3 = F_00406b30(puVar1 + -1);
      uVar2 = (uint)uVar3;
    }
    else {
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      uVar3 = F_00406b30(puVar1 + -1);
      uVar2 = (uint)uVar3;
    }
    else {
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      uVar3 = F_00406b30(puVar1 + -1);
      uVar2 = (uint)uVar3;
    }
    else {
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      uVar3 = F_00406b30(puVar1 + -1);
      uVar2 = (uint)uVar3;
    }
    else {
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      uVar3 = F_00406b30(puVar1 + -1);
      uVar2 = (uint)uVar3;
    }
    else {
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      uVar3 = F_00406b30(puVar1 + -1);
      uVar2 = (uint)uVar3;
    }
    else {
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
      *(undefined4 *)((int)this + 0x2c) = 0;
      *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10dd964));
      return uVar2;
    }
    uVar3 = F_00406b30(puVar1 + -1);
    uVar2 = (uint)uVar3;
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10dd964));
  return uVar2;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf5 */
uint F_009a8670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a8670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 == -3) {
    uVar1 = F_009a5550();
    return *(uint *)(uVar1 + 0xc);
  }
  if (param_1 == -2) {
    uVar1 = F_009a5550();
    return *(uint *)(uVar1 + 0x10);
  }
  if ((-1 < param_1) && (param_1 < (char)this[0x95])) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x14) + param_1 * 8))) + 4))))
                      (*(int *)(this + 0x14) + param_1 * 8);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009a86c0 */
unsigned int F_009a86c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a86c0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_5;
  
  uVar3 = 0;
  local_5 = 0xff;
  piVar5 = param_1;
  uVar6 = REFG(float, 0x1094834);
  uVar7 = REFG(float, 0x10abe54);
  if (param_2 != 0) {
    do {
      piVar4 = piVar5 + 2;
      if (*piVar5 == 0x44617461) {
        switch((unsigned int)(uintptr_t)(local_5)) {
        case 0: ;
          if (REFG(char, 0x14a06d6) == '\0') {
            pvVar2 = (undefined *)(REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8));
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 0xf8;
            if (pvVar2 != (undefined *)0x0) {
              F_00998160(pvVar2);
            }
            F_00998310(piVar4,piVar5[1]);
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 0xf8;
            F_00998310(piVar4,piVar5[1]);
          }
          break;
        case 1: ;
          if (REFG(char, 0x14a06d6) == '\0') {
            pvVar2 = (undefined *)(REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8));
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 300;
            if (pvVar2 != (undefined *)0x0) {
              F_00997f60(pvVar2);
            }
            F_009980e0(piVar4,piVar5[1]);
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 300;
            F_009980e0(piVar4,piVar5[1]);
          }
          break;
        case 7: ;
          if (REFG(char, 0x14a06d6) == '\0') {
            puVar1 = (undefined4 *)(REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8));
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 0x34;
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = (*(undefined * PTR32 (*)[8])REFP(0x10de9b0));
              puVar1[1] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar1[2] = &REFG(undefined, 0x14a0a44);
              puVar1[3] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar1[4] = &REFG(undefined, 0x14a0a44);
              puVar1[5] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar1[6] = &REFG(undefined, 0x14a0a44);
              puVar1[7] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar1[8] = &REFG(undefined, 0x14a0a44);
              puVar1[9] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
              puVar1[10] = &REFG(undefined, 0x14a0a44);
              puVar1[0xb] = uVar6;
              puVar1[0xc] = uVar7;
            }
            F_00987d30(piVar4,piVar5[1]);
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 0x34;
            F_00987d30(piVar4,piVar5[1]);
          }
          break;
        case 8: ;
          if (REFG(char, 0x14a06d6) == '\0') {
            pvVar2 = (undefined *)(REFG(int, 0x14a09d8) + REFG(int, 0x14a09e0));
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 0xec;
            if (pvVar2 != (undefined *)0x0) {
              F_00997bb0(pvVar2);
            }
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 0xec;
          }
          break;
        case 9: ;
          if (REFG(char, 0x14a06d6) == '\0') {
            pvVar2 = (undefined *)(REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8));
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 0xbc;
            if (pvVar2 != (undefined *)0x0) {
              F_00997d80(pvVar2);
            }
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 0xbc;
          }
          F_00997ed0(piVar4,piVar5[1]);
        }
      }
      else if (*piVar5 == 0x45665654) {
        local_5 = (undefined1)*piVar4;
      }
      uVar3 = uVar3 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)piVar4 + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar3 < param_2);
  }
  return 0;
}

/* ref: FUN_009a8910 */
unsigned int F_009a8910(unsigned int gen_a0)
{
  GEN_ENTER(0x9a8910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[38])REFP(0x10df0bc));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x88))))(REFG(int * PTR32, 0x14a0ea8),*(undefined4 *)((int)this + 0x20));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x234) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x22c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x228) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x21c) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x214) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x210) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x204) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1fc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ec) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1cc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c8) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1bc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x188) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x178) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x160) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x150) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x148) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x128) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x118) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x110) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x108) = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xfc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xdc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xcc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbc) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb4) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9c) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[4])REFP(0x10dd358));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[38])REFP(0x10dd44c));
  return 0;
}

/* ref: FUN_009a8af0 */
unsigned int F_009a8af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9a8af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * piVar1;
  char cVar2;
  undefined * puVar3;
  undefined4 * puVar4;
  undefined * pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int * piVar9;
  char * pcVar10;
  undefined4 uVar11;
  int local_c;
  int local_8;
  
  uVar7 = 0;
  local_8 = 0;
  local_c = 0;
  pcVar10 = param_2;
  if (param_3 != 0) {
    do {
      puVar3 = *(undefined * PTR32 *)pcVar10;
      piVar9 = (int *)(pcVar10 + 8);
      if (puVar3 < (undefined *)0x43724353) {
        if (puVar3 == (undefined *)0x43724352) {
          uVar11 = *(undefined4 *)(pcVar10 + 4);
          pvVar5 = (undefined *)((int)this + 0x48);
          goto LAB_009a9170;
        }
        if (puVar3 < (undefined *)0x524f55) {
          if (puVar3 != (undefined *)0x524f54) {
            if (puVar3 < (undefined *)0x477262) {
              if (puVar3 == (undefined *)0x477261) {
                uVar11 = *(undefined4 *)(pcVar10 + 4);
                pvVar5 = (undefined *)((int)this + 0x70);
              }
              else if (puVar3 < (undefined *)0x437244) {
                if (puVar3 == (undefined *)0x437243) {
                  uVar11 = *(undefined4 *)(pcVar10 + 4);
                  pvVar5 = (undefined *)((int)this + 0x40);
                }
                else {
                  if (puVar3 != (undefined *)0x415273) {
                    if (puVar3 == (undefined *)0x436f6c) {
                      F_00998ee0((undefined *)((int)this + 0x9c),param_1,piVar9,
                                   *(undefined4 *)(pcVar10 + 4));
                    }
                    goto switchD_009a8db9_default;
                  }
                  uVar11 = *(undefined4 *)(pcVar10 + 4);
                  pvVar5 = (undefined *)((int)this + 0x88);
                }
              }
              else {
                if (puVar3 != (undefined *)0x437249) {
                  if (puVar3 == (undefined *)0x455654) {
                    *(char *)((int)this + 0x18) = (char)*piVar9;
                  }
                  goto switchD_009a8db9_default;
                }
                uVar11 = *(undefined4 *)(pcVar10 + 4);
                pvVar5 = (undefined *)((int)this + 0x58);
              }
            }
            else {
              if ((undefined *)0x49415a < puVar3) {
                if (puVar3 == (undefined *)0x506f73) {
                  F_00998bf0((undefined *)((int)this + 0x178),param_1,piVar9,
                               *(undefined4 *)(pcVar10 + 4));
                }
                goto switchD_009a8db9_default;
              }
              if (puVar3 == (undefined *)0x49415a) {
                uVar11 = *(undefined4 *)(pcVar10 + 4);
                pvVar5 = (undefined *)((int)this + 0x22c);
              }
              else if (puVar3 == (undefined *)0x494158) {
                uVar11 = *(undefined4 *)(pcVar10 + 4);
                pvVar5 = (undefined *)((int)this + 0x1fc);
              }
              else {
                if (puVar3 != (undefined *)0x494159) goto switchD_009a8db9_default;
                uVar11 = *(undefined4 *)(pcVar10 + 4);
                pvVar5 = (undefined *)((int)this + 0x214);
              }
            }
            goto LAB_009a9170;
          }
          *(char *)((int)this + 0x1a) = (char)*piVar9;
        }
        else if (puVar3 < (undefined *)0x56525b) {
          if (puVar3 == (undefined *)0x56525a) {
            uVar11 = *(undefined4 *)(pcVar10 + 4);
            pvVar5 = (undefined *)((int)this + 0x1e4);
            goto LAB_009a9170;
          }
          if (puVar3 < (undefined *)0x565259) {
            if (puVar3 == (undefined *)0x565258) {
              uVar11 = *(undefined4 *)(pcVar10 + 4);
              pvVar5 = (undefined *)((int)this + 0x1b4);
              goto LAB_009a9170;
            }
            if (puVar3 == (undefined *)0x526f74) {
              F_00998bf0((undefined *)((int)this + 0x140),param_1,piVar9,*(undefined4 *)(pcVar10 + 4));
            }
            else if (puVar3 == &REFG(undefined, 0x53636c)) {
              F_00998bf0((undefined *)((int)this + 0x108),param_1,piVar9,*(undefined4 *)(pcVar10 + 4));
            }
          }
          else if (puVar3 == (undefined *)0x565259) {
            uVar11 = *(undefined4 *)(pcVar10 + 4);
            pvVar5 = (undefined *)((int)this + 0x1cc);
            goto LAB_009a9170;
          }
        }
        else if (puVar3 < (undefined *)0x43434f55) {
          if (puVar3 == (undefined *)0x43434f54) {
            *(char *)((int)this + 0x1b) = (char)*piVar9;
          }
          else if (puVar3 == (undefined *)0x624144) {
            *(bool *)((int)this + 0x1e) = *piVar9 != 0;
          }
          else if (puVar3 == (undefined *)0x41527352) {
            uVar11 = *(undefined4 *)(pcVar10 + 4);
            pvVar5 = (undefined *)((int)this + 0x90);
            goto LAB_009a9170;
          }
        }
        else if (puVar3 == (undefined *)0x436c436e) {
          *(int *)((int)this + 0x14) = (int)(short)*piVar9;
        }
      }
      else if (puVar3 < (undefined *)0x4c696666) {
        if (puVar3 == (undefined *)0x4c696665) {
          F_0097cf20((undefined *)((int)this + 0x2c),param_1,piVar9,*(undefined4 *)(pcVar10 + 4));
        }
        else if (puVar3 < (undefined *)0x49415853) {
          if (puVar3 == (undefined *)0x49415852) {
            uVar11 = *(undefined4 *)(pcVar10 + 4);
            pvVar5 = (undefined *)((int)this + 0x204);
            goto LAB_009a9170;
          }
          if (puVar3 < (undefined *)0x45664e70) {
            if (puVar3 == (undefined *)0x45664e6f) {
              *(char *)((int)this + 0x1f) = (char)*piVar9;
            }
            else {
              if (puVar3 == (undefined *)0x43724952) {
                uVar11 = *(undefined4 *)(pcVar10 + 4);
                pvVar5 = (undefined *)((int)this + 0x60);
                goto LAB_009a9170;
              }
              if (puVar3 == (undefined *)0x44617461) {
                switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x18))) {
                case 0: ;
                  puVar4 = (undefined4 *)F_0097abd0(4);
                  if (puVar4 == (undefined4 *)0x0) {
                    *(undefined4 *)((int)this + 0x240) = 0;
                  }
                  else {
                    *puVar4 = (*(undefined * PTR32 (*)[1])REFP(0x10ddca4));
                    *(undefined4 * PTR32 *)((int)this + 0x240) = puVar4;
                  }
                  break;
                case 1: ;
                  pvVar5 = (undefined *)F_0097abd0(0xb0);
                  if (pvVar5 == (undefined *)0x0) {
                    pvVar5 = (undefined *)0x0;
                  }
                  else {
                    pvVar5 = (undefined *)F_00987e10(pvVar5);
                  }
                  *(undefined * PTR32 *)((int)this + 0x240) = pvVar5;
                  F_00998390(pvVar5,param_1,piVar9,*(undefined4 *)(pcVar10 + 4));
                  break;
                case 2: ;
                  pvVar5 = (undefined *)F_0097abd0(0x98);
                  if (pvVar5 == (undefined *)0x0) {
                    pvVar5 = (undefined *)0x0;
                  }
                  else {
                    pvVar5 = (undefined *)F_00988080(pvVar5);
                  }
                  *(undefined * PTR32 *)((int)this + 0x240) = pvVar5;
                  F_00998550(pvVar5,param_1,piVar9,*(undefined4 *)(pcVar10 + 4));
                  break;
                case 3: ;
                  pvVar5 = (undefined *)F_0097abd0(0x80);
                  if (pvVar5 == (undefined *)0x0) {
                    pvVar5 = (undefined *)0x0;
                  }
                  else {
                    pvVar5 = (undefined *)F_00988640(pvVar5);
                  }
                  *(undefined * PTR32 *)((int)this + 0x240) = pvVar5;
                  F_009989c0(pvVar5,param_1,piVar9,*(undefined4 *)(pcVar10 + 4));
                  break;
                case 4: ;
                  pvVar5 = (undefined *)F_0097abd0(0x98);
                  if (pvVar5 == (undefined *)0x0) {
                    pvVar5 = (undefined *)0x0;
                  }
                  else {
                    pvVar5 = (undefined *)F_00988290(pvVar5);
                  }
                  *(undefined * PTR32 *)((int)this + 0x240) = pvVar5;
                  F_009986f0(pvVar5,param_1,piVar9,*(undefined4 *)(pcVar10 + 4));
                  break;
                case 5: ;
                  pvVar5 = (undefined *)F_0097abd0(0x68);
                  if (pvVar5 == (undefined *)0x0) {
                    pvVar5 = (undefined *)0x0;
                  }
                  else {
                    pvVar5 = (undefined *)F_00988490(pvVar5);
                  }
                  *(undefined * PTR32 *)((int)this + 0x240) = pvVar5;
                  F_009988a0(pvVar5,param_1,piVar9,*(undefined4 *)(pcVar10 + 4));
                }
              }
            }
          }
          else if (puVar3 == (undefined *)0x456d436e) {
            cVar2 = (char)*piVar9;
            *(char *)((int)this + 0x1d) = cVar2;
            if ('\0' < cVar2) {
              pvVar5 = (undefined *)F_0097ab00(cVar2 * 0x44);
              *(undefined * PTR32 *)((int)this + 8) = pvVar5;
              F_00c48350(pvVar5,0,*(char *)((int)this + 0x1d) * 0x44);
            }
          }
          else if (puVar3 == (undefined *)0x47726152) {
            uVar11 = *(undefined4 *)(pcVar10 + 4);
            pvVar5 = (undefined *)((int)this + 0x78);
            goto LAB_009a9170;
          }
        }
        else if (puVar3 < (undefined *)0x4974456e) {
          if (puVar3 != (undefined *)0x4974456d) {
            if (puVar3 == (undefined *)0x49415952) {
              uVar11 = *(undefined4 *)(pcVar10 + 4);
              pvVar5 = (undefined *)((int)this + 0x21c);
            }
            else {
              if (puVar3 != (undefined *)0x49415a52) goto switchD_009a8db9_default;
              uVar11 = *(undefined4 *)(pcVar10 + 4);
              pvVar5 = (undefined *)((int)this + 0x234);
            }
            goto LAB_009a9170;
          }
          F_0097afb0(piVar9,*(undefined4 *)(pcVar10 + 4),*(int *)((int)this + 8) + local_8 * 0x44)
          ;
          local_8 = local_8 + 1;
        }
        else if (puVar3 == (undefined *)0x49745072) {
          F_0097afb0(piVar9,*(undefined4 *)(pcVar10 + 4),*(int *)((int)this + 4) + local_c * 0x44)
          ;
          local_c = local_c + 1;
        }
      }
      else if (puVar3 < (undefined *)0x53644e6e) {
        if (puVar3 == (undefined *)0x53644e6d) {
          uVar8 = *(int *)(pcVar10 + 4) + 3U & 0xfffffffc;
          if (REFG(char, 0x14a06d6) == '\0') {
            iVar6 = REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8);
            REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + uVar8;
          }
          else {
            REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + uVar8;
            iVar6 = 0;
          }
          *(int *)((int)this + 0x28) = iVar6;
          F_00c46aa0(iVar6,piVar9,*(undefined4 *)(pcVar10 + 4));
        }
        else if (puVar3 < (undefined *)0x5072436f) {
          if (puVar3 == (undefined *)0x5072436e) {
            cVar2 = (char)*piVar9;
            *(char *)((int)this + 0x1c) = cVar2;
            if ('\0' < cVar2) {
              pvVar5 = (undefined *)F_0097ab00(cVar2 * 0x44);
              *(undefined * PTR32 *)((int)this + 4) = pvVar5;
              F_00c48350(pvVar5,0,*(char *)((int)this + 0x1c) * 0x44);
            }
          }
          else if (puVar3 == (undefined *)0x4c704564) {
            *(int *)((int)this + 0x10) = (int)(short)*piVar9;
          }
          else if (puVar3 == (undefined *)0x4c705374) {
            *(int *)((int)this + 0xc) = (int)(short)*piVar9;
          }
        }
        else if (puVar3 == (undefined *)0x52424454) {
          *(char *)((int)this + 0x19) = (char)*piVar9;
        }
      }
      else if (puVar3 < (undefined *)0x56525953) {
        if (puVar3 == (undefined *)0x56525952) {
          uVar11 = *(undefined4 *)(pcVar10 + 4);
          pvVar5 = (undefined *)((int)this + 0x1d4);
LAB_009a9170: ;
          F_00988d70(pvVar5,param_1,piVar9,uVar11);
        }
        else if (puVar3 == (undefined *)0x53644e6f) {
          *(int *)((int)this + 0x24) = *piVar9;
        }
        else if (puVar3 == (undefined *)0x56525852) {
          uVar11 = *(undefined4 *)(pcVar10 + 4);
          pvVar5 = (undefined *)((int)this + 0x1bc);
          goto LAB_009a9170;
        }
      }
      else if (puVar3 == (undefined *)0x56525a52) {
        uVar11 = *(undefined4 *)(pcVar10 + 4);
        pvVar5 = (undefined *)((int)this + 0x1ec);
        goto LAB_009a9170;
      }
switchD_009a8db9_default: ;
      piVar1 = (int *)(pcVar10 + 4);
      pcVar10 = ((char *)GEN_TOP(((int)piVar9 + (*piVar1 + 3U & 0xfffffffc))));
      uVar7 = uVar7 + 8 + (*piVar1 + 3U & 0xfffffffc);
    } while (uVar7 < param_3);
  }
  return 0;
}

/* ref: FUN_009a91c0 */
unsigned int F_009a91c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9a91c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  int * piVar2;
  uint * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if (param_3 != 0) {
    do {
      puVar3 = param_2 + 2;
      uVar4 = *param_2;
      if (uVar4 < 0x56496479) {
        if (uVar4 == 0x56496478) {
          *(short *)((int)this + 0x1a) = (short)(param_2[1] >> 1);
          puVar5 = (undefined4 *)F_009a5550();
          piVar2 = (int *)*puVar5;
          uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,param_2[1],0);
          *(uint *)((int)this + 0x10) = uVar4;
          uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x6c))(piVar2,uVar4,0,param_2[1],0);
          F_00c46aa0(uVar4,puVar3,param_2[1]);
          ((code *)*(gen_code32 *)(*piVar2 + 0x74))(piVar2,*(undefined4 *)((int)this + 0x10));
        }
        else if (uVar4 == 0x56447277) {
          *(short *)((int)this + 0x18) = (short)(param_2[1] / 0x24);
          puVar5 = (undefined4 *)F_009a5550();
          piVar2 = (int *)*puVar5;
          uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,param_2[1],0);
          *(uint *)((int)this + 0xc) = uVar4;
          uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2,uVar4,0,param_2[1],0);
          F_00c46aa0(uVar4,puVar3,param_2[1]);
          ((code *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2,*(undefined4 *)((int)this + 0xc));
        }
        else if (uVar4 == 0x56456d74) {
          *(short *)((int)this + 0x16) = (short)(param_2[1] / 0x1c);
          uVar4 = F_0097ab50(param_2[1]);
          *(uint *)((int)this + 8) = uVar4;
          F_00c46aa0(uVar4,puVar3,param_2[1]);
        }
      }
      else if (uVar4 == 0x564e756d) {
        *(short *)((int)this + 0x14) = (short)(param_2[1] >> 1);
        uVar4 = param_2[1] + 0xf & 0xfffffff0;
        if (REFG(char, 0x14a06d6) == '\0') {
          uVar7 = REFG(int, 0x14a09d8) + 0xfU & 0xfffffff0;
          iVar6 = REFG(int, 0x14a09e0) + uVar7;
          REFG(int, 0x14a09d8) = uVar7 + uVar4;
        }
        else {
          REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + uVar4;
          iVar6 = 0;
        }
        *(int *)((int)this + 4) = iVar6;
        F_00c46aa0(iVar6,puVar3,param_2[1]);
      }
      puVar1 = param_2 + 1;
      param_2 = ((uint *)GEN_TOP(((int)puVar3 + (*puVar1 + 3 & 0xfffffffc))));
      uVar8 = uVar8 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar8 < param_3);
  }
  return 0;
}

/* ref: FUN_009a9390 */
unsigned int F_009a9390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9a9390u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined4 in_edi = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte * param_5 = (byte *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
  byte * pbVar1;
  float * pfVar2;
  undefined * puVar3;
  float fVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  uint * puVar8;
  uint * puVar9;
  uint uVar10;
  uint * puVar11;
  byte bVar12;
  int iVar13;
  byte * pbVar14;
  byte * pbVar15;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  pbVar15 = param_5;
  if (param_6 != 0) {
    do {
      puVar3 = *(undefined * PTR32 *)pbVar15;
      pbVar14 = pbVar15 + 8;
      if (puVar3 < (undefined *)0x44775073) {
        if (puVar3 == (undefined *)0x44775072) {
          *(byte *)(in_ecx + 0x23) = *pbVar14;
        }
        else if (puVar3 < (undefined *)0x565259) {
          if (puVar3 == (undefined *)0x565258) {
            F_00988d70((undefined *)(in_ecx + 0x184),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
          }
          else if (puVar3 < (undefined *)0x477262) {
            if (puVar3 == (undefined *)0x477261) {
              F_00988d70((undefined *)(in_ecx + 0x40),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
            }
            else if (puVar3 < (undefined *)0x5453) {
              if (puVar3 == (undefined *)0x5452) {
                puVar7 = (undefined4 *)F_0097abd0(0x10);
                if (puVar7 == (undefined4 *)0x0) {
                  puVar7 = (undefined4 *)0x0;
                }
                else {
                  *puVar7 = (*(undefined * PTR32 (*)[7])REFP(0x10ddda8));
                  *(undefined2 *)(puVar7 + 1) = 0xff00;
                  puVar7[2] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                  puVar7[3] = &REFG(undefined, 0x14a0a44);
                }
                *(undefined4 * PTR32 *)(in_ecx + 0x1dc) = puVar7;
                F_00989b80(puVar7,param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
              }
              else if (puVar3 == (undefined *)0x5444) {
                uVar5 = F_0097abd0(0x10);
                if (uVar5 == 0) {
                  pvVar6 = (undefined *)0x0;
                }
                else {
                  pvVar6 = (undefined *)F_0097d7d0(uVar5);
                }
                *(undefined * PTR32 *)(in_ecx + 0x1e0) = pvVar6;
                F_00989c60(pvVar6,param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
              }
              else if (puVar3 == (undefined *)0x544e) {
                uVar5 = F_0097abd0(0x10);
                if (uVar5 == 0) {
                  pvVar6 = (undefined *)0x0;
                }
                else {
                  pvVar6 = (undefined *)F_0097d5e0(uVar5);
                }
                *(undefined * PTR32 *)(in_ecx + 0x1d8) = pvVar6;
                F_00989a30(pvVar6,param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
              }
              else if (puVar3 == (undefined *)0x5450) {
                uVar5 = F_0097abd0(0x10);
                if (uVar5 == 0) {
                  pvVar6 = (undefined *)0x0;
                }
                else {
                  pvVar6 = (undefined *)F_0097d8d0(uVar5);
                }
                *(undefined * PTR32 *)(in_ecx + 0x1e4) = pvVar6;
                F_00989e50(pvVar6,param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
              }
            }
            else if (puVar3 == (undefined *)0x415273) {
              F_00988d70((undefined *)(in_ecx + 0x58),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
            }
            else if (puVar3 == (undefined *)0x436f6c) {
              F_00998ee0((undefined *)(in_ecx + 0x6c),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
            }
          }
          else if (&REFG(undefined, 0x53636c) < puVar3) {
            if (puVar3 == (undefined *)0x544331) {
              pvVar6 = (undefined *)F_0097abd0(0x28);
              if (pvVar6 == (undefined *)0x0) {
                pvVar6 = (undefined *)0x0;
              }
              else {
                pvVar6 = (undefined *)F_0097d220(pvVar6);
              }
              *(undefined * PTR32 *)(in_ecx + 0x1d0) = pvVar6;
              F_00989770(pvVar6,param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
            }
            else if (puVar3 == (undefined *)0x544332) {
              puVar7 = (undefined4 *)F_0097abd0(0xc);
              if (puVar7 == (undefined4 *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                *(ushort *)((int)puVar7 + 6) = *(ushort *)((int)puVar7 + 6) & 0xfff8;
                *puVar7 = (*(undefined * PTR32 (*)[12])REFP(0x10ddd50));
                *(undefined2 *)(puVar7 + 1) = 0;
                *(undefined1 *)(puVar7 + 2) = 0xff;
              }
              *(undefined4 * PTR32 *)(in_ecx + 0x1d4) = puVar7;
              F_0097d420(puVar7,param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
            }
          }
          else if (puVar3 == &REFG(undefined, 0x53636c)) {
            F_00998bf0((undefined *)(in_ecx + 0xd8),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
          }
          else if (puVar3 == (undefined *)0x506f73) {
            F_00998bf0((undefined *)(in_ecx + 0x148),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
          }
          else if (puVar3 == &REFG(undefined, 0x524d54)) {
            *(byte *)(in_ecx + 0x20) = *pbVar14;
          }
          else if (puVar3 == (undefined *)0x526f74) {
            F_00998bf0((undefined *)(in_ecx + 0x110),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
          }
        }
        else if (puVar3 < (undefined *)0x44617462) {
          if (puVar3 == (undefined *)0x44617461) {
            switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_ecx + 0x1c))) {
            case 1: ;
              F_0097dda0(*(undefined * PTR32 *)(in_ecx + 0x1c8),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
              break;
            case 2: ;
              F_0097de40(*(undefined * PTR32 *)(in_ecx + 0x1c8),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
              break;
            case 3: ;
              F_00999390(*(undefined * PTR32 *)(in_ecx + 0x1c8),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
              break;
            case 4: ;
              F_00989ee0(*(undefined * PTR32 *)(in_ecx + 0x1c8),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
              break;
            case 5: ;
              F_00999450(*(undefined * PTR32 *)(in_ecx + 0x1c8),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
              break;
            case 6: ;
              F_00999630(*(undefined * PTR32 *)(in_ecx + 0x1c8),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
              break;
            case 9: ;
              F_0098a520(*(undefined * PTR32 *)(in_ecx + 0x1c8),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
              break;
            case 10: ;
              F_0097df10(*(undefined * PTR32 *)(in_ecx + 0x1c8),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
              break;
            case 0xb: ;
              F_0098ac60(*(undefined * PTR32 *)(in_ecx + 0x1c8),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
              break;
            case 0xc: ;
              F_00999a20(*(undefined * PTR32 *)(in_ecx + 0x1c8),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
              break;
            case 0xd: ;
              F_0097dc00(*(undefined * PTR32 *)(in_ecx + 0x1c8),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
            }
          }
          else if (puVar3 < (undefined *)0x43434f55) {
            if (puVar3 == (undefined *)0x43434f54) {
              *(byte *)(in_ecx + 0x1f) = *pbVar14;
            }
            else if (puVar3 == (undefined *)0x565259) {
              F_00988d70((undefined *)(in_ecx + 0x19c),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
            }
            else if (puVar3 == (undefined *)0x56525a) {
              F_00988d70((undefined *)(in_ecx + 0x1b4),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
            }
            else if (puVar3 == (undefined *)0x41527352) {
              F_00988d70((undefined *)(in_ecx + 0x60),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
            }
          }
          else if (puVar3 == (undefined *)0x436f6c6c) {
            *(byte *)(in_ecx + 0x28) =
                 *(byte *)(in_ecx + 0x28) ^ (*pbVar14 ^ *(byte *)(in_ecx + 0x28)) & 0xf;
          }
          else if (puVar3 == (undefined *)0x43756c54) {
            *(byte *)(in_ecx + 0x21) = *pbVar14;
          }
        }
        else if (puVar3 < (undefined *)0x44734475) {
          if (puVar3 == (undefined *)0x44734474) {
            *(byte *)(in_ecx + 0x29) =
                 *(byte *)(in_ecx + 0x29) ^ (*pbVar14 ^ *(byte *)(in_ecx + 0x29)) & 1;
          }
          else if (puVar3 == (undefined *)0x44697254) {
            *(byte *)(in_ecx + 0x28) = *pbVar14 << 6 | *(byte *)(in_ecx + 0x28) & 0x3f;
          }
          else if (puVar3 == (undefined *)0x446c4152) {
            *(byte *)(in_ecx + 0x25) = *pbVar14;
          }
          else if (puVar3 == (undefined *)0x44704f66) {
            *(undefined4 *)(in_ecx + 0x14) = *(undefined4 *)pbVar14;
          }
        }
        else {
          if (puVar3 == (undefined *)0x44734477) {
            bVar12 = (*pbVar14 * '\x02' ^ *(byte *)(in_ecx + 0x29)) & 2;
            goto LAB_009a9e98;
          }
          if (puVar3 == (undefined *)0x44735370) {
            *(byte *)(in_ecx + 0x29) =
                 *(byte *)(in_ecx + 0x29) ^ (*pbVar14 * '\x04' ^ *(byte *)(in_ecx + 0x29)) & 4;
          }
        }
      }
      else if (puVar3 < (undefined *)0x52424455) {
        if (puVar3 == (undefined *)0x52424454) {
          *(byte *)(in_ecx + 0x1d) = *pbVar14;
        }
        else if (puVar3 < (undefined *)0x4c414153) {
          if (puVar3 == (undefined *)0x4c414152) {
            *(byte *)(in_ecx + 0x26) = *pbVar14;
          }
          else if (puVar3 < (undefined *)0x46614565) {
            if (puVar3 == (undefined *)0x46614564) {
              *(undefined4 *)(in_ecx + 0x10) = *(undefined4 *)pbVar14;
            }
            else if (puVar3 == (undefined *)0x456e7654) {
              *(byte *)(in_ecx + 0x28) =
                   *(byte *)(in_ecx + 0x28) ^ (*pbVar14 << 4 ^ *(byte *)(in_ecx + 0x28)) & 0x30;
            }
            else if (puVar3 == (undefined *)0x45764152) {
              *(byte *)(in_ecx + 0x24) = *pbVar14;
            }
            else if (puVar3 == (undefined *)0x46614250) {
              *(byte *)(in_ecx + 0x27) = *pbVar14;
            }
          }
          else if (puVar3 == (undefined *)0x46615374) {
            *(undefined4 *)(in_ecx + 0xc) = *(undefined4 *)pbVar14;
          }
          else if (puVar3 == (undefined *)0x47726152) {
            F_00988d70((undefined *)(in_ecx + 0x48),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
          }
        }
        else if (puVar3 < (undefined *)0x4e654565) {
          if (puVar3 == (undefined *)0x4e654564) {
            *(undefined4 *)(in_ecx + 8) = *(undefined4 *)pbVar14;
          }
          else if (puVar3 == (undefined *)0x4c696665) {
            F_0097cf20((undefined *)(in_ecx + 0x2c),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
          }
          else if (puVar3 == (undefined *)0x4c704564) {
            *(undefined2 *)(in_ecx + 0x1a) = *(undefined2 *)pbVar14;
          }
          else if (puVar3 == (undefined *)0x4c705374) {
            *(undefined2 *)(in_ecx + 0x18) = *(undefined2 *)pbVar14;
          }
        }
        else if (puVar3 == (undefined *)0x4e655374) {
          *(undefined4 *)(in_ecx + 4) = *(undefined4 *)pbVar14;
        }
        else if (puVar3 == (undefined *)0x50725654) {
          bVar12 = *pbVar14;
          *(byte *)(in_ecx + 0x1c) = bVar12;
          switch((unsigned int)(uintptr_t)(bVar12)) {
          case 1: ;
            puVar7 = (undefined4 *)F_0097abd0(0xc);
            if (puVar7 == (undefined4 *)0x0) {
LAB_009a9bdb: ;
              *(undefined4 *)(in_ecx + 0x1c8) = 0;
            }
            else {
              *puVar7 = (*(undefined * PTR32 (*)[4])REFP(0x10dde3c));
              *(undefined2 *)(puVar7 + 1) = 0;
              puVar7[2] = 0;
              *(undefined4 * PTR32 *)(in_ecx + 0x1c8) = puVar7;
            }
            break;
          case 2: ;
            puVar7 = (undefined4 *)F_0097abd0(8);
            if (puVar7 == (undefined4 *)0x0) goto LAB_009a9bdb;
            *puVar7 = (*(undefined * PTR32 (*)[2])REFP(0x10dde50));
            *(undefined1 *)(puVar7 + 1) = 0;
            *(undefined4 * PTR32 *)(in_ecx + 0x1c8) = puVar7;
            break;
          case 3: ;
            pvVar6 = (undefined *)F_0097abd0(0xf8);
            if (pvVar6 == (undefined *)0x0) goto LAB_009a9bdb;
            uVar5 = F_0098a1b0(pvVar6);
            *(uint *)(in_ecx + 0x1c8) = uVar5;
            break;
          case 4: ;
            pvVar6 = (undefined *)F_0097abd0(0x34);
            if (pvVar6 == (undefined *)0x0) goto LAB_009a9bdb;
            uVar5 = F_0097d9c0(pvVar6);
            *(uint *)(in_ecx + 0x1c8) = uVar5;
            break;
          case 5: ;
            pvVar6 = (undefined *)F_0097abd0(0x148);
            if (pvVar6 == (undefined *)0x0) goto LAB_009a9bdb;
            uVar5 = F_0098a310(pvVar6);
            *(uint *)(in_ecx + 0x1c8) = uVar5;
            break;
          case 6: ;
            pvVar6 = (undefined *)F_0097abd0(0x344);
            if (pvVar6 == (undefined *)0x0) goto LAB_009a9bdb;
            uVar5 = F_0098a7c0(pvVar6);
            *(uint *)(in_ecx + 0x1c8) = uVar5;
            break;
          case 8: ;
            puVar7 = (undefined4 *)F_0097abd0(4);
            if (puVar7 == (undefined4 *)0x0) goto LAB_009a9bdb;
            *puVar7 = (*(undefined * PTR32 (*)[1])REFP(0x10dde5c));
            *(undefined4 * PTR32 *)(in_ecx + 0x1c8) = puVar7;
            break;
          case 9: ;
            pvVar6 = (undefined *)F_0097abd0(0x1c);
            if (pvVar6 == (undefined *)0x0) goto LAB_009a9bdb;
            uVar5 = F_0097dc50(pvVar6);
            *(uint *)(in_ecx + 0x1c8) = uVar5;
            break;
          case 10: ;
            puVar7 = (undefined4 *)F_0097abd0(8);
            fVar4 = REFG(float, 0x1087f04);
            if (puVar7 == (undefined4 *)0x0) goto LAB_009a9bdb;
            *puVar7 = (*(undefined * PTR32 (*)[2])REFP(0x10dde64));
            puVar7[1] = (undefined4)gen_fl2bits(fVar4);
            *(undefined4 * PTR32 *)(in_ecx + 0x1c8) = puVar7;
            break;
          case 0xb: ;
            pvVar6 = (undefined *)F_0097abd0(0x24);
            if (pvVar6 == (undefined *)0x0) goto LAB_009a9bdb;
            uVar5 = F_0097df60(pvVar6);
            *(uint *)(in_ecx + 0x1c8) = uVar5;
            break;
          case 0xc: ;
            pvVar6 = (undefined *)F_0097abd0(0x1bc);
            if (pvVar6 == (undefined *)0x0) goto LAB_009a9bdb;
            uVar5 = F_0098af30(pvVar6);
            *(uint *)(in_ecx + 0x1c8) = uVar5;
            break;
          case 0xd: ;
            puVar7 = (undefined4 *)F_0097abd0(8);
            if (puVar7 == (undefined4 *)0x0) goto LAB_009a9bdb;
            *puVar7 = (*(undefined * PTR32 (*)[2])REFP(0x10dde24));
            *(undefined1 *)(puVar7 + 1) = 0xff;
            *(undefined4 * PTR32 *)(in_ecx + 0x1c8) = puVar7;
          }
        }
      }
      else if (puVar3 < (undefined *)0x56525a53) {
        if (puVar3 == (undefined *)0x56525a52) {
          F_00988d70((undefined *)(in_ecx + 0x1bc),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
        }
        else if (puVar3 < (undefined *)0x55765375) {
          if (puVar3 == (undefined *)0x55765374) {
            iVar13 = local_c * 0x70;
            local_c = local_c + 1;
            F_00999190(((undefined *)GEN_TOP((iVar13 + *(int *)(in_ecx + 0x1cc)))),param_4,pbVar14,
                         *(undefined4 *)(pbVar15 + 4));
          }
          else if (puVar3 == (undefined *)0x526f4f54) {
            *(byte *)(in_ecx + 0x1e) = *pbVar14;
          }
          else if (puVar3 == (undefined *)0x536d706c) {
            pvVar6 = (undefined *)F_0097ab50(0xd0);
            *(undefined * PTR32 *)(in_ecx + 0x1e8) = pvVar6;
            F_00c48350(pvVar6,0,0xd0);
            F_00977640(*(undefined * PTR32 *)(in_ecx + 0x1e8),pbVar14,*(undefined4 *)(pbVar15 + 4));
          }
          else if (puVar3 == (undefined *)0x5576534e) {
            bVar12 = *pbVar14;
            *(byte *)(in_ecx + 0x22) = bVar12;
            if ('\0' < (char)bVar12) {
              uVar5 = (uint)(char)bVar12;
              if (bVar12 == 0) {
                puVar8 = (uint *)F_00406a50(4);
              }
              else {
                uVar10 = -(uint)((int)((ulonglong)uVar5 * 0x70 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar5 * 0x70);
                puVar8 = (uint *)F_0097ac20(-(uint)(0xfffffffb < uVar10) | uVar10 + 4);
              }
              if (puVar8 == (uint *)0x0) {
                *(undefined4 *)(in_ecx + 0x1cc) = 0;
              }
              else {
                *puVar8 = uVar5;
                iVar13 = uVar5 - 1;
                if (-1 < iVar13) {
                  puVar9 = puVar8 + 7;
                  puVar11 = puVar8 + 1;
                  do {
                    *puVar11 = (uint)(*(undefined * PTR32 (*)[5])REFP(0x10deb28));
                    puVar9[-5] = 0;
                    puVar9[-4] = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10deaac));
                    puVar9[-3] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                    puVar9[-2] = (uint)&REFG(undefined, 0x14a0a44);
                    puVar9[-1] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                    *puVar9 = (uint)&REFG(undefined, 0x14a0a44);
                    puVar9[1] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                    puVar9[2] = (uint)&REFG(undefined, 0x14a0a44);
                    puVar9[3] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                    puVar9[4] = (uint)&REFG(undefined, 0x14a0a44);
                    puVar9[6] = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10deaac));
                    puVar9[7] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                    puVar9[8] = (uint)&REFG(undefined, 0x14a0a44);
                    puVar9[9] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                    puVar9[10] = (uint)&REFG(undefined, 0x14a0a44);
                    puVar9[0xb] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                    puVar9[0xc] = (uint)&REFG(undefined, 0x14a0a44);
                    puVar9[0xd] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                    puVar9[0xe] = (uint)&REFG(undefined, 0x14a0a44);
                    puVar9[0x10] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcfc))
                    ;
                    puVar9[0x11] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                    puVar9[0x12] = (uint)&REFG(undefined, 0x14a0a44);
                    puVar9[0x13] = (uint)(*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
                    puVar9[0x14] = (uint)&REFG(undefined, 0x14a0a44);
                    puVar9[0x15] = puVar9[0x15] & 0xfffffff8;
                    puVar11 = puVar11 + 0x1c;
                    puVar9 = puVar9 + 0x1c;
                    iVar13 = iVar13 + -1;
                  } while (-1 < iVar13);
                }
                *(uint * PTR32 *)(in_ecx + 0x1cc) = puVar8 + 1;
              }
            }
          }
        }
        else if (puVar3 == (undefined *)0x56525852) {
          F_00988d70((undefined *)(in_ecx + 0x18c),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
        }
        else if (puVar3 == (undefined *)0x56525952) {
          F_00988d70((undefined *)(in_ecx + 0x1a4),param_4,pbVar14,*(undefined4 *)(pbVar15 + 4));
        }
      }
      else if (puVar3 < (undefined *)0x62466173) {
        if (puVar3 == (undefined *)0x62466172) {
          *(byte *)(in_ecx + 0x29) = *pbVar14 << 7 | *(byte *)(in_ecx + 0x29) & 0x7f;
        }
        else if (puVar3 == (undefined *)0x62414667) {
          *(byte *)(in_ecx + 0x29) =
               *(byte *)(in_ecx + 0x29) ^ (*pbVar14 << 4 ^ *(byte *)(in_ecx + 0x29)) & 0x10;
        }
        else if (puVar3 == (undefined *)0x6241544d) {
          *(byte *)(in_ecx + 0x29) =
               *(byte *)(in_ecx + 0x29) ^ (*pbVar14 * '\b' ^ *(byte *)(in_ecx + 0x29)) & 8;
        }
      }
      else if (puVar3 == (undefined *)0x624e6561) {
        bVar12 = (*pbVar14 << 6 ^ *(byte *)(in_ecx + 0x29)) & 0x40;
LAB_009a9e98: ;
        *(byte *)(in_ecx + 0x29) = *(byte *)(in_ecx + 0x29) ^ bVar12;
      }
      else if (puVar3 == (undefined *)0x62534374) {
        *(byte *)(in_ecx + 0x29) =
             *(byte *)(in_ecx + 0x29) ^ (*pbVar14 << 5 ^ *(byte *)(in_ecx + 0x29)) & 0x20;
      }
      pbVar1 = pbVar15 + 4;
      pbVar15 = pbVar14 + (*(int *)pbVar1 + 3U & 0xfffffffc);
      local_8 = local_8 + 8 + (*(int *)pbVar1 + 3U & 0xfffffffc);
    } while (local_8 < param_6);
  }
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_ecx + 0x1c))) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 4: ;
  case 6: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
    pfVar2 = (float *)(in_ecx + 0x14);
    if ((!GEN_ISNAN(REFG(float, 0x1090708)) && !GEN_ISNAN(*pfVar2)) &&
        (!(REFG(float, 0x1090708) < *pfVar2) && REFG(uint, 0x1090708) != *pfVar2)) {
      *(float *)(in_ecx + 0x14) = REFG(float, 0x1090708);
    }
    if (REFG(float, 0x1087f04) < *(float *)(in_ecx + 0x14)) {
      *(float *)(in_ecx + 0x14) = REFG(float, 0x1087f04);
    }
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Particle::vf1 */
uint F_009a9f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9a9f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 * puVar7;
  uint * puVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = (uint)(char)this[0x1c];
  uVar6 = (uint)(char)this[0x22];
  (*(int *)(gen_frame + 0x14)) = 0;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    goto switchD_009a9fbd_caseD_0;
  case 1: ;
  case 2: ;
    (*(int *)(gen_frame + 0x14)) = 1;
    uVar6 = 0;
    break;
  case 4: ;
    uVar6 = 1;
    (*(int *)(gen_frame + 0x14)) = 1;
    break;
  case 5: ;
    (*(int *)(gen_frame + 0x14)) = 3;
    break;
  case 6: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
    (*(int *)(gen_frame + 0x14)) = 2;
  }
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x20)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0;
  uVar4 = 6;
  (*(uint *)(gen_frame + 0x18)) = 6;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 1: ;
  case 2: ;
    uVar4 = 2;
    break;
  case 3: ;
  case 4: ;
  case 6: ;
  case 8: ;
  case 9: ;
  case 0xc: ;
    uVar4 = 3;
    break;
  case 5: ;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this)));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
    uVar4 = (*(uint *)(gen_frame + 0x18));
    if ((char)uVar1 == '\0') goto switchD_009aa008_caseD_d;
    uVar4 = (*(uint *)(gen_frame + 0x18)) & 0xfffffffd | 5;
    break;
  case 10: ;
    uVar4 = 0;
    break;
  case 0xb: ;
    uVar4 = 1;
    break;
  case 0xd: ;
switchD_009aa008_caseD_d: ;
    uVar4 = uVar4 & 0xfffffffc | 4;
  }
  uVar1 = 0;
  (*(uint *)(gen_frame + 0x18)) = (*(uint *)(&REFG(undefined, 0x10dd1c0) + (char)this[0x20] * 4) & 3 | (uVar6 & 7) << 8) << 6 |
             (byte)this[0x29] & 0x18 | uVar4 & 0xfffe3f27;
  (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) ^ ((uint)(this[0x26] != (undefined1)0x0) * 8 ^ (*(uint *)(gen_frame + 0x24))) & 8;
  if ((uVar6 & 7) != 0) {
    iVar5 = 0;
    do {
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x1cc) + iVar5))) + 8))))
                        (*(int *)(this + 0x1cc) + iVar5);
      *(bool *)((int)&(*(undefined4 *)(gen_frame + 0x1c)) + uVar1) = uVar6 == 1;
      uVar1 = uVar1 + 1;
      iVar5 = iVar5 + 0x70;
    } while (uVar1 < ((*(uint *)(gen_frame + 0x18)) >> 0xe & 7));
  }
  if (0 < (*(int *)(gen_frame + 0x14))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d0) + 0xc))))(*(int * PTR32 *)(this + 0x1d0));
    uVar1 = (*(uint *)(gen_frame + 0x20)) ^ ((char)uVar1 != '\0' ^ (*(uint *)(gen_frame + 0x20))) & 1;
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    if ((uVar1 & 1) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d0) + 0x10))))(*(int * PTR32 *)(this + 0x1d0));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') * 2 ^ (*(uint *)(gen_frame + 0x20))) & 2;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d0) + 0x14))))(*(int * PTR32 *)(this + 0x1d0));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') * 4 ^ (*(uint *)(gen_frame + 0x20))) & 4;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d0) + 0x1c))))(*(int * PTR32 *)(this + 0x1d0));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ (uVar1 * 8 ^ (*(uint *)(gen_frame + 0x20))) & 0x18;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d0) + 0x20))))(*(int * PTR32 *)(this + 0x1d0));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ ((uVar1 & 0xff) << 5 ^ (*(uint *)(gen_frame + 0x20))) & 0x20;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d0) + 0x24))))(*(int * PTR32 *)(this + 0x1d0));
      uVar1 = (*(uint *)(gen_frame + 0x20)) ^ ((uVar1 & 0xff) << 6 ^ (*(uint *)(gen_frame + 0x20))) & 0x40;
      (*(uint *)(gen_frame + 0x20)) = uVar1;
      if ((uVar1 & 2) != 0) {
        (*(uint *)(gen_frame + 0x20)) = uVar1 & 0xffffffbb;
      }
    }
  }
  if (1 < (*(int *)(gen_frame + 0x14))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d4) + 8))))(*(int * PTR32 *)(this + 0x1d4));
    uVar1 = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 7 ^ (*(uint *)(gen_frame + 0x20))) & 0x80;
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    if ((char)uVar1 < '\0') {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d4) + 0xc))))(*(int * PTR32 *)(this + 0x1d4));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 8 ^ (*(uint *)(gen_frame + 0x20))) & 0x100;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d4) + 0x10))))(*(int * PTR32 *)(this + 0x1d4));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 9 ^ (*(uint *)(gen_frame + 0x20))) & 0x200;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d4) + 0x14))))(*(int * PTR32 *)(this + 0x1d4));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ (uVar1 << 10 ^ (*(uint *)(gen_frame + 0x20))) & 0xc00;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d4) + 0x18))))(*(int * PTR32 *)(this + 0x1d4));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ (uVar1 << 0xc ^ (*(uint *)(gen_frame + 0x20))) & 0x7000;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d4) + 0x1c))))(*(int * PTR32 *)(this + 0x1d4));
      uVar1 = (*(uint *)(gen_frame + 0x20)) ^ (uVar1 << 0xf ^ (*(uint *)(gen_frame + 0x20))) & 0x18000;
      (*(uint *)(gen_frame + 0x20)) = uVar1;
      if ((uVar1 & 0x100) != 0) {
        (*(uint *)(gen_frame + 0x20)) = uVar1 & 0xfffe7dff;
      }
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1e0) + 8))))(*(int * PTR32 *)(this + 0x1e0));
    uVar1 = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 0x11 ^ (*(uint *)(gen_frame + 0x20))) & 0x20000;
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    if ((uVar1 & 0x20000) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1e0) + 0x1c))))(*(int * PTR32 *)(this + 0x1e0));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ (uVar1 << 0x12 ^ (*(uint *)(gen_frame + 0x20))) & 0xc0000;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1e0) + 0xc))))(*(int * PTR32 *)(this + 0x1e0));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 0x14 ^ (*(uint *)(gen_frame + 0x20))) & 0x100000;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1e0) + 0x10))))(*(int * PTR32 *)(this + 0x1e0));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 0x15 ^ (*(uint *)(gen_frame + 0x20))) & 0x200000;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1e0) + 0x14))))(*(int * PTR32 *)(this + 0x1e0));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 0x16 ^ (*(uint *)(gen_frame + 0x20))) & 0x400000;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1e0) + 0x18))))(*(int * PTR32 *)(this + 0x1e0));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 0x17 ^ (*(uint *)(gen_frame + 0x20))) & 0x800000;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1e4) + 8))))(*(int * PTR32 *)(this + 0x1e4));
    (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 0x1b ^ (*(uint *)(gen_frame + 0x20))) & 0x8000000;
  }
  if (2 < (*(int *)(gen_frame + 0x14))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 8))))(*(int * PTR32 *)(this + 0x1d8));
    uVar1 = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 0x18 ^ (*(uint *)(gen_frame + 0x20))) & 0x1000000;
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    if ((uVar1 & 0x1000000) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0xc))))(*(int * PTR32 *)(this + 0x1d8));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) ^ (uVar1 << 0x19 ^ (*(uint *)(gen_frame + 0x20))) & 0x6000000;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1dc) + 8))))(*(int * PTR32 *)(this + 0x1dc));
    uVar1 = (*(uint *)(gen_frame + 0x20)) ^ ((uint)((char)uVar1 != '\0') << 0x1c ^ (*(uint *)(gen_frame + 0x20))) & 0x10000000;
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    if ((uVar1 & 0x10000000) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1dc) + 0x10))))(*(int * PTR32 *)(this + 0x1dc));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) & 0x1fffffff | uVar1 << 0x1d;
    }
  }
  if (this[0x1c] == (undefined1)0x5) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this)));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) ^ (uVar1 << 8 ^ (*(uint *)(gen_frame + 0x18))) & 0x300;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this)));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) ^ (uVar1 << 10 ^ (*(uint *)(gen_frame + 0x18))) & 0xc00;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this)));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) ^ (uVar1 << 0xc ^ (*(uint *)(gen_frame + 0x18))) & 0x3000;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this)));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    uVar1 = (*(uint *)(gen_frame + 0x24)) ^ (uVar1 & 0xff ^ (*(uint *)(gen_frame + 0x24))) & 1;
    (*(uint *)(gen_frame + 0x24)) = uVar1;
    if ((uVar1 & 1) != 0) {
      (*(uint *)(gen_frame + 0x24)) = uVar1 ^ (param_1 * 2 ^ uVar1) & 6;
    }
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x74))(this);
  puVar8 = &(*(uint *)(gen_frame + 0x18));
  (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) ^ ((uVar1 & 0xff) << 5 ^ (*(uint *)(gen_frame + 0x18))) & 0x20;
  puVar7 = ((undefined1 *)(gen_frame + 0x8));
  this_00 = (undefined *)F_009a5550();
  puVar3 = (undefined4 *)F_00985860(this_00,puVar7,puVar8);
  *(undefined4 *)(this + 0x1ec) = *puVar3;
  *(undefined4 *)(this + 0x1f0) = puVar3[1];
  uVar1 = puVar3[2];
  *(uint *)(this + 500) = uVar1;
switchD_009a9fbd_caseD_0: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_009aa5e0 */
unsigned int F_009aa5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9aa5e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  
  uVar1 = 0;
  puVar3 = param_2;
  if (param_3 != 0) {
    do {
      uVar4 = *puVar3;
      puVar2 = puVar3 + 2;
      if (uVar4 < 0x526f75) {
        if (uVar4 == 0x526f74) {
          F_00998bf0((undefined *)((int)this + 0x4c),param_1,puVar2,puVar3[1]);
        }
        else if (uVar4 < 0x52644a) {
          if (uVar4 == 0x526449) {
            uVar4 = puVar3[1];
            this_00 = (undefined *)((int)this + 0x38);
            goto LAB_009aa697;
          }
          if (uVar4 == 0x417474) {
            this_00 = (undefined *)((int)this + 8);
            goto LAB_009aa693;
          }
          if (uVar4 == 0x506f73) {
            F_00998bf0((undefined *)((int)this + 0x84),param_1,puVar2,puVar3[1]);
          }
        }
        else if (uVar4 == 0x52644f) {
          this_00 = (undefined *)((int)this + 0x20);
          goto LAB_009aa693;
        }
      }
      else {
        if (uVar4 == 0x41747452) {
          this_00 = (undefined *)((int)this + 0x10);
LAB_009aa693: ;
          uVar4 = puVar3[1];
        }
        else {
          if (uVar4 != 0x52644952) {
            if (uVar4 != 0x52644f52) goto LAB_009aa69e;
            this_00 = (undefined *)((int)this + 0x28);
            goto LAB_009aa693;
          }
          uVar4 = puVar3[1];
          this_00 = (undefined *)((int)this + 0x40);
        }
LAB_009aa697: ;
        F_00988d70(this_00,param_1,puVar2,uVar4);
      }
LAB_009aa69e: ;
      uVar1 = uVar1 + 8 + (puVar3[1] + 3 & 0xfffffffc);
      puVar3 = ((uint *)GEN_TOP(((int)puVar2 + (puVar3[1] + 3 & 0xfffffffc))));
    } while (uVar1 < param_3);
  }
  return 0;
}

/* ref: FUN_009aa6d0 */
unsigned int F_009aa6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9aa6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = param_2;
  if (param_3 != 0) {
    do {
      uVar1 = *puVar4;
      puVar3 = puVar4 + 2;
      if (uVar1 < 0x506f78) {
        if (uVar1 == 0x506f77) {
          F_00988d70((undefined *)((int)this + 0xe0),param_1,puVar3,puVar4[1]);
        }
        else if (uVar1 == 0x416d62) {
          F_00998ee0((undefined *)((int)this + 4),param_1,puVar3,puVar4[1]);
        }
        else if (uVar1 == 0x436f6c) {
          F_00998ee0((undefined *)((int)this + 0x70),param_1,puVar3,puVar4[1]);
        }
      }
      else if (uVar1 == 0x526f74) {
        F_00998bf0((undefined *)((int)this + 0xf4),param_1,puVar3,puVar4[1]);
      }
      else if (uVar1 == 0x506f7752) {
        F_00988d70((undefined *)((int)this + 0xe8),param_1,puVar3,puVar4[1]);
      }
      uVar2 = uVar2 + 8 + (puVar4[1] + 3 & 0xfffffffc);
      puVar4 = ((uint *)GEN_TOP(((int)puVar3 + (puVar4[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_009aa7b0 */
unsigned int F_009aa7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9aa7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint * puVar5;
  uint * puVar6;
  
  uVar4 = 0;
  puVar6 = param_2;
  if (param_3 != 0) {
    do {
      uVar2 = *puVar6;
      puVar5 = puVar6 + 2;
      if (uVar2 < 0x53434447) {
        if (uVar2 == 0x53434446) {
          *(uint *)((int)this + 0xf4) = *puVar5;
        }
        else if (uVar2 < 0x526f75) {
          if (uVar2 == 0x526f74) {
            F_00998bf0((undefined *)((int)this + 0x78),param_1,puVar5,puVar6[1]);
          }
          else if (uVar2 == 0x436f6c) {
            F_00998ee0((undefined *)((int)this + 4),param_1,puVar5,puVar6[1]);
          }
          else if (uVar2 == 0x506f73) {
            F_00998bf0((undefined *)((int)this + 0xb0),param_1,puVar5,puVar6[1]);
          }
        }
        else if (uVar2 == 0x4174746e) {
          *(uint *)((int)this + 0xe8) = *puVar5;
        }
        else if (uVar2 == 0x44737453) {
          F_00988d70((undefined *)((int)this + 0x70),param_1,puVar5,puVar6[1]);
        }
      }
      else if (uVar2 < 0x624d7054) {
        if (uVar2 == 0x624d7053) {
          *(byte *)((int)this + 0xec) =
               *(byte *)((int)this + 0xec) ^
               ((*puVar5 != 0) * '\x04' ^ *(byte *)((int)this + 0xec)) & 4;
        }
        else if (uVar2 == 0x5343444e) {
          *(uint *)((int)this + 0xf0) = *puVar5;
        }
        else if (uVar2 == 0x62436853) {
          bVar3 = ((*puVar5 != 0) * '\x02' ^ *(byte *)((int)this + 0xec)) & 2;
          goto LAB_009aa90d;
        }
      }
      else if (uVar2 == 0x624d7653) {
        bVar3 = ((*puVar5 != 0) * '\b' ^ *(byte *)((int)this + 0xec)) & 8;
LAB_009aa90d: ;
        *(byte *)((int)this + 0xec) = *(byte *)((int)this + 0xec) ^ bVar3;
      }
      else if (uVar2 == 0x62536477) {
        *(byte *)((int)this + 0xec) =
             *(byte *)((int)this + 0xec) ^ (*puVar5 != 0 ^ *(byte *)((int)this + 0xec)) & 1;
      }
      puVar1 = puVar6 + 1;
      puVar6 = ((uint *)GEN_TOP(((int)puVar5 + (*puVar1 + 3 & 0xfffffffc))));
      uVar4 = uVar4 + 8 + (*puVar1 + 3 & 0xfffffffc);
    } while (uVar4 < param_3);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::FunctionCurve::vf5 */
uint F_009ab700(unsigned int gen_a0)
{
  GEN_ENTER(0x9ab700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = **(uint * PTR32 *)(this + 4) >> 4 & 7;
  if (uVar1 == 0) {
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    fVar3 = (float10)1;
  }
  else {
    if (uVar1 == 1) {
      if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
        F_00994de0(&REFG(float, 0x14a0d58));
        F_00c47de6(((code *)REFP(0x107c350)));
      }
      fVar3 = (float10)1;
      fVar2 = (float10)0;
      goto LAB_009ab762;
    }
    if (uVar1 != 2) {
      return (int)(*(double *)&REFG(undefined, 0x1088118) * 0.0);
    }
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    fVar3 = (float10)0;
  }
  fVar2 = (float10)REFG(float, 0x1090708);
LAB_009ab762: ;
  fVar3 = F_00978c20((float)fVar2,(float)fVar3);
  return (int)(fVar3 * (float10)*(double *)&REFG(undefined, 0x1088118));
}

/* ref: Apricot::Engine::Data::Runtime::RgbFunctionCurve::vf3 */
uint F_009ab7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ab7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = **(uint * PTR32 *)(this + 4) >> 4 & 7;
  if (uVar1 == 0) {
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    fVar3 = (float10)1;
  }
  else {
    if (uVar1 == 1) {
      if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
        F_00994de0(&REFG(float, 0x14a0d58));
        F_00c47de6(((code *)REFP(0x107c350)));
      }
      fVar3 = (float10)1;
      fVar2 = (float10)0;
      goto LAB_009ab842;
    }
    if (uVar1 != 2) {
      return (int)(*(double *)&REFG(undefined, 0x1088118) * 0.0);
    }
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    fVar3 = (float10)0;
  }
  fVar2 = (float10)REFG(float, 0x1090708);
LAB_009ab842: ;
  fVar3 = F_00978c20((float)fVar2,(float)fVar3);
  return (int)(fVar3 * (float10)*(double *)&REFG(undefined, 0x1088118));
}

/* ref: Apricot::Engine::Data::Runtime::Value::vf3 */
double F_009ab8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ab8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 8);
  if ((GEN_ISNAN(fVar3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
      ((GEN_ISNAN(fVar3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar3 == *(float *)&REFG(undefined, 0x1088114))) {
switchD_009ab8e6_default: ;
    return (double)*(float *)(this + 4);
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0xc))) {
  case 0: ;
  case 3: ;
    fVar1 = (float10)fVar3;
    break;
  case 1: ;
  case 4: ;
    fVar2 = (float)(float10)0;
    goto LAB_009ab903;
  case 2: ;
  case 5: ;
    fVar1 = (float10)0;
    break;
  default: ;
    goto switchD_009ab8e6_default;
  }
  fVar2 = gen_bits2f((uint)gen_fl2bits(fVar3) ^ REFG(uint, 0x10920d0));
  fVar3 = (float)fVar1;
LAB_009ab903: ;
  F_009a46a0();
  fVar1 = F_00978c20(fVar2,fVar3);
  return (double)((float)GEN_TOF((fVar1 + (float10)*(float *)(this + 4))));
}

/* ref: FUN_009abc20 */
uint F_009abc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x9abc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  int * piVar1;
  
  F_0099a240(param_1,param_2,param_3,param_4,param_6,param_7,(float)(float10)1,(float)(float10)0,
               (float)(float10)0);
  *param_1 = (*(undefined * PTR32 (*)[32])REFP(0x10df714));
  param_1[0x7b] = (undefined4)gen_fl2bits(param_8);
  *(undefined1 *)(param_1 + 0x7c) = 0;
  param_1[0x7d] = param_5;
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_5 + 0x1c))(param_5,0)));
  param_1[0x7e] = (*(undefined * PTR32 (*)[1])REFP(0x10de010));
  param_1[0x7f] = piVar1;
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1 + 0x80);
  }
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_1[0x7d] + 0x1c))((int *)param_1[0x7d],3)));
  param_1[0x81] = (*(undefined * PTR32 (*)[1])REFP(0x10de010));
  param_1[0x82] = piVar1;
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1 + 0x83);
  }
  return (uint)param_1;
}

/* ref: FUN_009abd00 */
byte F_009abd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9abd00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  int * piVar2;
  char cVar3;
  int * piVar4;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  
  iVar1 = (*(uint *)&gen_args[3]);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 500) + 0x1c))))(*(int * PTR32 *)((*(int *)&gen_args[0]) + 500),(*(uint *)&gen_args[2]))));
  if (iVar1 == -1) {
    (*(uint *)&gen_args[2]) = *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x1d4) + 0x270)));
    iVar1 = *(int *)(*(uint *)&gen_args[2]);
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,uVar5);
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4,uVar5);
    uVar5 = ((code *)*(gen_code32 *)(iVar1 + 4))((*(uint *)&gen_args[2]),((undefined1 *)(gen_frame + 0xc)),uVar5);
    pfVar6 = (*(float * PTR32 *)&gen_args[4]);
    if ((char)uVar5 == '\0') {
      return 0;
    }
    F_00999d60((*(undefined4 *)&gen_args[1]),(uint)((undefined1 *)(gen_frame + 0xc)),(uint)(*(float * PTR32 *)&gen_args[4]));
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 500) + 0x10))))(*(int * PTR32 *)((*(int *)&gen_args[0]) + 500));
    if ((char)uVar5 == '\0') {
      *pfVar6 = GEN_FLT_TO(*pfVar6, REFG(float, 0x132f3f8));
      pfVar6[1] = GEN_FLT_TO(pfVar6[1], REFG(float, 0x132f3fc));
      pfVar6[2] = GEN_FLT_TO(pfVar6[2], REFG(float, 0x132f400));
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 500) + 0xc))))(*(int * PTR32 *)((*(int *)&gen_args[0]) + 500));
    if ((char)uVar5 == '\0') {
      return 1;
    }
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x1d4) + 0x270)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,&(*(uint *)&gen_args[2]));
    cVar3 = (char)uVar5;
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x1d4) + 0x270)));
    (*(uint *)&gen_args[3]) = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,iVar1);
    (*(uint *)&gen_args[2]) = *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x1d4) + 0x270)));
    iVar1 = *(int *)(*(uint *)&gen_args[2]);
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4,(*(uint *)&gen_args[3]));
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,uVar5);
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4,uVar5);
    uVar5 = ((code *)*(gen_code32 *)(iVar1 + 0x14))((*(uint *)&gen_args[2]),((undefined1 *)(gen_frame + 0xc)),uVar5);
    pfVar6 = (*(float * PTR32 *)&gen_args[4]);
    if ((char)uVar5 == '\0') {
      return 0;
    }
    F_00999d60((*(undefined4 *)&gen_args[1]),(uint)((undefined1 *)(gen_frame + 0xc)),(uint)(*(float * PTR32 *)&gen_args[4]));
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 500) + 0x10))))(*(int * PTR32 *)((*(int *)&gen_args[0]) + 500));
    if ((char)uVar5 == '\0') {
      *pfVar6 = GEN_FLT_TO(*pfVar6, REFG(float, 0x132f3f8));
      pfVar6[1] = GEN_FLT_TO(pfVar6[1], REFG(float, 0x132f3fc));
      pfVar6[2] = GEN_FLT_TO(pfVar6[2], REFG(float, 0x132f400));
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 500) + 0xc))))(*(int * PTR32 *)((*(int *)&gen_args[0]) + 500));
    if ((char)uVar5 == '\0') {
      return 1;
    }
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x1d4) + 0x270)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,(*(uint *)&gen_args[3]),&(*(uint *)&gen_args[2]));
    cVar3 = (char)uVar5;
  }
  if (cVar3 == '\0') {
    return 0;
  }
  fVar7 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))));
  *pfVar6 = (float)(fVar7 * (float10)*pfVar6);
  pfVar6[1] = (float)((float10)pfVar6[1] * fVar7);
  pfVar6[2] = (float)(fVar7 * (float10)pfVar6[2]);
  return 1;
}

/* ref: FUN_009abef0 */
unsigned int F_009abef0(unsigned int gen_a0)
{
  GEN_ENTER(0x9abef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x10df79c));
  if (*(int *)((int)this + 0x1ec) != 0) {
    uVar3 = (uint)(*(int *)((int)this + 0x1ec) - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar3 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar3;
  }
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3a0) * 0x68 + 0x1030 + REFG(int, 0x14a0eb0)))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1e0);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[0x7a];
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::DocumentInstance::vf11 */
unsigned int F_009ac4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ac4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  if (REFG(char, 0x14a22cc) == '\0') {
    if (*(int *)(this + 0x1ec) != 0) {
      if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
        F_00994de0(&REFG(float, 0x14a0d58));
        F_00c47de6(((code *)REFP(0x107c350)));
      }
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x3c))))
                (REFG(int * PTR32, 0x14a0ea8),this + 0x28,*(int *)(this + 0x1ec),*(int *)(this + 0x1ec) + 0xc);
      if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
        F_00994de0(&REFG(float, 0x14a0d58));
        F_00c47de6(((code *)REFP(0x107c350)));
      }
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x40))))
                (REFG(int * PTR32, 0x14a0ea8),this + 0x28,*(int *)(this + 0x1ec) + 0x18,
                 *(int *)(this + 0x1ec) + 0x24);
    }
  }
  else {
    if ((*(uint *)(this + 0x3a4) % 0x2d == 0) && (*(int *)(this + 0x1ec) != 0)) {
      uVar2 = F_009a46a0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x150) + 0x3c))))
                (*(int * PTR32 *)(uVar2 + 0x150),this + 0x28,*(int *)(this + 0x1ec),
                 *(int *)(this + 0x1ec) + 0xc);
    }
    if ((*(uint *)(this + 0x3a4) % 0x1e == 0) && (*(int *)(this + 0x1ec) != 0)) {
      uVar2 = F_009a46a0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x150) + 0x40))))
                (*(int * PTR32 *)(uVar2 + 0x150),this + 0x28,*(int *)(this + 0x1ec) + 0x18,
                 *(int *)(this + 0x1ec) + 0x24);
    }
    *(int *)(this + 0x3a4) = *(int *)(this + 0x3a4) + 1;
  }
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x364) = 0;
  *(undefined4 *)(this + 0x368) = 0;
  *(undefined4 *)(this + 0x36c) = 0;
  *(undefined4 *)(this + 0x370) = 0;
  *(undefined4 *)(this + 0x374) = 0;
  *(undefined4 *)(this + 0x378) = 0;
  *(undefined4 *)(this + 0x37c) = 0;
  *(undefined4 *)(this + 0x380) = 0;
  *(undefined4 *)(this + 900) = 0;
  *(undefined4 *)(this + 0x388) = 0;
  *(undefined4 *)(this + 0x38c) = 0;
  *(undefined4 *)(this + 0x390) = 0;
  *(undefined4 *)(this + 0x394) = 0;
  *(undefined4 *)(this + 0x398) = 0;
  *(undefined4 *)(this + 0x39c) = 0;
  this[0x3ac] = (undefined1)0x0;
  *(undefined4 *)(this + 0x3a8) = 0;
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f048))[*(uint *)(this + 0x1d0) >> 0x16 & 1])))(this);
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
  }
  return 0;
}

/* ref: FUN_009ac6f0 */
uint F_009ac6f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x9ac6f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float in_edi = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_6 + 0x1c))(param_6);
  uVar1 = ((code *)*(gen_code32 *)(*param_6 + 0x18))(param_6,(undefined4)gen_fl2bits((float)(int)uVar1));
  F_0099a240(in_ecx,param_3,param_4,param_5,param_7,param_8,(float)(float10)1,(float)(int)uVar1,
               in_edi);
  in_ecx[0x7b] = param_6;
  *in_ecx = (*(undefined * PTR32 (*)[31])REFP(0x10df824));
  return (uint)in_ecx;
}

/* ref: FUN_009ad8d0 */
uint F_009ad8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ad8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*(gen_code32 *)((int)this + 0x2c8))((int)this + 0x88);
  ((code *)*(gen_code32 *)((int)this + 0x2b0))(this);
  ((code *)*(gen_code32 *)((int)this + 0x2b8))(this);
  ((code *)*(gen_code32 *)((int)this + 0x2cc))(this);
  ((code *)*(gen_code32 *)((int)this + 0x2d0))(this);
  ((code *)*(gen_code32 *)((int)this + 0x2d4))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x8c))))
                    (REFG(int * PTR32, 0x14a0ea8),*(undefined4 *)((int)this + 0x2a8),(int)this + 0x28);
  return uVar1;
}

/* ref: FUN_009ad9d0 */
uint F_009ad9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ad9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)((int)this + 0x28);
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)this + 0x30);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x28);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + 0x30);
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x109cb18) + (float10)*(float *)((int)this + 0x2c))));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x2c) - (float10)*(double *)&REFG(double, 0x10d8468))));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x38))))(REFG(int * PTR32, 0x14a0ea8),&(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x8)));
  if ((char)uVar1 != '\0') {
    *(undefined4 *)((int)this + 0x2c) = (*(undefined4 *)(gen_frame + 0x18));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_009ada90 */
uint F_009ada90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9ada90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  code * pcVar2;
  int * piVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  param_1[0x6e] = *(undefined4 *)(param_5 + 0x18);
  param_1[0x6f] = *(undefined4 *)(param_5 + 0x1c);
  param_1[0x70] =
       (undefined4)
       gen_fl2bits(((float)GEN_TOF(((float10)*(int *)(param_5 + 0x20) * (float10)*(float *)(param_5 + 0x1c)))))
  ;
  iVar6 = *(int *)(param_5 + 0x24);
  fVar1 = *(float *)(param_5 + 0x1c);
  param_1[0x74] = param_1[0x74] & 0xfff00000;
  param_1[0x72] = 0;
  param_1[0x71] = (undefined4)gen_fl2bits((float)((float10)iVar6 * (float10)fVar1));
  param_1[0x73] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  uVar5 = (0.0 < gen_bits2f(param_1[0x71]) | 0x7e) << 0x14 | param_1[0x74] & 0xf7efffff;
  uVar5 = (uVar5 << 8 ^ uVar5) & 0x10000000 ^ uVar5;
  param_1[0x74] = ((uint)((uVar5 & 0x1ff) == 0) * 0x20000000 ^ uVar5) & 0x20000000 ^ uVar5;
  param_1[0x75] = param_2;
  param_1[0x77] = param_4;
  param_1[0x76] = param_3;
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x132f428));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x132f42c));
  param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x132f430));
  param_1[4] = GEN_FLT_TO(param_1[4], REFG(float, 0x132f434));
  param_1[5] = GEN_FLT_TO(param_1[5], REFG(float, 0x132f438));
  param_1[6] = GEN_FLT_TO(param_1[6], REFG(float, 0x132f43c));
  param_1[7] = GEN_FLT_TO(param_1[7], REFG(float, 0x132f440));
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x132f444));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x132f448));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x132f44c));
  param_1[0xb] = GEN_FLT_TO(param_1[0xb], REFG(float, 0x132f450));
  param_1[0xc] = GEN_FLT_TO(param_1[0xc], REFG(float, 0x132f454));
  param_1[0x22] = GEN_FLT_TO(param_1[0x22], REFG(float, 0x132f3a8));
  param_1[0x23] = GEN_FLT_TO(param_1[0x23], REFG(float, 0x132f3ac));
  param_1[0x24] = GEN_FLT_TO(param_1[0x24], REFG(float, 0x132f3b0));
  param_1[0x25] = GEN_FLT_TO(param_1[0x25], REFG(float, 0x132f3b4));
  puVar4 = *(undefined4 * PTR32 *)param_5;
  puVar7 = param_1 + 0x60;
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)(param_5 + 4);
  param_1[0x47] = *puVar4;
  param_1[0x48] = puVar4[1];
  param_1[0x49] = puVar4[2];
  *(undefined1 *)(param_1 + 0x67) = *(undefined1 *)(param_5 + 0x29);
  param_1[0x10] = GEN_FLT_TO(param_1[0x10], REFG(float, 0x132f3f8));
  param_1[0x11] = GEN_FLT_TO(param_1[0x11], REFG(float, 0x132f3fc));
  param_1[0x12] = GEN_FLT_TO(param_1[0x12], REFG(float, 0x132f400));
  param_1[0x13] = GEN_FLT_TO(param_1[0x13], REFG(float, 0x14a0a2c));
  param_1[0x14] = GEN_FLT_TO(param_1[0x14], REFG(float, 0x14a0a30));
  param_1[0x15] = GEN_FLT_TO(param_1[0x15], REFG(float, 0x14a0a34));
  param_1[0x16] = GEN_FLT_TO(param_1[0x16], REFG(float, 0x132f3f8));
  param_1[0x17] = GEN_FLT_TO(param_1[0x17], REFG(float, 0x132f3fc));
  param_1[0x18] = GEN_FLT_TO(param_1[0x18], REFG(float, 0x132f400));
  param_1[0x19] = GEN_FLT_TO(param_1[0x19], REFG(float, 0x14a0a2c));
  param_1[0x1a] = GEN_FLT_TO(param_1[0x1a], REFG(float, 0x14a0a30));
  param_1[0x1b] = GEN_FLT_TO(param_1[0x1b], REFG(float, 0x14a0a34));
  param_1[0x1c] = GEN_FLT_TO(param_1[0x1c], REFG(float, 0x14a0a2c));
  param_1[0x1d] = GEN_FLT_TO(param_1[0x1d], REFG(float, 0x14a0a30));
  param_1[0x1e] = GEN_FLT_TO(param_1[0x1e], REFG(float, 0x14a0a34));
  param_1[0x54] = GEN_FLT_TO(param_1[0x54], REFG(float, 0x14a0a2c));
  param_1[0x55] = GEN_FLT_TO(param_1[0x55], REFG(float, 0x14a0a30));
  param_1[0x56] = GEN_FLT_TO(param_1[0x56], REFG(float, 0x14a0a34));
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_5 + 0x10);
  param_1[0x6c] = 0;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_5 + 0x14) * (float10)*(float *)(param_5 + 0x1c))));
  param_1[0x6a] = (undefined4)gen_fl2bits(fVar1);
  param_1[0x6d] = (undefined4)gen_fl2bits(fVar1);
  param_1[0x6b] = param_1[0x6a];
  if (param_3 == (int *)0x0) {
    param_1[0x4a] = GEN_FLT_TO(param_1[0x4a], REFG(float, 0x132f3f8));
    param_1[0x4b] = GEN_FLT_TO(param_1[0x4b], REFG(float, 0x132f3fc));
    param_1[0x4c] = GEN_FLT_TO(param_1[0x4c], REFG(float, 0x132f400));
    param_1[0x4d] = GEN_FLT_TO(param_1[0x4d], REFG(float, 0x14a0a2c));
    param_1[0x4e] = GEN_FLT_TO(param_1[0x4e], REFG(float, 0x14a0a30));
    param_1[0x4f] = GEN_FLT_TO(param_1[0x4f], REFG(float, 0x14a0a34));
  }
  else {
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_3 + 0x44))(param_3,((undefined1 *)(gen_frame + 0x0)))));
    param_1[0x4a] = *puVar4;
    param_1[0x4b] = puVar4[1];
    pcVar2 = *(gen_code32 *)(*param_3 + 0x4c);
    param_1[0x4c] = puVar4[2];
    puVar4 = ((undefined4 *)GEN_TOP((*pcVar2)(param_3,((undefined1 *)(gen_frame + 0x0)))));
    param_1[0x4d] = *puVar4;
    param_1[0x4e] = puVar4[1];
    param_1[0x4f] = puVar4[2];
  }
  piVar3 = (int *)param_1[0x76];
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return (uint)param_1;
    }
    uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3);
    if (uVar5 == 2) break;
    piVar3 = (int *)piVar3[0x76];
  }
  if (piVar3 == (int *)0x0) {
    return (uint)param_1;
  }
  if ((char)piVar3[0x7e] == '\0') {
    return (uint)param_1;
  }
  param_1[0x74] = param_1[0x74] & 0xefefffff;
  return (uint)param_1;
}

/* ref: FUN_009adec0 */
uint F_009adec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9adec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  uint param_5 = (uint)gen_a5;
  int * piVar1;
  
  F_009ada90(this,param_1,param_2,param_3,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10df934));
  *(int * PTR32 *)((int)this + 0x1fc) = param_4;
  *(undefined4 *)((int)this + 0x200) = 1;
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_4 + 0x14))(param_4)));
  ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,(int)this + 0x1f5);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x18))))(*(int * PTR32 *)((int)this + 0x1fc))));
  ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,(int)this + 0x1ec);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x1c))))(*(int * PTR32 *)((int)this + 0x1fc))));
  ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,(int)this + 0x1ef);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x20))))(*(int * PTR32 *)((int)this + 0x1fc))));
  ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,(int)this + 0x1f2);
  return (uint)this;
}

/* ref: FUN_009adf70 */
uint F_009adf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9adf70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  float fVar2;
  undefined4 uVar3;
  double dVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  int iVar8;
  
  F_009ada90(this,param_1,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10ddf04));
  uVar3 = *(undefined4 *)(param_4 + 0x2c);
  *(int * PTR32 *)((int)this + 0x1a4) = param_2 + 1;
  *(undefined4 *)((int)this + 0x1f0) = uVar3;
  *(undefined4 *)((int)this + 500) = 0;
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x10))(param_2)));
  *(undefined4 *)((int)this + 0xbc) = *puVar5;
  *(undefined4 *)((int)this + 0xc0) = puVar5[1];
  *(undefined4 *)((int)this + 0xc4) = puVar5[2];
  *(undefined4 *)((int)this + 200) = puVar5[3];
  *(undefined4 *)((int)this + 0xcc) = puVar5[4];
  *(undefined4 *)((int)this + 0xd0) = puVar5[5];
  *(undefined4 *)((int)this + 0xd4) = puVar5[6];
  *(undefined4 *)((int)this + 0xd8) = puVar5[7];
  *(undefined4 *)((int)this + 0xdc) = puVar5[8];
  *(undefined4 *)((int)this + 0xe0) = puVar5[9];
  *(undefined4 *)((int)this + 0xe4) = puVar5[10];
  *(undefined4 *)((int)this + 0xe8) = puVar5[0xb];
  puVar5 = *(undefined4 * PTR32 *)(param_4 + 8);
  *(undefined4 *)((int)this + 0x174) = *puVar5;
  *(undefined4 *)((int)this + 0x178) = puVar5[1];
  *(undefined4 *)((int)this + 0x17c) = puVar5[2];
  puVar6 = *(undefined4 * PTR32 *)(param_4 + 0xc);
  puVar5 = (undefined4 *)((int)this + 0x15c);
  *puVar5 = *puVar6;
  *(undefined4 *)((int)this + 0x160) = puVar6[1];
  *(undefined4 *)((int)this + 0x164) = puVar6[2];
  *(undefined4 *)((int)this + 0x34) = REFG(float, 0x14a0a2c);
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x14a0a30);
  *(undefined4 *)((int)this + 0x3c) = REFG(float, 0x14a0a34);
  *(undefined4 *)((int)this + 0x168) = REFG(float, 0x14a0a2c);
  *(undefined4 *)((int)this + 0x16c) = REFG(float, 0x14a0a30);
  *(undefined4 *)((int)this + 0x170) = REFG(float, 0x14a0a34);
  *(undefined1 *)((int)this + 0x19c) = *(undefined1 *)(param_4 + 0x29);
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  if (*(int *)((int)this + 0x1f0) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x1f0) + 0x200)));
    *piVar1 = *piVar1 + 1;
  }
  if (*(char *)(param_4 + 0x28) == '\0') {
    *(byte *)((int)this + 0x1ec) = *(byte *)((int)this + 0x1ec) & 0xfd;
  }
  else {
    *(byte *)((int)this + 0x1ec) = *(byte *)((int)this + 0x1ec) | 2;
  }
  iVar8 = *(int *)((int)this + 0x188);
  if (iVar8 == 0) {
    *(byte *)((int)this + 0x1ec) = *(byte *)((int)this + 0x1ec) & 0xf3;
  }
  else if (iVar8 == 1) {
    *(byte *)((int)this + 0x1ec) = *(byte *)((int)this + 0x1ec) & 0xf7 | 4;
  }
  else if (iVar8 == 2) {
    *(byte *)((int)this + 0x1ec) = *(byte *)((int)this + 0x1ec) & 0xfb | 8;
  }
  if (*(int *)((int)this + 0x180) == 0) {
    *(byte *)((int)this + 0x1ec) = *(byte *)((int)this + 0x1ec) & 0xfe;
  }
  else if (*(int *)((int)this + 0x180) == 1) {
    *(byte *)((int)this + 0x1ec) = *(byte *)((int)this + 0x1ec) | 1;
  }
  if (iVar8 == 1) {
    puVar6 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d8) + 0x3c))))(*(int * PTR32 *)((int)this + 0x1d8))));
    *(undefined4 *)((int)this + 0x140) = *puVar6;
    *(undefined4 *)((int)this + 0x144) = puVar6[1];
    *(undefined4 *)((int)this + 0x148) = puVar6[2];
    *(undefined4 *)((int)this + 0x14c) = puVar6[3];
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x184))) {
  case 0: ;
  case 1: ;
    F_00990130(&(*(float *)(gen_frame + 0x34)),(uint)puVar5);
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d8) + 0x10))))(*(int * PTR32 *)((int)this + 0x1d8));
    F_00990130(&(*(float *)(gen_frame + 0x40)),uVar7 + 0xc);
    fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x48)) * (float10)(*(float *)(gen_frame + 0x3c)) +
                   ((float10)(*(float *)(gen_frame + 0x44)) * (float10)(*(float *)(gen_frame + 0x38)) + (float10)(*(float *)(gen_frame + 0x40)) * (float10)(*(float *)(gen_frame + 0x34))))));
    (*(float *)(gen_frame + 0x34)) = fVar2;
    dVar4 = (double)fVar2;
    if (((GEN_ISNAN(dVar4) || GEN_ISNAN(*(double *)&REFG(undefined, 0x10b3238))) || dVar4 <= *(double *)&REFG(undefined, 0x10b3238)) &&
       ((GEN_ISNAN(*(double *)&REFG(undefined, 0x10df9b0)) || GEN_ISNAN(dVar4)) || *(double *)&REFG(undefined, 0x10df9b0) <= dVar4)) {
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d8) + 0x10))))(*(int * PTR32 *)((int)this + 0x1d8));
      iVar8 = uVar7 + 0xc;
    }
    else {
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d8) + 0x10))))(*(int * PTR32 *)((int)this + 0x1d8));
      iVar8 = uVar7 + 0x18;
    }
    F_00990300((int)this + 0xec,0x14a0a2c,(uint)puVar5,iVar8);
    if (*(int *)((int)this + 0x180) == 1) {
      F_009813d0(((undefined1 *)(gen_frame + 0x4)),(int)this + 0xec);
      F_00981050((int)this + 0x174,(int)this + 0x174,(uint)((undefined1 *)(gen_frame + 0x4)));
      return (uint)this;
    }
    break;
  case 2: ;
  case 3: ;
    F_00990130(&(*(float *)(gen_frame + 0x40)),(uint)puVar5);
    F_00990130(&(*(float *)(gen_frame + 0x34)),0x132f410);
    fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x3c)) * (float10)(*(float *)(gen_frame + 0x48)) +
                   ((float10)(*(float *)(gen_frame + 0x34)) * (float10)(*(float *)(gen_frame + 0x40)) + (float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x44))))));
    (*(float *)(gen_frame + 0x34)) = fVar2;
    dVar4 = (double)fVar2;
    if (((GEN_ISNAN(dVar4) || GEN_ISNAN(*(double *)&REFG(undefined, 0x10b3238))) || dVar4 <= *(double *)&REFG(undefined, 0x10b3238)) &&
       ((GEN_ISNAN(*(double *)&REFG(undefined, 0x10df9b0)) || GEN_ISNAN(dVar4)) || *(double *)&REFG(undefined, 0x10df9b0) <= dVar4)) {
      puVar6 = (undefined4 *)&REFG(undefined, 0x132f410);
    }
    else {
      puVar6 = &REFG(float, 0x132f41c);
    }
    F_00990300((int)this + 0xec,0x14a0a2c,(uint)puVar5,puVar6);
    if (*(int *)((int)this + 0x180) == 1) {
      F_009813d0(((undefined1 *)(gen_frame + 0x4)),(int)this + 0xec);
      F_00981050((int)this + 0x174,(int)this + 0x174,(uint)((undefined1 *)(gen_frame + 0x4)));
    }
    if (*(char *)(param_4 + 0x28) != '\0') {
      F_00981170((int)this + 0x168,*(uint *)(param_4 + 4),(int)this + 0xbc);
    }
  }
  return (uint)this;
}

/* ref: FUN_009af310 */
uint F_009af310(unsigned int gen_a0)
{
  GEN_ENTER(0x9af310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  uint local_c;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  REFG(undefined4, 0x14a0a10) = REFG(undefined4, 0x14a0a10) + 1;
  lVar3 = (longlong)
          ((double)((float)GEN_TOF((((float10)*(float *)((int)this + 0x30) * (float10)*(float *)&REFG(undefined, 0x14a0df0)
                           + ((float10)*(float *)((int)this + 0x28) *
                              (float10)*(float *)&REFG(undefined, 0x14a0dd8) +
                             (float10)*(float *)((int)this + 0x2c) *
                             (float10)*(float *)&REFG(undefined, 0x14a0de4))) + (float10)*(float *)&REFG(undefined, 0x14a0dfc))))
          * *(double *)&REFG(undefined, 0x10912a8)) + 0x7fffffffffff;
  uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
  uVar6 = REFG(undefined4, 0x14a0a10) & 0xffff;
  iVar2 = *(int *)((int)this + 0x1d4);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x68))))(*(int * PTR32 *)((int)this + 0x29c));
  if (*(int *)(iVar2 + 800 + uVar5 * 4) != 0) {
    sVar1 = *(short *)(iVar2 + 0x360 + uVar5 * 2);
    *(short *)(iVar2 + 0x360 + uVar5 * 2) = sVar1 + 1;
    puVar7 = ((uint *)GEN_TOP((sVar1 * 0x10 + *(int *)(iVar2 + 800 + uVar5 * 4))));
    *puVar7 = (uint)(lVar3 * 0x10000) | uVar6;
    puVar7[1] = uVar4;
    puVar7[2] = (uint)this;
    puVar7[3] = local_c;
    uVar5 = uVar4;
  }
  return uVar5;
}

/* ref: FUN_009af800 */
uint F_009af800(unsigned int gen_a0)
{
  GEN_ENTER(0x9af800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x38))))
                    (REFG(int * PTR32, 0x14a0ea8),(int)this + 0x168,(int)this + 0x28,((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x10)));
  if (((char)uVar1 != '\0') && (uVar1 = *(uint *)((int)this + 0x1d0), (uVar1 & 0x40000) == 0)) {
    *(uint *)((int)this + 0x1d0) = uVar1 & 0xf81fffff | 0x40000;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  }
  return uVar1;
}

/* ref: FUN_009af890 */
unsigned int F_009af890(unsigned int gen_a0)
{
  GEN_ENTER(0x9af890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  float10 fVar2;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x38))))
                    (REFG(int * PTR32, 0x14a0ea8),(int)this + 0x168,(float *)((int)this + 0x28),&(*(float *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x4)));
  if ((char)uVar1 != '\0') {
    *(float *)((int)this + 0x28) = (*(float *)(gen_frame + 0x10));
    *(float *)((int)this + 0x2c) = (*(float *)(gen_frame + 0x14));
    *(float *)((int)this + 0x30) = (*(float *)(gen_frame + 0x18));
    *(undefined4 *)((int)this + 0x80) = 0;
    fVar2 = (float10)*(double *)&REFG(undefined, 0x1094818);
    (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x174) * fVar2)));
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x178) * fVar2)));
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((fVar2 * (float10)*(float *)((int)this + 0x17c))));
    F_009901a0((float *)((int)this + 0x174),(uint)((undefined1 *)(gen_frame + 0x4)),(uint)&(*(float *)(gen_frame + 0x10)));
  }
  return 0;
}

/* ref: FUN_009af950 */
uint F_009af950(unsigned int gen_a0)
{
  GEN_ENTER(0x9af950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x38))))
                    (REFG(int * PTR32, 0x14a0ea8),(int)this + 0x168,(undefined4 *)((int)this + 0x28),&(*(undefined4 *)(gen_frame + 0x10)),
                     ((undefined1 *)(gen_frame + 0x4)));
  if ((char)uVar1 != '\0') {
    *(undefined4 *)((int)this + 0x28) = (*(undefined4 *)(gen_frame + 0x10));
    *(undefined4 *)((int)this + 0x2c) = (*(undefined4 *)(gen_frame + 0x14));
    *(undefined4 *)((int)this + 0x30) = (*(undefined4 *)(gen_frame + 0x18));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  return uVar1;
}

/* ref: FUN_009af9e0 */
uint F_009af9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9af9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  float10 fVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x2c);
  fVar2 = (float10)*(float *)((int)this + 0x2c);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)((int)this + 0x28);
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)this + 0x30);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x28);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + 0x30);
  (*(float *)(gen_frame + 0x30)) = (float)((float10)*(double *)&REFG(undefined, 0x109cb18) + fVar2);
  (*(float *)(gen_frame + 0x24)) = (float)(fVar2 - (float10)*(double *)&REFG(double, 0x10d8468));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x38))))(REFG(int * PTR32, 0x14a0ea8),&(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x4)));
  if ((char)uVar1 != '\0') {
    *(undefined4 *)((int)this + 0x2c) = (*(undefined4 *)(gen_frame + 0x14));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_009b0fa0 */
uint F_009b0fa0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x9b0fa0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  ushort * puVar1;
  int * piVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  
  puVar3 = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x1f0) + 0x18))))
                             (*(int * PTR32 *)((int)param_1 + 0x1f0),(int)*(char *)(param_2 + 4))));
  uVar4 = *puVar3;
  if (uVar4 < 0x52545248) {
    if (uVar4 == 0x52545247) {
      if (REFG(int, 0x14a09e8) != -1) {
        iVar5 = REFG(int, 0x14a09e8) * 0x400;
        REFG(int, 0x14a09e8) = *(int *)(REFG(int, 0x14a09f4) + iVar5);
        REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
        iVar5 = REFG(int, 0x14a09f4) + iVar5;
        if (iVar5 != 0) {
          uVar4 = F_0099b3b0(iVar5,*(undefined4 *)((int)param_1 + 0x1d4),param_1,
                               *(undefined4 *)((int)param_1 + 0x1dc),param_2,puVar3,param_3,param_4)
          ;
          uVar4 = F_0097e5c0(param_1,uVar4);
          return uVar4;
        }
      }
    }
    else if (uVar4 == 0x454e4420) {
      if (REFG(int, 0x14a09e8) != -1) {
        piVar2 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
        REFG(int, 0x14a09e8) = *piVar2;
        REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
        if (piVar2 != (int *)0x0) {
          uVar4 = F_0099b2f0(piVar2,*(undefined4 *)((int)param_1 + 0x1d4),param_1,
                               *(undefined4 *)((int)param_1 + 0x1dc),param_2,puVar3,param_3,param_4)
          ;
          uVar4 = F_0097e5c0(param_1,uVar4);
          return uVar4;
        }
      }
    }
    else {
      if (uVar4 != 0x4b494c4c) {
        if (uVar4 != 0x52455354) {
          return uVar4;
        }
        puVar1 = ((ushort *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x3ac)));
        *puVar1 = *puVar1 | 0x4000;
        return 0x52455354;
      }
      uVar4 = F_009df120(500);
      if (uVar4 != 0) {
        uVar4 = F_0099b350(uVar4,*(undefined4 *)((int)param_1 + 0x1d4),param_1,
                             *(undefined4 *)((int)param_1 + 0x1dc),param_2,puVar3,param_3,param_4);
        uVar4 = F_0097e5c0(param_1,uVar4);
        return uVar4;
      }
    }
  }
  else if (uVar4 == 0x54524720) {
    if (REFG(int, 0x14a09e8) != -1) {
      iVar5 = REFG(int, 0x14a09e8) * 0x400;
      REFG(int, 0x14a09e8) = *(int *)(REFG(int, 0x14a09f4) + iVar5);
      REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
      iVar5 = REFG(int, 0x14a09f4) + iVar5;
      if (iVar5 != 0) {
        uVar4 = F_0099b410(iVar5,*(undefined4 *)((int)param_1 + 0x1d4),param_1,
                             *(undefined4 *)((int)param_1 + 0x1dc),param_2,puVar3,param_3,param_4);
        uVar4 = F_0097e5c0(param_1,uVar4);
        return uVar4;
      }
    }
  }
  else {
    if (uVar4 != 0x554c4c50) {
      return uVar4;
    }
    if (REFG(int, 0x14a09e8) != -1) {
      iVar5 = REFG(int, 0x14a09e8) * 0x400;
      REFG(int, 0x14a09e8) = *(int *)(REFG(int, 0x14a09f4) + iVar5);
      REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
      iVar5 = REFG(int, 0x14a09f4) + iVar5;
      if (iVar5 != 0) {
        uVar4 = F_0099b470(iVar5,*(undefined4 *)((int)param_1 + 0x1d4),param_1,
                             *(undefined4 *)((int)param_1 + 0x1dc),param_2,puVar3,param_3,param_4);
        uVar4 = F_0097e5c0(param_1,uVar4);
        return uVar4;
      }
    }
  }
  uVar4 = F_0097e5c0(param_1,0);
  return uVar4;
}

/* ref: Apricot::Engine::Instance::CameraBinderInstance::vf25 */
unsigned int F_009b1480(unsigned int gen_a0)
{
  GEN_ENTER(0x9b1480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009b1200(this,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  F_0098b300((undefined *)this);
  return 0;
}

/* ref: Apricot::Engine::Instance::CameraBinderInstance::vf27 */
unsigned int F_009b14b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9b14b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009b1200(this,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  F_0098b3a0((undefined *)this);
  return 0;
}

/* ref: Apricot::Engine::Instance::LinearBinderInstance::vf25 */
unsigned int F_009b1a30(unsigned int gen_a0)
{
  GEN_ENTER(0x9b1a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x1f0] != (undefined1)0x0) {
    F_009b14e0(this,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  }
  F_0098b300((undefined *)this);
  return 0;
}

/* ref: Apricot::Engine::Instance::LinearBinderInstance::vf27 */
unsigned int F_009b1a60(unsigned int gen_a0)
{
  GEN_ENTER(0x9b1a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x1f0] != (undefined1)0x0) {
    F_009b14e0(this,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  }
  F_0098b3a0((undefined *)this);
  return 0;
}

/* ref: Apricot::Engine::Instance::PointBinderInstance::vf25 */
unsigned int F_009b2030(unsigned int gen_a0)
{
  GEN_ENTER(0x9b2030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x1f0] != (undefined1)0x0) {
    F_009b1a90(this,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  }
  F_0098b300((undefined *)this);
  return 0;
}

/* ref: Apricot::Engine::Instance::PointBinderInstance::vf27 */
unsigned int F_009b2060(unsigned int gen_a0)
{
  GEN_ENTER(0x9b2060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x1f0] != (undefined1)0x0) {
    F_009b1a90(this,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  }
  F_0098b3a0((undefined *)this);
  return 0;
}

/* ref: Apricot::Engine::Instance::SplineBinderInstance::vf25 */
unsigned int F_009b2a30(unsigned int gen_a0)
{
  GEN_ENTER(0x9b2a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x1f0] != (undefined1)0x0) {
    F_009b2090(this,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  }
  F_0098b300((undefined *)this);
  return 0;
}

/* ref: Apricot::Engine::Instance::SplineBinderInstance::vf27 */
unsigned int F_009b2a60(unsigned int gen_a0)
{
  GEN_ENTER(0x9b2a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x1f0] != (undefined1)0x0) {
    F_009b2090(this,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  }
  F_0098b3a0((undefined *)this);
  return 0;
}

/* ref: FUN_009b2a90 */
uint F_009b2a90(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x9b2a90u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float in_edi = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_6 + 0x1c))(param_6);
  uVar1 = ((code *)*(gen_code32 *)(*param_6 + 0x18))(param_6,(undefined4)gen_fl2bits((float)(int)uVar1));
  F_0099a240(in_ecx,param_3,param_4,param_5,param_7,param_8,(float)(float10)1,(float)(int)uVar1,
               in_edi);
  in_ecx[0x7b] = param_6;
  *in_ecx = (*(undefined * PTR32 (*)[31])REFP(0x10df9c4));
  F_00980040(in_ecx,GEN_TOF(gen_bits2f(in_ecx[0x6a])),GEN_TOF(gen_bits2f(in_ecx[0x6b])));
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Instance::BlackHoleEffectorInstance::vf27 */
uint F_009b3040(unsigned int gen_a0)
{
  GEN_ENTER(0x9b3040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_009b2c20(this,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  return uVar1;
}

/* ref: Apricot::Engine::Instance::CameraQuakeEffectorInstance::vf27 */
float F_009b32e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9b32e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  
  fVar1 = F_009b3060(this,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  return (float)fVar1;
}

/* ref: FUN_009b3300 */
uint F_009b3300(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x9b3300u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float in_edi = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_6 + 0x1c))(param_6);
  uVar1 = ((code *)*(gen_code32 *)(*param_6 + 0x18))(param_6,(undefined4)gen_fl2bits((float)(int)uVar1));
  F_0099a240(in_ecx,param_3,param_4,param_5,param_7,param_8,(float)(float10)1,(float)(int)uVar1,
               in_edi);
  in_ecx[0x7b] = param_6;
  *in_ecx = (*(undefined * PTR32 (*)[31])REFP(0x10dfa44));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_6 + 0x24))(param_6)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2)));
  ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,(int)in_ecx + 0x212);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)in_ecx[0x7b] + 0x24))((int *)in_ecx[0x7b])));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2)));
  ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,in_ecx + 0x82);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)in_ecx[0x7b] + 0x24))((int *)in_ecx[0x7b])));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
  ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,(int)in_ecx + 0x20d);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)in_ecx[0x7b] + 0x24))((int *)in_ecx[0x7b])));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  *(char *)((int)in_ecx + 0x215) = (char)uVar1;
  F_0098d4f0(in_ecx,GEN_TOF(gen_bits2f(in_ecx[0x6a])),GEN_TOF(gen_bits2f(in_ecx[0x6b])));
  return (uint)in_ecx;
}

/* ref: FUN_009b3430 */
unsigned int F_009b3430(unsigned int gen_a0)
{
  GEN_ENTER(0x9b3430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10dfac4));
  if (*(int *)((int)this + 0x1f0) != 0) {
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x74))))(REFG(int * PTR32, 0x14a0ea8),*(undefined4 *)((int)this + 0x1f0));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1e0);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[0x7a];
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::PointLightEffectorInstance::vf27 */
uint F_009b3930(unsigned int gen_a0)
{
  GEN_ENTER(0x9b3930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_009b34b0(this,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  return uVar1;
}

/* ref: FUN_009b68b0 */
uint F_009b68b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0x9b68b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float param_2 = (float)gen_a2;
  float param_3 = (float)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  float param_6 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x320];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  char cVar6;
  short sVar7;
  float fVar8;
  short sVar10;
  uint uVar11;
  uint uVar12;
  undefined * pvVar13;
  int iVar14;
  int iVar15;
  float * pfVar16;
  short sVar17;
  uint uVar18;
  uint uVar19;
  short * psVar20;
  int iVar21;
  uint uVar22;
  ulonglong * puVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ulonglong uVar35;
  
  (*(uint *)(gen_frame + 0x318)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x31c);
  (*(float *)(gen_frame + 0x224)) = gen_bits2f(param_1);
  (*(float *)(gen_frame + 0x220)) = param_2;
  (*(float *)(gen_frame + 0x210)) = param_3;
  (*(int *)(gen_frame + 0x120)) = param_5;
  (*(undefined * PTR32 *)(gen_frame + 0x1f8)) = this;
  uVar11 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0xf4))))(*(int * PTR32 *)((int)this + 0x29c));
  uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  (*(uint *)(gen_frame + 0x188)) = uVar12;
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  (*(float *)(gen_frame + 0x84)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x88)) = REFG(float, 0x1087f04);
  if (*(char *)(uVar11 + 0xcf) != '\0') {
    F_009e4400((*(uint *)(gen_frame + 0x188)),(uint)&(*(float *)(gen_frame + 0x84)));
  }
  (*(uint *)(gen_frame + 0x180)) = (uint)(0x7fff / (longlong)(int)*(char *)(uVar11 + 0xc2)) & 0xffff;
  (*(uint *)(gen_frame + 0x18c)) = (uint)(0x7fff / (longlong)(int)*(char *)(uVar11 + 0xc3)) & 0xffff;
  (*(uint *)(gen_frame + 0x17c)) = (uint)(ushort)((short)*(char *)(uVar11 + 0xc3) * (short)*(char *)(uVar11 + 0xc2));
  pvVar13 = (undefined *)F_0098e8f0(this,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x220))),
                                 (uint)gen_fl2bits((*(float *)(gen_frame + 0x210))),(undefined4)gen_fl2bits(param_6),
                                 uVar11,(*(uint *)(gen_frame + 0x188)));
  if (-1 < (int)gen_fl2bits(param_4[0xc])) {
    fVar34 = param_4[0xd];
    fVar30 = gen_bits2f((uint)gen_fl2bits(fVar34) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x28c)) = fVar30;
    (*(float *)(gen_frame + 0x288)) = fVar30;
    (*(float *)(gen_frame + 0x294)) = fVar34;
    (*(float *)(gen_frame + 0x298)) = fVar30;
    (*(undefined4 *)(gen_frame + 0x29c)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x2a0)) = fVar30;
    (*(float *)(gen_frame + 0x2a4)) = fVar34;
    (*(undefined4 *)(gen_frame + 0x2a8)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x2ac)) = fVar34;
    (*(float *)(gen_frame + 0x2b0)) = fVar34;
    (*(undefined4 *)(gen_frame + 0x2b4)) = REFG(float, 0x1090708);
    fVar34 = ((float)GEN_TOF((((float10)fVar30 * (float10)fVar30 + (float10)fVar30 * (float10)fVar30) +
                    (float10)REFG(double, 0x1088130))));
    (*(float *)(gen_frame + 0x210)) = fVar34;
    fVar34 = ((float)GEN_TOF(SQRT((float10)fVar34)));
    (*(float *)(gen_frame + 0x210)) = fVar34;
    fVar34 = (float)((float10)1 / (float10)fVar34);
    (*(float *)(gen_frame + 0x210)) = fVar34;
    fVar24 = (float10)fVar34;
    (*(float *)(gen_frame + 0x288)) = (float)(fVar24 * (float10)fVar30);
    (*(float *)(gen_frame + 0x28c)) = (float)(fVar24 * (float10)fVar30);
    (*(float *)(gen_frame + 0x290)) = (float)(fVar24 * (float10)REFG(double, 0x1094890));
    F_00990130(&(*(float *)(gen_frame + 0x294)),(uint)&(*(float *)(gen_frame + 0x294)));
    F_00990130(&(*(float *)(gen_frame + 0x2a0)),(uint)&(*(float *)(gen_frame + 0x2a0)));
    pvVar13 = (undefined *)F_00990130(&(*(float *)(gen_frame + 0x2ac)),(uint)&(*(float *)(gen_frame + 0x2ac)));
  }
  if (0 < (int)gen_fl2bits(param_6)) {
    puVar23 = (ulonglong *)((int)gen_fl2bits((*(float *)(gen_frame + 0x224))) + 0x88);
    (*(char * PTR32 *)(gen_frame + 0x214)) = (char *)((int)gen_fl2bits((*(float *)(gen_frame + 0x220))) + 0x44);
    (*(float *)(gen_frame + 0x210)) = param_6;
    do {
      if ((*(char * PTR32 *)(gen_frame + 0x214))[0xb] == '\x01') {
        F_0098ed70(&(*(float *)(gen_frame + 0x1a0)),(uint)((*(char * PTR32 *)(gen_frame + 0x214)) + -0x44),uVar11,(*(uint *)(gen_frame + 0x188)));
        (*(float *)(gen_frame + 0x224)) = *(float *)((*(char * PTR32 *)(gen_frame + 0x214)) + -0x44);
        fVar24 = (float10)*(float *)((*(char * PTR32 *)(gen_frame + 0x214)) + -0x44);
        (*(float *)(gen_frame + 0x224)) = gen_bits2f((int)*(short *)(uVar11 + 0xa0));
        (*(float *)(gen_frame + 0x1c0)) = REFG(float, 0x10a0d8c);
        (*(float *)(gen_frame + 0x1c4)) = REFG(float, 0x10a0d8c);
        (*(float *)(gen_frame + 0x1c8)) = REFG(float, 0x10a0d8c);
        (*(float *)(gen_frame + 0x1cc)) = REFG(float, 0x10a0d8c);
        if (fVar24 <= (float10)(int)*(short *)(uVar11 + 0xa0)) {
          (*(float *)(gen_frame + 0x1c0)) = (float)*(byte *)(uVar11 + 0xa8);
          (*(float *)(gen_frame + 0x1c4)) = (float)*(byte *)(uVar11 + 0xa9);
          (*(float *)(gen_frame + 0x1c8)) = (float)*(byte *)(uVar11 + 0xaa);
          (*(float *)(gen_frame + 0x1cc)) = (float)*(byte *)(uVar11 + 0xab);
        }
        else {
          (*(float *)(gen_frame + 0x224)) = gen_bits2f((int)*(short *)(uVar11 + 0xa6));
          if ((float10)(int)*(short *)(uVar11 + 0xa6) <= fVar24) {
            (*(float *)(gen_frame + 0x1c0)) = (float)*(byte *)(uVar11 + 0xb4);
            (*(float *)(gen_frame + 0x1c4)) = (float)*(byte *)(uVar11 + 0xb5);
            (*(float *)(gen_frame + 0x1c8)) = (float)*(byte *)(uVar11 + 0xb6);
            (*(float *)(gen_frame + 0x1cc)) = (float)*(byte *)(uVar11 + 0xb7);
          }
          else {
            iVar15 = 1;
            psVar20 = (short *)(uVar11 + 0xa2);
            do {
              (*(float *)(gen_frame + 0x224)) = gen_bits2f((int)*psVar20);
              fVar25 = (float10)(int)*psVar20;
              if ((!GEN_ISNAN(fVar25) && !GEN_ISNAN(fVar24)) && !(fVar25 <= fVar24)) {
                iVar21 = (int)*(short *)(uVar11 + 0x9e + iVar15 * 2);
                iVar14 = (int)*(short *)(uVar11 + 0xa0 + iVar15 * 2);
                (*(float *)(gen_frame + 0x224)) = gen_bits2f(iVar21);
                uVar18 = (uint)*(byte *)(uVar11 + 0xa4 + iVar15 * 4);
                fVar25 = (float10)iVar21;
                (*(float *)(gen_frame + 0x224)) = gen_bits2f(iVar14);
                uVar12 = (uint)*(byte *)(uVar11 + 0xa8 + iVar15 * 4);
                (*(float *)(gen_frame + 0x224)) = gen_bits2f(uVar18);
                uVar19 = (uint)*(byte *)(uVar11 + 0xa5 + iVar15 * 4);
                fVar34 = ((float)GEN_TOF(((fVar24 - fVar25) / ((float10)iVar14 - fVar25))));
                (*(float *)(gen_frame + 0x1bc)) = fVar34;
                fVar25 = (float10)uVar18;
                (*(float *)(gen_frame + 0x224)) = gen_bits2f(uVar12);
                uVar18 = (uint)*(byte *)(uVar11 + 0xa9 + iVar15 * 4);
                (*(float *)(gen_frame + 0x224)) = gen_bits2f(uVar19);
                uVar22 = (uint)*(byte *)(uVar11 + 0xa6 + iVar15 * 4);
                fVar26 = (float10)fVar34;
                (*(float *)(gen_frame + 0x1c0)) = ((float)GEN_TOF((fVar26 * ((float10)uVar12 - fVar25) + fVar25)));
                fVar25 = (float10)uVar19;
                (*(float *)(gen_frame + 0x224)) = gen_bits2f(uVar18);
                uVar12 = (uint)*(byte *)(uVar11 + 0xaa + iVar15 * 4);
                (*(float *)(gen_frame + 0x224)) = gen_bits2f(uVar22);
                uVar19 = (uint)*(byte *)(uVar11 + 0xa7 + iVar15 * 4);
                (*(float *)(gen_frame + 0x1c4)) = ((float)GEN_TOF((((float10)uVar18 - fVar25) * fVar26 + fVar25)));
                fVar25 = (float10)uVar22;
                (*(float *)(gen_frame + 0x224)) = gen_bits2f(uVar12);
                uVar18 = (uint)*(byte *)(uVar11 + 0xab + iVar15 * 4);
                (*(float *)(gen_frame + 0x224)) = gen_bits2f(uVar19);
                (*(float *)(gen_frame + 0x1c8)) = ((float)GEN_TOF((((float10)uVar12 - fVar25) * fVar26 + fVar25)));
                fVar25 = (float10)uVar19;
                (*(float *)(gen_frame + 0x224)) = gen_bits2f(uVar18);
                (*(float *)(gen_frame + 0x1cc)) = ((float)GEN_TOF((fVar25 + ((float10)uVar18 - fVar25) * fVar26)));
                break;
              }
              iVar15 = iVar15 + 1;
              psVar20 = psVar20 + 1;
            } while (iVar15 < 4);
          }
        }
        fVar25 = (float10)*(double *)&REFG(undefined, 0x1088100);
        (*(float *)(gen_frame + 0x130)) = (float)((float10)(*(float *)(gen_frame + 0x1c0)) / fVar25);
        (*(float *)(gen_frame + 0x134)) = (float)((float10)(*(float *)(gen_frame + 0x1c4)) / fVar25);
        (*(float *)(gen_frame + 0x138)) = (float)((float10)(*(float *)(gen_frame + 0x1c8)) / fVar25);
        (*(float *)(gen_frame + 0x13c)) = (float)((float10)(*(float *)(gen_frame + 0x1cc)) / fVar25);
        (*(float *)(gen_frame + 0x1ac)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x1c0)) / fVar25) *
                           (float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1f8)) + 0x88))));
        (*(float *)(gen_frame + 0x1b0)) = ((float)GEN_TOF(((float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1f8)) + 0x8c) *
                           (float10)(float)((float10)(*(float *)(gen_frame + 0x1c4)) / fVar25))));
        (*(float *)(gen_frame + 0x1b4)) = ((float)GEN_TOF(((float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1f8)) + 0x90) *
                           (float10)(float)((float10)(*(float *)(gen_frame + 0x1c8)) / fVar25))));
        cVar6 = *(char *)(uVar11 + 0xc4);
        (*(float *)(gen_frame + 0x1b8)) = ((float)GEN_TOF(((float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1f8)) + 0x94) *
                           (float10)(float)((float10)(*(float *)(gen_frame + 0x1cc)) / fVar25))));
        if (cVar6 < '\x01') {
          uVar12 = *(ushort *)((*(char * PTR32 *)(gen_frame + 0x214)) + -0xe) & 0x7fff;
        }
        else {
          (*(float *)(gen_frame + 0x224)) = gen_bits2f((int)cVar6);
          iVar15 = (int)(fVar24 / (float10)(int)cVar6) + (*(ushort *)((*(char * PTR32 *)(gen_frame + 0x214)) + -0xe) & 0x7fff);
          uVar12 = (*(uint *)(gen_frame + 0x17c)) & 0xffff;
          if ((*(char *)(uVar11 + 0xc6) < '\0') &&
             ((int)-((int)*(char *)(uVar11 + 0xc6) * uVar12) <= iVar15)) {
            uVar12 = uVar12 - 1;
          }
          else {
            uVar12 = iVar15 % (int)uVar12;
          }
        }
        (*(float *)(gen_frame + 0x1bc)) = gen_bits2f(((*(uint *)(gen_frame + 0x180)) & 0xffff) * ((int)uVar12 % (int)*(char *)(uVar11 + 0xc2)))
        ;
        sVar7 = *(short *)(uVar11 + 0xbc);
        (*(float *)(gen_frame + 0x224)) = gen_bits2f(((*(uint *)(gen_frame + 0x18c)) & 0xffff) * ((int)uVar12 / (int)*(char *)(uVar11 + 0xc2)));
        if (sVar7 < 1) {
          (*(float *)(gen_frame + 0x1fc)) = 0.0;
        }
        else {
          (*(float *)(gen_frame + 0x1fc)) = gen_bits2f((int)sVar7);
          fVar34 = (float)(fVar24 / (float10)(int)sVar7);
          (*(float *)(gen_frame + 0x1fc)) = fVar34;
          fVar24 = ((float10)GEN_TOD(pow((float10)fVar34,(float10)*(float *)(uVar11 + 0x34))));
          (*(float *)(gen_frame + 0x1fc)) = (float)fVar24;
        }
        (*(float *)(gen_frame + 0x220)) = *(float *)(uVar11 + 0x24);
        fVar24 = (float10)*(float *)(uVar11 + 0x24);
        (*(float *)(gen_frame + 0x220)) = gen_bits2f((int)*(*(char * PTR32 *)(gen_frame + 0x214)));
        (*(float *)(gen_frame + 0x184)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x84)) *
                           (((float10)(int)*(*(char * PTR32 *)(gen_frame + 0x214)) *
                            ((float10)(*(float *)(gen_frame + 0x1fc)) * ((float10)*(float *)(uVar11 + 0x2c) - fVar24) +
                            fVar24)) / (float10)*(double *)&REFG(undefined, 0x1090718)))));
        (*(float *)(gen_frame + 0x220)) = *(float *)(uVar11 + 0x28);
        fVar24 = (float10)*(float *)(uVar11 + 0x28);
        (*(float *)(gen_frame + 0x220)) = gen_bits2f((int)(*(char * PTR32 *)(gen_frame + 0x214))[1]);
        (*(float *)(gen_frame + 0x204)) = ((float)GEN_TOF(((((float10)(int)(*(char * PTR32 *)(gen_frame + 0x214))[1] *
                             (fVar24 + ((float10)*(float *)(uVar11 + 0x30) - fVar24) *
                                       (float10)(*(float *)(gen_frame + 0x1fc)))) / (float10)*(double *)&REFG(undefined, 0x1090718)) *
                           (float10)(*(float *)(gen_frame + 0x88)))));
        (*(float *)(gen_frame + 0x1e0)) = *(float *)((*(char * PTR32 *)(gen_frame + 0x214)) + -0x44);
        (*(float *)(gen_frame + 0x220)) = gen_bits2f((int)*(short *)((*(char * PTR32 *)(gen_frame + 0x214)) + -6));
        fVar24 = (float10)*(float *)((*(char * PTR32 *)(gen_frame + 0x214)) + -0x44);
        (*(float *)(gen_frame + 0x220)) = gen_bits2f((int)*(short *)((*(char * PTR32 *)(gen_frame + 0x214)) + -4));
        uVar18 = (int)(fVar24 * (float10)(int)*(short *)((*(char * PTR32 *)(gen_frame + 0x214)) + -6)) +
                 (int)*(short *)((*(char * PTR32 *)(gen_frame + 0x214)) + -0xc) & 0x3ff;
        (*(uint *)(gen_frame + 0xcc)) = uVar18;
        (*(float *)(gen_frame + 0x220)) = gen_bits2f((int)*(short *)((*(char * PTR32 *)(gen_frame + 0x214)) + -2));
        uVar19 = (int)((float10)(int)*(short *)((*(char * PTR32 *)(gen_frame + 0x214)) + -4) * fVar24) +
                 (int)*(short *)((*(char * PTR32 *)(gen_frame + 0x214)) + -10) & 0x3ff;
        (*(uint *)(gen_frame + 0xd0)) = uVar19;
        fVar25 = (float10)*(float *)&REFG(undefined, 0x132f3a4);
        fVar26 = (float10)*(double *)&REFG(undefined, 0x10ac178);
        uVar12 = (int)((float10)(int)*(short *)((*(char * PTR32 *)(gen_frame + 0x214)) + -2) * fVar24) +
                 (int)*(short *)((*(char * PTR32 *)(gen_frame + 0x214)) + -8) & 0x3ff;
        (*(uint *)(gen_frame + 0xd4)) = uVar12;
        fVar8 = param_4[0xc];
        fVar34 = ((float)GEN_TOF(((fVar25 * (float10)uVar18) * fVar26)));
        (*(float *)(gen_frame + 0x19c)) = fVar34;
        fVar30 = ((float)GEN_TOF((((float10)uVar19 * fVar25) * fVar26)));
        (*(float *)(gen_frame + 0x1e0)) = fVar30;
        fVar2 = ((float)GEN_TOF(((fVar25 * (float10)uVar12) * fVar26)));
        (*(float *)(gen_frame + 0x220)) = fVar2;
        fVar31 = (*(float *)(gen_frame + 0x1a8));
        fVar32 = (*(float *)(gen_frame + 0x1a4));
        fVar33 = (*(float *)(gen_frame + 0x1a0));
        if ((int)gen_fl2bits(fVar8) < 0) {
          uVar35 = F_0099aa20(&(*(float *)(gen_frame + 0x1ac)));
          *puVar23 = uVar35;
          puVar23[-6] = uVar35;
          puVar23[-0xc] = uVar35;
        }
        else {
          (*(float *)(gen_frame + 0x1d0)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x1d4)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x1d8)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x1dc)) = REFG(float, 0x1087f04);
          if (fVar8 == 0.0) {
            fVar34 = ((float)GEN_TOF(-(float10)fVar34));
            (*(float *)(gen_frame + 0x1f0)) = fVar34;
            fVar24 = ((float10)GEN_TOD(fsin((float10)fVar34)));
            fVar8 = (float)fVar24;
            (*(float *)((char *)&(*(double *)(gen_frame + 0x208)) + 4)) = fVar8;
            (*(float *)(gen_frame + 0x21c)) = fVar8;
            fVar30 = ((float)GEN_TOF(-(float10)fVar30));
            (*(float *)(gen_frame + 0x200)) = fVar30;
            fVar24 = ((float10)GEN_TOD(fsin((float10)fVar30)));
            fVar3 = (float)fVar24;
            (*(float *)((char *)&(*(double *)(gen_frame + 0x208)) + 4)) = fVar3;
            (*(float *)(gen_frame + 0x218)) = fVar3;
            fVar2 = ((float)GEN_TOF(-(float10)fVar2));
            (*(float *)(gen_frame + 0x1f4)) = fVar2;
            fVar24 = ((float10)GEN_TOD(fsin((float10)fVar2)));
            fVar4 = (float)fVar24;
            (*(float *)((char *)&(*(double *)(gen_frame + 0x208)) + 4)) = fVar4;
            (*(float *)((char *)&(*(double *)(gen_frame + 0x1e4)) + 4)) = fVar4;
            (*(double *)(gen_frame + 0x1e4)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar4),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1e4)) + 0))));
            fVar24 = ((float10)GEN_TOD(fcos((float10)fVar34)));
            fVar34 = (float)fVar24;
            (*(float *)((char *)&(*(double *)(gen_frame + 0x208)) + 4)) = fVar34;
            (*(float *)(gen_frame + 0x1ec)) = fVar34;
            fVar24 = ((float10)GEN_TOD(fcos((float10)fVar30)));
            fVar30 = (float)fVar24;
            (*(float *)((char *)&(*(double *)(gen_frame + 0x208)) + 4)) = fVar30;
            (*(float *)(gen_frame + 0x200)) = fVar30;
            fVar24 = ((float10)GEN_TOD(fcos((float10)fVar2)));
            fVar2 = (float)fVar24;
            (*(float *)((char *)&(*(double *)(gen_frame + 0x208)) + 4)) = fVar2;
            fVar24 = (float10)fVar34;
            fVar25 = (float10)fVar3;
            (*(float *)(gen_frame + 0x4c)) = (float)(fVar25 * fVar24);
            fVar26 = (float10)fVar30;
            (*(float *)(gen_frame + 0x54)) = (float)(fVar26 * fVar24);
            fVar27 = (float10)fVar2;
            dVar5 = (double)(fVar27 * (float10)fVar8);
            (*(double *)(gen_frame + 0x208)) = dVar5;
            fVar28 = (float10)fVar4;
            fVar34 = ((float)GEN_TOF(((fVar27 * (float10)fVar8) * fVar25 - fVar28 * fVar26)));
            (*(float *)(gen_frame + 0xa8)) = fVar34;
            (*(float *)(gen_frame + 0xac)) = (float)(fVar27 * fVar24);
            fVar30 = (float)(fVar26 * (float10)dVar5 - -fVar25 * fVar28);
            (*(float *)(gen_frame + 0xb0)) = fVar30;
            fVar2 = ((float)GEN_TOF((fVar25 * (fVar28 * (float10)fVar8) + fVar27 * fVar26)));
            (*(float *)(gen_frame + 0xc0)) = fVar2;
            (*(float *)(gen_frame + 0x158)) = fVar34;
            (*(float *)(gen_frame + 0xc4)) = (float)(fVar24 * fVar28);
            (*(float *)(gen_frame + 0x15c)) = (float)(fVar27 * fVar24);
            (*(float *)(gen_frame + 0x160)) = fVar30;
            (*(float *)(gen_frame + 0x164)) = (float)(fVar25 * fVar24);
            (*(uint *)(gen_frame + 0x168)) = (uint)gen_fl2bits(fVar8) ^ REFG(uint, 0x10920d0);
            fVar34 = ((float)GEN_TOF((fVar26 * (fVar28 * (float10)fVar8) - fVar27 * fVar25)));
            (*(float *)(gen_frame + 0xc8)) = fVar34;
            (*(float *)(gen_frame + 0x14c)) = fVar2;
            (*(float *)(gen_frame + 0x16c)) = (float)(fVar26 * fVar24);
            (*(float *)(gen_frame + 0x150)) = (float)(fVar24 * fVar28);
            (*(float *)(gen_frame + 0x170)) = (*(float *)(gen_frame + 0x1a0));
            (*(float *)(gen_frame + 0x174)) = (*(float *)(gen_frame + 0x1a4));
            (*(float *)(gen_frame + 0x154)) = fVar34;
            (*(float *)(gen_frame + 0x178)) = (*(float *)(gen_frame + 0x1a8));
            F_00981050(&(*(float *)(gen_frame + 0x2b8)),(uint)&(*(float *)(gen_frame + 0x288)),(uint)&(*(float *)(gen_frame + 0x14c)));
            F_00981050(&(*(float *)(gen_frame + 0x2c4)),(uint)&(*(float *)(gen_frame + 0x294)),(uint)&(*(float *)(gen_frame + 0x14c)));
            F_00981050(&(*(float *)(gen_frame + 0x2d0)),(uint)&(*(float *)(gen_frame + 0x2a0)),(uint)&(*(float *)(gen_frame + 0x14c)));
            F_00981050(&(*(float *)(gen_frame + 0x2dc)),(uint)&(*(float *)(gen_frame + 0x2ac)),(uint)&(*(float *)(gen_frame + 0x14c)));
            F_00981050(&(*(float *)(gen_frame + 0x2b8)),(uint)&(*(float *)(gen_frame + 0x2b8)),0x14a0d58);
            F_00981050(&(*(float *)(gen_frame + 0x2c4)),(uint)&(*(float *)(gen_frame + 0x2c4)),0x14a0d58);
            F_00981050(&(*(float *)(gen_frame + 0x2d0)),(uint)&(*(float *)(gen_frame + 0x2d0)),0x14a0d58);
            F_00981050(&(*(float *)(gen_frame + 0x2dc)),(uint)&(*(float *)(gen_frame + 0x2dc)),0x14a0d58);
            fVar34 = ((float)GEN_TOF(((float10)param_4[5] * (float10)(*(float *)(gen_frame + 0x2c0)) +
                            ((float10)(*(float *)(gen_frame + 0x2b8)) * (float10)param_4[3] +
                            (float10)param_4[4] * (float10)(*(float *)(gen_frame + 0x2bc))))));
            (*(float *)(gen_frame + 0x258)) = fVar34;
            fVar30 = ((float)GEN_TOF(((float10)param_4[5] * (float10)(*(float *)(gen_frame + 0x2cc)) +
                            ((float10)param_4[3] * (float10)(*(float *)(gen_frame + 0x2c4)) +
                            (float10)param_4[4] * (float10)(*(float *)(gen_frame + 0x2c8))))));
            (*(float *)((char *)&(*(double *)(gen_frame + 0x1e4)) + 4)) = fVar30;
            (*(double *)(gen_frame + 0x1e4)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar30),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1e4)) + 0))));
            fVar2 = ((float)GEN_TOF(((float10)param_4[5] * (float10)(*(float *)(gen_frame + 0x2d8)) +
                           ((float10)(*(float *)(gen_frame + 0x2d0)) * (float10)param_4[3] +
                           (float10)param_4[4] * (float10)(*(float *)(gen_frame + 0x2d4))))));
            (*(float *)((char *)&(*(double *)(gen_frame + 0x208)) + 4)) = fVar2;
            (*(double *)(gen_frame + 0x208)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar2),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x208)) + 0))));
            fVar8 = ((float)GEN_TOF(((float10)param_4[5] * (float10)(*(float *)(gen_frame + 0x2e4)) +
                           ((float10)(*(float *)(gen_frame + 0x2dc)) * (float10)param_4[3] +
                           (float10)param_4[4] * (float10)(*(float *)(gen_frame + 0x2e0))))));
            (*(float *)(gen_frame + 0x1ec)) = fVar8;
            if (fVar34 < 0.0) {
              (*(float *)(gen_frame + 0x1d0)) = 0.0;
            }
            else {
              (*(float *)(gen_frame + 0x1d0)) = fVar34;
            }
            if (fVar30 < 0.0) {
              (*(float *)(gen_frame + 0x1d4)) = 0.0;
            }
            else {
              (*(float *)(gen_frame + 0x1d4)) = fVar30;
            }
            if (fVar2 < 0.0) {
              (*(float *)(gen_frame + 0x1d8)) = 0.0;
            }
            else {
              (*(float *)(gen_frame + 0x1d8)) = fVar2;
            }
            if (fVar8 < 0.0) {
              (*(float *)(gen_frame + 0x1dc)) = 0.0;
            }
            else {
              (*(float *)(gen_frame + 0x1dc)) = fVar8;
            }
          }
          else if (fVar8 == 1.4013e-45) {
            fVar34 = ((float)GEN_TOF(-(float10)fVar34));
            (*(float *)(gen_frame + 0x1f0)) = fVar34;
            fVar24 = ((float10)GEN_TOD(fsin((float10)fVar34)));
            fVar8 = (float)fVar24;
            (*(float *)(gen_frame + 0x21c)) = fVar8;
            fVar30 = ((float)GEN_TOF(-(float10)fVar30));
            (*(float *)(gen_frame + 0x200)) = fVar30;
            fVar24 = ((float10)GEN_TOD(fsin((float10)fVar30)));
            fVar3 = (float)fVar24;
            (*(float *)(gen_frame + 0x1f4)) = fVar3;
            (*(float *)(gen_frame + 0x1ec)) = fVar3;
            fVar2 = ((float)GEN_TOF(-(float10)fVar2));
            (*(float *)(gen_frame + 0x1f4)) = fVar2;
            fVar24 = ((float10)GEN_TOD(fsin((float10)fVar2)));
            fVar4 = (float)fVar24;
            (*(float *)(gen_frame + 0x218)) = fVar4;
            (*(float *)((char *)&(*(double *)(gen_frame + 0x208)) + 4)) = fVar4;
            (*(double *)(gen_frame + 0x208)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar4),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x208)) + 0))));
            fVar24 = ((float10)GEN_TOD(fcos((float10)fVar34)));
            fVar34 = (float)fVar24;
            (*(float *)(gen_frame + 0x218)) = fVar34;
            (*(float *)(gen_frame + 0x1f0)) = fVar34;
            fVar24 = ((float10)GEN_TOD(fcos((float10)fVar30)));
            fVar30 = (float)fVar24;
            (*(float *)(gen_frame + 0x218)) = fVar30;
            (*(float *)(gen_frame + 0x200)) = fVar30;
            fVar24 = ((float10)GEN_TOD(fcos((float10)fVar2)));
            fVar2 = (float)fVar24;
            (*(float *)(gen_frame + 0x218)) = fVar2;
            fVar24 = (float10)fVar34;
            fVar25 = (float10)fVar3;
            (*(float *)(gen_frame + 0x58)) = (float)(fVar25 * fVar24);
            fVar26 = (float10)fVar30;
            (*(float *)(gen_frame + 0x60)) = (float)(fVar26 * fVar24);
            fVar27 = (float10)fVar2;
            dVar5 = (double)(fVar27 * (float10)fVar8);
            (*(double *)(gen_frame + 0x1e4)) = dVar5;
            fVar28 = (float10)fVar4;
            fVar34 = ((float)GEN_TOF(((fVar27 * (float10)fVar8) * fVar25 - fVar28 * fVar26)));
            (*(float *)(gen_frame + 0x140)) = fVar34;
            (*(float *)(gen_frame + 0x144)) = (float)(fVar27 * fVar24);
            fVar30 = (float)(fVar26 * (float10)dVar5 - -fVar25 * fVar28);
            (*(float *)(gen_frame + 0x148)) = fVar30;
            fVar2 = ((float)GEN_TOF((fVar25 * (fVar28 * (float10)fVar8) + fVar27 * fVar26)));
            (*(float *)(gen_frame + 0x9c)) = fVar2;
            (*(float *)(gen_frame + 0x158)) = fVar34;
            (*(float *)(gen_frame + 0xa0)) = (float)(fVar24 * fVar28);
            (*(float *)(gen_frame + 0x15c)) = (float)(fVar27 * fVar24);
            (*(float *)(gen_frame + 0x160)) = fVar30;
            (*(float *)(gen_frame + 0x164)) = (float)(fVar25 * fVar24);
            (*(uint *)(gen_frame + 0x168)) = (uint)gen_fl2bits(fVar8) ^ REFG(uint, 0x10920d0);
            fVar34 = ((float)GEN_TOF((fVar26 * (fVar28 * (float10)fVar8) - fVar27 * fVar25)));
            (*(float *)(gen_frame + 0xa4)) = fVar34;
            (*(float *)(gen_frame + 0x14c)) = fVar2;
            (*(float *)(gen_frame + 0x16c)) = (float)(fVar26 * fVar24);
            (*(float *)(gen_frame + 0x150)) = (float)(fVar24 * fVar28);
            (*(float *)(gen_frame + 0x170)) = (*(float *)(gen_frame + 0x1a0));
            (*(float *)(gen_frame + 0x174)) = (*(float *)(gen_frame + 0x1a4));
            (*(float *)(gen_frame + 0x154)) = fVar34;
            (*(float *)(gen_frame + 0x178)) = (*(float *)(gen_frame + 0x1a8));
            F_00981050(&(*(float *)(gen_frame + 0x2b8)),(uint)&(*(float *)(gen_frame + 0x288)),(uint)&(*(float *)(gen_frame + 0x14c)));
            F_00981050(&(*(float *)(gen_frame + 0x2c4)),(uint)&(*(float *)(gen_frame + 0x294)),(uint)&(*(float *)(gen_frame + 0x14c)));
            F_00981050(&(*(float *)(gen_frame + 0x2d0)),(uint)&(*(float *)(gen_frame + 0x2a0)),(uint)&(*(float *)(gen_frame + 0x14c)));
            F_00981050(&(*(float *)(gen_frame + 0x2dc)),(uint)&(*(float *)(gen_frame + 0x2ac)),(uint)&(*(float *)(gen_frame + 0x14c)));
            F_00981050(&(*(float *)(gen_frame + 0x2b8)),(uint)&(*(float *)(gen_frame + 0x2b8)),0x14a0d58);
            F_00981050(&(*(float *)(gen_frame + 0x2c4)),(uint)&(*(float *)(gen_frame + 0x2c4)),0x14a0d58);
            F_00981050(&(*(float *)(gen_frame + 0x2d0)),(uint)&(*(float *)(gen_frame + 0x2d0)),0x14a0d58);
            F_00981050(&(*(float *)(gen_frame + 0x2dc)),(uint)&(*(float *)(gen_frame + 0x2dc)),0x14a0d58);
            fVar34 = ((float)GEN_TOF(((float10)param_4[5] * (float10)(*(float *)(gen_frame + 0x2c0)) +
                            ((float10)(*(float *)(gen_frame + 0x2b8)) * (float10)param_4[3] +
                            (float10)param_4[4] * (float10)(*(float *)(gen_frame + 0x2bc))))));
            (*(float *)(gen_frame + 0x228)) = fVar34;
            fVar30 = ((float)GEN_TOF(((float10)param_4[5] * (float10)(*(float *)(gen_frame + 0x2cc)) +
                            ((float10)param_4[3] * (float10)(*(float *)(gen_frame + 0x2c4)) +
                            (float10)param_4[4] * (float10)(*(float *)(gen_frame + 0x2c8))))));
            (*(float *)((char *)&(*(double *)(gen_frame + 0x208)) + 4)) = fVar30;
            (*(double *)(gen_frame + 0x208)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar30),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x208)) + 0))));
            fVar2 = ((float)GEN_TOF(((float10)param_4[5] * (float10)(*(float *)(gen_frame + 0x2d8)) +
                           ((float10)param_4[3] * (float10)(*(float *)(gen_frame + 0x2d0)) +
                           (float10)param_4[4] * (float10)(*(float *)(gen_frame + 0x2d4))))));
            (*(float *)(gen_frame + 0x1ec)) = fVar2;
            fVar8 = ((float)GEN_TOF(((float10)param_4[5] * (float10)(*(float *)(gen_frame + 0x2e4)) +
                           ((float10)(*(float *)(gen_frame + 0x2dc)) * (float10)param_4[3] +
                           (float10)param_4[4] * (float10)(*(float *)(gen_frame + 0x2e0))))));
            (*(float *)(gen_frame + 0x218)) = fVar8;
            fVar24 = (float10)REFG(double, 0x1088108);
            (*(float *)(gen_frame + 0x1d0)) = (float)((float10)fVar34 * fVar24 + fVar24);
            (*(float *)(gen_frame + 0x1d4)) = (float)((float10)fVar30 * fVar24 + fVar24);
            (*(float *)(gen_frame + 0x1d8)) = (float)((float10)fVar2 * fVar24 + fVar24);
            (*(float *)(gen_frame + 0x1dc)) = (float)((float10)fVar8 * fVar24 + fVar24);
          }
          else if (fVar8 == 2.8026e-45) {
            fVar34 = (float)((float10)REFG(double, 0x1088108) - (float10)param_4[4] * (float10)REFG(double, 0x1088108));
            (*(float *)(gen_frame + 0x21c)) = fVar34;
            (*(float *)(gen_frame + 0x1d0)) = fVar34;
            (*(float *)(gen_frame + 0x1d4)) = fVar34;
            (*(float *)(gen_frame + 0x1d8)) = fVar34;
            (*(float *)(gen_frame + 0x1dc)) = fVar34;
          }
          fVar24 = (float10)(*(float *)(gen_frame + 0x1d0));
          (*(float *)(gen_frame + 0x90)) = (float)(fVar24 * (float10)param_4[6]);
          (*(float *)(gen_frame + 0x94)) = (float)((float10)param_4[7] * fVar24);
          (*(float *)(gen_frame + 0x98)) = (float)(fVar24 * (float10)param_4[8]);
          (*(float *)((char *)&(*(double *)(gen_frame + 0x1e4)) + 4)) = *param_4;
          fVar25 = (float10)*param_4;
          fVar34 = ((float)GEN_TOF((fVar25 + (float10)(float)(fVar24 * (float10)param_4[6]))));
          (*(float *)(gen_frame + 0xb4)) = fVar34;
          (*(float *)((char *)&(*(double *)(gen_frame + 0x1e4)) + 4)) = param_4[1];
          fVar26 = (float10)param_4[1];
          fVar30 = ((float)GEN_TOF((fVar26 + (float10)(float)((float10)param_4[7] * fVar24))));
          (*(float *)(gen_frame + 0xb8)) = fVar30;
          fVar2 = param_4[2];
          (*(float *)((char *)&(*(double *)(gen_frame + 0x1e4)) + 4)) = fVar2;
          (*(double *)(gen_frame + 0x1e4)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar2),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1e4)) + 0))));
          fVar27 = (float10)fVar2;
          fVar2 = ((float)GEN_TOF((fVar27 + (float10)(float)(fVar24 * (float10)param_4[8]))));
          (*(float *)(gen_frame + 0xbc)) = fVar2;
          (*(float *)(gen_frame + 0x2e8)) = fVar34;
          (*(float *)(gen_frame + 0x2ec)) = fVar30;
          (*(float *)(gen_frame + 0x2f0)) = fVar2;
          fVar24 = (float10)(*(float *)(gen_frame + 0x1d4));
          (*(float *)(gen_frame + 0xd8)) = (float)(fVar24 * (float10)param_4[6]);
          (*(float *)(gen_frame + 0xdc)) = (float)((float10)param_4[7] * fVar24);
          (*(float *)(gen_frame + 0xe0)) = (float)(fVar24 * (float10)param_4[8]);
          fVar34 = ((float)GEN_TOF(((float10)(float)(fVar24 * (float10)param_4[6]) + fVar25)));
          (*(float *)(gen_frame + 0x114)) = fVar34;
          fVar30 = ((float)GEN_TOF((fVar26 + (float10)(float)((float10)param_4[7] * fVar24))));
          (*(float *)(gen_frame + 0x118)) = fVar30;
          fVar2 = ((float)GEN_TOF((fVar27 + (float10)(float)(fVar24 * (float10)param_4[8]))));
          (*(float *)(gen_frame + 0x11c)) = fVar2;
          (*(float *)(gen_frame + 0x2f4)) = fVar34;
          (*(float *)(gen_frame + 0x2f8)) = fVar30;
          (*(float *)(gen_frame + 0x2fc)) = fVar2;
          fVar24 = (float10)(*(float *)(gen_frame + 0x1d8));
          (*(float *)(gen_frame + 0x124)) = (float)(fVar24 * (float10)param_4[6]);
          (*(float *)(gen_frame + 0x128)) = (float)((float10)param_4[7] * fVar24);
          (*(float *)(gen_frame + 0x12c)) = (float)(fVar24 * (float10)param_4[8]);
          fVar34 = ((float)GEN_TOF(((float10)(float)(fVar24 * (float10)param_4[6]) + fVar25)));
          (*(float *)(gen_frame + 0x108)) = fVar34;
          fVar30 = ((float)GEN_TOF((fVar26 + (float10)(float)((float10)param_4[7] * fVar24))));
          (*(float *)(gen_frame + 0x10c)) = fVar30;
          iVar15 = 2;
          fVar2 = ((float)GEN_TOF((fVar27 + (float10)(float)(fVar24 * (float10)param_4[8]))));
          (*(float *)(gen_frame + 0x110)) = fVar2;
          (*(float *)(gen_frame + 0x300)) = fVar34;
          (*(float *)(gen_frame + 0x304)) = fVar30;
          (*(float *)(gen_frame + 0x308)) = fVar2;
          fVar24 = (float10)(*(float *)(gen_frame + 0x1dc));
          (*(float *)(gen_frame + 0xf0)) = (float)(fVar24 * (float10)param_4[6]);
          (*(float *)(gen_frame + 0xf4)) = (float)((float10)param_4[7] * fVar24);
          (*(float *)(gen_frame + 0xf8)) = (float)(fVar24 * (float10)param_4[8]);
          fVar34 = ((float)GEN_TOF(((float10)(float)(fVar24 * (float10)param_4[6]) + fVar25)));
          (*(float *)(gen_frame + 0xe4)) = fVar34;
          fVar30 = ((float)GEN_TOF((fVar26 + (float10)(float)((float10)param_4[7] * fVar24))));
          (*(float *)(gen_frame + 0xe8)) = fVar30;
          fVar2 = ((float)GEN_TOF((fVar27 + (float10)(float)(fVar24 * (float10)param_4[8]))));
          (*(float *)(gen_frame + 0xec)) = fVar2;
          (*(float *)(gen_frame + 0x30c)) = fVar34;
          (*(float *)(gen_frame + 0x310)) = fVar30;
          (*(float *)(gen_frame + 0x314)) = fVar2;
          pfVar16 = (float *)((*(int *)(gen_frame + 0x120)) + 8);
          do {
            (*(float *)(gen_frame + 0x198)) = pfVar16[4];
            iVar15 = iVar15 + -1;
            (*(float *)(gen_frame + 0xfc)) = (float)((float10)(*(float *)(gen_frame + 0x1a0)) - (float10)pfVar16[-2]);
            (*(float *)(gen_frame + 0x100)) = (float)((float10)(*(float *)(gen_frame + 0x1a4)) - (float10)pfVar16[-1]);
            (*(float *)(gen_frame + 0x104)) = (float)((float10)(*(float *)(gen_frame + 0x1a8)) - (float10)*pfVar16);
            (*(float *)(gen_frame + 0x190)) = pfVar16[2];
            (*(float *)(gen_frame + 0x194)) = pfVar16[3];
            fVar24 = (float10)(float)((float10)(*(float *)(gen_frame + 0x1a4)) - (float10)pfVar16[-1]);
            fVar25 = (float10)(float)((float10)(*(float *)(gen_frame + 0x1a0)) - (float10)pfVar16[-2]);
            fVar26 = (float10)(float)((float10)(*(float *)(gen_frame + 0x1a8)) - (float10)*pfVar16);
            fVar34 = ((float)GEN_TOF((fVar26 * fVar26 + (fVar25 * fVar25 + fVar24 * fVar24))));
            (*(float *)((char *)&(*(double *)(gen_frame + 0x1e4)) + 4)) = fVar34;
            (*(double *)(gen_frame + 0x1e4)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar34),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1e4)) + 0))));
            fVar24 = (float10)fVar34;
            fVar34 = (float)((float10)pfVar16[2] / fVar24);
            (*(float *)(gen_frame + 0x190)) = fVar34;
            fVar30 = (float)((float10)pfVar16[3] / fVar24);
            (*(float *)(gen_frame + 0x194)) = fVar30;
            fVar2 = (float)((float10)pfVar16[4] / fVar24);
            (*(float *)(gen_frame + 0x198)) = fVar2;
            fVar26 = (float10)(*(float *)(gen_frame + 0x2e8));
            fVar27 = (float10)fVar34;
            (*(float *)(gen_frame + 0x2e8)) = (float)(fVar27 + fVar26);
            fVar28 = (float10)fVar30;
            fVar24 = (float10)(*(float *)(gen_frame + 0x2ec));
            (*(float *)(gen_frame + 0x2ec)) = (float)(fVar28 + fVar24);
            fVar29 = (float10)fVar2;
            fVar25 = (float10)(*(float *)(gen_frame + 0x2f0));
            (*(float *)(gen_frame + 0x2f0)) = (float)(fVar29 + fVar25);
            (*(float *)(gen_frame + 0x2f4)) = (float)((float10)(*(float *)(gen_frame + 0x2f4)) + fVar27);
            (*(float *)(gen_frame + 0x2f8)) = (float)((float10)(*(float *)(gen_frame + 0x2f8)) + fVar28);
            (*(float *)(gen_frame + 0x2fc)) = (float)((float10)(*(float *)(gen_frame + 0x2fc)) + fVar29);
            (*(float *)(gen_frame + 0x300)) = (float)((float10)(*(float *)(gen_frame + 0x300)) + fVar27);
            (*(float *)(gen_frame + 0x304)) = (float)((float10)(*(float *)(gen_frame + 0x304)) + fVar28);
            (*(float *)(gen_frame + 0x308)) = (float)((float10)(*(float *)(gen_frame + 0x308)) + fVar29);
            (*(float *)(gen_frame + 0x30c)) = (float)((float10)(*(float *)(gen_frame + 0x30c)) + fVar27);
            (*(float *)(gen_frame + 0x310)) = (float)(fVar28 + (float10)(*(float *)(gen_frame + 0x310)));
            (*(float *)(gen_frame + 0x314)) = (float)(fVar29 + (float10)(*(float *)(gen_frame + 0x314)));
            pfVar16 = pfVar16 + 8;
          } while (iVar15 != 0);
          (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x1b8));
          (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(((float10)(float)(fVar27 + fVar26) * (float10)(*(float *)(gen_frame + 0x1ac)))));
          (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((float10)(float)(fVar28 + fVar24) * (float10)(*(float *)(gen_frame + 0x1b0)))));
          (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)(float)(fVar29 + fVar25) * (float10)(*(float *)(gen_frame + 0x1b4)))));
          fVar34 = (*(float *)(gen_frame + 0x1b8));
          uVar35 = F_0099aa20(&(*(float *)(gen_frame + 0x3c)));
          (*(ulonglong *)(gen_frame + 0x64)) = uVar35;
          (*(float *)(gen_frame + 0xc)) = (float)((float10)(*(float *)(gen_frame + 0x1ac)) * (float10)(*(float *)(gen_frame + 0x2f4)));
          (*(float *)(gen_frame + 0x18)) = fVar34;
          (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x2f8)) * (float10)(*(float *)(gen_frame + 0x1b0)));
          (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x2fc)) * (float10)(*(float *)(gen_frame + 0x1b4)));
          uVar35 = F_0099aa20(&(*(float *)(gen_frame + 0xc)));
          (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x1ac)) * (float10)(*(float *)(gen_frame + 0x300)));
          (*(ulonglong *)(gen_frame + 0x6c)) = uVar35;
          (*(float *)(gen_frame + 0x28)) = fVar34;
          (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x304)) * (float10)(*(float *)(gen_frame + 0x1b0)));
          (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x308)) * (float10)(*(float *)(gen_frame + 0x1b4)));
          uVar35 = F_0099aa20(&(*(float *)(gen_frame + 0x1c)));
          (*(float *)(gen_frame + 0x2c)) = (float)((float10)(*(float *)(gen_frame + 0x1ac)) * (float10)(*(float *)(gen_frame + 0x30c)));
          (*(ulonglong *)(gen_frame + 0x74)) = uVar35;
          (*(float *)(gen_frame + 0x38)) = fVar34;
          (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x310)) * (float10)(*(float *)(gen_frame + 0x1b0)));
          (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x314)) * (float10)(*(float *)(gen_frame + 0x1b4)));
          uVar35 = F_0099aa20(&(*(float *)(gen_frame + 0x2c)));
          puVar23[-0xc] = (*(ulonglong *)(gen_frame + 0x64));
          puVar23[-6] = (*(ulonglong *)(gen_frame + 0x6c));
          *puVar23 = (*(ulonglong *)(gen_frame + 0x74));
        }
        puVar23[6] = uVar35;
        fVar24 = (float10)(*(float *)(gen_frame + 0x184));
        fVar34 = ((float)GEN_TOF((fVar24 * (float10)*(float *)(uVar11 + 0x90))));
        (*(float *)(gen_frame + 0x184)) = fVar34;
        fVar25 = (float10)(*(float *)(gen_frame + 0x204));
        fVar30 = ((float)GEN_TOF((fVar25 * (float10)*(float *)(uVar11 + 0x94))));
        (*(float *)(gen_frame + 0x204)) = fVar30;
        fVar26 = (float10)fVar34;
        fVar34 = (float)(fVar26 - fVar24);
        (*(float *)(gen_frame + 0x21c)) = fVar34;
        *(float *)(puVar23 + -0x11) = fVar34;
        *(float *)(puVar23 + -5) = fVar34;
        fVar27 = (float10)fVar30;
        fVar30 = (float)(fVar27 + fVar25);
        (*(float *)(gen_frame + 0x204)) = fVar30;
        *(float *)((int)puVar23 + -0x84) = fVar30;
        fVar2 = (float)(fVar26 + fVar24);
        (*(float *)(gen_frame + 0x204)) = fVar2;
        *(float *)(puVar23 + -0xb) = fVar2;
        *(float *)((int)puVar23 + -0x54) = fVar30;
        fVar8 = (float)(fVar27 - fVar25);
        (*(float *)(gen_frame + 0x204)) = fVar8;
        *(float *)((int)puVar23 + -0x24) = fVar8;
        *(float *)((int)puVar23 + 0xc) = fVar8;
        *(float *)(puVar23 + 1) = fVar2;
        if (*(char *)(uVar11 + 0xcf) == '\0') {
          *(float *)(puVar23 + -0x11) = (float)((float10)param_4[9] * (float10)fVar34);
          *(float *)((int)puVar23 + -0x84) = (float)((float10)param_4[10] * (float10)fVar30);
          *(float *)(puVar23 + -0xb) = (float)((float10)param_4[9] * (float10)fVar2);
          *(float *)((int)puVar23 + -0x54) = (float)((float10)param_4[10] * (float10)fVar30);
          *(float *)(puVar23 + -5) = (float)((float10)param_4[9] * (float10)fVar34);
          *(float *)((int)puVar23 + -0x24) = (float)((float10)param_4[10] * (float10)fVar8);
          *(float *)(puVar23 + 1) = (float)((float10)param_4[9] * (float10)fVar2);
          *(float *)((int)puVar23 + 0xc) = (float)((float10)fVar8 * (float10)param_4[10]);
        }
        *(float *)((int)puVar23 + 0x14) = (*(float *)(gen_frame + 0x19c));
        *(float *)((int)puVar23 + -0x1c) = (*(float *)(gen_frame + 0x19c));
        *(float *)((int)puVar23 + -0x4c) = (*(float *)(gen_frame + 0x19c));
        *(float *)((int)puVar23 + -0x7c) = (*(float *)(gen_frame + 0x19c));
        *(float *)(puVar23 + 3) = (*(float *)(gen_frame + 0x1e0));
        *(float *)(puVar23 + -3) = (*(float *)(gen_frame + 0x1e0));
        *(float *)(puVar23 + -9) = (*(float *)(gen_frame + 0x1e0));
        *(float *)(puVar23 + -0xf) = (*(float *)(gen_frame + 0x1e0));
        *(float *)((int)puVar23 + 0x1c) = (*(float *)(gen_frame + 0x220));
        *(float *)((int)puVar23 + -0x14) = (*(float *)(gen_frame + 0x220));
        *(float *)((int)puVar23 + -0x44) = (*(float *)(gen_frame + 0x220));
        *(float *)((int)puVar23 + -0x74) = (*(float *)(gen_frame + 0x220));
        *(float *)(puVar23 + 4) = fVar33;
        *(float *)(puVar23 + -2) = fVar33;
        *(float *)(puVar23 + -8) = fVar33;
        *(float *)(puVar23 + -0xe) = fVar33;
        *(float *)((int)puVar23 + 0x24) = fVar32;
        *(float *)((int)puVar23 + -0xc) = fVar32;
        *(float *)((int)puVar23 + -0x3c) = fVar32;
        *(float *)((int)puVar23 + -0x6c) = fVar32;
        *(float *)(puVar23 + 5) = fVar31;
        *(float *)(puVar23 + -1) = fVar31;
        *(float *)(puVar23 + -7) = fVar31;
        *(float *)(puVar23 + -0xd) = fVar31;
        uVar1 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1f8)) + 0x308);
        *(undefined4 *)(puVar23 + 2) = uVar1;
        *(undefined4 *)(puVar23 + -4) = uVar1;
        *(undefined4 *)(puVar23 + -10) = uVar1;
        *(undefined4 *)(puVar23 + -0x10) = uVar1;
        sVar7 = (short)(uint)gen_fl2bits((*(float *)(gen_frame + 0x1bc)));
        sVar17 = (short)(uint)gen_fl2bits((*(float *)(gen_frame + 0x224)));
        if ((*(ushort *)((*(char * PTR32 *)(gen_frame + 0x214)) + -0xe) & 0x8000) == 0) {
          pvVar13 = (undefined *)((*(uint *)(gen_frame + 0x180)) + (int)gen_fl2bits((*(float *)(gen_frame + 0x1bc))));
          *(short *)((int)puVar23 + -0x62) = sVar17;
          *(short *)((int)puVar23 + -0x32) = sVar17;
          sVar17 = sVar17 + (short)(*(uint *)(gen_frame + 0x18c));
          *(short *)((int)puVar23 + -100) = sVar7;
          *(short *)((int)puVar23 + -0x34) = (short)pvVar13;
          *(short *)((int)puVar23 + -4) = sVar7;
          *(short *)((int)puVar23 + -2) = sVar17;
          *(short *)((int)puVar23 + 0x2c) = (short)pvVar13;
          *(short *)((int)puVar23 + 0x2e) = sVar17;
        }
        else {
          sVar10 = (short)(*(uint *)(gen_frame + 0x180)) + sVar7;
          *(short *)((int)puVar23 + -100) = sVar10;
          *(short *)((int)puVar23 + -4) = sVar10;
          pvVar13 = (undefined *)((*(uint *)(gen_frame + 0x18c)) + (int)gen_fl2bits((*(float *)(gen_frame + 0x224))));
          *(short *)((int)puVar23 + -0x62) = sVar17;
          *(short *)((int)puVar23 + -0x34) = sVar7;
          *(short *)((int)puVar23 + -0x32) = sVar17;
          *(short *)((int)puVar23 + -2) = (short)pvVar13;
          *(short *)((int)puVar23 + 0x2c) = sVar7;
          *(short *)((int)puVar23 + 0x2e) = (short)pvVar13;
        }
      }
      else {
        pvVar13 = F_00c48350(puVar23 + -0x11,0,0xc0);
      }
      (*(char * PTR32 *)(gen_frame + 0x214)) = (*(char * PTR32 *)(gen_frame + 0x214)) + 0x50;
      puVar23 = puVar23 + 0x18;
      fVar34 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x210))) + -1);
      (*(float *)(gen_frame + 0x210)) = fVar34;
    } while (fVar34 != 0.0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x318)) ^ (uint)(uint)(gen_frame + 0x31c));
  return (uint)pvVar13;
}

/* ref: FUN_009bbe80 */
uint F_009bbe80(unsigned int gen_a0)
{
  GEN_ENTER(0x9bbe80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dee60));
  F_009a4a40(*(undefined4 *)((int)this + 0x60));
  uVar1 = F_0042c880((undefined *)((int)this + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de534));
  return (uint)uVar1;
}

/* ref: FUN_009bbeb0 */
unsigned int F_009bbeb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9bbeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x60);
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  F_00978eb0(uVar1);
  return 0;
}

/* ref: FUN_009bbef0 */
unsigned int F_009bbef0(unsigned int gen_a0)
{
  GEN_ENTER(0x9bbef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x60);
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  F_00978f00(uVar1);
  return 0;
}

/* ref: FUN_009bbf80 */
uint F_009bbf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9bbf80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = REFG(float, 0x1090998);
  iVar1 = *(int *)((int)this + 0x60);
  if (iVar1 == 0) {
    *param_3 = GEN_FLT_TO(*param_3, REFG(float, 0x1090998));
    *param_2 = uVar2;
    *param_1 = uVar2;
    uVar2 = REFG(float, 0x10dfb58);
    *param_6 = GEN_FLT_TO(*param_6, REFG(float, 0x10dfb58));
    *param_5 = uVar2;
    *param_4 = uVar2;
    return (uint)param_6;
  }
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar3 = F_00978f90(iVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar3;
}

/* ref: FUN_009bc020 */
uint F_009bc020(unsigned int gen_a0)
{
  GEN_ENTER(0x9bc020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x60);
  if (piVar1 != (int *)0x0) {
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_009bc070 */
uint F_009bc070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9bc070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((int)this + 0x50);
  uVar2 = *(undefined4 *)((int)this + 0x54);
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar3 = F_00985260(&REFG(float, 0x14a0d58),uVar1,uVar2,param_1,param_2,param_3,param_4,param_5);
  return uVar3;
}

/* ref: FUN_009bc120 */
uint F_009bc120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9bc120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint uVar1;
  
  uVar1 = F_009bbf80(*(undefined * PTR32 *)((int)this + 0x40),param_1,param_2,param_3,param_4,param_5,param_6)
  ;
  return uVar1;
}

/* ref: FUN_009bc130 */
uint F_009bc130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9bc130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  puVar6 = this;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar1 = *(undefined4 *)((int)this + 0x50);
  uVar2 = *(undefined4 *)((int)this + 0x54);
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar3 = F_009851b0(&REFG(float, 0x14a0d58),uVar1,uVar2,this);
  return uVar3;
}

/* ref: FUN_009bc190 */
uint F_009bc190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9bc190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  
  *(byte *)((int)this + 0x96) =
       *(byte *)((int)this + 0x96) ^ ((char)param_1 * '\x04' ^ *(byte *)((int)this + 0x96)) & 4;
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x40) + 8)));
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  if (iVar1 == 1) {
    piVar2 = (int *)F_009a4e20(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54)
                                 ,(uint)(*(byte *)((int)this + 0x96) >> 2 & 1));
  }
  return (uint)piVar2;
}

/* ref: FUN_009bc1e0 */
uint F_009bc1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9bc1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  
  *(byte *)((int)this + 0x96) =
       *(byte *)((int)this + 0x96) ^ ((char)param_1 * '\b' ^ *(byte *)((int)this + 0x96)) & 8;
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x40) + 8)));
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  if (iVar1 == 1) {
    piVar2 = (int *)F_009a4e90(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54)
                                 ,(uint)(*(byte *)((int)this + 0x96) >> 3 & 1));
  }
  return (uint)piVar2;
}

/* ref: FUN_009bc2a0 */
uint F_009bc2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9bc2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x40) + 8)));
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  if (iVar1 == 1) {
    F_009a4cc0(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54));
  }
  *(byte *)((int)this + 0x96) = *(byte *)((int)this + 0x96) & 0xfe;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  return 0;
}

/* ref: FUN_009bc2e0 */
uint F_009bc2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9bc2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_009a4da0(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54));
  if ((bVar1 == 0) && ((*(byte *)((int)this + 0x96) & 1) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_009bc310 */
uint F_009bc310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9bc310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  
  *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) | 1 << ((byte)param_1 & 0x1f);
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x40) + 8)));
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  if (iVar1 == 1) {
    this = (undefined *)F_009a4f00(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54),
                                0,param_1);
  }
  return (uint)this;
}

/* ref: FUN_009bc350 */
uint F_009bc350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9bc350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  
  *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) | 1 << ((byte)param_2 & 0x1f);
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x40) + 8)));
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  if (iVar1 == 1) {
    this = (undefined *)F_009a4f00(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54),
                                param_1,param_2);
  }
  return (uint)this;
}

/* ref: FUN_009bc3a0 */
uint F_009bc3a0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x9bc3a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  int iVar1;
  int * piVar2;
  
  *(float *)(param_1 + 0x80) = param_2;
  *(float *)(param_1 + 0x84) = param_3;
  *(float *)(param_1 + 0x88) = param_4;
  *(float *)(param_1 + 0x8c) = param_5;
  piVar2 = ((int *)GEN_TOP((*(int *)(param_1 + 0x40) + 8)));
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  if (iVar1 == 1) {
    piVar2 = (int *)F_009a4f70(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                                 param_2,param_3,param_4,param_5);
  }
  return (uint)piVar2;
}

/* ref: FUN_009bc420 */
uint F_009bc420(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9bc420u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  int * piVar2;
  
  *(float *)(param_1 + 0x60) = param_2;
  piVar2 = ((int *)GEN_TOP((*(int *)(param_1 + 0x40) + 8)));
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  if (iVar1 == 1) {
    piVar2 = (int *)F_009a5020(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                                 param_2);
  }
  return (uint)piVar2;
}

/* ref: FUN_009bc460 */
uint F_009bc460(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9bc460u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  int * piVar2;
  
  *(float *)(param_1 + 100) = param_2;
  piVar2 = ((int *)GEN_TOP((*(int *)(param_1 + 0x40) + 8)));
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  if (iVar1 == 1) {
    piVar2 = (int *)F_009a50b0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                                 param_2);
  }
  return (uint)piVar2;
}

/* ref: FUN_009bc4a0 */
unsigned int F_009bc4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9bc4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar2 = *(int *)((int)this + 0x174);
  if (iVar2 != 0) {
    piVar3 = ((int *)GEN_TOP((*(int *)(iVar2 + 0x40) + 8)));
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3;
    UNLOCK();
    if (iVar1 == 1) {
      F_009a4cc0(*(undefined4 *)(iVar2 + 0x50),*(undefined4 *)(iVar2 + 0x54));
    }
    *(byte *)(iVar2 + 0x96) = *(byte *)(iVar2 + 0x96) & 0xfe;
    *(undefined4 *)(iVar2 + 0x50) = 0;
    *(undefined4 *)(iVar2 + 0x54) = 0;
    *(undefined4 *)(iVar2 + 0x90) = 0;
  }
  return 0;
}

/* ref: FUN_009bc4f0 */
byte F_009bc4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9bc4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)((int)this + 0x174);
  if (iVar1 == 0) {
    return 0;
  }
  bVar2 = F_009a4da0(*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x54));
  if ((bVar2 == 0) && ((*(byte *)(iVar1 + 0x96) & 1) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_009bc530 */
uint F_009bc530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9bc530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = *(uint *)((int)this + 0x174);
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x90) = *(uint *)(uVar2 + 0x90) | 1 << ((byte)param_1 & 0x1f);
    piVar3 = ((int *)GEN_TOP((*(int *)(uVar2 + 0x40) + 8)));
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3;
    UNLOCK();
    if (iVar1 == 1) {
      uVar2 = F_009a4f00(*(undefined4 *)(uVar2 + 0x50),*(undefined4 *)(uVar2 + 0x54),0,param_1);
    }
  }
  return uVar2;
}

/* ref: FUN_009bc580 */
uint F_009bc580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9bc580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = *(uint *)((int)this + 0x174);
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x90) = *(uint *)(uVar2 + 0x90) | 1 << ((byte)param_2 & 0x1f);
    piVar3 = ((int *)GEN_TOP((*(int *)(uVar2 + 0x40) + 8)));
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3;
    UNLOCK();
    if (iVar1 == 1) {
      uVar2 = F_009a4f00(*(undefined4 *)(uVar2 + 0x50),*(undefined4 *)(uVar2 + 0x54),param_1,
                           param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_009bc5d0 */
uint F_009bc5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9bc5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = *(uint *)((int)this + 0x174);
  if (uVar2 != 0) {
    *(byte *)(uVar2 + 0x96) =
         *(byte *)(uVar2 + 0x96) ^ ((char)param_1 * '\x04' ^ *(byte *)(uVar2 + 0x96)) & 4;
    piVar3 = ((int *)GEN_TOP((*(int *)(uVar2 + 0x40) + 8)));
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3;
    UNLOCK();
    if (iVar1 == 1) {
      uVar2 = F_009a4e20(*(undefined4 *)(uVar2 + 0x50),*(undefined4 *)(uVar2 + 0x54),
                           (uint)(*(byte *)(uVar2 + 0x96) >> 2 & 1));
    }
  }
  return uVar2;
}

/* ref: FUN_009bc630 */
uint F_009bc630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9bc630u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int * piVar8;
  float10 fVar9;
  
  uVar7 = *(uint *)(param_1 + 0x174);
  if (uVar7 != 0) {
    bVar4 = *(byte *)param_2;
    bVar5 = *(byte *)(param_2 + 1);
    fVar9 = (float10)*(double *)&REFG(undefined, 0x1088100);
    bVar6 = *(byte *)(param_2 + 2);
    *(undefined4 *)(uVar7 + 0x8c) = REFG(float, 0x1087f04);
    piVar8 = ((int *)GEN_TOP((*(int *)(uVar7 + 0x40) + 8)));
    fVar2 = (float)((float10)bVar5 / fVar9);
    fVar3 = (float)((float10)bVar6 / fVar9);
    *(float *)(uVar7 + 0x80) = (float)((float10)bVar4 / fVar9);
    *(float *)(uVar7 + 0x84) = fVar2;
    *(float *)(uVar7 + 0x88) = fVar3;
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8;
    UNLOCK();
    if (iVar1 == 1) {
      uVar7 = F_009a4f70(*(undefined4 *)(uVar7 + 0x50),*(undefined4 *)(uVar7 + 0x54),
                           (float)((float10)bVar4 / fVar9),fVar2,fVar3,(float)(float10)1);
      return uVar7;
    }
  }
  return uVar7;
}

/* ref: FUN_009bc6f0 */
unsigned int F_009bc6f0(float gen_a0)
{
  GEN_ENTER(0x9bc6f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  if (REFG(char, 0x14a06d5) != '\0') {
    *(float *)&REFG(undefined, 0x14a071c) =
         (float)((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1088070) +
                (float10)*(float *)&REFG(undefined, 0x14a071c));
    REFG(float, 0x14a0718) = ((float)GEN_TOF(((float10)(int)((float10)*(float *)&REFG(undefined, 0x14a071c) * (float10)REFG(double, 0x10944b8))
                          / (float10)REFG(double, 0x10944b8))));
    *(float *)&REFG(undefined, 0x14a071c) = (float)((float10)*(float *)&REFG(undefined, 0x14a071c) - (float10)REFG(float, 0x14a0718));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x7c))))(REFG(int * PTR32, 0x14a0ea8));
  }
  return 0;
}

