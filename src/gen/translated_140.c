#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00bcde20 */
unsigned int F_00bcde20(float gen_a0)
{
  GEN_ENTER(0xbcde20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bcde40 */
byte F_00bcde40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcde40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_00b5fe80(*param_2 + (int)param_2);
  return bVar1;
}

/* ref: FUN_00bcde60 */
byte F_00bcde60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcde60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_00b5fea0(*(undefined4 *)(param_1 + 8),*param_2 + (int)param_2);
  return bVar1;
}

/* ref: FUN_00bcde80 */
byte F_00bcde80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcde80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_00b5fec0(*param_2 + (int)param_2);
  return bVar1;
}

/* ref: FUN_00bcdea0 */
uint F_00bcdea0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcdea0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  if (*param_1 == 0x424c4d54) {
    piVar1 = param_1 + 3;
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      do {
        iVar2 = iVar2 + -1;
        if (*piVar1 == *(int *)REFG(undefined * PTR32, 0x1343188)) {
          return (uint)(piVar1 + 2);
        }
        piVar1 = (int *)((int)piVar1 + piVar1[1]);
      } while (iVar2 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00bcdee0 */
byte F_00bcdee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdee0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x20))) = param_2;
  return 1;
}

/* ref: FUN_00bcdf00 */
uint F_00bcdf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdf00u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  if (*param_1 != 0x424c4d54) {
    return 0xffffffff;
  }
  iVar3 = param_1[2];
  piVar2 = param_1 + 3;
  while( true ) {
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    iVar3 = iVar3 + -1;
    if ((*piVar2 == 0x30313043) && (uVar1 = F_00bccde0(param_2,piVar2 + 2,0,0,7), uVar1 != 0))
    break;
    piVar2 = (int *)((int)piVar2 + piVar2[1]);
  }
  return 1;
}

/* ref: FUN_00bcdf15 */
uint F_00bcdf15(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbcdf15u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ebp = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_eax + 8);
  piVar2 = (int *)(in_eax + 0xc);
  if (iVar3 != 0) {
    this = *(undefined * PTR32 *)(in_ebp + 0xc);
    do {
      iVar3 = iVar3 + -1;
      if (*piVar2 == 0x30313043) {
        uVar1 = F_00bccde0(this,piVar2 + 2,0,0,7);
        if (uVar1 != 0) {
          return 1;
        }
      }
      piVar2 = (int *)((int)piVar2 + piVar2[1]);
    } while (iVar3 != 0);
  }
  return 0xffffffff;
}

/* ref: FUN_00bcdf60 */
uint F_00bcdf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0xa48);
  uVar2 = param_1 + 0xfU & 0xfffffff0;
  *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) - uVar2;
  *(uint *)((int)this + 0xa48) = uVar1 + uVar2;
  return uVar1;
}

/* ref: FUN_00bcdf90 */
byte F_00bcdf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdf90u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  if (*param_1 != 0x42545543) {
    return 0;
  }
  piVar4 = param_1 + 3;
  iVar3 = param_1[2];
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    if (*piVar4 == 0x4c415443) {
      iVar1 = piVar4[2];
      F_00b60910(param_2,*(undefined4 *)((int)piVar4 + iVar1 + 0x14));
      iVar5 = 0;
      if (0 < *(int *)((int)piVar4 + iVar1 + 0x14)) {
        do {
          iVar2 = *(int *)((int)piVar4 + iVar1 + 0x10) + iVar1 + 8;
          F_00b5fd40(param_2,(int)piVar4 + *(int *)((int)piVar4 + iVar5 * 4 + iVar2) + iVar2,iVar5
                      );
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((int)piVar4 + iVar1 + 0x14));
      }
    }
    piVar4 = (int *)((int)piVar4 + piVar4[1]);
  }
  return 1;
}

/* ref: FUN_00bce010 */
byte F_00bce010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbce010u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  this = *(undefined * PTR32 *)(param_1 + 8);
  iVar2 = 0;
  if ((this != (undefined *)0x0) && (local_8 = *(int *)(param_1 + 0x34), 0 < param_2[1])) {
    param_1 = 0;
    do {
      iVar3 = *param_2 + param_1 + (int)param_2;
      uVar1 = F_00b60e70(this,iVar3,iVar2);
      if (*(int *)(iVar3 + 4) != 3) {
        *(undefined4 *)(uVar1 + 0x28) = *(undefined4 *)(local_8 + 0x10);
        local_8 = *(int *)(local_8 + 0xc);
      }
      param_1 = param_1 + 0x18;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2[1]);
  }
  return 1;
}

/* ref: FUN_00bce080 */
uint F_00bce080(unsigned int gen_a0)
{
  GEN_ENTER(0xbce080u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  if (*param_1 == 0x424c4d54) {
    piVar1 = param_1 + 3;
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      do {
        iVar2 = iVar2 + -1;
        if (*piVar1 == *(int *)REFG(undefined * PTR32, 0x134318c)) {
          return (int)piVar1 + piVar1[8] + 8;
        }
        piVar1 = (int *)((int)piVar1 + piVar1[1]);
      } while (iVar2 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00bce0c0 */
byte F_00bce0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbce0c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 100))))(*(int * PTR32 *)(param_1 + 0xc));
  *(int *)(uVar1 + 0xd8) = *param_2 + (int)param_2;
  return 1;
}

/* ref: FUN_00bce0f0 */
uint F_00bce0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbce0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x40);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (**(ushort * PTR32 *)(iVar1 + 0x10) == param_1) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  return 0x60;
}

/* ref: FUN_00bce120 */
byte F_00bce120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbce120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  ushort * puVar2;
  undefined * this_00;
  
  iVar1 = *(int *)((int)this + 0x40);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = *(ushort * PTR32 *)(iVar1 + 0x10);
    if (*puVar2 == param_2) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  iVar1 = *(int *)((int)this + 0xa48);
  *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) + -0x60;
  *(int *)((int)this + 0xa48) = iVar1 + 0x60;
  this_00 = (undefined *)F_00bd2d10(param_1,iVar1);
  F_00c21f80(this_00,puVar2 + 2,0,0);
  return 1;
}

/* ref: FUN_00bce180 */
uint F_00bce180(unsigned int gen_a0)
{
  GEN_ENTER(0xbce180u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  char * pcVar2;
  int iVar3;
  
  if (*param_1 == 0x424c4d54) {
    piVar1 = param_1 + 3;
    iVar3 = param_1[2];
    if (iVar3 != 0) {
      while (iVar3 = iVar3 + -1, *piVar1 != 0x50504d54) {
        piVar1 = (int *)((int)piVar1 + piVar1[1]);
        if (iVar3 == 0) {
          return 0;
        }
      }
      pcVar2 = ((char *)GEN_TOP((piVar1[2] + (int)(piVar1 + 2))));
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        return (uint)pcVar2;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bce230 */
unsigned int F_00bce230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbce230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = param_1;
    do {
      uVar1 = *(uint *)(uVar2 + 0xc);
      if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
        F_00406ad0(uVar2);
      }
      uVar2 = uVar1;
    } while (uVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00bce270 */
byte F_00bce270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbce270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  byte local_5;
  
  local_5 = 1;
  if (*param_1 != 0x42545543) {
    return 0;
  }
  *(int *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x34) = 0;
  iVar6 = param_1[2];
  param_2 = 0;
  piVar9 = param_1 + 3;
  while (iVar6 != 0) {
    iVar6 = iVar6 + -1;
    if (*piVar9 == 0x4c545443) {
      piVar8 = (int *)((int)piVar9 + piVar9[2] + 8);
      if (*piVar8 != 0x424c4d54) {
        return 0;
      }
      iVar7 = piVar8[2];
      piVar2 = piVar8 + 3;
      while (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        if (*piVar2 == 0x48444d54) {
          piVar2 = (int *)F_00406b90(0x40,0,0);
          if (piVar2 == (int *)0x0) {
            piVar2 = (int *)0x0;
          }
          else {
            *piVar2 = 0;
            piVar2[1] = 0;
            piVar2[2] = 0;
            piVar2[3] = 0;
            piVar2[4] = 0;
            piVar2[5] = 0;
            piVar2[6] = 0;
            piVar2[7] = 0;
            piVar2[8] = 0;
            piVar2[9] = 0;
            piVar2[10] = 0;
            *(undefined2 *)(piVar2 + 0xb) = 1;
            *(undefined1 *)((int)piVar2 + 0x2e) = 0;
          }
          *piVar2 = param_2;
          param_2 = param_2 + 1;
          piVar2[4] = (int)piVar8;
          piVar8 = piVar2 + 2;
          iVar7 = *(int *)((int)this + 0x34);
          if (*(int *)((int)this + 0x34) == 0) {
            *piVar8 = 0;
            piVar2[3] = 0;
            *(int * PTR32 *)((int)this + 0x34) = piVar2;
          }
          else {
            do {
              iVar3 = iVar7;
              iVar7 = *(int *)(iVar3 + 0xc);
            } while (*(int *)(iVar3 + 0xc) != 0);
            piVar4 = piVar2;
            if (piVar8 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            *(int * PTR32 *)(iVar3 + 0xc) = piVar4;
            *piVar8 = iVar3;
            piVar2[3] = 0;
          }
          break;
        }
        piVar2 = (int *)((int)piVar2 + piVar2[1]);
      }
    }
    piVar9 = (int *)((int)piVar9 + piVar9[1]);
  }
  iVar6 = param_1[2];
  piVar9 = param_1 + 3;
  do {
    if (iVar6 == 0) {
      iVar6 = *(int *)((int)this + 0x34);
      while (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 0xc);
        F_00406ad0(iVar6);
        iVar6 = iVar7;
      }
      return local_5;
    }
    iVar6 = iVar6 + -1;
    uVar5 = 0;
    do {
      if (*piVar9 == *((int *)GEN_TOP((&REFG(undefined * PTR32, 0x1343060))[uVar5 * 2]))) {
        bVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x1343064))[uVar5 * 2])))(this,piVar9 + 2,uVar5);
        if (bVar1 == 0) {
          local_5 = 0;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 5);
    piVar9 = (int *)((int)piVar9 + piVar9[1]);
  } while( true );
}

/* ref: FUN_00bce410 */
unsigned int F_00bce410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbce410u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * this;
  undefined * this_00;
  code * pcVar3;
  int iVar4;
  
  this = *((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1371298) + 0x38)));
  iVar4 = *param_2 + (int)param_2;
  this_00 = *(undefined * PTR32 *)(param_1 + 8);
  F_006906f0(this);
  iVar1 = *(int *)(iVar4 + 0x14);
  iVar2 = *(int *)(iVar4 + 0x18);
  this[0xc] = *(int *)(iVar4 + 0x10);
  this[0xd] = iVar1;
  this[0xe] = iVar2;
  pcVar3 = *(gen_code32 *)(*this + 0x10);
  this[9] = this[9] | 2;
  (*pcVar3)(this);
  F_0069c300(REFG(void * PTR32, 0x1371298),1);
  *(undefined4 *)(iVar4 + 8) = 1;
  F_00b60a70(this_00,iVar4);
  return 0;
}

/* ref: FUN_00bce490 */
byte F_00bce490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbce490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined3 extraout_var = 0;
  int * piVar6;
  uint uVar7;
  int local_c;
  byte local_5;
  
  local_5 = 1;
  if (*param_1 != 0x424c4d54) {
    return 0;
  }
  *(int * PTR32 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0xa48) = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)((int)this + 0x34);
  do {
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = 0;
  } while (iVar4 != 0);
  iVar4 = param_1[2];
  piVar6 = param_1 + 3;
  do {
    if (iVar4 == 0) {
LAB_00bce6ec: ;
      *(undefined4 *)((int)this + 0xa48) = 0;
      if (local_5 != 0) {
        piVar6 = param_1 + 3;
        local_c = param_1[2];
        param_3 = 0;
        if (local_c != 0) {
          do {
            local_c = local_c + -1;
            if (*piVar6 == *(int *)REFG(undefined * PTR32, 0x1343094)) {
              bVar3 = ((code *)REFG(gen_code32, 0x01343098))(this,piVar6 + 2);
              param_3 = param_3 + (int)CONCAT31(extraout_var,bVar3);
            }
            piVar6 = (int *)((int)piVar6 + piVar6[1]);
          } while (local_c != 0);
          if (param_3 != 0) {
            uVar7 = F_00bc1ec0(param_2,param_3);
            *(uint *)((int)this + 0xa48) = uVar7;
            if (uVar7 == 0) {
              local_5 = 0;
            }
          }
        }
        *(int *)((int)this + 0xa4c) = param_3;
        if (local_5 != 0) {
          piVar6 = param_1 + 3;
          iVar4 = param_1[2];
          while (iVar4 != 0) {
            iVar4 = iVar4 + -1;
            uVar7 = 0;
            do {
              if (*piVar6 == *((int *)GEN_TOP((&REFG(undefined * PTR32, 0x134309c))[uVar7 * 2]))) {
                bVar3 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13430a0))[uVar7 * 2])))(this,piVar6 + 2);
                if (bVar3 == 0) {
                  local_5 = 0;
                }
                break;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < 3);
            piVar6 = (int *)((int)piVar6 + piVar6[1]);
          }
        }
      }
      uVar7 = *(uint *)((int)this + 0x40);
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *(uint *)(uVar2 + 0xc);
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      uVar7 = *(uint *)((int)this + 0x44);
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *(uint *)(uVar2 + 0xc);
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      uVar7 = *(uint *)((int)this + 0x3c);
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *(uint *)(uVar2 + 0xc);
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      uVar7 = *(uint *)((int)this + 0x38);
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *(uint *)(uVar2 + 0xc);
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      *(undefined4 *)((int)this + 0x38) = 0;
      *(undefined4 *)((int)this + 0x3c) = 0;
      *(undefined4 *)((int)this + 0x44) = 0;
      *(undefined4 *)((int)this + 0x40) = 0;
      return local_5;
    }
    iVar4 = iVar4 + -1;
    uVar7 = 0;
    do {
      if (*piVar6 == *((int *)GEN_TOP((&REFG(undefined * PTR32, 0x1343088))[uVar7]))) {
        iVar1 = *(int *)((int)this + 0x20);
        if (iVar1 < 0x28) {
          puVar5 = (undefined4 *)(iVar1 * 0x40 + 0x48 + (int)this);
          *(int *)((int)this + 0x20) = iVar1 + 1;
        }
        else {
          puVar5 = (undefined4 *)F_00406b90(0x40,0,0);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
            *(undefined2 *)(puVar5 + 0xb) = 1;
            *(undefined1 *)((int)puVar5 + 0x2e) = 0;
          }
        }
        if (puVar5 != (undefined4 *)0x0) {
          puVar5[4] = piVar6 + 2;
          puVar5[7] = piVar6[1] + -8;
          if (uVar7 == 0) {
            puVar5[2] = 0;
            puVar5[3] = *(undefined4 *)((int)this + 0x38);
            if (*(int *)((int)this + 0x38) != 0) {
              *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 8))) = puVar5;
            }
            *(undefined4 * PTR32 *)((int)this + 0x38) = puVar5;
          }
          else if (uVar7 == 1) {
            puVar5[2] = 0;
            puVar5[3] = *(undefined4 *)((int)this + 0x3c);
            if (*(int *)((int)this + 0x3c) != 0) {
              *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x3c) + 8))) = puVar5;
            }
            *(undefined4 * PTR32 *)((int)this + 0x3c) = puVar5;
          }
          else if (uVar7 == 2) {
            puVar5[2] = 0;
            puVar5[3] = *(undefined4 *)((int)this + 0x40);
            if (*(int *)((int)this + 0x40) != 0) {
              *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x40) + 8))) = puVar5;
            }
            *(undefined4 * PTR32 *)((int)this + 0x40) = puVar5;
          }
          goto LAB_00bce6cb;
        }
        local_5 = 0;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 3);
    uVar7 = 0;
    do {
      if (*piVar6 == **((int * PTR32 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x134309c) + uVar7)))) goto LAB_00bce6cb;
      uVar7 = uVar7 + 8;
    } while (uVar7 < 0x18);
    uVar7 = F_00b5c6a0(piVar6);
    if (-1 < (int)uVar7) {
      iVar1 = *(int *)((int)this + 0x20);
      if (iVar1 < 0x28) {
        puVar5 = (undefined4 *)(iVar1 * 0x40 + 0x48 + (int)this);
        *(int *)((int)this + 0x20) = iVar1 + 1;
      }
      else {
        puVar5 = (undefined4 *)F_00406b90(0x40,0,0);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
          puVar5[10] = 0;
          *(undefined2 *)(puVar5 + 0xb) = 1;
          *(undefined1 *)((int)puVar5 + 0x2e) = 0;
        }
      }
      if (puVar5 == (undefined4 *)0x0) {
        local_5 = 0;
        goto LAB_00bce6ec;
      }
      puVar5[4] = piVar6 + 2;
      puVar5[7] = piVar6[1] + -8;
      puVar5[9] = uVar7;
      puVar5[2] = 0;
      puVar5[3] = *(undefined4 *)((int)this + 0x44);
      if (*(int *)((int)this + 0x44) != 0) {
        *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x44) + 8))) = puVar5;
      }
      *(undefined4 * PTR32 *)((int)this + 0x44) = puVar5;
      if (((char)param_3 != '\0') && (uVar7 = F_00b5c750(uVar7), uVar7 == 3)) {
        uVar7 = ((code *)*(gen_code32 *)(*param_2 + 100))(param_2);
        *(undefined1 *)(uVar7 + 0xf1) = 1;
      }
    }
LAB_00bce6cb: ;
    if (local_5 == 0) goto LAB_00bce6ec;
    piVar6 = (int *)((int)piVar6 + piVar6[1]);
  } while( true );
}

/* ref: FUN_00bce8b0 */
uint F_00bce8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbce8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  ushort * puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)((int)this + 0x44);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = *(ushort * PTR32 *)(iVar1 + 0x10);
    if (*puVar2 == param_1) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  uVar4 = F_00b5c7b0(*(undefined4 *)(iVar1 + 0x24));
  *(uint *)(iVar1 + 0x28) = uVar4;
  bVar3 = F_00b5c790(*(undefined4 *)(iVar1 + 0x24));
  if (bVar3 != 0) {
    uVar5 = F_00bce0f0(this,(uint)puVar2[6]);
    uVar4 = uVar4 + uVar5;
  }
  return uVar4;
}

/* ref: FUN_00bce920 */
byte F_00bce920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xbce920u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  ushort * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)((int)param_1 + 0x44);
  if (iVar4 != 0) {
    while (puVar1 = *(ushort * PTR32 *)(iVar4 + 0x10), *puVar1 != param_3) {
      iVar4 = *(int *)(iVar4 + 0xc);
      if (iVar4 == 0) {
        return 1;
      }
    }
    uVar2 = *(undefined4 *)(iVar4 + 0x24);
    iVar3 = *(int *)((int)param_1 + 0xa48);
    uVar5 = *(int *)(iVar4 + 0x28) + 0xfU & 0xfffffff0;
    *(int *)((int)param_1 + 0xa4c) = *(int *)((int)param_1 + 0xa4c) - uVar5;
    *(uint *)((int)param_1 + 0xa48) = iVar3 + uVar5;
    uVar5 = F_00b5ce50(REFG(undefined4, 0x14c4e90),iVar3,puVar1,uVar2,param_2,param_4);
    if (uVar5 != 0) {
      F_00c22910(param_2,uVar5);
      iVar4 = *(int *)(uVar5 + 0x2c);
      if (iVar4 == 0) {
        *(int *)((int)param_1 + 0x28) = *(int *)((int)param_1 + 0x28) + 1;
      }
      else if (iVar4 == 6) {
        *(int *)((int)param_1 + 0x2c) = *(int *)((int)param_1 + 0x2c) + 1;
      }
      else if (iVar4 == 7) {
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
      }
      else {
        *(int *)((int)param_1 + 0x30) = *(int *)((int)param_1 + 0x30) + 1;
      }
      if ((*(byte *)(uVar5 + 0x7c) >> 3 & 1) != 0) {
        F_00bce120(param_1,uVar5,(uint)puVar1[6]);
      }
    }
  }
  return 1;
}

/* ref: FUN_00bce9f0 */
uint F_00bce9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbce9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  ushort * puVar2;
  short * psVar3;
  byte bVar4;
  uint uVar5;
  int local_10;
  uint local_8;
  
  iVar1 = *(int *)((int)this + 0x3c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = *(ushort * PTR32 *)(iVar1 + 0x10);
    if (*puVar2 == param_1) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  local_8 = 0x30;
  local_10 = 0;
  if (0 < *(int *)(puVar2 + 4)) {
    do {
      for (iVar1 = *(int *)((int)this + 0x44); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
        psVar3 = *(short * PTR32 *)(iVar1 + 0x10);
        if (*psVar3 == *((short *)GEN_TOP(((int)puVar2 + *(int *)(puVar2 + 2) + local_10 * 2)))) {
          uVar5 = F_00b5c7b0(*(undefined4 *)(iVar1 + 0x24));
          *(uint *)(iVar1 + 0x28) = uVar5;
          bVar4 = F_00b5c790(*(undefined4 *)(iVar1 + 0x24));
          if (bVar4 == 0) goto LAB_00bcea63;
          iVar1 = *(int *)((int)this + 0x40);
          goto joined_r0x00bceaaf;
        }
      }
      uVar5 = 0;
LAB_00bcea63: ;
      local_8 = local_8 + uVar5;
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(puVar2 + 4));
  }
  return local_8;
joined_r0x00bceaaf: ;
  if (iVar1 == 0) goto LAB_00bcea63;
  if (**(short * PTR32 *)(iVar1 + 0x10) == psVar3[6]) {
    uVar5 = uVar5 + 0x60;
    goto LAB_00bcea63;
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  goto joined_r0x00bceaaf;
}

/* ref: FUN_00bceae0 */
byte F_00bceae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xbceae0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  ushort * puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte local_5;
  
  iVar4 = *(int *)(param_1 + 0x3c);
  local_5 = 1;
  while( true ) {
    if (iVar4 == 0) {
      return 0;
    }
    puVar1 = *(ushort * PTR32 *)(iVar4 + 0x10);
    if (*puVar1 == param_3) break;
    iVar4 = *(int *)(iVar4 + 0xc);
  }
  iVar4 = *(int *)(param_1 + 0xa48);
  *(int *)(param_1 + 0xa4c) = *(int *)(param_1 + 0xa4c) + -0x30;
  *(int *)(param_1 + 0xa48) = iVar4 + 0x30;
  uVar3 = F_00bec4e0(param_2,iVar4,puVar1);
  iVar4 = 0;
  if (0 < *(int *)(puVar1 + 4)) {
    do {
      bVar2 = F_00bce920(param_1,uVar3,
                           (uint)*((ushort *)GEN_TOP((*(int *)(puVar1 + 2) + iVar4 * 2 + (int)puVar1))),param_4
                          );
      if (bVar2 == 0) {
        local_5 = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(puVar1 + 4));
  }
  return local_5;
}

/* ref: FUN_00bceb80 */
uint F_00bceb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbceb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  ushort * puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = *(int *)((int)this + 0x38);
  uVar5 = 0;
  while( true ) {
    if (iVar4 == 0) {
      return 0;
    }
    puVar2 = *(ushort * PTR32 *)(iVar4 + 0x10);
    if (*puVar2 == param_1) break;
    iVar4 = *(int *)(iVar4 + 0xc);
  }
  uVar1 = puVar2[1];
  param_1 = 1;
  if ((((uVar1 != 0) && (uVar1 != 1)) && (uVar1 < 100)) &&
     (param_1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x20))))(*(int * PTR32 *)((int)this + 0xc),puVar2)
     , param_1 == 0)) {
    return 0;
  }
  iVar4 = *(int *)(puVar2 + 8);
  do {
    uVar5 = uVar5 + 0x40;
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        uVar3 = F_00bce9f0(this,(uint)*((ushort *)GEN_TOP((*(int *)(puVar2 + 6) + iVar6 * 2 + (int)puVar2))))
        ;
        uVar5 = uVar5 + uVar3;
        iVar4 = *(int *)(puVar2 + 8);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  return uVar5;
}

/* ref: FUN_00bcec20 */
byte F_00bcec20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcec20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  int iVar2;
  int * piVar3;
  ushort * puVar4;
  byte bVar5;
  uint uVar6;
  float local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  iVar2 = *(int *)((int)this + 0x38);
  piVar3 = *(int * PTR32 *)((int)this + 0xc);
  local_14 = 0.0;
  local_5 = 1;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    puVar4 = *(ushort * PTR32 *)(iVar2 + 0x10);
    if (*puVar4 == param_1) break;
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  uVar1 = puVar4[1];
  local_10 = 1;
  param_1 = 0;
  if (((uVar1 == 0) || (uVar1 == 1)) || (99 < uVar1)) {
    iVar2 = *(int *)((int)this + 0xa48);
    *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) + -0x40;
    *(int *)((int)this + 0xa48) = iVar2 + 0x40;
    uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3,iVar2,puVar4,0);
  }
  else {
    local_10 = ((code *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3,puVar4);
    if (local_10 == 0) {
      return 1;
    }
    iVar2 = *(int *)((int)this + 0xa48);
    *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) + -0x40;
    *(int *)((int)this + 0xa48) = iVar2 + 0x40;
    uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3,iVar2,puVar4,0);
    param_1 = 1;
  }
  if ((uVar6 != 0) && (*(int *)(uVar6 + 0x20) != 0)) {
    while( true ) {
      local_c = 0;
      if (0 < *(int *)(puVar4 + 8)) {
        do {
          bVar5 = F_00bceae0(this,uVar6,
                               (uint)*((ushort *)GEN_TOP((*(int *)(puVar4 + 6) + local_c * 2 + (int)puVar4))),
                               local_14);
          if (bVar5 == 0) {
            local_5 = 0;
          }
          local_c = local_c + 1;
        } while (local_c < *(int *)(puVar4 + 8));
      }
      local_10 = local_10 - 1;
      if (local_10 == 0) break;
      iVar2 = *(int *)((int)this + 0xa48);
      *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) + -0x40;
      *(int *)((int)this + 0xa48) = iVar2 + 0x40;
      uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3,iVar2,puVar4,param_1);
      param_1 = param_1 + 1;
      if (uVar6 == 0) {
        return local_5;
      }
      local_14 = (float)((float10)puVar4[2] + (float10)local_14);
    }
    return local_5;
  }
  return 1;
}

/* ref: FUN_00bceda0 */
uint F_00bceda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbceda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  short * psVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  uint local_c;
  uint local_8;
  
  uVar3 = 0;
  local_c = 0;
  local_10 = 0;
  if (0 < param_2[1]) {
    do {
      iVar4 = *(int *)((int)param_1 + 0x38);
      iVar5 = 0;
      if (iVar4 != 0) {
LAB_00bcede0: ;
        psVar2 = *(short * PTR32 *)(iVar4 + 0x10);
        if (*psVar2 != *(short *)(*param_2 + local_10 * 2 + (int)param_2)) goto code_r0x00bcedea;
        uVar1 = psVar2[1];
        local_8 = 1;
        if ((((uVar1 == 0) || (uVar1 == 1)) || (99 < uVar1)) ||
           (local_8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0xc) + 0x20))))
                                (*(int * PTR32 *)((int)param_1 + 0xc),psVar2), local_8 != 0)) {
          iVar4 = *(int *)(psVar2 + 8);
          do {
            iVar5 = iVar5 + 0x40;
            iVar6 = 0;
            if (0 < iVar4) {
              do {
                uVar3 = F_00bce9f0(param_1,(uint)*((ushort *)GEN_TOP((*(int *)(psVar2 + 6) + iVar6 * 2 + (int)psVar2)))
                                    );
                iVar5 = iVar5 + uVar3;
                iVar4 = *(int *)(psVar2 + 8);
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar4);
            }
            local_8 = local_8 - 1;
          } while (local_8 != 0);
          goto LAB_00bcedf3;
        }
      }
LAB_00bcedf1: ;
      iVar5 = 0;
LAB_00bcedf3: ;
      uVar3 = local_c + iVar5;
      local_10 = local_10 + 1;
      local_c = uVar3;
    } while (local_10 < param_2[1]);
  }
  return uVar3;
code_r0x00bcedea: ;
  iVar4 = *(int *)(iVar4 + 0xc);
  if (iVar4 == 0) goto LAB_00bcedf1;
  goto LAB_00bcede0;
}

/* ref: FUN_00bcee80 */
byte F_00bcee80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcee80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  int * piVar2;
  int iVar3;
  short * psVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int local_1c;
  float local_18;
  uint local_14;
  int local_10;
  int local_c;
  byte local_6;
  
  local_6 = 1;
  local_1c = 0;
  if (param_2[1] < 1) {
    return 1;
  }
LAB_00bceea2: ;
  piVar2 = *(int * PTR32 *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x38);
  local_18 = 0.0;
  bVar5 = true;
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
    psVar4 = *(short * PTR32 *)(iVar3 + 0x10);
    if (*psVar4 == *(short *)(*param_2 + local_1c * 2 + (int)param_2)) {
      uVar1 = psVar4[1];
      local_14 = 1;
      local_c = 0;
      if (((uVar1 == 0) || (uVar1 == 1)) || (99 < uVar1)) {
        iVar3 = *(int *)(param_1 + 0xa48);
        *(int *)(param_1 + 0xa4c) = *(int *)(param_1 + 0xa4c) + -0x40;
        *(int *)(param_1 + 0xa48) = iVar3 + 0x40;
        uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,iVar3,psVar4,0);
      }
      else {
        local_14 = ((code *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2,psVar4);
        if (local_14 == 0) goto LAB_00bcf016;
        iVar3 = *(int *)(param_1 + 0xa48);
        *(int *)(param_1 + 0xa4c) = *(int *)(param_1 + 0xa4c) + -0x40;
        *(int *)(param_1 + 0xa48) = iVar3 + 0x40;
        uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,iVar3,psVar4,0);
        local_c = 1;
      }
      if ((uVar7 == 0) || (*(int *)(uVar7 + 0x20) == 0)) goto LAB_00bcf016;
      goto LAB_00bcef80;
    }
  }
  goto LAB_00bcf012;
LAB_00bcef80: ;
  local_10 = 0;
  if (0 < *(int *)(psVar4 + 8)) {
    do {
      bVar6 = F_00bceae0(param_1,uVar7,
                           (uint)*((ushort *)GEN_TOP((*(int *)(psVar4 + 6) + local_10 * 2 + (int)psVar4))),
                           local_18);
      if (bVar6 == 0) {
        bVar5 = false;
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(psVar4 + 8));
  }
  local_14 = local_14 - 1;
  if (local_14 == 0) goto LAB_00bcf00c;
  iVar3 = *(int *)(param_1 + 0xa48);
  *(int *)(param_1 + 0xa4c) = *(int *)(param_1 + 0xa4c) + -0x40;
  *(int *)(param_1 + 0xa48) = iVar3 + 0x40;
  uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,iVar3,psVar4,local_c);
  local_c = local_c + 1;
  if (uVar7 == 0) goto LAB_00bcf00c;
  local_18 = (float)((float10)(ushort)psVar4[2] + (float10)local_18);
  goto LAB_00bcef80;
LAB_00bcf00c: ;
  if (!bVar5) {
LAB_00bcf012: ;
    local_6 = 0;
  }
LAB_00bcf016: ;
  local_1c = local_1c + 1;
  if (param_2[1] <= local_1c) {
    return local_6;
  }
  goto LAB_00bceea2;
}

/* ref: FUN_00bcf050 */
uint F_00bcf050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf050u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bcf060 */
uint F_00bcf060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf060u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bcf070 */
uint F_00bcf070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *(int *)((int)this + 8)))) + *(int *)((int)this + 8);
}

/* ref: FUN_00bcf090 */
ushort F_00bcf090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 2 + (int)this)));
}

/* ref: FUN_00bcf0b0 */
ushort F_00bcf0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(ushort *)(*(int *)this + param_1 * 2 + (int)this);
}

/* ref: FUN_00bcf0f0 */
ushort F_00bcf0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((ushort *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 2 + (int)this)));
}

/* ref: FUN_00bcf110 */
uint F_00bcf110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = *param_1;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 8) = (int)this + -8;
  }
  *param_1 = (int)this + -8;
  return (uint)param_1;
}

/* ref: FUN_00bcf140 */
uint F_00bcf140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = (int)this + -8;
    return 0;
  }
  do {
    iVar2 = iVar1;
    iVar1 = *(int *)(iVar2 + 0xc);
  } while (*(int *)(iVar2 + 0xc) != 0);
  if (this != (undefined *)0x0) {
    *(uint *)(iVar2 + 0xc) = (int)this - 8U;
    *(int *)this = iVar2;
    *(undefined4 *)((int)this + 4) = 0;
    return (int)this - 8U;
  }
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar2;
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return 0;
}

/* ref: FUN_00bcf270 */
uint F_00bcf270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf270u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bcf290 */
uint F_00bcf290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bcf2c0 */
unsigned int F_00bcf2c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbcf2c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x28) = param_2;
  return 0;
}

/* ref: FUN_00bcf2e0 */
byte F_00bcf2e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcf2e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  bool bVar1;
  bool bVar2;
  
  bVar1 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar2 = param_2 == *(float *)&REFG(undefined, 0x1088114);
  *(float *)(in_ecx + 0x70) = param_2;
  if ((GEN_ISNAN(param_2) || bVar1) == ((GEN_ISNAN(param_2) || bVar1) || bVar2)) {
    *(float *)(in_ecx + 0x6c) = param_2;
  }
  else {
    *(undefined4 *)(in_ecx + 0x6c) = *(undefined4 *)(in_ecx + 0x68);
  }
  *(byte *)(in_ecx + 0x83) = (byte)param_3;
  *(byte *)(in_ecx + 0x84) = (byte)param_3;
  *(float *)(in_ecx + 100) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x60) + (float10)*(float *)(in_ecx + 0x6c))));
  return (byte)param_3;
}

/* ref: FUN_00bcf340 */
byte F_00bcf340(unsigned int gen_a0)
{
  GEN_ENTER(0xbcf340u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x80) != '\0') {
    return 1;
  }
  if (*(int *)(in_ecx + 0x74) == 0) {
    return 0;
  }
  return 1 - (1 < *(uint *)(in_ecx + 0x78));
}

/* ref: FUN_00bcf380 */
byte F_00bcf380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x85) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00bcf3c0 */
uint F_00bcf3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf3c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((param_2 & 0xff) << 6 ^ *(uint *)(in_ecx + 0xe0)) & 0x40;
  *(uint *)(in_ecx + 0xe0) = *(uint *)(in_ecx + 0xe0) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00bcf400 */
uint F_00bcf400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x104) = param_2;
  return param_2;
}

/* ref: FUN_00bcf470 */
unsigned int F_00bcf470(float gen_a0)
{
  GEN_ENTER(0xbcf470u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf6 */
uint F_00bcf490(unsigned int gen_a0)
{
  GEN_ENTER(0xbcf490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pSVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_00bc2160((undefined *)this);
  if (*(int *)(this + 0xcc) != 0) {
    F_00b5c650(*(int *)(this + 0xcc));
    *(undefined4 *)(this + 0xcc) = 0;
  }
  pSVar1 = *(undefined * PTR32 *)(this + 0xd4);
  if ((pSVar1 != (undefined *)0x0) && (pSVar1 != this + 0xa0)) {
    F_00406b30(pSVar1);
    *(undefined4 *)(this + 0xd4) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0x1cc) != 0) {
    uVar3 = F_00406b30(*(int *)(this + 0x1cc));
    uVar2 = (uint)uVar3;
    *(undefined4 *)(this + 0x1cc) = 0;
  }
  return uVar2;
}

/* ref: FUN_00bcf500 */
byte F_00bcf500(unsigned int gen_a0)
{
  GEN_ENTER(0xbcf500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((*(int *)(in_ecx + 0x24) != 6) && (*(char *)(in_ecx + 0xf0) == '\0')) &&
     (*(char *)(in_ecx + 0xf1) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf10 */
unsigned int F_00bcf520(void)
{
  GEN_ENTER(0xbcf520u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf11 */
unsigned int F_00bcf530(void)
{
  GEN_ENTER(0xbcf530u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf12 */
unsigned int F_00bcf540(unsigned int gen_a0)
{
  GEN_ENTER(0xbcf540u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0xd) == '\0') {
    return 0;
  }
  if (*(char *)(in_ecx + 0x30) != '\0') {
    return 0;
  }
  if (*(char *)(in_ecx + 0x80) != '\0') {
    return 0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf13 */
uint F_00bcf5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcf5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  code * pcVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))();
  if ((uVar3 == 0) && (this[0x80] == (undefined1)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  F_00bc29d0(this,uVar6);
  pcVar2 = *(gen_code32 *)(*(int *)this + 0x1c);
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  this[0xe4] = (undefined1)0x0;
  uVar3 = (*pcVar2)(this,10,&REFG(undefined, 0x13056c0));
  fVar1 = *(float *)(this + 0x24c);
  bVar4 = GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar5 = bVar4 || fVar1 == *(float *)&REFG(undefined, 0x1088114);
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                   CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= fVar1),
                            (char)uVar3));
  if (bVar4 == bVar5) {
    uVar3 = F_00bc3780(this,fVar1);
  }
  this[0x249] = (undefined1)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  return uVar3;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf19 */
uint F_00bcf640(unsigned int gen_a0)
{
  GEN_ENTER(0xbcf640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined * pSVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  (*(uint *)(gen_frame + 0xf8)) = uVar3;
  if (*(int *)(this + 0xf4) != 0) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
    bVar2 = F_00bc2920(this,&(*(undefined * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    uVar3 = CONCAT31(extraout_var,bVar2);
    while (bVar2 != 0) {
      if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x2c) == 0x17) && (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x88) != '\0')) {
        uVar3 = F_00be3060((*(undefined * PTR32 *)(gen_frame + 0x4)));
        pSVar1 = this + 0xf4;
        *(int *)pSVar1 = *(int *)pSVar1 + -1;
        if (*(int *)pSVar1 == 0) break;
      }
      bVar2 = F_00bc2920(this,&(*(undefined * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
      uVar3 = CONCAT31(extraout_var_00,bVar2);
    }
    *(undefined4 *)(this + 0xf4) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return uVar3;
}

/* ref: FUN_00bcf6f0 */
uint F_00bcf6f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcf6f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined1 TVar4;
  float10 fVar5;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar3 = *(uint *)(param_1 + 0x138) >> 1;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  if (((uVar3 & 1) == 0) && (((byte)param_1[0x138] & 1) == 0)) {
    if (param_1[0x80] != (undefined1)0x0) {
      param_2 = 0.0;
    }
    fVar1 = *(float *)(param_1 + 0x6c);
    (*(float *)(gen_frame + 0x14)) = fVar1;
    (*(float *)(gen_frame + 0x10)) = param_2;
    if ((float10)fVar1 < (float10)param_2) {
      (*(float *)(gen_frame + 0x10)) = fVar1;
    }
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffdff;
    if (0.0 < (*(float *)(gen_frame + 0x10))) {
      do {
        if (REFG(float, 0x1087f04) < (*(float *)(gen_frame + 0x10))) {
          (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)REFG(double, 0x1088130));
        }
        else {
          (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x10));
          (*(float *)(gen_frame + 0x10)) = 0.0;
        }
        fVar1 = (*(float *)(gen_frame + 0x14));
        bVar2 = F_00bc1d60(param_1);
        if (bVar2 == 0) {
          if (param_1[0xe] != (undefined1)0x0) {
            param_1[0x84] = (undefined1)0x0;
          }
          bVar2 = F_00bc2d10(param_1,(uint)&(*(float *)(gen_frame + 0x14)));
          if (bVar2 != 0) {
            ((code *)*(gen_code32 *)(*(int *)param_1 + 0x1c))(param_1,0xb,&REFG(undefined, 0x13056c0));
            F_00bc27a0(param_1,6);
          }
        }
        *(float *)(param_1 + 0x28) = (*(float *)(gen_frame + 0x10));
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(float *)(gen_frame + 0x30)) = 0.0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x34)) = 0;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x14));
        F_00bc3080(param_1,0x10,&(*(undefined4 *)(gen_frame + 0x28)));
        bVar2 = F_00bc23a0(param_1,0x12);
        TVar4 = (undefined1)(bVar2 == 0);
        uVar3 = CONCAT31(extraout_var,TVar4);
        param_1[0x249] = TVar4;
        if ((bool)TVar4) goto LAB_00bcf8b9;
        if ((char)param_3 != '\0') {
          F_00bc3080(param_1,0x13,&REFG(undefined, 0x13056c0));
        }
        fVar5 = (float10)(*(float *)(gen_frame + 0x14));
        (*(float *)(gen_frame + 0xc)) = (float)(fVar5 + (float10)(*(float *)(gen_frame + 0xc)));
        if ((GEN_ISNAN((*(float *)(gen_frame + 0x14))) == (GEN_ISNAN((*(float *)(gen_frame + 0x14))) || (*(float *)(gen_frame + 0x14)) == 0.0)) &&
           (fVar6 = (float10)fVar1,
           (GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6)) || fVar5 == fVar6))) {
          (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((fVar6 - fVar5) + (float10)(*(float *)(gen_frame + 0x10)))));
        }
      } while (!GEN_ISNAN((*(float *)(gen_frame + 0x10))) && !((*(float *)(gen_frame + 0x10)) <= 0.0));
    }
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(float *)(gen_frame + 0x20)) = 0.0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0xc));
    bVar2 = F_00bc3080(param_1,0x11,&(*(undefined4 *)(gen_frame + 0x18)));
    uVar3 = CONCAT31(extraout_var_00,bVar2);
  }
LAB_00bcf8b9: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf16 */
unsigned int F_00bcf8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  
  if (this[0x11] == (undefined1)0x0) {
    F_00bc2770((undefined *)this,param_1);
    bVar1 = false;
    if ((((byte)this[0x138] & 0x10) != 0) &&
       (bVar2 = F_00bbad60(param_1,*(undefined4 *)(this + 0x13c)), bVar2 != 0)) {
      bVar1 = true;
    }
    uVar3 = F_00bbaea0(param_1,this + 0x110);
    if ((char)uVar3 != '\0') {
      bVar1 = true;
    }
    uVar3 = F_00bbaea0(param_1,this + 0x124);
    if (((char)uVar3 != '\0') || (bVar1)) {
      *(uint *)(this + 0xe0) = *(uint *)(this + 0xe0) & 0xffffff7f;
      F_00bc2850(this);
      if (*(int *)(this + 0xcc) != 0) {
        F_00b5c650(*(int *)(this + 0xcc));
        *(undefined4 *)(this + 0xcc) = 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bcf970 */
unsigned int F_00bcf970(void)
{
  GEN_ENTER(0xbcf970u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00bcf980 */
uint F_00bcf980(unsigned int gen_a0)
{
  GEN_ENTER(0xbcf980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) & 0xffffff7f;
  F_00bc2850(this);
  uVar1 = 0;
  if (*(int *)((int)this + 0xcc) != 0) {
    uVar1 = F_00b5c650(*(int *)((int)this + 0xcc));
    *(undefined4 *)((int)this + 0xcc) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bcf9c0 */
byte F_00bcf9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcf9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (((*(char *)((int)this + 10) != '\0') || (*(char *)((int)this + 0xd) != '\0')) &&
     (*(char *)((int)this + 0xf) == '\0')) {
    if (*(int *)((int)this + 0x24) != 6) {
      return 0;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
    return (char)uVar1 != '\0';
  }
  return 1;
}

/* ref: FUN_00bcf9f0 */
byte F_00bcf9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcf9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  if (((*(byte *)((int)this + 0x138) & 8) != 0) && (*(int *)((int)this + 0x200) == param_1)) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    (*(int *)(gen_frame + 0x4)) = 0;
    bVar1 = F_00bc2920(this,&(*(int *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    while (bVar1 != 0) {
      if ((*(int *)((*(int *)(gen_frame + 0x4)) + 0x2c) == 8) && (*(int *)((*(int *)(gen_frame + 0x4)) + 0x58) != 0)) {
        if (*(int *)((*(int *)(gen_frame + 0x4)) + 0x58) != 0) {
          *(int *)((*(int *)(gen_frame + 0x4)) + 0x58) = *(int *)((*(int *)(gen_frame + 0x4)) + 0x58) + -1;
        }
        *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) | 1;
        *param_2 = *(undefined4 *)((int)this + 0x230);
        F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
        return 1;
      }
      bVar1 = F_00bc2920(this,&(*(int *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    }
    *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) | 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return 0;
}

/* ref: FUN_00bcfad0 */
uint F_00bcfad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcfad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 == '\0') {
    if (((*(byte *)((int)this + 0x138) & 8) != 0) && (*(char *)((int)this + 0x213) != '\0')) {
      *(undefined1 *)((int)this + 0x213) = 0;
      *(undefined1 *)((int)this + 0x85) = 0;
      *(undefined4 *)((int)this + 0x1d0) = 1;
    }
    if (*(char *)((int)this + 10) != '\0') {
      *(undefined1 *)((int)this + 10) = 0;
    }
    if (param_1 != 0) {
      bVar1 = F_00bc32d0(this,1,0);
      return CONCAT31(extraout_var,bVar1);
    }
    bVar1 = F_00bc32d0(this,3,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00bcfb40 */
uint F_00bcfb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcfb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffff7;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  if (param_1 != 0) {
    bVar1 = F_00bc2450(this,param_1,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00bcfb80 */
byte F_00bcfb80(unsigned int gen_a0)
{
  GEN_ENTER(0xbcfb80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x24) == 6) {
    return 1;
  }
  return *(int *)(in_ecx + 0x24) == 5;
}

/* ref: FUN_00bcfba0 */
byte F_00bcfba0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcfba0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if ((((*(int *)(in_ecx + 0x24) == 6) && (uVar1 = *(uint *)(in_ecx + 0xe0), (uVar1 & 0x10) == 0))
      && ((uVar1 & 6) == 0)) && ((uVar1 & 8) != 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00bcfbc0 */
byte F_00bcfbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcfbc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x104) != 1) && (*(int *)(in_ecx + 0x104) != 2)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00bcfbe0 */
uint F_00bcfbe0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcfbe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(byte *)(in_ecx + 0x138) & 8) != 0) {
    return *(uint *)(in_ecx + 0x200);
  }
  return 0;
}

/* ref: FUN_00bcfc00 */
uint F_00bcfc00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbcfc00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  bool bVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  fVar5 = (float10)param_2;
  fVar6 = (float10)*(float *)(param_1 + 0x250);
  bVar3 = GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5);
  bVar4 = bVar3 || fVar6 == fVar5;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                   CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(fVar5 <= fVar6),(char)uVar2));
  if (bVar3 == bVar4) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    *(float *)(param_1 + 0x250) = param_2;
    (*(float *)(gen_frame + 0x10)) = param_2;
    bVar1 = F_00bc3080(param_1,0x21,&(*(undefined4 *)(gen_frame + 0x8)));
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_00bcfc70 */
uint F_00bcfc70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbcfc70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(float *)(gen_frame + 0x10)) = 0.0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(float *)(gen_frame + 0x10)) = param_2;
  bVar1 = F_00bc3080(param_1,0x22,&(*(undefined4 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00bcfcc0 */
uint F_00bcfcc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbcfcc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  ulonglong uVar2;
  
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) | 0x10;
  *(undefined4 *)((int)this + 0x13c) = param_1;
  *(int *)((int)this + 0x140) = param_2;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar2 = F_00c46aa0((int)this + 0x148,param_3,param_2 * 4);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf30 */
uint F_00bcfd00(unsigned int gen_a0)
{
  GEN_ENTER(0xbcfd00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x138) >> 4 & 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf31 */
uint F_00bcfd10(unsigned int gen_a0)
{
  GEN_ENTER(0xbcfd10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x13c);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf32 */
uint F_00bcfd20(unsigned int gen_a0)
{
  GEN_ENTER(0xbcfd20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x140);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf33 */
uint F_00bcfd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcfd30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (*(uint *)(in_ecx + 0x140) <= param_2) {
    return *(uint *)(in_ecx + 0x13c);
  }
  return *(uint *)(in_ecx + 0x148 + param_2 * 4);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf8 */
uint F_00bcfd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcfd60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x140);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf34 */
uint F_00bcfd70(unsigned int gen_a0)
{
  GEN_ENTER(0xbcfd70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c8);
}

/* ref: FUN_00bcfd80 */
byte F_00bcfd80(unsigned int gen_a0)
{
  GEN_ENTER(0xbcfd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
  if (uVar1 != 0) {
    return *(byte *)(uVar1 + 0x44);
  }
  return 0;
}

/* ref: FUN_00bcfda0 */
uint F_00bcfda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcfda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *param_1 = 0xffffffff;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 0x44) != 0)) {
    *param_1 = *(undefined4 *)((int)this + 200);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00bcfdf0 */
byte F_00bcfdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcfdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
  if (((uVar1 == 0) || (*(int *)(uVar1 + 0x18) != 0)) &&
     (((*(byte *)((int)this + 0x138) & 0x40) == 0 || (*(int *)((int)this + 0x1d4) != 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bcfe30 */
byte F_00bcfe30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcfe30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
  if ((uVar1 != 0) && (-1 < *(int *)(uVar1 + 0x18))) {
    *param_1 = *(int *)(uVar1 + 0x18);
    return 1;
  }
  if ((*(byte *)((int)this + 0x138) & 0x40) != 0) {
    *param_1 = *(int *)((int)this + 0x1d4);
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf28 */
uint F_00bcfe80(unsigned int gen_a0)
{
  GEN_ENTER(0xbcfe80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((*(byte *)(in_ecx + 0x138) & 8) != 0) && (*(char *)(in_ecx + 0x213) != '\0')) {
    return 0;
  }
  return *(uint *)(in_ecx + 0x1d0);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf29 */
uint F_00bcfea0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcfea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(byte *)(in_ecx + 0x138) & 8) != 0) {
    return *(uint *)(in_ecx + 0x204);
  }
  return *(uint *)(in_ecx + 0x1d0);
}

/* ref: FUN_00bcfec0 */
uint F_00bcfec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcfec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bc2a40(this);
  if (uVar1 != 0) {
    F_00bc3bb0(param_1);
  }
  uVar1 = ((param_1 & 0xff) << 5 ^ *(uint *)((int)this + 0xe0)) & 0x20;
  *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00bcff00 */
uint F_00bcff00(unsigned int gen_a0)
{
  GEN_ENTER(0xbcff00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  if (*(char *)((int)this + 0x24a) != '\0') {
    return 0;
  }
  if ((((*(char *)((int)this + 8) == '\0') || ((*(uint *)((int)this + 0xe0) >> 7 & 1) != 0)) ||
      (*(char *)((int)this + 0xd) == '\0')) ||
     ((*(char *)((int)this + 0xf) != '\0' ||
      (fVar1 = F_00bc2b40(this), (float10)fVar1 < (float10)0)))) {
    return 0xffffffff;
  }
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  if (fVar1 <= REFG(float, 0x1087f04)) {
    return 1;
  }
  return (int)fVar1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf41 */
uint F_00bcff80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbcff80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((*(int *)(this + 0xdc) != 0) || (*(int *)(this + 0x1c8) != 0)) {
    uVar4 = F_00bc3620(this,param_1,*(undefined4 *)(param_2 + 8),(uint)*(ushort *)(param_2 + 2),
                         param_3,0);
    return uVar4;
  }
  if (*(short *)(param_2 + 2) == 2) {
    if (*(uint *)(this + 0x140) <= param_3) {
      return 0;
    }
    uVar4 = F_00b59e60(REFG(void * PTR32, 0x14c4e78),*(undefined4 *)(this + param_3 * 4 + 0x148));
    uVar4 = F_00bc3520(this,param_1,uVar4,(uint)*(ushort *)(param_2 + 2),param_3,0);
    *(undefined * PTR32 *)(uVar4 + 4) = this;
  }
  else {
    if (((byte)this[0x138] & 0x10) == 0) {
      uVar2 = F_00b59f00(REFG(void * PTR32, 0x14c4e78),this + 0x110);
      if ((uVar2 != 0) ||
         (uVar2 = F_00b597c0(REFG(void * PTR32, 0x14c4e78),*(undefined4 *)(param_2 + 8)), uVar2 != 0)) {
LAB_00bd007d: ;
        uVar4 = F_00bc3520(this,param_1,uVar2,(uint)*(ushort *)(param_2 + 2),0,0);
        *(undefined * PTR32 *)(uVar4 + 4) = this;
        return uVar4;
      }
      uVar3 = F_0052ed20(REFG(undefined4, 0x1375b00),*(undefined4 *)(param_2 + 8),0,0);
      if (uVar3 == 0) {
        return 0;
      }
      uVar2 = F_00b59750(REFG(void * PTR32, 0x14c4e78),uVar3,0);
      if (uVar2 != 0) goto LAB_00bd007d;
      uVar2 = F_00b59f90(REFG(void * PTR32, 0x14c4e78),uVar3);
    }
    else {
      uVar1 = *(undefined4 *)(this + 0x13c);
      if ((*(undefined * PTR32 *)(this + 0x10c) != (undefined *)0x0) &&
         (uVar2 = F_00b68410(*(undefined * PTR32 *)(this + 0x10c)), uVar2 != 0)) goto LAB_00bd007d;
      uVar2 = F_00b59e60(REFG(void * PTR32, 0x14c4e78),uVar1);
    }
    if (uVar2 != 0) {
      uVar4 = F_00bc3520(this,param_1,uVar2,(uint)*(ushort *)(param_2 + 2),0,0);
      *(undefined * PTR32 *)(uVar4 + 4) = this;
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf42 */
uint F_00bd0110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd0110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (*(int *)(this + 0xdc) == 0) {
    if (*(short *)(param_1 + 2) != 2) {
      uVar2 = F_00406b90(0x1c,0,0);
      if (uVar2 == 0) {
        pvVar3 = (undefined *)0x0;
      }
      else {
        pvVar3 = (undefined *)F_00bccbd0(uVar2);
      }
      if (((byte)this[0x138] & 0x10) != 0) {
        F_00bbadf0(pvVar3,*(undefined4 *)(this + 0x13c),0);
        return (uint)pvVar3;
      }
      F_00bccc00(pvVar3,this + 0x110);
      return (uint)pvVar3;
    }
    if (*(uint *)(this + 0x140) <= param_2) {
      return 0;
    }
    uVar1 = *(undefined4 *)(this + param_2 * 4 + 0x148);
    uVar2 = F_00406b90(0x1c,0,0);
    if (uVar2 != 0) {
      pvVar3 = (undefined *)F_00bccbd0(uVar2);
      F_00bbadf0(pvVar3,uVar1,0);
      return (uint)pvVar3;
    }
    F_00bbadf0((undefined *)0x0,uVar1,0);
  }
  return 0;
}

/* ref: FUN_00bd01e0 */
uint F_00bd01e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd01e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0xdc) != 0) {
    return 0x68;
  }
  if ((*(int *)(in_ecx + 0x1c8) != 0) || (uVar1 = 0x67, *(int *)(in_ecx + 0x1cc) != 0)) {
    uVar1 = 0x66;
  }
  return uVar1;
}

/* ref: FUN_00bd0210 */
uint F_00bd0210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd0210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  F_00bc2080(this);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) & 0xfffffa00;
  *(undefined4 *)((int)this + 200) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1106724));
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined1 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined2 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0xffffffff;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = param_1;
  F_00bbac80((int)this + 0x110);
  F_00bbac80((int)this + 0x124);
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xffffff00;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 3;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 1;
  *(undefined4 *)((int)this + 0x204) = 1;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = uVar1;
  *(undefined4 *)((int)this + 0x1fc) = uVar1;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x200) = 0xffffffff;
  *(undefined4 *)((int)this + 0x208) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20c) = 0xffffffff;
  *(undefined2 *)((int)this + 0x248) = 1;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined1 *)((int)this + 0x24a) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = uVar1;
  *(undefined1 *)((int)this + 0xa0) = 0;
  F_00bbaca0((int)this + 0x110);
  F_00bbaca0((int)this + 0x124);
  return (uint)this;
}

/* ref: FUN_00bd03c0 */
uint F_00bd03c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd03c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1106724));
  F_00bcf490(this);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x124) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x110) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  uVar1 = F_00bc2fd0(this);
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf4 */
byte F_00bd03f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd03f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (this[0x10] != (undefined1)0x0) {
    return 1;
  }
  if (this[8] == (undefined1)0x0) {
    return 0;
  }
  if (this[10] != (undefined1)0x0) {
    return 0;
  }
  uVar2 = F_00bd01e0(this);
  if (uVar2 == 0x66) {
    bVar1 = F_00bcf340(((undefined4)(uint)(this)));
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = F_00bc22a0(this);
    if (bVar1 == 0) {
      return 0;
    }
    if (this[0xb] != (undefined1)0x0) goto LAB_00bd0491;
  }
  else {
    if (uVar2 == 0x67) {
      bVar1 = F_00bcf340(((undefined4)(uint)(this)));
      if (bVar1 == 0) {
        return 0;
      }
      if (((this[0xb] == (undefined1)0x0) && (((byte)this[0x2c] & 1) == 0)) &&
         (bVar1 = F_00bc1d60(this), bVar1 == 0)) {
        return 0;
      }
      bVar1 = F_00bc22a0(this);
      if (bVar1 == 0) {
        return 0;
      }
      if (((byte)this[0xe0] & 0x80) != 0) {
        return 0;
      }
      goto LAB_00bd0491;
    }
    if (uVar2 != 0x68) {
      return 0;
    }
    bVar1 = F_00bcf340(((undefined4)(uint)(this)));
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = F_00bc22a0(this);
    if (bVar1 == 0) {
      return 0;
    }
  }
  bVar1 = F_00bc1d60(this);
  if (bVar1 == 0) {
    return 0;
  }
LAB_00bd0491: ;
  this[0xc] = (undefined1)0x0;
  this[0xd] = (undefined1)0x1;
  this[10] = (undefined1)0x0;
  this[0xb] = (undefined1)0x0;
  F_00b61910(this);
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf5 */
byte F_00bd04b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd04b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (this[0x11] != (undefined1)0x0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
    return 1;
  }
  if ((this[0x10] != (undefined1)0x0) &&
     (((*(int *)(this + 0xdc) == 0 || (((byte)this[0x2c] & 1) != 0)) &&
      (this[0x248] != (undefined1)0x0)))) {
    bVar1 = F_00bc22e0(this);
    if (bVar1 != 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
      this[0x11] = (undefined1)0x1;
      this[0x15] = (undefined1)0x0;
      if (*(int *)(this + 4) != 0) {
        *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf24 */
uint F_00bd0510(unsigned int gen_a0)
{
  GEN_ENTER(0xbd0510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
  if (((uVar2 != 0) && (*(int *)(uVar2 + 0x1c) != -1)) &&
     (uVar2 = *(uint *)(this + 0xe0) >> 7, (uVar2 & 1) == 0)) {
    iVar1 = *(int *)(this + 200);
    *(undefined4 *)(this + 0x20c) = 0xffffffff;
    if ((iVar1 != -1) && (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x78))(this), (char)uVar2 != '\0')) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
      pvVar3 = (undefined *)F_00475fd0(uVar2);
      uVar2 = 0;
      if (pvVar3 != (undefined *)0x0) {
        pvVar3 = (undefined *)F_00a5f290(pvVar3);
        uVar2 = 0;
        if (pvVar3 != (undefined *)0x0) {
          uVar2 = (uint)((byte)this[0x2c] & 1);
          uVar4 = F_00bcfbe0(this);
          uVar2 = F_00aa4360(pvVar3,iVar1,uVar4,uVar2);
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00bd05a0 */
byte F_00bd05a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd05a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  
  bVar2 = *(byte *)((int)this + 0x138);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(byte *)(gen_frame + 0xb)) = 0;
  if (((bVar2 & 8) == 0) ||
     ((fVar7 = *(float *)((int)this + 0x1f0), GEN_ISNAN(fVar7) != (GEN_ISNAN(fVar7) || fVar7 == 0.0) &&
      (fVar7 = *(float *)((int)this + 500), GEN_ISNAN(fVar7) != (GEN_ISNAN(fVar7) || fVar7 == 0.0))))) {
    fVar7 = (float)(float10)0;
  }
  else {
    fVar7 = *(float *)((int)this + 500);
  }
  F_00bc2660(GEN_TOF(this),(float)(float10)0,fVar7,(float)(float10)1,0,1,&(*(float *)(gen_frame + 0x4)),&(*(byte *)(gen_frame + 0xb)));
  if (*(int *)((int)this + 0xdc) == 0) {
    if ((*(int *)((int)this + 0x1c8) != 0) || (iVar5 = 0x67, *(int *)((int)this + 0x1cc) != 0)) {
      iVar5 = 0x66;
    }
  }
  else {
    iVar5 = 0x68;
  }
  fVar7 = (*(float *)(gen_frame + 0x4));
  if (iVar5 == 0x66) {
    fVar1 = *(float *)((int)this + 0x68);
    if ((float10)(*(float *)(gen_frame + 0x4)) < (float10)fVar1) {
      fVar7 = fVar1;
    }
    bVar3 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    bVar4 = fVar7 == *(float *)&REFG(undefined, 0x1088114);
    *(float *)((int)this + 0x70) = fVar7;
    if ((GEN_ISNAN(fVar7) || bVar3) == ((GEN_ISNAN(fVar7) || bVar3) || bVar4)) {
LAB_00bd06b8: ;
      *(float *)((int)this + 0x6c) = fVar7;
    }
    else {
      *(float *)((int)this + 0x6c) = fVar1;
    }
  }
  else {
    uVar6 = iVar5 - 0x67;
    if (uVar6 != 0) goto LAB_00bd06dc;
    bVar3 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    bVar4 = (*(float *)(gen_frame + 0x4)) == *(float *)&REFG(undefined, 0x1088114);
    *(float *)((int)this + 0x70) = (*(float *)(gen_frame + 0x4));
    if ((GEN_ISNAN((*(float *)(gen_frame + 0x4))) || bVar3) == ((GEN_ISNAN((*(float *)(gen_frame + 0x4))) || bVar3) || bVar4)) goto LAB_00bd06b8;
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x68);
  }
  uVar6 = (uint)(*(byte *)(gen_frame + 0xb));
  *(byte *)((int)this + 0x84) = (*(byte *)(gen_frame + 0xb));
  *(byte *)((int)this + 0x83) = (*(byte *)(gen_frame + 0xb));
  *(float *)((int)this + 100) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x60) + (float10)*(float *)((int)this + 0x6c))));
LAB_00bd06dc: ;
  return (byte)uVar6;
}

/* ref: FUN_00bd06f0 */
uint F_00bd06f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd06f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (((((*(uint *)((int)this + 0xe0) & 6) == 0) && ((*(uint *)((int)this + 0xe0) & 8) != 0)) &&
      (*(int *)((int)this + 0x74) == 0)) &&
     ((*(int *)((int)this + 0x104) == 1 || (*(int *)((int)this + 0x104) == 2)))) {
    F_00bc29d0(this,1);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x78))(this);
  if ((char)uVar2 != '\0') {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
    if ((uVar2 < 0x158) && (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar2])) != (undefined *)0x0)) {
      this_00 = (undefined *)F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar2])));
      if (this_00 != (undefined *)0x0) {
        if ((*(byte *)((int)this + 0x138) & 8) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)((int)this + 0x200);
        }
        F_00aa70a0(this_00,*(undefined4 *)((int)this + 200),uVar3);
      }
    }
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  if (*(char *)((int)this + 0x30) == '\0') {
    F_00bc27a0(this,4);
    bVar1 = F_00bc23a0(this,0x12);
    *(bool *)((int)this + 0x249) = bVar1 == 0;
    if (bVar1 != 0) {
      F_00bc3080(this,0x13,&REFG(undefined, 0x13056c0));
    }
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
    if ((uVar2 == 0) || (*(char *)(uVar2 + 0x21) == '\0')) goto LAB_00bd0816;
    uVar3 = 0x23;
  }
  else {
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_00bc3080(this,0x1d,&(*(undefined4 *)(gen_frame + 0x8)));
    F_00bc23a0(this,0x1a);
    uVar3 = 0x13;
  }
  bVar1 = F_00bc3080(this,uVar3,&REFG(undefined, 0x13056c0));
  uVar2 = CONCAT31(extraout_var,bVar1);
LAB_00bd0816: ;
  *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) | 0x200;
  *(undefined4 *)((int)this + 0x28) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_00bd0840 */
uint F_00bd0840(unsigned int gen_a0)
{
  GEN_ENTER(0xbd0840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  F_00bc26d0(this,1);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
  if (((uVar2 != 0) && (iVar1 = *(int *)(uVar2 + 0x1c), 0 < iVar1)) &&
     (uVar2 = F_00bcff00(this), (int)uVar2 <= iVar1)) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_00bd0880 */
byte F_00bd0880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd0880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (((*(byte *)((int)this + 0x138) & 8) != 0) && (*(char *)((int)this + 0x213) != '\0')) {
    *(undefined1 *)((int)this + 0x213) = 0;
    *(undefined1 *)((int)this + 0x85) = 0;
    *(undefined4 *)((int)this + 0x1d0) = 1;
  }
  *(undefined1 *)((int)this + 0x248) = 1;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 != '\0') {
    return 0;
  }
  if (*(char *)((int)this + 10) != '\0') {
    *(undefined1 *)((int)this + 10) = 0;
  }
  if (param_2 != 0) {
    *(undefined4 *)((int)this + 0x1d8) = *(undefined4 *)(param_2 + 4);
  }
  bVar1 = F_00bc32d0(this,param_1,param_2);
  if (param_1 == 3) {
    F_00b61970(this);
  }
  return bVar1;
}

/* ref: FUN_00bd0910 */
uint F_00bd0910(unsigned int gen_a0)
{
  GEN_ENTER(0xbd0910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x138);
  if (-1 < (char)uVar1) {
    *(uint *)((int)this + 0x138) = uVar1 | 0x80;
    if (((uVar1 & 8) != 0) && (*(char *)((int)this + 0x213) != '\0')) {
      *(undefined1 *)((int)this + 0x213) = 0;
      *(undefined1 *)((int)this + 0x85) = 0;
      *(undefined4 *)((int)this + 0x1d0) = 1;
    }
    F_00bc32d0(this,3,0);
    F_00bc22e0(this);
    *(undefined1 *)((int)this + 0x248) = 1;
    uVar1 = F_00b61970(this);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00bd0970 */
uint F_00bd0970(unsigned int gen_a0)
{
  GEN_ENTER(0xbd0970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  int iVar1;
  int * this_00;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  if (((*(byte *)((int)this + 0x138) & 8) != 0) && (*(char *)((int)this + 0x213) != '\0')) {
    *(undefined1 *)((int)this + 0x213) = 0;
    *(undefined1 *)((int)this + 0x85) = 0;
    *(undefined4 *)((int)this + 0x1d0) = 1;
  }
  ((undefined4 *)(gen_frame + 0x8))[0] = 0;
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  bVar2 = F_00bc2920(this,&(*(int * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
  uVar3 = CONCAT31(extraout_var,bVar2);
  this_00 = (*(int * PTR32 *)(gen_frame + 0x4));
  do {
    (*(int * PTR32 *)(gen_frame + 0x4)) = this_00;
    if (bVar2 == 0) {
      if (*(int *)((int)this + 0x24) != 6) {
        F_00bc32d0(this,3,0);
        F_00bc22e0(this);
        uVar3 = F_00b61970(this);
      }
      *(undefined1 *)((int)this + 0x24a) = 1;
      *(undefined1 *)((int)this + 0x248) = 1;
      F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
      return uVar3;
    }
    iVar1 = this_00[0xb];
    if (iVar1 == 0) {
LAB_00bd09f5: ;
      if (*(int *)((int)this + 0x24) != 6) goto LAB_00bd09fa;
    }
    else {
      if (iVar1 == 6) {
        if (((*(int *)((int)this + 0x24) == 6) && (uVar3 = F_00be5a60(this_00), uVar3 == 0)) &&
           ((char)this_00[3] != '\0')) goto LAB_00bd0a06;
      }
      else if (iVar1 == 7) goto LAB_00bd09f5;
LAB_00bd09fa: ;
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xec))((*(int * PTR32 *)(gen_frame + 0x4)),3);
    }
LAB_00bd0a06: ;
    bVar2 = F_00bc2920(this,&(*(int * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    uVar3 = CONCAT31(extraout_var_00,bVar2);
    this_00 = (*(int * PTR32 *)(gen_frame + 0x4));
  } while( true );
}

/* ref: FUN_00bd0a80 */
byte F_00bd0a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd0a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  bool bVar1;
  
  if (0 < *(int *)((int)this + 0x1dc)) {
    if (param_1 == 0) {
      bVar1 = (*(byte *)((int)this + 0x138) & 8) == 0;
    }
    else if ((*(byte *)((int)this + 0x138) & 8) == 0) {
      bVar1 = *(int *)(param_1 + 0x10) == 0;
    }
    else {
      bVar1 = *(int *)(param_1 + 0x10) == *(int *)((int)this + 0x200);
    }
    if (bVar1) {
      *(int *)((int)this + 0x1dc) = *(int *)((int)this + 0x1dc) + -1;
    }
  }
  return *(int *)((int)this + 0x1dc) == 0;
}

/* ref: FUN_00bd0ae0 */
uint F_00bd0ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd0ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00bd18a0((undefined *)((int)this + 0xfc),param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00bd0af0 */
byte F_00bd0af0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd0af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  if ((*(int *)((int)this + 0xdc) != 0) || (*(int *)((int)this + 0xd0) != 0)) {
    return 1;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0xcc);
  if (this_00 != (undefined *)0x0) {
    uVar2 = *(uint *)((int)this_00 + 0x5c) >> 1;
    if (((uVar2 & 1) != 0) && ((uVar2 & 1) != 0)) {
      F_00bd0880(this,3,0);
      F_00bc2320(this);
      return 1;
    }
    bVar1 = F_00bcd860(this_00);
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bd0b50 */
byte F_00bd0b50(unsigned int gen_a0)
{
  GEN_ENTER(0xbd0b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x24) != 6) {
    if (*(int *)((int)this + 0x24) == 2) {
      uVar1 = 0;
      if ((*(byte *)((int)this + 0x138) & 8) != 0) {
        uVar1 = (int)this + 0x1f0;
      }
      F_00bc2550(this,uVar1);
    }
    if (*(int *)((int)this + 0x24) == 3) {
      F_00bc2630(this);
      *(undefined4 *)((int)this + 0x24) = 4;
    }
    if (*(int *)((int)this + 0x24) == 4) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,8,&REFG(undefined, 0x13056c0));
      if ((char)uVar1 == '\0') {
        return 0;
      }
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      F_00bd05a0(this);
      *(undefined4 *)((int)this + 0x24) = 5;
    }
    if ((*(int *)((int)this + 0x24) != 5) || ((*(uint *)((int)this + 0x138) >> 2 & 1) != 0)) {
      return 0;
    }
    *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) | 0x200;
    uVar1 = *(uint *)((int)this + 0xe0);
    uVar2 = uVar1 >> 4 & 1;
    *(undefined4 *)((int)this + 0x24) = 6;
    if (((((uVar2 == 0) && ((uVar1 & 6) == 0)) && ((uVar1 & 8) != 0)) || (uVar2 != 0)) &&
       ((F_00bc27e0(this), *(int *)((int)this + 0x104) == 1 && (*(int *)((int)this + 0x10c) != 0))
       )) {
      F_00b68400(*(undefined4 *)((int)this + 200));
    }
  }
  return 1;
}

/* ref: FUN_00bd0c40 */
unsigned int F_00bd0c40(unsigned int gen_a0)
{
  GEN_ENTER(0xbd0c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((((*(char *)((int)this + 0x10) == '\0') && (*(char *)((int)this + 0xb) == '\0')) &&
      (*(int *)((int)this + 0xdc) != 0)) &&
     ((*(int *)((int)this + 0x88) == 2 || (*(int *)((int)this + 0x88) == 3)))) {
    F_00bd0880(this,7,0);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  return 0;
}

/* ref: FUN_00bd0c80 */
uint F_00bd0c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd0c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffffb;
  F_00bc2d00(this);
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffff7;
  *(undefined4 *)((int)this + 0x1d0) = param_1;
  *(undefined4 *)((int)this + 0x24c) = 0;
  if (param_2 < 0) {
    uVar2 = *(uint *)((int)this + 0x138) & 0xffffffbf;
    *(undefined4 *)((int)this + 0x1d4) = 0;
  }
  else {
    uVar2 = *(uint *)((int)this + 0x138) | 0x40;
    *(int *)((int)this + 0x1d4) = param_2;
  }
  *(uint *)((int)this + 0x138) = uVar2;
  bVar1 = F_00bd0b50(this);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((bVar1 != 0) && (*(int *)((int)this + 0x24) == 6)) {
    uVar2 = F_00bd06f0(this);
  }
  return uVar2;
}

/* ref: FUN_00bd0d00 */
uint F_00bd0d00(unsigned int gen_a0)
{
  GEN_ENTER(0xbd0d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  this_00 = REFG(void * PTR32, 0x14c4e90);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar2 = *(uint *)((int)this + 0x138) >> 1;
  if (((uVar2 & 1) != 0) || (*(int *)((int)this + 0x24) == 6)) goto LAB_00bd0e51;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x104))) {
  case 1: ;
  case 2: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
    if (uVar2 != 0) {
      if (*(int *)((int)this + 0xcc) == 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x746d62;
        uVar2 = F_00b5e210(REFG(void * PTR32, 0x14c4e90),(int)this + 0xfc,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
        *(uint *)((int)this + 0xcc) = uVar2;
      }
      if (*(int *)((int)this + 0x24) == 0) {
        uVar3 = F_00bc3270(this,*(undefined4 *)((int)this + 0xcc));
        uVar2 = 0;
        if (uVar3 == 0) goto LAB_00bd0db0;
        bVar1 = F_00bc2450(this,uVar3,1);
        uVar2 = CONCAT31(extraout_var,bVar1);
        if (bVar1 == 0) goto LAB_00bd0db0;
      }
      goto LAB_00bd0da1;
    }
    break;
  case 4: ;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar3 = (uint)((byte)(*(uint *)((int)this + 0x138) >> 5) & 1);
      uVar5 = 1;
      uVar4 = 0;
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
      uVar2 = F_00b5e280(this_00,0,uVar2,uVar4,uVar5,uVar3);
      *(uint *)((int)this + 0xcc) = uVar2;
    }
    if (*(int *)((int)this + 0x24) == 0) {
      uVar3 = F_00bc3270(this,*(undefined4 *)((int)this + 0xcc));
      uVar2 = 0;
      if (uVar3 == 0) goto LAB_00bd0db0;
      bVar1 = F_00bc2450(this,uVar3,1);
      if (bVar1 == 0) {
        return CONCAT31(extraout_var_01,bVar1);
      }
    }
    goto LAB_00bd0da1;
  case 5: ;
    if (*(int *)((int)this + 0x24) == 0) {
      bVar1 = F_00bc2450(this,*(undefined4 *)((int)this + 0xd0),1);
      if (bVar1 == 0) {
        return CONCAT31(extraout_var_02,bVar1);
      }
    }
LAB_00bd0da1: ;
    bVar1 = F_00bc2500(this);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1 == 0) goto LAB_00bd0db0;
  }
  bVar1 = F_00bd0b50(this);
  uVar2 = CONCAT31(extraout_var_03,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00bd06f0(this);
LAB_00bd0e51: ;
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
LAB_00bd0db0: ;
  return uVar2 & 0xffffff00;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf1 */
byte F_00bd0e70(unsigned int gen_a0)
{
  GEN_ENTER(0xbd0e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  bVar1 = F_00bd0af0(this);
  if (bVar1 == 0) {
    return 0;
  }
  bVar1 = F_00bc21c0((undefined *)this);
  return bVar1;
}

/* ref: FUN_00bd0e90 */
unsigned int F_00bd0e90(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd0e90u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_1[0x11] == (undefined1)0x0) {
    if ((param_1[0x24a] != (undefined1)0x0) && (param_1[0xf] != (undefined1)0x0)) {
      F_00bc32d0(param_1,3,0);
      F_00bc22e0(param_1);
      param_1[0x248] = (undefined1)0x1;
      F_00b61970(param_1);
      return 0;
    }
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffdff;
    if (((*(int *)(param_1 + 0xcc) != 0) &&
        (uVar3 = *((uint *)GEN_TOP((*(int *)(param_1 + 0xcc) + 0x5c))) >> 1, (uVar3 & 1) != 0)) &&
       ((uVar3 & 1) != 0)) {
      F_00bc27e0(param_1);
    }
    F_00bc26d0(param_1,0);
    if (((*(int *)(param_1 + 0x24) != 6) && (uVar3 = F_00bd0d00(param_1), (char)uVar3 == '\0')) &&
       ((*(uint *)(param_1 + 0x2c) >> 1 & 1) != 0)) {
      F_00bd0880(param_1,3,0);
      return 0;
    }
    if (((param_1[8] != (undefined1)0x0) ||
        (uVar3 = ((code *)*(gen_code32 *)(*(int *)param_1 + 4))(param_1), (char)uVar3 != '\0')) &&
       (*(int *)(param_1 + 0x24) == 6)) {
      if (param_1[0x24a] != (undefined1)0x0) {
        ((code *)*(gen_code32 *)(*(int *)param_1 + 0x10))(param_1);
        return 0;
      }
      if ((*(uint *)(param_1 + 0xe0) & 0x200) != 0) {
        param_2 = 0.0;
      }
      if (param_1[0x249] != (undefined1)0x0) {
        bVar2 = F_00bc23a0(param_1,0x12);
        param_1[0x249] = (undefined1)(bVar2 == 0);
        if (bVar2 == 0) {
          return 0;
        }
        if ((char)param_3 != '\0') {
          F_00bc3080(param_1,0x13,&REFG(undefined, 0x13056c0));
        }
      }
      uVar3 = F_00bc1e50(param_1,0);
      if ((char)uVar3 == '\0') {
        fVar1 = *(float *)(param_1 + 0x250);
        if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04))) ==
            ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04))) || fVar1 == REFG(float, 0x1087f04))) {
          param_2 = (float)((float10)fVar1 * (float10)param_2);
        }
      }
      else {
        param_2 = 0.0;
      }
      F_00bcf6f0(param_1,param_2,param_3);
      if (*(int *)(param_1 + 0xf4) != 0) {
        ((code *)*(gen_code32 *)(*(int *)param_1 + 0x4c))(param_1);
      }
      if ((((param_1[0x10] == (undefined1)0x0) && (param_1[0xb] == (undefined1)0x0))
          && (uVar3 = F_00bd01e0(param_1), uVar3 == 0x68)) &&
         (bVar2 = F_00bc1d60(((undefined4)(uint)(param_1))), bVar2 != 0)) {
        F_00bd0880(param_1,7,0);
      }
      if (param_1[0x14] != (undefined1)0x0) {
        ((code *)*(gen_code32 *)(*(int *)param_1 + 0x10))(param_1);
      }
    }
  }
  return 0;
}

/* ref: FUN_00bd1060 */
byte F_00bd1060(unsigned int gen_a0)
{
  GEN_ENTER(0xbd1060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x11) == '\0') {
    if (((*(int *)((int)this + 0xcc) != 0) &&
        (uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0xcc) + 0x5c))) >> 1, (uVar1 & 1) != 0)) &&
       ((uVar1 & 1) != 0)) {
      F_00bc27e0(this);
    }
    F_00bc26d0(this,0);
    if (((*(int *)((int)this + 0x24) != 6) && (uVar1 = F_00bd0d00(this), (char)uVar1 == '\0')) &&
       ((*(uint *)((int)this + 0x2c) >> 1 & 1) != 0)) {
      F_00bd0880(this,3,0);
      return 0;
    }
    if ((*(char *)((int)this + 8) == '\0') &&
       (uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this), (char)uVar1 == '\0')) {
      return 0;
    }
    if (*(int *)((int)this + 0x24) == 6) {
      if (*(char *)((int)this + 0x24a) != '\0') {
        ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
        return 0;
      }
      if (((*(uint *)((int)this + 0x138) >> 1 & 1) == 0) &&
         ((*(byte *)((int)this + 0x138) & 1) == 0)) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bd1110 */
byte F_00bd1110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbd1110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_00bd17c0(this,*param_1);
  *(uint *)((int)this + 0xfc) = uVar2;
  uVar1 = param_1[1];
  *(undefined4 *)((int)this + 200) = uVar1;
  *(undefined4 *)((int)this + 0x100) = uVar1;
  *(undefined4 *)((int)this + 0x24c) = 0;
  uVar1 = REFG(float, 0x1087f04);
  if (param_3 == 0) {
    *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffff7;
    *(undefined4 *)((int)this + 0x250) = uVar1;
    *(undefined4 *)((int)this + 0x1d0) = 1;
  }
  else {
    *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) | 8;
    F_00bd1a10((undefined *)((int)this + 0x1f0),param_3);
    *(undefined4 *)((int)this + 0x250) = *(undefined4 *)((int)this + 0x1f8);
    if (*(char *)((int)this + 0x213) != '\0') {
      *(undefined1 *)((int)this + 0x85) = 1;
      *(undefined4 *)((int)this + 0x1d0) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x104) = 1;
  *(undefined1 *)((int)this + 0x248) = 1;
  F_00bc2d00(this);
  *(uint *)((int)this + 0x138) =
       *(uint *)((int)this + 0x138) ^ ((param_2 & 0xff) * 4 ^ *(uint *)((int)this + 0x138)) & 4;
  *(undefined2 *)((int)this + 10) = 1;
  *(undefined4 *)((int)this + 0x1dc) = 3;
  F_00bd0d00(this);
  if ((((*(int *)((int)this + 0x24) == 6) &&
       (uVar2 = *(uint *)((int)this + 0xe0), (uVar2 & 0x10) == 0)) && ((uVar2 & 6) == 0)) &&
     ((uVar2 & 8) != 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00bd1210 */
uint F_00bd1210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd1210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_00bd17c0(this,*param_1);
  *(uint *)((int)this + 0xfc) = uVar2;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffffb;
  *(undefined4 *)((int)this + 200) = uVar1;
  *(undefined4 *)((int)this + 0x100) = uVar1;
  F_00bc2d00(this);
  *(undefined4 *)((int)this + 0x24c) = 0;
  uVar1 = REFG(float, 0x1087f04);
  if (param_2 != 0) {
    *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) | 8;
    F_00bd1a10((undefined *)((int)this + 0x1f0),param_2);
    *(undefined4 *)((int)this + 0x250) = *(undefined4 *)((int)this + 0x1f8);
    *(undefined1 *)((int)this + 0x248) = 1;
    uVar2 = F_00bd0d00(this);
    return uVar2;
  }
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffff7;
  *(undefined4 *)((int)this + 0x250) = uVar1;
  *(undefined1 *)((int)this + 0x248) = 1;
  uVar2 = F_00bd0d00(this);
  return uVar2;
}

/* ref: FUN_00bd12c0 */
uint F_00bd12c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0xbd12c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  uint param_7 = (uint)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_00bd17c0(param_1,*param_2);
  *(uint *)((int)param_1 + 0xfc) = uVar2;
  uVar1 = param_2[1];
  *(undefined4 *)((int)param_1 + 200) = uVar1;
  *(undefined4 *)((int)param_1 + 0x100) = uVar1;
  F_00bbb060((undefined *)((int)param_1 + 0x110),param_3);
  F_00bbb060((undefined *)((int)param_1 + 0x124),param_4);
  *(uint *)((int)param_1 + 0x138) = *(uint *)((int)param_1 + 0x138) & 0xfffffff7;
  *(undefined4 *)((int)param_1 + 0x1d0) = param_5;
  *(float *)((int)param_1 + 0x24c) = param_8;
  if (param_6 < 0) {
    uVar2 = *(uint *)((int)param_1 + 0x138) & 0xffffffbf;
    *(undefined4 *)((int)param_1 + 0x1d4) = 0;
  }
  else {
    uVar2 = *(uint *)((int)param_1 + 0x138) | 0x40;
    *(int *)((int)param_1 + 0x1d4) = param_6;
  }
  *(uint *)((int)param_1 + 0x138) = uVar2;
  F_00bc2d00(param_1);
  *(undefined1 *)((int)param_1 + 0x248) = 1;
  *(uint *)((int)param_1 + 0x138) =
       *(uint *)((int)param_1 + 0x138) ^
       ((param_7 & 0xff) * 4 ^ *(uint *)((int)param_1 + 0x138)) & 4;
  *(undefined4 *)((int)param_1 + 0x104) = 2;
  *(undefined2 *)((int)param_1 + 10) = 1;
  *(undefined4 *)((int)param_1 + 0x1dc) = 3;
  uVar2 = F_00bd0d00(param_1);
  return uVar2;
}

/* ref: FUN_00bd13a0 */
uint F_00bd13a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbd13a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint param_5 = (uint)gen_a5;
  uint uVar1;
  
  F_00bd17c0(this,param_1);
  *(undefined4 *)((int)this + 200) = 0xffffffff;
  F_00bbb060((undefined *)((int)this + 0x110),param_2);
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffff7;
  *(undefined4 *)((int)this + 0x1d0) = param_3;
  *(undefined4 *)((int)this + 0x24c) = 0;
  if (param_4 < 0) {
    uVar1 = *(uint *)((int)this + 0x138) & 0xffffffbf;
    *(undefined4 *)((int)this + 0x1d4) = 0;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x138) | 0x40;
    *(int *)((int)this + 0x1d4) = param_4;
  }
  *(uint *)((int)this + 0x138) = uVar1;
  F_00bc2d00(this);
  *(uint *)((int)this + 0x138) =
       *(uint *)((int)this + 0x138) ^ ((param_5 & 0xff) * 4 ^ *(uint *)((int)this + 0x138)) & 4;
  *(undefined4 *)((int)this + 0x104) = 4;
  *(undefined1 *)((int)this + 0x248) = 0;
  *(undefined2 *)((int)this + 10) = 1;
  *(undefined4 *)((int)this + 0x1dc) = 3;
  uVar1 = F_00bd0d00(this);
  return uVar1;
}

/* ref: FUN_00bd1460 */
uint F_00bd1460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xbd1460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint param_6 = (uint)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0xd0) = param_1;
  F_00bbb060((undefined *)((int)this + 0x110),param_2);
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffff7;
  *(undefined4 *)((int)this + 0x1d0) = param_3;
  *(float *)((int)this + 0x24c) = (float)param_5;
  if (param_4 < 0) {
    uVar1 = *(uint *)((int)this + 0x138) & 0xffffffbf;
    *(undefined4 *)((int)this + 0x1d4) = 0;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x138) | 0x40;
    *(int *)((int)this + 0x1d4) = param_4;
  }
  *(uint *)((int)this + 0x138) = uVar1;
  *(undefined4 *)((int)this + 0x244) = param_8;
  *(undefined4 *)((int)this + 0x240) = param_7;
  F_00bc2d00(this);
  *(uint *)((int)this + 0x138) =
       *(uint *)((int)this + 0x138) ^ ((param_6 & 0xff) * 4 ^ *(uint *)((int)this + 0x138)) & 4;
  *(undefined4 *)((int)this + 0x104) = 5;
  *(undefined1 *)((int)this + 0x248) = (undefined1)param_9;
  *(undefined2 *)((int)this + 10) = 1;
  *(undefined4 *)((int)this + 0x1dc) = 3;
  uVar1 = F_00bd0d00(this);
  return uVar1;
}

/* ref: FUN_00bd1530 */
uint F_00bd1530(unsigned int gen_a0)
{
  GEN_ENTER(0xbd1530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x24) == 6) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) | 0x10;
  uVar1 = F_00bd0d00(this);
  return uVar1;
}

/* ref: FUN_00bd1550 */
uint F_00bd1550(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbd1550u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = F_00bc1e50(param_1,0);
  if ((char)uVar2 != '\0') {
    F_00bc3440(param_1,2,0,0);
  }
  pcVar1 = *(gen_code32 *)(*param_1 + 0x1c);
  param_1[0x38] = param_1[0x38] | 0x40;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0xc)) = (int)param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*pcVar1)(param_1,0xc,&(*(undefined4 *)(gen_frame + 0x8)));
  F_00bd0e90(param_1,param_2,0);
  uVar3 = F_00bc2a40(param_1);
  if (uVar3 != 0) {
    F_00bc3bb0(0);
  }
  pcVar1 = *(gen_code32 *)(*param_1 + 0x1c);
  param_1[0x38] = param_1[0x38] & 0xffffff9f;
  uVar3 = (*pcVar1)(param_1,0xd,&REFG(undefined, 0x13056c0));
  if ((char)uVar2 != '\0') {
    uVar3 = F_00bc3440(param_1,2,1,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_00bd1610 */
uint F_00bd1610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd1610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  
  *(undefined4 *)((int)this + 0x108) = param_2;
  uVar5 = *(uint *)(param_1 + 0xc);
  *(uint *)((int)this + 0x1c8) = uVar5;
  if (0 < (int)uVar5) {
    puVar1 = (undefined4 *)
             F_00406bb0(-(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar5 * 8),0,0);
    *(undefined4 * PTR32 *)((int)this + 0x1cc) = puVar1;
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 8) + iVar4;
      iVar4 = iVar4 + 8;
      puVar1[1] = *(undefined4 *)(iVar2 + param_1);
      *puVar1 = *(undefined4 *)(iVar2 + 4 + param_1);
      puVar1 = puVar1 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  pcVar3 = ((char *)GEN_TOP((*(int *)(param_1 + 0x10) + param_1)));
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) | 0x20;
    uVar5 = F_00bd13a0(this,pcVar3,0,1,0xffffffff,1);
    return uVar5;
  }
  *(int *)((int)this + 0xd0) = *(int *)(param_1 + 0x14) + param_1;
  F_00bbb060((undefined *)((int)this + 0x110),0);
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xffffffb7;
  *(undefined4 *)((int)this + 0x1d0) = 1;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  F_00bc2d00(this);
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) | 4;
  *(undefined4 *)((int)this + 0x104) = 5;
  *(undefined1 *)((int)this + 0x248) = 0;
  *(undefined2 *)((int)this + 10) = 1;
  *(undefined4 *)((int)this + 0x1dc) = 3;
  uVar5 = F_00bd0d00(this);
  return uVar5;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf35 */
uint F_00bd1730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd1730u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint * puVar3;
  undefined4 * puVar4;
  
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c8)));
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc)));
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = iVar1 + -1;
    if (puVar4[1] == (*(int *)&gen_args[1])) break;
    puVar4 = puVar4 + 2;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))))((*(undefined * PTR32 *)&gen_args[0]));
  if (uVar2 != 0) {
    (*(int *)&gen_args[1]) = *puVar4;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))))((*(undefined * PTR32 *)&gen_args[0]));
    puVar3 = (uint *)F_00bd1d40((undefined *)(uVar2 + 0x84),&(*(int *)&gen_args[1]));
    return *puVar3;
  }
  uVar2 = F_0052ed20(REFG(undefined4, 0x1375b00),*puVar4,0,0);
  return uVar2;
}

/* ref: FUN_00bd17c0 */
uint F_00bd17c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd17c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = *(int *)((int)this + 0xd4);
  if ((iVar2 != 0) && (iVar2 != (int)this + 0xa0)) {
    F_00406b30(iVar2);
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  if ((int)pcVar3 - (int)(param_1 + 1) < 0x28) {
    uVar4 = (int)this + 0xa0;
    F_00c49908(uVar4,0x28,param_1);
    *(uint *)((int)this + 0xd4) = uVar4;
    return uVar4;
  }
  iVar2 = ((int)pcVar3 - (int)(param_1 + 1)) + 1;
  uVar4 = F_00406bb0(iVar2,0,0);
  F_00c49908(uVar4,iVar2,param_1);
  *(uint *)((int)this + 0xd4) = uVar4;
  return uVar4;
}

/* ref: FUN_00bd1870 */
uint F_00bd1870(unsigned int gen_a0)
{
  GEN_ENTER(0xbd1870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bd18a0 */
byte F_00bd18a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd18a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if ((*(int *)((int)this + 4) != -1) && (param_1[1] != -1)) {
    return param_1[1] == *(int *)((int)this + 4);
  }
  pbVar2 = *(byte * PTR32 *)this;
  if (pbVar2 == (byte *)0x0) {
    return 0;
  }
  pbVar3 = (byte *)*param_1;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf23 */
uint F_00bd1920(unsigned int gen_a0)
{
  GEN_ENTER(0xbd1920u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xd4);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf25 */
uint F_00bd1930(unsigned int gen_a0)
{
  GEN_ENTER(0xbd1930u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  return in_ecx;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf26 */
uint F_00bd1940(void)
{
  GEN_ENTER(0xbd1940u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf27 */
uint F_00bd1950(void)
{
  GEN_ENTER(0xbd1950u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf36 */
uint F_00bd1960(unsigned int gen_a0)
{
  GEN_ENTER(0xbd1960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x108);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf37 */
uint F_00bd1970(unsigned int gen_a0)
{
  GEN_ENTER(0xbd1970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(byte *)(in_ecx + 0x138) & 8) != 0) {
    return in_ecx + 0x1f0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf40 */
unsigned int F_00bd1990(unsigned int gen_a0)
{
  GEN_ENTER(0xbd1990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(uint *)(in_ecx + 0xe0) = *(uint *)(in_ecx + 0xe0) | 2;
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf39 */
uint F_00bd19a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd19a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x110;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf38 */
uint F_00bd19b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd19b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(byte *)(in_ecx + 0xe0) & 0x60) == 0) {
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf43 */
unsigned int F_00bd19d0(void)
{
  GEN_ENTER(0xbd19d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf20 */
unsigned int F_00bd19e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd19e0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf44 */
unsigned int F_00bd19f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd19f0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf45 */
unsigned int F_00bd1a00(unsigned int gen_a0)
{
  GEN_ENTER(0xbd1a00u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00bd1a10 */
unsigned int F_00bd1a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd1a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)((int)param_1 + 0x21);
  *(undefined1 *)((int)this + 0x22) = *(undefined1 *)((int)param_1 + 0x22);
  *(undefined1 *)((int)this + 0x23) = *(undefined1 *)((int)param_1 + 0x23);
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  return 0;
}

/* ref: FUN_00bd1a90 */
uint F_00bd1a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd1a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf0 */
uint F_00bd1ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd1ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1106724));
  F_00bcf490(this);
  *(undefined * PTR32 * PTR32 *)(this + 0x124) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  *(undefined * PTR32 * PTR32 *)(this + 0x110) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  F_00bc2fd0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd1af0 */
uint F_00bd1af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd1af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bd1b10 */
undefined4 * F_00bd1b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd1b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00bd1b40 */
uint F_00bd1b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd1b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00bd1b80 */
uint F_00bd1b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbd1b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[3]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    if (*(uint *)(piVar1[2] + 0xc) < (uint)(*(int * PTR32 *)&gen_args[3])[3]) {
      F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,piVar1[2],(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00b7d0d0(&(*(int * PTR32 *)&gen_args[3]));
      if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)piVar2[3]) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x15))) != '\0') {
          F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)piVar2[3]) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00b7d290(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) || ((uint)piVar2[3] < (uint)(*(int * PTR32 *)&gen_args[3])[3])) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x15))) != '\0') {
          F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar3 = (undefined4 *)F_00b7db30((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00bd1ce0 */
uint F_00bd1ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbd1ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0x136);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_3;
    puVar1[4] = param_3[1];
  }
  F_00bd1b80(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00bd1d40 */
uint F_00bd1d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd1d40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(char *)((int)puVar4[1] + 0x15) == '\0') {
    puVar3 = (undefined4 *)puVar4[1];
    do {
      if ((uint)puVar3[3] < *(*(uint * PTR32 *)&gen_args[1])) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
        puVar4 = puVar3;
      }
      puVar3 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar4 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) && ((uint)puVar4[3] <= *(*(uint * PTR32 *)&gen_args[1]))) {
    return (uint)(puVar4 + 4);
  }
  uVar1 = *(*(uint * PTR32 *)&gen_args[1]);
  puVar3 = (undefined4 *)F_004296a0(0x18,0,0x136);
  *puVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != (uint *)0x0) {
    puVar3[3] = uVar1;
    puVar3[4] = 0;
  }
  F_00bd1b80((*(undefined * PTR32 *)&gen_args[0]),&(*(uint * PTR32 *)&gen_args[1]),puVar4,puVar3);
  return (uint)((*(uint * PTR32 *)&gen_args[1]) + 4);
}

/* ref: FUN_00bd1de0 */
uint F_00bd1de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd1de0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * puVar1;
  
  puVar1 = (uint *)F_00bd1d40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))),&(*(undefined4 *)&gen_args[1]));
  return *puVar1;
}

/* ref: FUN_00bd1e60 */
byte F_00bd1e60(unsigned int gen_a0)
{
  GEN_ENTER(0xbd1e60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 10) = 0x1010000;
  *(undefined2 *)(in_ecx + 0xe) = 0;
  *(undefined1 *)(in_ecx + 0x10) = 0;
  *(undefined2 *)(in_ecx + 0x12) = 0;
  *(undefined1 *)(in_ecx + 0x14) = 0;
  return 0;
}

/* ref: FUN_00bd1e80 */
unsigned int F_00bd1e80(float gen_a0)
{
  GEN_ENTER(0xbd1e80u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf3 */
byte F_00bd1ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd1ea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0xf) != '\0') {
    return 1;
  }
  return *(char *)(in_ecx + 8) != '\0';
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf9 */
unsigned int F_00bd1ec0(void)
{
  GEN_ENTER(0xbd1ec0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf10 */
uint F_00bd1ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd1ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if ((param_1 != 0x12) && (param_1 != 0x1a)) {
    if (param_1 != 0x24) {
      return CONCAT31((int3)((uint)in_EAX >> 8),1);
    }
    if ((*(int *)(this + 0x2c) == 6) && (uVar1 = F_00be5a60(this), uVar1 == 0)) {
      F_00be5410(this);
    }
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf15 */
unsigned int F_00bd1f20(void)
{
  GEN_ENTER(0xbd1f20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00bd1f30 */
uint F_00bd1f30(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xbd1f30u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  
  iVar1 = *(int *)(param_1 + 0x24);
  uVar3 = (uint)*(ushort *)(iVar1 + 2);
  iVar5 = *(ushort *)(iVar1 + 4) + uVar3;
  if ((float10)param_2 < (float10)uVar3) {
    uVar3 = (uint)*(ushort *)(iVar1 + 2);
    param_2 = (float)uVar3;
  }
  fVar7 = (float10)iVar5;
  bVar2 = GEN_ISNAN(param_3);
  bVar6 = bVar2 || param_3 == 0.0;
  uVar4 = (uint)CONCAT11(bVar6 << 6 | bVar2 << 2 | 2U | !(0.0 <= param_3),(char)uVar3);
  if ((bVar2 != bVar6) || (fVar7 <= (float10)param_3)) {
    param_3 = (float)iVar5;
  }
  if (!(fVar7 <= (float10)param_2)) {
    bVar2 = GEN_ISNAN(param_3);
    bVar6 = bVar2 || param_3 == 0.0;
    uVar4 = (uint)CONCAT11(bVar6 << 6 | bVar2 << 2 | 2U | !(0.0 <= param_3),(char)uVar3);
    if ((bVar2 != bVar6) || (!((float10)param_3 < (float10)*(ushort *)(iVar1 + 2)))) {
      *(float *)(param_1 + 0x48) = param_2;
      *(float *)(param_1 + 0x4c) = param_3;
      *(undefined1 *)(param_1 + 0x28) = 1;
      return uVar4;
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return uVar4;
}

/* ref: FUN_00bd1fe0 */
byte F_00bd1fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd1fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x78);
  if (*(int *)(REFG(int, 0x1375b00) + 0x28) == 0) {
    if (pvVar2 != (undefined *)0x0) goto LAB_00bd20b0;
    iVar5 = *(int *)((int)this + 0x6c);
    if (iVar5 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar5 = *(int *)((int)this + 0x6c);
      if (iVar5 != 0) goto LAB_00bd2097;
    }
    else {
LAB_00bd2097: ;
      uVar1 = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)((int)this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x78);
    if (pvVar2 == (undefined *)0x0) {
      return 0;
    }
LAB_00bd20b0: ;
    piVar4 = (int *)F_00bbaf90(pvVar2);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x98))(piVar4);
    if ((char)uVar3 != '\0') {
      return 0;
    }
    return 1;
  }
  if (pvVar2 != (undefined *)0x0) goto LAB_00bd2032;
  iVar5 = *(int *)((int)this + 0x6c);
  if (iVar5 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar5 = *(int *)((int)this + 0x6c);
    if (iVar5 != 0) goto LAB_00bd2015;
  }
  else {
LAB_00bd2015: ;
    uVar1 = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x78);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
LAB_00bd2032: ;
  pvVar2 = (undefined *)F_00bbaf50(pvVar2);
  if (pvVar2 != (undefined *)0x0) {
    if ((*(uint *)((int)pvVar2 + 0x11c) & 0x102) != 0) {
      return 1;
    }
    uVar3 = F_00bd3ff0(this);
    if (((uVar3 == 0) && (piVar4 = (int *)F_00a5f290(pvVar2), piVar4 != (int *)0x0)) &&
       (uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x98))(piVar4), (char)uVar3 == '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bd2130 */
unsigned int F_00bd2130(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbd2130u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x38) = ((float)GEN_TOF(((float10)param_2 - (float10)*(float *)(in_ecx + 0x34))));
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf45 */
uint F_00bd2140(unsigned int gen_a0)
{
  GEN_ENTER(0xbd2140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  float fVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)(this + 0x70);
  if (piVar3 != (int *)0x0) goto LAB_00bd2172;
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar1 = *(int *)(this + 0x6c);
    if (iVar1 != 0) goto LAB_00bd2169;
  }
  else {
LAB_00bd2169: ;
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar1 + 4);
  }
  piVar3 = *(int * PTR32 *)(this + 0x70);
LAB_00bd2172: ;
  fVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xac))(piVar3);
  return (uint)gen_fl2bits(fVar2);
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf46 */
uint F_00bd2190(unsigned int gen_a0)
{
  GEN_ENTER(0xbd2190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x24) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x24) + 8)));
  }
  return 0;
}

/* ref: FUN_00bd21a0 */
uint F_00bd21a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd21a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x24);
  uVar3 = 0;
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x58) = 1;
    *(undefined4 *)((int)this + 0x5c) = 1;
    *(float *)((int)this + 0x34) =
         ((float)GEN_TOF(((float10)*(ushort *)(iVar1 + 2) + (float10)*(float *)((int)this + 0x3c))));
    uVar3 = (uint)*(ushort *)(iVar1 + 4);
    *(float *)((int)this + 0x38) = (float)uVar3;
    uVar2 = REFG(float, 0x1090708);
    *(undefined4 *)((int)this + 0x60) = 0;
    *(undefined4 *)((int)this + 0x50) = uVar2;
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf49 */
unsigned int F_00bd2200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd2200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  if (this[0x10] != (undefined1)0x0) goto LAB_00bd225a;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if ((char)uVar1 == '\0') goto LAB_00bd225a;
  if (*(int *)(this + 0x70) == 0) {
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar2 = *(int *)(this + 0x6c);
      if (iVar2 == 0) goto LAB_00bd223b;
    }
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar2 + 4);
  }
LAB_00bd223b: ;
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  }
LAB_00bd225a: ;
  *(undefined4 *)(this + 0x40) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf51 */
unsigned int F_00bd2270(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbd2270u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  code * pcVar1;
  
  if ((char)param_1[3] != '\0') {
    pcVar1 = *(gen_code32 *)(*param_1 + 0x70);
    param_1[0x10] = (int)gen_fl2bits((float)((float10)param_2 + ((float10)GEN_TOD(gen_bits2f(param_1[0x10])))))
    ;
    param_1[0x11] = (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0x11]))) + (float10)param_2))
    ;
    (*pcVar1)((undefined4)gen_fl2bits(param_2));
  }
  return 0;
}

/* ref: FUN_00bd22a0 */
uint F_00bd22a0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd22a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    F_00c22060(iVar1,param_2);
    ((code *)*(gen_code32 *)(*param_1 + 0x74))(param_1,iVar1);
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x78))(param_1,(undefined4)gen_fl2bits(param_2),param_3);
  param_1[0x14] = (int)gen_fl2bits(param_2);
  return uVar2;
}

/* ref: FUN_00bd22f0 */
uint F_00bd22f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd22f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = (uint)*(char *)(in_ecx + 0x29);
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
  case 1: ;
  case 2: ;
  case 6: ;
    *(undefined4 *)(in_ecx + 0x30) = 4;
    return uVar1;
  case 3: ;
    *(undefined4 *)(in_ecx + 0x30) = 3;
    return uVar1;
  case 4: ;
  case 5: ;
    *(undefined4 *)(in_ecx + 0x30) = 6;
    return uVar1;
  case 7: ;
    *(undefined4 *)(in_ecx + 0x30) = 7;
  }
  return uVar1;
}

/* ref: FUN_00bd2340 */
uint F_00bd2340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd2340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 != 0) && (uVar1 = *(uint *)((int)this + 0x60), uVar1 != 0)) {
    if (uVar2 <= uVar1) {
      *(uint *)((int)this + 0x60) = uVar1 - uVar2;
      *param_1 = 0;
      return uVar2;
    }
    uVar2 = uVar2 - uVar1;
    *param_1 = uVar2;
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf39 */
uint F_00bd2380(unsigned int gen_a0)
{
  GEN_ENTER(0xbd2380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xec))(this,4);
  return uVar1;
}

/* ref: FUN_00bd2390 */
float F_00bd2390(unsigned int gen_a0)
{
  GEN_ENTER(0xbd2390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)((int)this + 0x70);
  if (iVar1 != 0) goto LAB_00bd23c9;
  iVar1 = *(int *)((int)this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 != 0) goto LAB_00bd23b6;
  }
  else {
LAB_00bd23b6: ;
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
  }
  iVar1 = *(int *)((int)this + 0x70);
  if (iVar1 == 0) {
    return (float)(float10)0;
  }
LAB_00bd23c9: ;
  if (*(char *)(iVar1 + 0x30) == '\0') {
    if (*(char *)(iVar1 + 0x80) == '\0') {
      fVar2 = *(float *)(iVar1 + 0x58);
    }
    else {
      fVar2 = *(float *)(iVar1 + 0x6c);
    }
    return ((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)((int)this + 0x34))));
  }
  if (*(char *)((int)this + 0xd) == '\0') {
    return REFG(float, 0x1090708);
  }
  return *(float *)((int)this + 0x44);
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf60 */
uint F_00bd2410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbd2410u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xec))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00bd2420 */
uint F_00bd2420(unsigned int gen_a0)
{
  GEN_ENTER(0xbd2420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
  if (piVar3 != (int *)0x0) goto LAB_00bd2466;
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 == (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar1 = *(int *)((int)this + 0x6c);
      if (iVar1 != 0) goto LAB_00bd244c;
    }
    else {
LAB_00bd244c: ;
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar3 != (int *)0x0) goto LAB_00bd2459;
  }
  else {
LAB_00bd2459: ;
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3);
    *(uint *)((int)this + 0x74) = uVar2;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
LAB_00bd2466: ;
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x94))(piVar3);
  return uVar2;
}

/* ref: FUN_00bd2480 */
byte F_00bd2480(unsigned int gen_a0)
{
  GEN_ENTER(0xbd2480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
  if (piVar3 != (int *)0x0) goto LAB_00bd24c6;
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 == (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar1 = *(int *)((int)this + 0x6c);
      if (iVar1 != 0) goto LAB_00bd24ac;
    }
    else {
LAB_00bd24ac: ;
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar3 != (int *)0x0) goto LAB_00bd24b9;
  }
  else {
LAB_00bd24b9: ;
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3);
    *(uint *)((int)this + 0x74) = uVar2;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
LAB_00bd24c6: ;
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x98))(piVar3);
  return (byte)uVar2;
}

/* ref: FUN_00bd24f0 */
byte F_00bd24f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xbd24f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  if (*(int *)(in_ecx + 0x68) == param_2) {
    *(undefined4 *)(in_ecx + 0x68) = 0;
    *(float *)(in_ecx + 0x34) = ((float)GEN_TOF(((float10)param_3 + (float10)*(float *)(in_ecx + 0x34))));
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf62 */
byte F_00bd2520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd2520u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (*param_2 == in_ecx) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = in_ecx;
  return 1;
}

/* ref: FUN_00bd2540 */
uint F_00bd2540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd2540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x20);
  if ((*(char *)(uVar1 + 0x16) == '\0') && (param_1 != (undefined4 *)0x0)) {
    uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,1);
  }
  return uVar1;
}

/* ref: FUN_00bd2560 */
unsigned int F_00bd2560(unsigned int gen_a0)
{
  GEN_ENTER(0xbd2560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
    F_00c21b10(*(undefined * PTR32 *)((int)this + 0x20));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x20);
    if ((*(char *)((int)puVar1 + 0x16) == '\0') && (puVar1 != (undefined4 *)0x0)) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf1 */
byte F_00bd2590(unsigned int gen_a0)
{
  GEN_ENTER(0xbd2590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[8] == (undefined1)0x0) {
    *(undefined2 *)(this + 8) = 1;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined2 *)(this + 0x14) = 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf4 */
byte F_00bd25c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd25c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (this[0x10] != (undefined1)0x0) {
    return 1;
  }
  if ((this[8] != (undefined1)0x0) &&
     (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this), (char)uVar2 != '\0')) {
    uVar2 = F_0054d920(this);
    if ((uVar2 != 0) && (bVar1 = F_00bcf340(uVar2), bVar1 == 0)) {
      return 0;
    }
    F_00bd41b0(this);
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf5 */
byte F_00bd2600(unsigned int gen_a0)
{
  GEN_ENTER(0xbd2600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x11] != (undefined1)0x0) {
    return 1;
  }
  if (this[0x10] == (undefined1)0x0) {
    return 0;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
  this[0x11] = (undefined1)0x1;
  this[0x15] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf40 */
byte F_00bd2640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd2640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  *(undefined4 *)(this + 10) = 0x1000000;
  if ((char)param_1 != '\0') {
    this[0xe] = (undefined1)0x1;
    this[0x12] = (undefined1)0x0;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
    }
  }
  iVar1 = *(int *)(this + 0x70);
  if (iVar1 == 0) {
    iVar1 = *(int *)(this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar1 = *(int *)(this + 0x6c);
      if (iVar1 != 0) goto LAB_00bd2687;
    }
    else {
LAB_00bd2687: ;
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    iVar1 = *(int *)(this + 0x70);
    if (iVar1 == 0) goto LAB_00bd26b2;
  }
  if ((*(char *)(iVar1 + 0x80) == '\0') &&
     ((*(int *)(iVar1 + 0x74) == 0 || (1 < *(uint *)(iVar1 + 0x78))))) {
    return 0;
  }
LAB_00bd26b2: ;
  *(undefined4 *)(this + 0xd) = 0x1010101;
  *(undefined2 *)(this + 0x12) = 0;
  this[0x14] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x14))) = 1;
  }
  return 1;
}

/* ref: FUN_00bd2b80 */
byte F_00bd2b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbd2b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(int *)((int)this + 0x30) == 0) {
    if (param_1 < *((ushort *)GEN_TOP((*(int *)((int)this + 0x24) + 2)))) {
      return 0;
    }
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x29))) {
    case 0: ;
    case 1: ;
    case 2: ;
    case 6: ;
      *(undefined4 *)((int)this + 0x30) = 4;
      return 1;
    case 3: ;
      *(undefined4 *)((int)this + 0x30) = 3;
      return 1;
    case 4: ;
    case 5: ;
      *(undefined4 *)((int)this + 0x30) = 6;
      return 1;
    case 7: ;
      *(undefined4 *)((int)this + 0x30) = 7;
    }
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf59 */
byte F_00bd2c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd2c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 BVar1;
  byte bVar2;
  uint uVar3;
  byte local_5;
  
  BVar1 = this[0x29];
  local_5 = 0;
  if (((param_1 == 9) && (*(int *)(this + 0x2c) == 6)) && (bVar2 = F_00be54a0(this), bVar2 != 0))
  {
    return 0;
  }
  if (this[0xc] != (undefined1)0x0) {
    if (param_1 != 2) {
      F_00bd2970(this);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,param_1);
    local_5 = (byte)uVar3;
  }
  if (((param_1 != 9) && (param_1 != 6)) || ((BVar1 != (undefined1)0x6 && (BVar1 != (undefined1)0x7))))
  {
    if (((param_1 == 3) || (param_1 == 4)) || ((param_1 == 5 || (param_1 == 9)))) {
      *(undefined4 *)(this + 10) = 0x1000000;
      *(undefined2 *)(this + 0xe) = 0x101;
      this[0x10] = (undefined1)0x1;
      *(undefined2 *)(this + 0x12) = 0;
      this[0x14] = (undefined1)0x0;
      if (*(int *)(this + 4) == 0) {
        return local_5;
      }
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x14))) = 1;
      return local_5;
    }
    if ((BVar1 != (undefined1)0x1) && (BVar1 != (undefined1)0x2)) {
      ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,1);
      return local_5;
    }
  }
  this[0x14] = (undefined1)0x1;
  *(undefined2 *)(this + 0x12) = 0x101;
  *(undefined2 *)(this + 10) = 0x100;
  return local_5;
}

/* ref: FUN_00bd2d10 */
uint F_00bd2d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd2d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  if (param_1 == 0) {
    uVar2 = F_00406b90(0x54,0,0);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00c219a0(uVar2);
    }
  }
  else {
    uVar2 = F_00c219a0(param_1);
    *(undefined1 *)(uVar2 + 0x16) = 1;
  }
  *(undefined * PTR32 *)(uVar2 + 4) = this;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x20);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)((int)puVar1 + 0x16) == '\0')) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(uint *)((int)this + 0x20) = uVar2;
  return uVar2;
}

/* ref: FUN_00bd2d80 */
uint F_00bd2d80(unsigned int gen_a0)
{
  GEN_ENTER(0xbd2d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  uVar1 = REFG(float, 0x1090708);
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1106874));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 1;
  *(undefined1 *)((int)this + 0x2a) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0xffffffff;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined2 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  if (*(int *)((int)this + 0x78) == 0) {
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar2 = *(int *)((int)this + 0x6c);
      if (iVar2 == 0) {
        return (uint)this;
      }
    }
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  return (uint)this;
}

/* ref: FUN_00bd2e60 */
uint F_00bd2e60(unsigned int gen_a0)
{
  GEN_ENTER(0xbd2e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1106874));
  uVar2 = 0;
  if (*(int *)((int)this + 0x78) != 0) {
    uVar2 = F_00b59c20(REFG(void * PTR32, 0x14c4e78),*(int *)((int)this + 0x78));
  }
  if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
    uVar2 = F_00c21b10(*(undefined * PTR32 *)((int)this + 0x20));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x20);
    if ((*(char *)((int)puVar1 + 0x16) == '\0') && (puVar1 != (undefined4 *)0x0)) {
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf2 */
byte F_00bd2eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd2eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0xe] == (undefined1)0x0) {
    if (this[8] == (undefined1)0x0) {
      return 0;
    }
    if (this[0xd] == (undefined1)0x0) {
      if (this[0xb] == (undefined1)0x0) {
        return 0;
      }
    }
    else {
      if ((this[0x29] != (undefined1)0x6) && (this[0x29] != (undefined1)0x7)) {
        return 0;
      }
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      F_00bd2970(this);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,1);
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf12 */
unsigned int F_00bd2f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0xbd2f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined1 *)(param_1 + 0x29) = (undefined1)param_4;
  *(undefined1 *)(param_1 + 0x2a) = (undefined1)param_5;
  *(int *)(param_1 + 0x24) = param_2;
  if ((char)param_6 == '\0') {
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) & 0xfffb;
  }
  else {
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) | 4;
  }
  if ((char)param_7 == '\0') {
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) & 0xfff7;
  }
  else {
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) | 8;
  }
  *(float *)(param_1 + 0x3c) = param_8;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) & 0xfffe;
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) & 0xfffd;
    *(undefined4 *)(param_1 + 0x58) = 1;
    *(undefined4 *)(param_1 + 0x5c) = 1;
    *(float *)(param_1 + 0x34) = ((float)GEN_TOF(((float10)*(ushort *)(param_2 + 2) + (float10)param_8)));
    *(float *)(param_1 + 0x38) = (float)*(ushort *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf16 */
unsigned int F_00bd2fb0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbd2fb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined4 uVar2;
  
  *(int *)(param_1 + 0x24) = param_2;
  if (param_2 != 0) {
    *(float *)(param_1 + 0x3c) = param_3;
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) & 0xfffe;
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) & 0xfffd;
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x58) = 1;
      *(undefined4 *)(param_1 + 0x5c) = 1;
      *(float *)(param_1 + 0x34) =
           ((float)GEN_TOF(((float10)*(ushort *)(iVar1 + 2) + (float10)*(float *)(param_1 + 0x3c))));
      *(float *)(param_1 + 0x38) = (float)*(ushort *)(iVar1 + 4);
      uVar2 = REFG(float, 0x1090708);
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x50) = uVar2;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return 0;
}

/* ref: FUN_00bd3040 */
uint F_00bd3040(unsigned int gen_a0)
{
  GEN_ENTER(0xbd3040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(uint *)((int)this + 100) != 0xffffffff) {
    return *(uint *)((int)this + 100);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 != (int *)0x0) goto LAB_00bd307e;
  iVar1 = *(int *)((int)this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 != 0) goto LAB_00bd306d;
  }
  else {
LAB_00bd306d: ;
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
LAB_00bd307e: ;
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x6c))(piVar3);
  *(undefined4 *)((int)this + 100) = 0;
  if ((uVar2 != 0) && (uVar2 = F_00be38d0(uVar2), uVar2 != 0)) {
    *(undefined4 *)((int)this + 100) = *(undefined4 *)(uVar2 + 0xc);
    *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) | 2;
  }
  return *(uint *)((int)this + 100);
}

/* ref: FUN_00bd30b0 */
uint F_00bd30b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd30b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00bd2480(this);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    if ((char)param_1 != '\0') {
      uVar2 = F_00bd3f80(this);
      if (uVar2 != 0) {
        *(undefined1 *)(uVar2 + 0xe6) = 1;
      }
    }
    *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) | 0x20;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf48 */
uint F_00bd3200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd3200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  code * pcVar2;
  undefined4 uVar3;
  uint in_EAX = 0;
  
  if (((char)param_1 == '\0') || (((byte)this[0x7c] & 1) == 0)) {
    iVar1 = *(int *)(this + 0x24);
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0x58) = 1;
      *(undefined4 *)(this + 0x5c) = 1;
      *(float *)(this + 0x34) =
           ((float)GEN_TOF(((float10)*(ushort *)(iVar1 + 2) + (float10)*(float *)(this + 0x3c))));
      *(float *)(this + 0x38) = (float)*(ushort *)(iVar1 + 4);
      uVar3 = REFG(float, 0x1090708);
      *(undefined4 *)(this + 0x60) = 0;
      *(undefined4 *)(this + 0x50) = uVar3;
      *(undefined4 *)(this + 0x30) = 0;
    }
    *(undefined4 *)(this + 10) = 0;
    *(undefined2 *)(this + 0xe) = 0;
    this[0x10] = (undefined1)0x0;
    *(undefined2 *)(this + 0x12) = 0;
    this[0x14] = (undefined1)0x0;
    pcVar2 = *(gen_code32 *)(*(int *)this + 0x6c);
    *(undefined4 *)(this + 0x44) = 0;
    in_EAX = (*pcVar2)(this);
  }
  return in_EAX;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf50 */
uint F_00bd3280(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbd3280u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1[4]);
  if ((char)param_1[4] == '\0') {
    if ((char)param_1[3] != '\0') {
      param_1[0x10] =
           (int)gen_fl2bits((float)((float10)param_2 + ((float10)GEN_TOD(gen_bits2f(param_1[0x10])))));
    }
    if ((*(byte *)(param_1 + 0x1f) & 1) == 0) {
      uVar1 = F_00bd2a10(param_1,0);
    }
    if ((char)param_1[3] != '\0') {
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x70))(param_1,(undefined4)gen_fl2bits(param_2));
    }
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf54 */
byte F_00bd3380(unsigned int gen_a0)
{
  GEN_ENTER(0xbd3380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pBVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  
  if (*(int *)(this + 0x30) == 0) {
    return 1;
  }
  bVar2 = F_00bd2480(this);
  if ((bVar2 != 0) && (uVar3 = F_00b5c7e0(*(undefined4 *)(this + 0x2c)), uVar3 == 1)) {
    return 1;
  }
  if (*(int *)(this + 0x2c) == 6) {
    this_00 = (undefined *)F_00a0b580(this);
    uVar3 = F_0054d950(this);
    uVar3 = F_00bcfbe0(uVar3);
    uVar4 = F_00be5a60(this);
    uVar5 = F_00bd3040(this);
    bVar2 = F_00bc4640(this_00,uVar5,uVar4,uVar3);
    if (bVar2 == 0) {
      pBVar1 = this + 0x54;
      if ((!GEN_ISNAN(*(float *)pBVar1) && (!(0.0 < *(float *)pBVar1) && *(float *)pBVar1 != 0.0)) &&
         (uVar3 = F_0054d920(this), uVar3 != 0)) {
        fVar6 = F_00531220(uVar3);
        *(float *)(this + 0x54) = (float)fVar6;
      }
      bVar2 = F_00bd3f20(this);
      return bVar2 != 0;
    }
    if (*(float *)&REFG(undefined, 0x1088114) <= *(float *)(this + 0x54)) {
      uVar3 = F_0054d920(this);
      fVar6 = F_00531220(uVar3);
      *(float *)(this + 0x44) =
           ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar6 - (float10)*(float *)(this + 0x54)))) +
                  (float10)*(float *)(this + 0x44))));
    }
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffdf;
  if (*(int *)(this + 0x30) == 2) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this,1);
    if (((byte)this[0x7c] >> 5 & 1) != 0) {
      return 0;
    }
    *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
    if (this[0xe] == (undefined1)0x0) {
      *(undefined4 *)(this + 10) = 0x1010000;
    }
    if (this[0x29] != (undefined1)0x4) goto switchD_00bd34c1_default;
  }
  else {
    ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this,2);
    if (((byte)this[0x7c] >> 5 & 1) != 0) {
      if (*(int *)(this + 0x30) != 7) {
        return 0;
      }
      if (this[0xd] != (undefined1)0x0) {
        return 0;
      }
      F_00bd1e60(this);
      return 0;
    }
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x30))) {
    case 4: ;
    case 7: ;
      F_00bd1e60(this);
      *(undefined4 *)(this + 0x30) = 0;
      return 1;
    case 5: ;
      *(undefined4 *)(this + 0xc) = 0;
      this[0x10] = (undefined1)0x0;
      *(undefined2 *)(this + 0x12) = 0;
      this[0x14] = (undefined1)0x0;
      break;
    case 6: ;
      break;
    default: ;
      goto switchD_00bd34c1_default;
    }
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,1);
switchD_00bd34c1_default: ;
  *(undefined4 *)(this + 0x30) = 0;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf38 */
byte F_00bd3510(unsigned int gen_a0)
{
  GEN_ENTER(0xbd3510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (this[0xe] != (undefined1)0x0) {
    return 1;
  }
  bVar1 = F_00bd2480(this);
  if (bVar1 == 0) {
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x20;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf57 */
unsigned int F_00bd3530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd3530u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float10 fVar2;
  
  if (param_1[0xc] != 0) {
    return 0;
  }
  if (param_1[0x1a] != 0) {
    return 0;
  }
  if ((param_2 == 6) && ((*(byte *)(param_1 + 0x1f) & 1) != 0)) {
    return 0;
  }
  iVar1 = param_1[0x1c];
  if (iVar1 != 0) goto LAB_00bd3586;
  iVar1 = param_1[0x1b];
  if (iVar1 == 0) {
    if (param_1[1] != 0) {
      param_1[0x1b] = *(int *)(param_1[1] + 4);
    }
    iVar1 = param_1[0x1b];
    if (iVar1 != 0) goto LAB_00bd357d;
  }
  else {
LAB_00bd357d: ;
    param_1[0x1c] = *(int *)(iVar1 + 4);
  }
  iVar1 = param_1[0x1c];
LAB_00bd3586: ;
  if (*(char *)(iVar1 + 0x30) == '\0') {
    if (*(char *)(iVar1 + 0x80) == '\0') {
      param_2 = *(uint *)(iVar1 + 0x58);
    }
    else {
      param_2 = *(uint *)(iVar1 + 0x6c);
    }
  }
  else {
    fVar2 = (float10)*(int *)(iVar1 + 0x34);
    if (*(int *)(iVar1 + 0x34) < 0) {
      fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    param_2 = (uint)gen_fl2bits((float)fVar2);
  }
  if (((float10)GEN_TOD(gen_bits2f(param_1[0xd]))) <= ((float10)GEN_TOD(gen_bits2f(param_2)))) {
    if ((char)param_1[10] == '\0') {
      *(undefined4 *)((int)param_1 + 10) = 0x1000000;
      F_00bd41b0(param_1);
      return 0;
    }
    if ((param_1[0xb] != 0) && (param_1[0xb] != 7)) {
      F_00bd22f0(param_1);
      return 0;
    }
    ((code *)*(gen_code32 *)(*param_1 + 0x84))(param_1,1);
    param_1[0x18] = param_1[0x18] + 1;
    *(undefined4 *)((int)param_1 + 10) = 0x1010000;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf58 */
byte F_00bd3620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd3620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if (*(int *)(this + 0x30) != 0) {
    return 1;
  }
  if (*(int *)(this + 0x68) != 0) {
    return 0;
  }
  if ((param_1 == 6) && (((byte)this[0x7c] & 1) != 0)) {
    return 0;
  }
  iVar1 = *(int *)(this + 0x70);
  if (iVar1 != 0) goto LAB_00bd3669;
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar1 = *(int *)(this + 0x6c);
    if (iVar1 != 0) goto LAB_00bd3660;
  }
  else {
LAB_00bd3660: ;
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar1 + 4);
  }
  iVar1 = *(int *)(this + 0x70);
LAB_00bd3669: ;
  if ((uint)*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 2))) <= *(uint *)(iVar1 + 0x34)) {
    if (this[0x28] != (undefined1)0x0) {
      if ((*(int *)(this + 0x2c) != 0) && (*(int *)(this + 0x2c) != 7)) {
        F_00bd22f0(this);
        return 1;
      }
      *(undefined4 *)(this + 0x30) = 2;
      return 1;
    }
    *(undefined4 *)(this + 10) = 0x1000000;
    F_00bd41b0(this);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf47 */
uint F_00bd37f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd37f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  if ((this[0xc] != (undefined1)0x0) || (this[0xd] != (undefined1)0x0)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x88))(2);
    *(undefined4 *)(this + 10) = 0;
  }
  F_00bd30e0(this);
  uVar1 = REFG(float, 0x1090708);
  uVar2 = *(uint *)(this + 0x24);
  if (uVar2 != 0) {
    *(undefined4 *)(this + 0x58) = 1;
    *(undefined4 *)(this + 0x5c) = 1;
    *(float *)(this + 0x34) =
         ((float)GEN_TOF(((float10)*(ushort *)(uVar2 + 2) + (float10)*(float *)(this + 0x3c))));
    *(float *)(this + 0x38) = (float)*(ushort *)(uVar2 + 4);
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0x50) = uVar1;
    *(undefined4 *)(this + 0x30) = 0;
  }
  *(undefined4 *)(this + 10) = 0;
  *(undefined2 *)(this + 0xe) = 0;
  this[0x10] = (undefined1)0x0;
  *(undefined2 *)(this + 0x12) = 0;
  this[0x14] = (undefined1)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x54) = uVar1;
  if (*(int *)(this + 0x20) != 0) {
    F_00c219f0();
  }
  if (*(int *)(this + 0x24) != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this);
  }
  return uVar2;
}

/* ref: FUN_00bd3ea0 */
uint F_00bd3ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd3ea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x30) = param_2;
  return param_2;
}

/* ref: FUN_00bd3ed0 */
unsigned int F_00bd3ed0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbd3ed0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x40) = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(in_ecx + 0x40))));
  return 0;
}

/* ref: FUN_00bd3ef0 */
unsigned int F_00bd3ef0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbd3ef0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x44) = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(in_ecx + 0x44))));
  return 0;
}

/* ref: FUN_00bd3f20 */
byte F_00bd3f20(unsigned int gen_a0)
{
  GEN_ENTER(0xbd3f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)((int)this + 0x74);
  if (iVar1 != 0) goto LAB_00bd3f6a;
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 == (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar1 = *(int *)((int)this + 0x6c);
      if (iVar1 != 0) goto LAB_00bd3f50;
    }
    else {
LAB_00bd3f50: ;
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar3 != (int *)0x0) goto LAB_00bd3f5d;
  }
  else {
LAB_00bd3f5d: ;
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3);
    *(uint *)((int)this + 0x74) = uVar2;
  }
  iVar1 = *(int *)((int)this + 0x74);
LAB_00bd3f6a: ;
  if (iVar1 != 0) {
    return *(int *)(iVar1 + 0xdc) != 0;
  }
  return 0;
}

/* ref: FUN_00bd3f80 */
uint F_00bd3f80(unsigned int gen_a0)
{
  GEN_ENTER(0xbd3f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)((int)this + 0x74);
  if (iVar1 != 0) goto LAB_00bd3fca;
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 == (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar1 = *(int *)((int)this + 0x6c);
      if (iVar1 != 0) goto LAB_00bd3fb0;
    }
    else {
LAB_00bd3fb0: ;
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar3 != (int *)0x0) goto LAB_00bd3fbd;
  }
  else {
LAB_00bd3fbd: ;
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3);
    *(uint *)((int)this + 0x74) = uVar2;
  }
  iVar1 = *(int *)((int)this + 0x74);
LAB_00bd3fca: ;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xdc) != 0)) {
    return *((uint *)GEN_TOP((*(int *)(iVar1 + 0xdc) + 4)));
  }
  return 0;
}

/* ref: FUN_00bd3ff0 */
uint F_00bd3ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd3ff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ecx + 0x78);
  if (iVar2 != 0) goto LAB_00bd402e;
  iVar2 = *(int *)(in_ecx + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    iVar2 = *(int *)(in_ecx + 0x6c);
    if (iVar2 != 0) goto LAB_00bd4019;
  }
  else {
LAB_00bd4019: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(in_ecx + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar2 = *(int *)(in_ecx + 0x78);
LAB_00bd402e: ;
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x12) == '\0')) {
    return *(uint *)(iVar2 + 4);
  }
  return 0;
}

/* ref: FUN_00bd4050 */
uint F_00bd4050(unsigned int gen_a0)
{
  GEN_ENTER(0xbd4050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd408a;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd4075;
  }
  else {
LAB_00bd4075: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
LAB_00bd408a: ;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_00bbaf50(this_00);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00bd40a0 */
uint F_00bd40a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd40a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd40da;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd40c5;
  }
  else {
LAB_00bd40c5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
LAB_00bd40da: ;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_00bbaf90(this_00);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00bd4130 */
uint F_00bd4130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x48 + param_2 * 0x30);
}

/* ref: FUN_00bd4150 */
uint F_00bd4150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((in_ecx + (param_2 * 3 + 3) * 0x10))) >> 4 & 1;
}

/* ref: FUN_00bd41b0 */
byte F_00bd41b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd41b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0xd) = 0x1010101;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf0 */
uint F_00bd4280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1106874));
  if (*(int *)(this + 0x78) != 0) {
    F_00b59c20(REFG(void * PTR32, 0x14c4e78),*(int *)(this + 0x78));
  }
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_00c21b10(*(undefined * PTR32 *)(this + 0x20));
    puVar1 = *(undefined4 * PTR32 *)(this + 0x20);
    if ((*(char *)((int)puVar1 + 0x16) == '\0') && (puVar1 != (undefined4 *)0x0)) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    *(undefined4 *)(this + 0x20) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd42f0 */
unsigned int F_00bd42f0(float gen_a0)
{
  GEN_ENTER(0xbd42f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd4310 */
uint F_00bd4310(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xbd4310u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  undefined * this;
  undefined4 uVar6;
  
  this = *(undefined * PTR32 *)(param_1 + 0x6c);
  iVar1 = *(int *)(param_1 + 0x24);
  if (this == (undefined *)0x0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar4 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 4)));
      *(uint *)(param_1 + 0x6c) = uVar4;
    }
    this = *(undefined * PTR32 *)(param_1 + 0x6c);
    if (this == (undefined *)0x0) {
      return uVar4;
    }
  }
  F_00beb760(this);
  uVar4 = F_00beb670(this);
  if (uVar4 != 0) {
    iVar2 = *(int *)(iVar1 + 0x10);
    iVar5 = 0;
    uVar6 = 0;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else if (iVar2 == 1) {
      iVar5 = 1;
    }
    else if (iVar2 == 2) {
      iVar5 = 2;
    }
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar1 + 0xc))) {
    case 0: ;
      uVar6 = 1;
      break;
    case 1: ;
      uVar6 = 0;
      break;
    case 2: ;
      uVar6 = 2;
      break;
    case 3: ;
      uVar6 = 3;
    }
    iVar1 = iVar5 * 0x7a0 + 0x1e10 + uVar4;
    if ((char)param_2 != '\0') {
      bVar3 = F_006a5bf0(iVar1,uVar6,(float)(float10)0);
      return CONCAT31(extraout_var,bVar3);
    }
    F_006a5c40(iVar1,param_3);
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::ActivePassiveScaleClip::vf33 */
uint F_00bd43e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd43e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bd4310(this,1,(float)(float10)0);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ActivePassiveScaleClip::vf34 */
byte F_00bd43f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd43f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bd4310(this,0,(float)(float10)1);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ActivePassiveScaleClip::vf28 */
uint F_00bd44a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd44a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bd4410(this,0);
  return uVar1;
}

/* ref: Client::System::Scheduler::Lua::LuaInvoker::UserDataInterface::vf0 */
uint F_00bd44d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd44d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1106a98));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd4500 */
unsigned int F_00bd4500(float gen_a0)
{
  GEN_ENTER(0xbd4500u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd4530 */
uint F_00bd4530(unsigned int gen_a0)
{
  GEN_ENTER(0xbd4530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined * this_00;
  uint in_ecx;
  undefined3 extraout_var = 0;
  
  iVar1 = *(int *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(iVar1 + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd456b;
  iVar4 = *(int *)(iVar1 + 0x6c);
  if (iVar4 == 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      *(undefined4 *)(iVar1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 4)));
    }
    iVar4 = *(int *)(iVar1 + 0x6c);
    if (iVar4 != 0) goto LAB_00bd4556;
  }
  else {
LAB_00bd4556: ;
    uVar2 = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(iVar1 + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  this_00 = *(undefined * PTR32 *)(iVar1 + 0x78);
LAB_00bd456b: ;
  if (this_00 != (undefined *)0x0) {
    in_ecx = F_00bbaf90(this_00);
    if (in_ecx != 0) {
      bVar3 = F_00a9f620(in_ecx);
      return CONCAT31(extraout_var,bVar3);
    }
  }
  return 0;
}

/* ref: FUN_00bd4610 */
uint F_00bd4610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1106a98));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd4640 */
uint F_00bd4640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd4660 */
uint F_00bd4660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x14) + param_1 * 8 + (int)this;
}

/* ref: FUN_00bd4840 */
unsigned int F_00bd4840(float gen_a0)
{
  GEN_ENTER(0xbd4840u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf18 */
unsigned int F_00bd4860(unsigned int gen_a0)
{
  GEN_ENTER(0xbd4860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x2c) == 0x4b) {
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(REFG(int, 0x1371280) + 0x2c);
    *(undefined4 *)(this + 0x8c) = *(undefined4 *)(REFG(int, 0x1371280) + 0x30);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf24 */
unsigned int F_00bd4890(unsigned int gen_a0)
{
  GEN_ENTER(0xbd4890u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x2c) == 0x4b) {
    *(undefined4 *)(REFG(int, 0x1371280) + 0x2c) = *(undefined4 *)(in_ecx + 0x88);
    *(undefined4 *)(REFG(int, 0x1371280) + 0x30) = *(undefined4 *)(in_ecx + 0x8c);
  }
  return 0;
}

/* ref: FUN_00bd48c0 */
uint F_00bd48c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd48c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint in_EAX = 0;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x2c) != 0x68) {
    return in_EAX;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd4907;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd48ee;
  }
  else {
LAB_00bd48ee: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd4907: ;
  uVar4 = F_00bbaf90(this_00);
  uVar3 = 0;
  if ((uVar4 != 0) && (uVar3 = *(uint *)(uVar4 + 0xec), uVar3 != 0)) {
    *(byte *)(uVar3 + 100) = ((char)param_1 != '\0') * '\x02' | *(byte *)(uVar3 + 100) & 0xfd;
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf25 */
uint F_00bd4940(unsigned int gen_a0)
{
  GEN_ENTER(0xbd4940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)(this + 0x2c);
  uVar2 = iVar1 - 0x11;
  if (uVar2 < 0x58) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xbd49bc) + iVar1 + 3)));
    switch((unsigned int)(uintptr_t)(iVar1)) {
    case 0x11: ;
      piVar3 = (int *)F_00bd3ff0(this);
      uVar2 = 0;
      if (piVar3 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,1);
        return uVar2;
      }
      break;
    case 0x3a: ;
    case 0x3b: ;
      uVar2 = F_00bd3f80(this);
      *(ushort *)(uVar2 + 0x70) = *(ushort *)(uVar2 + 0x70) & 0xfffe;
      uVar2 = F_00bd3f80(this);
      *(undefined1 *)(uVar2 + 0xe4) = 0;
      return uVar2;
    case 0x4b: ;
      *(undefined4 *)(REFG(int, 0x1371280) + 0x2c) = *(undefined4 *)(this + 0x88);
      *(undefined4 *)(REFG(int, 0x1371280) + 0x30) = *(undefined4 *)(this + 0x8c);
      return uVar2;
    case 0x68: ;
      uVar2 = F_00bd48c0(this,1);
    }
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf33 */
uint F_00bd4a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined1 SVar4;
  int iVar5;
  uint uVar6;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined * this_00;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int * piVar7;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  iVar5 = *(int *)(this + 0x78);
  if (iVar5 == 0) {
    iVar5 = *(int *)(this + 0x6c);
    if (iVar5 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar5 = *(int *)(this + 0x6c);
      if (iVar5 != 0) goto LAB_00bd4a69;
    }
    else {
LAB_00bd4a69: ;
      uVar1 = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar5 = *(int *)(this + 0x78);
    if (iVar5 == 0) {
      piVar7 = (int *)0x0;
      goto LAB_00bd4a97;
    }
  }
  if (*(char *)(iVar5 + 0x12) == '\0') {
    piVar7 = *(int * PTR32 *)(iVar5 + 4);
  }
  else {
    piVar7 = (int *)0x0;
  }
LAB_00bd4a97: ;
  uVar6 = *(int *)(this + 0x2c) - 0x11;
  switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
  case 0x11: ;
    iVar5 = *(int *)(this + 0x24);
    uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x54))(piVar7,(uint)(*(char *)(iVar5 + 0xc) != '\0'));
    iVar2 = piVar7[0x14];
    if ((iVar2 != 0) && (*(char *)(iVar5 + 0xd) != '\0')) {
      piVar7 = *(int * PTR32 *)(iVar2 + 4);
      if (piVar7 != (int *)0x0) {
        uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x54))(piVar7,(uint)(*(char *)(iVar5 + 0xc) != '\0'));
      }
      piVar7 = *(int * PTR32 *)(iVar2 + 8);
      if (piVar7 != (int *)0x0) {
        uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x54))(piVar7,(uint)(*(char *)(iVar5 + 0xc) != '\0'));
        F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
        return uVar6;
      }
    }
    break;
  case 0x1c: ;
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) == '\0');
    if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xd))) == '\0') {
      this_00 = (undefined *)F_00bd3f80(this);
      uVar6 = 0;
      if (this_00 != (undefined *)0x0) {
        ((undefined4 *)(gen_frame + 0x8))[0] = 0;
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        bVar3 = F_00b60730(this_00,&(*(undefined4 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
        uVar6 = CONCAT31(extraout_var_00,bVar3);
        if (bVar3 != 0) {
          do {
            piVar7 = (int *)F_00beb650((*(undefined4 *)(gen_frame + 0x4)));
            if ((piVar7 != (int *)0x0) &&
               (uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x4c))(piVar7), uVar6 != 0)) {
              F_00a9fa40(uVar6,(*(undefined4 *)(gen_frame + 0x0)));
            }
            bVar3 = F_00b60730(this_00,&(*(undefined4 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
          } while (bVar3 != 0);
          F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
          return CONCAT31(extraout_var_01,bVar3);
        }
      }
    }
    else {
      in_ecx = F_00bd40a0(this);
      uVar6 = 0;
      if (in_ecx != 0) {
        bVar3 = F_00a9fa40(in_ecx,(*(undefined4 *)(gen_frame + 0x0)));
        F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
        return CONCAT31(extraout_var,bVar3);
      }
    }
    break;
  case 0x3a: ;
    uVar6 = F_00bd3f80(this);
    *(ushort *)(uVar6 + 0x70) = *(ushort *)(uVar6 + 0x70) | 1;
    iVar5 = *(int *)(this + 0x24);
    uVar6 = F_00bd3f80(this);
    *(undefined2 *)(uVar6 + 0x54) = *(undefined2 *)(iVar5 + 0xc);
    uVar6 = F_00bd3f80(this);
    *(undefined1 *)(uVar6 + 0xe4) = 1;
    F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
    return uVar6;
  case 0x3b: ;
    uVar6 = F_00bd3f80(this);
    *(ushort *)(uVar6 + 0x70) = *(ushort *)(uVar6 + 0x70) & 0xfffe;
    uVar6 = F_00bd3f80(this);
    *(undefined1 *)(uVar6 + 0xe4) = 0;
    F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
    return uVar6;
  case 0x4b: ;
    iVar5 = *(int *)(this + 0x24);
    if (*(char *)(iVar5 + 0xc) != '\0') {
      uVar6 = REFG(undefined4, 0x1371280);
      *(undefined4 *)(REFG(undefined4, 0x1371280) + 0x2c) = *(undefined4 *)(this + 0x88);
      *(undefined4 *)(REFG(undefined4, 0x1371280) + 0x30) = *(undefined4 *)(this + 0x8c);
      F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
      return uVar6;
    }
    *(undefined4 *)(REFG(undefined4, 0x1371280) + 0x2c) = *(undefined4 *)(iVar5 + 0x10);
    uVar6 = REFG(undefined4, 0x1371280);
    *(undefined4 *)(REFG(undefined4, 0x1371280) + 0x30) = *(undefined4 *)(iVar5 + 0x14);
    F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
    return uVar6;
  case 0x5a: ;
    uVar6 = F_00a0b580(this);
    F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
    return uVar6;
  case 0x68: ;
    iVar5 = *(int *)(this + 0x24);
    uVar6 = F_00bd40a0(this);
    if ((uVar6 == 0) || (*(int *)(uVar6 + 0xec) == 0)) {
      SVar4 = (undefined1)0x1;
    }
    else {
      SVar4 = (undefined1)(*((byte *)GEN_TOP((*(int *)(uVar6 + 0xec) + 100))) >> 1 & 1);
    }
    this[0x90] = SVar4;
    uVar6 = F_00bd48c0(this,(uint)(*(char *)(iVar5 + 0xc) == '\0'));
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf34 */
byte F_00bd4dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((((param_1 != 2) && (*(int *)(this + 0x2c) == 0x68)) && (this[0xd] != (undefined1)0x0)) &&
     (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xd))) == '\0')) {
    F_00bd48c0(this,(uint)(byte)this[0x90]);
  }
  return 1;
}

/* ref: FUN_00bd4e00 */
ushort F_00bd4e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4e00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x18) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00bd4e10 */
byte F_00bd4e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_1 != '\0') * '\x02' | *(byte *)((int)this + 100) & 0xfd;
  *(byte *)((int)this + 100) = bVar1;
  return bVar1;
}

/* ref: FUN_00bd4e30 */
unsigned int F_00bd4e30(float gen_a0)
{
  GEN_ENTER(0xbd4e30u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BgSetupClip::vf25 */
unsigned int F_00bd4e50(unsigned int gen_a0)
{
  GEN_ENTER(0xbd4e50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x88) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BgSetupClip::vf26 */
unsigned int F_00bd4e60(void)
{
  GEN_ENTER(0xbd4e60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BgSetupClip::vf34 */
byte F_00bd4e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BgSetupClip::vf33 */
uint F_00bd4e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  int * piVar3;
  undefined * pvVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar3 != (int *)0x0) {
      uVar7 = 0;
      uVar6 = 4;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      F_007602f0(pvVar4,uVar6,uVar7);
    }
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  if (this[0x88] != (undefined1)0x0) {
    bVar2 = F_00b5c680(REFG(void * PTR32, 0x14c4e90));
    if (bVar2 == 0) {
      uVar5 = F_00bd30b0(this,0);
      return uVar5;
    }
    this[0x88] = (undefined1)0x0;
    return CONCAT31(extraout_var,bVar2);
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar3 != (int *)0x0) {
    uVar7 = 1;
    uVar6 = 4;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
    F_007602f0(pvVar4,uVar6,uVar7);
  }
  iVar1 = *(int *)(this + 0x24);
  uVar5 = F_00bd3f80(this);
  if (uVar5 != 0) {
    bVar2 = F_00bd2480(this);
    if (bVar2 != 0) {
      *(int *)(uVar5 + 0x34) = iVar1 + 0xc;
      return CONCAT31(extraout_var_00,bVar2);
    }
    *(int *)(uVar5 + 0x30) = iVar1 + 0xc;
  }
  F_00b5c8c0(REFG(void * PTR32, 0x14c4e90),iVar1 + 0xc,0);
  bVar2 = F_00b5c680(REFG(void * PTR32, 0x14c4e90));
  uVar5 = CONCAT31(extraout_var_01,bVar2);
  if (bVar2 == 0) {
    uVar5 = F_00bd30b0(this,0);
    this[0x88] = (undefined1)0x1;
  }
  return uVar5;
}

/* ref: FUN_00bd4f70 */
uint F_00bd4f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4f70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x34) = param_2;
  return param_2;
}

/* ref: FUN_00bd4f80 */
uint F_00bd4f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4f80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x30) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Clip::LocalVFXTriggerClip::vf33 */
uint F_00bd4fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd4fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  uVar3 = *(uint *)(this + 0x2c);
  if (uVar3 != 0x21) {
    if (uVar3 != 0x58) {
      return uVar3;
    }
    pvVar2 = *(undefined * PTR32 *)(this + 0x6c);
    uVar3 = 0x58;
    if (pvVar2 == (undefined *)0x0) {
      uVar3 = 0;
      if (*(int *)(this + 4) != 0) {
        uVar3 = *((uint *)GEN_TOP((*(int *)(this + 4) + 4)));
        *(uint *)(this + 0x6c) = uVar3;
      }
      pvVar2 = *(undefined * PTR32 *)(this + 0x6c);
    }
    iVar1 = *(int *)(this + 0x24);
    if (pvVar2 == (undefined *)0x0) {
      return uVar3;
    }
    pvVar2 = (undefined *)F_00beb6b0(pvVar2);
    if (pvVar2 == (undefined *)0x0) {
      return 0;
    }
    uVar3 = F_006891c0(pvVar2,*(undefined4 *)(iVar1 + 0xc));
    return uVar3;
  }
  pvVar2 = *(undefined * PTR32 *)(this + 0x74);
  iVar1 = *(int *)(this + 0x24);
  if (pvVar2 != (undefined *)0x0) goto LAB_00bd5055;
  piVar5 = *(int * PTR32 *)(this + 0x70);
  if (piVar5 == (int *)0x0) {
    iVar4 = *(int *)(this + 0x6c);
    if (iVar4 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar4 = *(int *)(this + 0x6c);
      if (iVar4 != 0) goto LAB_00bd5037;
    }
    else {
LAB_00bd5037: ;
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar4 + 4);
    }
    piVar5 = *(int * PTR32 *)(this + 0x70);
    if (piVar5 != (int *)0x0) goto LAB_00bd5044;
  }
  else {
LAB_00bd5044: ;
    uVar3 = ((code *)*(gen_code32 *)(*piVar5 + 100))(piVar5);
    *(uint *)(this + 0x74) = uVar3;
  }
  pvVar2 = *(undefined * PTR32 *)(this + 0x74);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
LAB_00bd5055: ;
  F_00bc2aa0(pvVar2,*(undefined4 *)(iVar1 + 0x10));
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,1);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::GlobalVFXTriggerClip::vf33 */
uint F_00bd5090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x6c);
  iVar1 = *(int *)(this + 0x24);
  if (this_00 == (undefined *)0x0) {
    uVar2 = 0;
    if (*(int *)(this + 4) != 0) {
      uVar2 = *((uint *)GEN_TOP((*(int *)(this + 4) + 4)));
      *(uint *)(this + 0x6c) = uVar2;
    }
    this_00 = *(undefined * PTR32 *)(this + 0x6c);
    if (this_00 == (undefined *)0x0) {
      return uVar2;
    }
  }
  uVar2 = F_00beb760(this_00);
  F_00b5af00(REFG(void * PTR32, 0x14c4e84),uVar2,*(undefined4 *)(iVar1 + 0x10),*(int *)(iVar1 + 0xc) + iVar1);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,1);
  return uVar2;
}

/* ref: FUN_00bd50e0 */
uint F_00bd50e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd50e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: Client::System::Scheduler::Clip::PostEffectClip::vf29 */
unsigned int F_00bd5160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float * pfVar5;
  float * pfVar6;
  undefined * this_00;
  float * pfVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  
  iVar4 = REFG(int, 0x1371290);
  if (*(int *)(this + 0x2c) != 0x16) {
    if (*(int *)(this + 0x2c) != 0x32) {
      return 0;
    }
    if (*(char *)(REFG(int, 0x1371290) + 0x310) != '\x01') {
      return 0;
    }
    if ((undefined4 *)(REFG(int, 0x1371290) + 0x28c) == (undefined4 *)0x0) {
      return 0;
    }
    *(undefined4 *)(REFG(int, 0x1371290) + 0x28c) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar4 + 0x290) = *(undefined4 *)(param_1 + 0x24);
    return 0;
  }
  iVar3 = *(int *)(this + 0x24);
  if (*(char *)(iVar3 + 0x11) == '\x02') {
    return 0;
  }
  if (*(char *)(REFG(int, 0x1371290) + 0x30f) != -0x80) {
    return 0;
  }
  pfVar8 = (float *)(REFG(int, 0x1371290) + 0x274);
  if (pfVar8 == (float *)0x0) {
    return 0;
  }
  ((float *)(gen_frame + 0x1c))[2] = *(float *)(param_1 + 0x20);
  ((float *)(gen_frame + 0x1c))[3] = gen_bits2f(REFG(float, 0x1106bc4));
  ((float *)(gen_frame + 0x1c))[4] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[4], REFG(float, 0x1106bc0));
  pfVar7 = ((float *)(gen_frame + 0x1c)) + 2;
  if (!((double)*(float *)(param_1 + 0x20) < *(double *)&REFG(undefined, 0x109cad0))) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 3;
  }
  if (!(*(double *)&REFG(undefined, 0x1106bb8) < (double)*pfVar7)) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 4;
  }
  fVar12 = *pfVar7;
  ((float *)(gen_frame + 0x1c))[3] = *(float *)(param_1 + 0x24);
  ((float *)(gen_frame + 0x1c))[2] = fVar12;
  ((float *)(gen_frame + 0x1c))[4] = gen_bits2f(REFG(float, 0x1106bc4));
  ((float *)(gen_frame + 0x1c))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[1], REFG(float, 0x1106bc0));
  pfVar7 = ((float *)(gen_frame + 0x1c)) + 3;
  if (!((double)*(float *)(param_1 + 0x24) < *(double *)&REFG(undefined, 0x109cad0))) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 4;
  }
  if (!(*(double *)&REFG(undefined, 0x1106bb8) < (double)*pfVar7)) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 1;
  }
  fVar1 = *pfVar7;
  fVar2 = *(float *)(param_1 + 0x28);
  ((float *)(gen_frame + 0x1c))[3] = fVar2;
  ((float *)(gen_frame + 0x1c))[4] = fVar1;
  ((float *)(gen_frame + 0x1c))[1] = gen_bits2f(REFG(float, 0x1106bc4));
  ((float *)(gen_frame + 0x1c))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[0], REFG(float, 0x1106bc0));
  pfVar7 = ((float *)(gen_frame + 0x1c)) + 3;
  if (!((double)fVar2 < *(double *)&REFG(undefined, 0x109cad0))) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 1;
  }
  if (!(*(double *)&REFG(undefined, 0x1106bb8) < (double)*pfVar7)) {
    pfVar7 = ((float *)(gen_frame + 0x1c));
  }
  fVar9 = (float10)fVar12;
  ((float *)(gen_frame + 0x1c))[3] = *pfVar7;
  pfVar5 = ((float *)(gen_frame + 0x1c)) + 2;
  if (!((float10)fVar1 < fVar9)) {
    pfVar5 = ((float *)(gen_frame + 0x1c)) + 4;
  }
  pfVar6 = ((float *)(gen_frame + 0x1c)) + 4;
  ((float *)(gen_frame + 0x1c))[4] = *pfVar5;
  fVar10 = (float10)*pfVar5;
  if (!((float10)*pfVar7 < fVar10)) {
    pfVar6 = ((float *)(gen_frame + 0x1c)) + 3;
  }
  ((float *)(gen_frame + 0x1c))[3] = *pfVar6;
  if (*(char *)(iVar3 + 0x10) == '\0') {
    fVar12 = *(float *)(param_1 + 0x30);
    ((float *)(gen_frame + 0x1c))[2] = fVar12;
    ((float *)(gen_frame + 0x1c))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[0], REFG(float, 0x1094724));
    ((float *)(gen_frame + 0x1c))[1] = 0.0;
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 2;
    if (!((double)fVar12 < *(double *)&REFG(undefined, 0x10912a8))) {
      pfVar7 = ((float *)(gen_frame + 0x1c));
    }
    if (!(0.0 < *pfVar7)) {
      pfVar7 = ((float *)(gen_frame + 0x1c)) + 1;
    }
    fVar12 = *pfVar7;
    ((float *)(gen_frame + 0x1c))[0] = fVar12;
    fVar11 = (float10)fVar12;
    *pfVar8 = (float)(fVar11 + fVar9);
    fVar10 = fVar10 + fVar11;
  }
  else {
    iVar3 = *((int *)GEN_TOP((REFG(int, 0x1371298) + 0x34 + *(int *)(REFG(int, 0x1371298) + 0x30) * 4)));
    if (iVar3 == 0) goto LAB_00bd5389;
    this_00 = (undefined *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),iVar3 + 0x60,*(int *)(iVar3 + 0xc0) + 0x90);
    fVar12 = F_004bd280(this_00);
    ((float *)(gen_frame + 0x1c))[0] = fVar12;
    fVar11 = (float10)fVar12;
    *pfVar8 = (float)(fVar11 + (float10)((float *)(gen_frame + 0x1c))[2]);
    fVar10 = fVar11 + (float10)((float *)(gen_frame + 0x1c))[4];
  }
  *(float *)(iVar4 + 0x278) = (float)fVar10;
  *(float *)(iVar4 + 0x27c) = (float)(fVar11 + (float10)((float *)(gen_frame + 0x1c))[3]);
LAB_00bd5389: ;
  fVar1 = REFG(float, 0x1087f04);
  fVar12 = *(float *)(param_1 + 0x3c);
  ((float *)(gen_frame + 0x1c))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[1], REFG(float, 0x1087f04));
  ((float *)(gen_frame + 0x1c))[2] = 0.0;
  ((float *)(gen_frame + 0x1c))[0] = fVar12;
  pfVar8 = ((float *)(gen_frame + 0x1c));
  if (!(fVar12 < REFG(float, 0x1087f04))) {
    pfVar8 = ((float *)(gen_frame + 0x1c)) + 1;
  }
  if (!(0.0 < *pfVar8)) {
    pfVar8 = ((float *)(gen_frame + 0x1c)) + 2;
  }
  *(float *)(iVar4 + 0x280) = *pfVar8;
  fVar12 = *(float *)(param_1 + 0x40);
  ((float *)(gen_frame + 0x1c))[2] = 0.0;
  ((float *)(gen_frame + 0x1c))[0] = fVar12;
  pfVar8 = ((float *)(gen_frame + 0x1c));
  if (!(fVar12 < fVar1)) {
    pfVar8 = ((float *)(gen_frame + 0x1c)) + 1;
  }
  if (!(0.0 < *pfVar8)) {
    pfVar8 = ((float *)(gen_frame + 0x1c)) + 2;
  }
  *(float *)(iVar4 + 0x284) = *pfVar8;
  return 0;
}

/* ref: FUN_00bd5400 */
uint F_00bd5400(unsigned int gen_a0)
{
  GEN_ENTER(0xbd5400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x2c) == 0x16) {
    this = (undefined *)F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),7,1,0x80);
  }
  else if (*(int *)((int)this + 0x2c) == 0x32) {
    uVar1 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),8,
                         (uint)(*((char *)GEN_TOP((*(int *)((int)this + 0x24) + 0x10))) != '\0'),1);
    return uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00bd5450 */
uint F_00bd5450(unsigned int gen_a0)
{
  GEN_ENTER(0xbd5450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1371290);
  uVar2 = *(uint *)((int)this + 0x2c);
  if (uVar2 == 0x16) {
    if ((*(char *)(REFG(int, 0x1371290) + 0x30f) == -0x80) && (REFG(int, 0x1371290) + 0x274 != 0)) {
      F_004a4530(REFG(int, 0x1371290) + 0x274);
    }
    uVar2 = F_004adca0((undefined *)(iVar1 + 0x25c),7,0,0x80);
  }
  else if ((uVar2 == 0x32) && (uVar2 = *(uint *)((int)this + 0x24), *(char *)(uVar2 + 0x11) == '\0')
          ) {
    uVar2 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),8,0,1);
    return uVar2;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::PostEffectClip::vf25 */
uint F_00bd54b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd54b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd5450(this);
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::PostEffectClip::vf33 */
uint F_00bd54d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd54d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    if (*(int *)(this + 0x2c) != 0x16) {
      uVar1 = F_00bd5400(this);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar1;
    }
    uVar1 = F_00bd5400(this);
    if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0x11))) == '\x02') {
      uVar1 = F_00bd5450(this);
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::PostEffectClip::vf34 */
byte F_00bd5510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    if ((*(int *)(this + 0x2c) != 0x16) || (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0x11))) == '\0')) {
      F_00bd5450(this);
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
    return 1;
  }
  return 0;
}

/* ref: FUN_00bd5550 */
uint F_00bd5550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd5550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004adca0(this,8,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00bd5570 */
uint F_00bd5570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(char *)(in_ecx + 0xb4) == (char)param_2) {
    return in_ecx + 0x30;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::CameraShakeClip::vf26 */
unsigned int F_00bd55a0(void)
{
  GEN_ENTER(0xbd55a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::CameraShakeClip::vf33 */
unsigned int F_00bd55b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd55b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::CameraShakeClip::vf34 */
byte F_00bd55c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd55c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf13 */
byte F_00bd55d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd55d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd560a;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd55f5;
  }
  else {
LAB_00bd55f5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00bd560a: ;
  uVar3 = F_00bccde0(this_00,*(undefined4 *)(this + 0x24),0,0,*(undefined4 *)(this + 0x2c));
  *(uint *)(this + 0x88) = uVar3;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf33 */
uint F_00bd5630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined * pvVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  
  pvVar2 = *(undefined * PTR32 *)(this + 0x78);
  this_00 = pvVar2;
  if (pvVar2 == (undefined *)0x0) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar3 = *(int *)(this + 0x6c);
      pvVar2 = (undefined *)0x0;
      if (iVar3 != 0) goto LAB_00bd565a;
    }
    else {
LAB_00bd565a: ;
      uVar1 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      pvVar2 = (undefined *)F_00b595f0(uVar1);
    }
    this_00 = *(undefined * PTR32 *)(this + 0x78);
  }
  if (this_00 == (undefined *)0x0) {
    return (uint)pvVar2;
  }
  iVar3 = *(int *)(this + 0x74);
  if (iVar3 != 0) goto LAB_00bd56b6;
  piVar5 = *(int * PTR32 *)(this + 0x70);
  if (piVar5 == (int *)0x0) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar3 = *(int *)(this + 0x6c);
      if (iVar3 != 0) goto LAB_00bd569c;
    }
    else {
LAB_00bd569c: ;
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar3 + 4);
    }
    piVar5 = *(int * PTR32 *)(this + 0x70);
    if (piVar5 != (int *)0x0) goto LAB_00bd56a9;
  }
  else {
LAB_00bd56a9: ;
    uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 100))(piVar5);
    *(uint *)(this + 0x74) = uVar4;
  }
  iVar3 = *(int *)(this + 0x74);
LAB_00bd56b6: ;
  uVar4 = F_00bc4ce0(this_00,*(undefined4 *)(this + 0x88),*(undefined4 *)(this + 0x24),this,iVar3,
                       *(undefined4 *)(this + 0x2c));
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf35 */
uint F_00bd56e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd56e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd5721;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd5708;
  }
  else {
LAB_00bd5708: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd5721: ;
  uVar3 = F_00bc4e60(this_00,param_2,*(undefined4 *)(this + 0x2c));
  return uVar3;
}

/* ref: FUN_00bd5740 */
uint F_00bd5740(unsigned int gen_a0)
{
  GEN_ENTER(0xbd5740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd577e;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd5765;
  }
  else {
LAB_00bd5765: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd577e: ;
  uVar3 = F_00bc4e00(this_00,*(undefined4 *)((int)this + 0x88),this,
                       *(undefined4 *)((int)this + 0x2c));
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf26 */
uint F_00bd57a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd57a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd57de;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd57c5;
  }
  else {
LAB_00bd57c5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd57de: ;
  uVar3 = F_00bc4e00(this_00,*(undefined4 *)(this + 0x88),this,*(undefined4 *)(this + 0x2c));
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf8 */
uint F_00bd5800(unsigned int gen_a0)
{
  GEN_ENTER(0xbd5800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd583e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd5825;
  }
  else {
LAB_00bd5825: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd583e: ;
  uVar3 = F_00bc4e00(this_00,*(undefined4 *)(this + 0x88),this,*(undefined4 *)(this + 0x2c));
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf34 */
byte F_00bd5860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd589e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd5885;
  }
  else {
LAB_00bd5885: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 1;
  }
LAB_00bd589e: ;
  F_00bc4e00(this_00,*(undefined4 *)(this + 0x88),this,*(undefined4 *)(this + 0x2c));
  return 1;
}

/* ref: FUN_00bd58c0 */
unsigned int F_00bd58c0(float gen_a0)
{
  GEN_ENTER(0xbd58c0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::NonSerialClip::vf25 */
unsigned int F_00bd58e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd58e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x2c) == 0x75) && (REFG(int, 0x13759f4) != 0)) {
    F_00690270(REFG(int, 0x13759f4));
    return 0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::NonSerialClip::vf33 */
uint F_00bd5900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar8;
  undefined3 extraout_var_01 = 0;
  uint uVar9;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x6c);
  if (this_00 == (undefined *)0x0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    this_00 = *(undefined * PTR32 *)(this + 0x6c);
  }
  F_00beb760(this_00);
  piVar6 = (int *)F_00beb670(this_00);
  (*(int * PTR32 *)(gen_frame + 0x4c)) = piVar6;
  if ((piVar6 != (int *)0x0) || (uVar7 = 0, *(int *)(this + 0x2c) == 0x75)) {
    uVar7 = *(int *)(this + 0x2c) - 0x21;
    switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
    case 0x21: ;
      bVar5 = F_00bd1fe0(this);
      uVar7 = CONCAT31(extraout_var,bVar5);
      if (bVar5 == 0) {
        bVar5 = F_00bd2480(this);
        uVar7 = CONCAT31(extraout_var_00,bVar5);
        if (bVar5 == 0) {
          uVar7 = F_00c22ac0((*(int * PTR32 *)(gen_frame + 0x4c)),*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc))),
                               *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0x10))));
          return uVar7;
        }
      }
      break;
    case 0x37: ;
      uVar8 = F_00beb790(this_00);
      uVar9 = 0;
      (*(uint *)(gen_frame + 0x48)) = uVar8;
      uVar7 = 0;
      if (uVar8 != 0) {
        do {
          uVar8 = F_00bec250(this_00,uVar9);
          uVar7 = 0;
          if (uVar8 != 0) {
            uVar7 = F_00a62370(uVar8,(*(int * PTR32 *)(gen_frame + 0x4c)));
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (*(uint *)(gen_frame + 0x48)));
        return uVar7;
      }
      break;
    case 0x49: ;
      bVar5 = F_00bd1fe0(this);
      uVar7 = CONCAT31(extraout_var_01,bVar5);
      if (bVar5 == 0) {
        iVar3 = *(int *)(this + 0x24);
        if (*(int *)(iVar3 + 0x24) != 0) {
          iVar4 = *(int *)(iVar3 + 0x20);
          (*(float *)(gen_frame + 0x30)) = *(float *)(iVar4 + iVar3);
          (*(float *)(gen_frame + 0x34)) = *(float *)(iVar4 + 4 + iVar3);
          (*(float *)(gen_frame + 0x38)) = *(float *)(iVar4 + 8 + iVar3);
        }
        if (*(int *)(iVar3 + 0x1c) != 0) {
          iVar4 = *(int *)(iVar3 + 0x18);
          uVar1 = *(undefined4 *)(iVar4 + 8 + iVar3);
          uVar2 = *(undefined4 *)(iVar4 + 4 + iVar3);
          (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(iVar4 + iVar3);
          (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
          (*(undefined4 *)(gen_frame + 0x28)) = uVar1;
          F_00a1e0d0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x20)));
        }
        if (*(int *)(iVar3 + 0x14) != 0) {
          (*(float *)(gen_frame + 0x10)) = *((float *)GEN_TOP((iVar3 + *(int *)(iVar3 + 0x10))));
        }
        uVar7 = F_00a62390((*(int * PTR32 *)(gen_frame + 0x4c)),*(undefined4 *)(iVar3 + 0xc),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),
                             (*(float *)(gen_frame + 0x10)));
        return uVar7;
      }
      break;
    case 0x6a: ;
      if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) < '\x01') {
        uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x28))(0xe,0);
        return uVar7;
      }
      uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x24))(0xe,0);
      return uVar7;
    case 0x72: ;
      uVar8 = F_0054d950(this);
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = F_00aa2500((*(int * PTR32 *)(gen_frame + 0x4c)),*(undefined4 *)(uVar8 + 200));
        return uVar7;
      }
      break;
    case 0x75: ;
      if (REFG(void * PTR32, 0x13759f4) != (undefined *)0x0) {
        if (*((short *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) == 1) {
          uVar7 = F_006aac30(REFG(void * PTR32, 0x13759f4));
          return uVar7;
        }
        uVar7 = F_00690270(REFG(void * PTR32, 0x13759f4));
      }
    }
  }
  return uVar7;
}

/* ref: FUN_00bd5bb0 */
uint F_00bd5bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x10) + param_1 * 4;
}

/* ref: FUN_00bd5bd0 */
uint F_00bd5bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x18) + param_1 * 4;
}

/* ref: FUN_00bd5bf0 */
uint F_00bd5bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x20) + param_1 * 4;
}

/* ref: FUN_00bd5c10 */
unsigned int F_00bd5c10(float gen_a0)
{
  GEN_ENTER(0xbd5c10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd5c30 */
uint F_00bd5c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  int * piVar5;
  code * pcVar6;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x74);
  if (pvVar4 == (undefined *)0x0) {
    piVar5 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar5 == (int *)0x0) {
      iVar2 = *(int *)((int)this + 0x6c);
      if (iVar2 == 0) {
        if (*(int *)((int)this + 4) != 0) {
          *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
        }
        iVar2 = *(int *)((int)this + 0x6c);
        if (iVar2 != 0) goto LAB_00bd5c78;
      }
      else {
LAB_00bd5c78: ;
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar2 + 4);
      }
      piVar5 = *(int * PTR32 *)((int)this + 0x70);
      if (piVar5 != (int *)0x0) goto LAB_00bd5c85;
    }
    else {
LAB_00bd5c85: ;
      uVar3 = ((code *)*(gen_code32 *)(*piVar5 + 100))(piVar5);
      *(uint *)((int)this + 0x74) = uVar3;
    }
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x74);
  }
  ((undefined4 *)(gen_frame + 0x8))[0] = 0;
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  bVar1 = F_00bc2920(pvVar4,&(*(int * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
  while (bVar1 != 0) {
    uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xb8))((*(int * PTR32 *)(gen_frame + 0x4)));
    if (uVar3 == param_1) {
      if (*(int *)((int)this + 0x2c) == 0x28) goto LAB_00bd5d4d;
      if (*(int *)((int)this + 0x2c) == 0x2a) {
        pcVar6 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x9c);
        goto override_prt_bd5d55_776d44d0;
      }
    }
    bVar1 = F_00bc2920(pvVar4,&(*(int * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
  }
  uVar3 = F_00bd3f80(this);
  piVar5 = (int *)0x0;
  if (uVar3 != 0) {
    pvVar4 = (undefined *)F_00bd3f80(this);
    piVar5 = (int *)F_00b607f0(pvVar4,param_1);
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar5;
    if (piVar5 != (int *)0x0) {
      if (*(int *)((int)this + 0x2c) == 0x28) {
LAB_00bd5d4d: ;
        pcVar6 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x98);
      }
      else {
        if (*(int *)((int)this + 0x2c) != 0x2a) goto LAB_00bd5d57;
        pcVar6 = *(gen_code32 *)(*piVar5 + 0x9c);
      }
override_prt_bd5d55_776d44d0: ;
      piVar5 = ((int *)GEN_TOP((*pcVar6)((*(int * PTR32 *)(gen_frame + 0x4)))));
    }
  }
LAB_00bd5d57: ;
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return (uint)piVar5;
}

/* ref: Client::System::Scheduler::Clip::SystemClip::vf25 */
uint F_00bd5db0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd5db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x137129c);
  uVar2 = *(uint *)(this + 0x2c);
  if (uVar2 == 0x50) {
    uVar2 = F_00bd3f80(this);
    if (*(undefined * PTR32 *)(uVar2 + 0x38) != (undefined *)0x0) {
      uVar2 = F_00beb190(*(undefined * PTR32 *)(uVar2 + 0x38));
      return uVar2;
    }
  }
  else if (uVar2 == 0x60) {
    uVar1 = F_00bd3f80(this);
    uVar2 = 0;
    if (uVar1 != 0) {
      *(undefined4 *)(uVar1 + 0xf8) = 0xffffffff;
      return uVar1;
    }
  }
  else if (uVar2 == 0x6d) {
    *(undefined4 *)(REFG(undefined4, 0x137129c) + 0xec) = REFG(float, 0x1087f04);
    uVar2 = uVar1;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::SystemClip::vf33 */
uint F_00bd5e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  uint uVar6;
  float * pfVar7;
  int iVar8;
  float fVar2;
  float fVar3;
  
  uVar6 = REFG(undefined4, 0x137129c);
  iVar4 = *(int *)(this + 0x2c);
  uVar5 = iVar4 - 0x28;
  if (uVar5 < 0x46) {
    uVar5 = (uint)*(byte *)(iVar4 + 0xbd5fb0);
    switch((unsigned int)(uintptr_t)(iVar4)) {
    case 0x28: ;
      iVar4 = *(int *)(this + 0x24);
      iVar8 = *(int *)(iVar4 + 0x10);
      if (iVar8 != 0) {
        do {
          iVar8 = iVar8 + -1;
          uVar5 = F_00bd5c30(this,*((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0xc) + iVar8 * 4 + iVar4))));
        } while (iVar8 != 0);
        return uVar5;
      }
      break;
    case 0x2a: ;
      iVar4 = *(int *)(this + 0x24);
      iVar8 = *(int *)(iVar4 + 0x10);
      if (iVar8 != 0) {
        do {
          iVar8 = iVar8 + -1;
          uVar5 = F_00bd5c30(this,*((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0xc) + iVar8 * 4 + iVar4))));
        } while (iVar8 != 0);
        return uVar5;
      }
      break;
    case 0x50: ;
      uVar5 = F_00bd3f80(this);
      this_00 = *(undefined * PTR32 *)(uVar5 + 0x38);
      if (this_00 != (undefined *)0x0) {
        iVar4 = *(int *)(this + 0x24);
        uVar5 = (uint)*(byte *)(iVar4 + 0xc);
        if (uVar5 == 0) {
          iVar8 = *(int *)((int)this_00 + 0xd0);
          *(undefined4 *)(iVar8 + 0xac) = *(undefined4 *)(iVar4 + 0x10);
          *(undefined4 *)(iVar8 + 0xb0) = *(undefined4 *)(iVar4 + 0x14);
          return 0;
        }
        if (uVar5 == 1) {
          uVar5 = F_00beb190(this_00);
          return uVar5;
        }
        uVar5 = uVar5 - 2;
        if (uVar5 == 0) {
          if (*(char *)(iVar4 + 0xd) == '\0') {
            *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xd0) + 0xac))) =
                 *(undefined4 *)((int)this_00 + 300);
          }
          else if (*(char *)(iVar4 + 0xd) == '\x02') {
            *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xd0) + 0xac))) = *(undefined4 *)(iVar4 + 0x10);
          }
          if (*(byte *)(iVar4 + 0xe) == 0) {
            *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xd0) + 0xb0))) =
                 *(undefined4 *)((int)this_00 + 0x130);
            return 0;
          }
          uVar5 = *(byte *)(iVar4 + 0xe) - 2;
          if (uVar5 == 0) {
            *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xd0) + 0xb0))) = *(undefined4 *)(iVar4 + 0x14);
            return 0;
          }
        }
      }
      break;
    case 0x60: ;
      uVar6 = F_00bd3f80(this);
      uVar5 = 0;
      if (uVar6 != 0) {
        *(undefined4 *)(uVar6 + 0xf8) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
        F_004ff5f0(REFG(undefined4, 0x1375aec));
        return uVar6;
      }
      break;
    case 0x6d: ;
      pfVar7 = ((float *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
      fVar1 = *pfVar7;
      fVar2 = *pfVar7;
      fVar3 = *pfVar7;
      (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1094880);
      (*(float *)(gen_frame + 0x4)) = 0.0;
      if ((GEN_ISNAN(REFG(float, 0x1094880)) || GEN_ISNAN(fVar1)) || (REFG(float, 0x1094880) < fVar3 || REFG(uint, 0x1094880) == fVar2)) {
        pfVar7 = &(*(float *)(gen_frame + 0x8));
      }
      if (!(0.0 < *pfVar7)) {
        pfVar7 = &(*(float *)(gen_frame + 0x4));
      }
      *(float *)(REFG(undefined4, 0x137129c) + 0xec) = *pfVar7;
      uVar5 = uVar6;
    }
  }
  return uVar5;
}

/* ref: FUN_00bd6040 */
unsigned int F_00bd6040(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbd6040u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xec) = param_2;
  return 0;
}

/* ref: FUN_00bd6060 */
uint F_00bd6060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd6080 */
uint F_00bd6080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf34 */
byte F_00bd60c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd60c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  
  if (param_1 != 2) {
    piVar1 = (int *)F_00bd3ff0(this);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*(int *)(this + 0x2c) == 0x2d) {
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1)));
      F_005e98e0(this_00,500);
    }
    else if (*(int *)(this + 0x2c) == 0x2e) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1);
      F_005d7a50(uVar2,(float)(float10)0);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00bd6130 */
uint F_00bd6130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6130u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte bVar2;
  uint in_EAX = 0;
  uint uVar3;
  
  uVar3 = *param_1;
  bVar1 = *param_2;
  if (bVar1 == 0) {
    *param_1 = uVar3;
    return in_EAX;
  }
  bVar2 = param_2[1];
  if (bVar2 != 0) {
    if (param_2[2] != 0) {
      uVar3 = (uint)CONCAT21(CONCAT11(param_2[2],bVar2),bVar1) << 8 | uVar3 >> 0x18;
      *param_1 = uVar3;
      return uVar3;
    }
    if (bVar2 != 0) {
      uVar3 = (uint)CONCAT11(bVar2,bVar1) << 0x10 | uVar3 >> 0x10;
      *param_1 = uVar3;
      return uVar3;
    }
  }
  uVar3 = (uint)bVar1 << 0x18 | uVar3 >> 8;
  *param_1 = uVar3;
  return uVar3;
}

/* ref: FUN_00bd61c0 */
uint F_00bd61c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xbd61c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  uint uVar1;
  undefined * this_00;
  byte bVar2;
  
  *(*(uint * PTR32 *)&gen_args[1]) = 0;
  *(*(undefined4 * PTR32 *)&gen_args[5]) = 0;
  *(*(uint * PTR32 *)&gen_args[2]) = 0;
  if ((*(int * PTR32 *)&gen_args[3]) == (int *)0x0) {
    return (uint)(*(undefined4 * PTR32 *)&gen_args[5]);
  }
  if ((*(int * PTR32 *)&gen_args[3])[0x1b] == 7) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0xb4))))((*(int * PTR32 *)&gen_args[3]))));
    *(*(uint * PTR32 *)&gen_args[1]) = (uint)this_00;
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    bVar2 = *(byte *)((int)this_00 + 0x28) >> 4;
  }
  else {
    uVar1 = (*(int * PTR32 *)&gen_args[3])[0x1b] - 8;
    if (uVar1 != 0) {
      return uVar1;
    }
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0xb4))))((*(int * PTR32 *)&gen_args[3]))));
    *(*(uint * PTR32 *)&gen_args[1]) = (uint)this_00;
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    bVar2 = (*(byte *)((int)this_00 + 0x28) >> 4) + 1;
  }
  (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(uint * PTR32 *)&gen_args[1]), 1, 3),bVar2)));
  uVar1 = F_005d9bb0(this_00,(*(uint * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]));
  *(*(uint * PTR32 *)&gen_args[2]) = uVar1;
  uVar1 = 0;
  if ((*(int *)&gen_args[6]) != 0) {
    uVar1 = F_00bd6130((*(uint * PTR32 *)&gen_args[2]),(*(int *)&gen_args[6]));
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf25 */
uint F_00bd6250(unsigned int gen_a0)
{
  GEN_ENTER(0xbd6250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffbf;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 0xffbf;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf26 */
uint F_00bd6270(unsigned int gen_a0)
{
  GEN_ENTER(0xbd6270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffbf;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 0xffbf;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf33 */
uint F_00bd6290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined * pvVar8;
  undefined3 uVar13;
  int * piVar9;
  undefined * pvVar10;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  uint uVar11;
  uint uVar12;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  byte bVar14;
  char * pcVar15;
  
  uVar11 = *(uint *)(this + 0x78);
  if (uVar11 == 0) {
    iVar7 = *(int *)(this + 0x6c);
    if (iVar7 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar7 = *(int *)(this + 0x6c);
      if (iVar7 != 0) goto LAB_00bd62bb;
    }
    else {
LAB_00bd62bb: ;
      uVar3 = *(undefined4 *)(iVar7 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar3;
      F_00b595f0(uVar3);
    }
    uVar11 = *(uint *)(this + 0x78);
    if (uVar11 == 0) {
      return 0;
    }
  }
  if (*(char *)(uVar11 + 0x12) != '\0') {
    return uVar11;
  }
  piVar9 = *(int * PTR32 *)(uVar11 + 4);
  if (piVar9 == (int *)0x0) {
    return uVar11;
  }
  pvVar8 = ((undefined *)GEN_TOP((*(int *)(this + 0x2c) + -0x2b)));
  uVar13 = (undefined3)((uint)((int)(uintptr_t)pvVar8) >> 8);
  switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
  case 0x2b: ;
    iVar7 = *(int *)(this + 0x24);
    piVar9 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9)));
    uVar11 = ((code *)*(gen_code32 *)(*piVar9 + 0x90))(piVar9,(uint)(*(char *)(iVar7 + 0xc) != '\0'));
    return uVar11;
  case 0x2c: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9)));
    if (*(char *)((int)pvVar8 + 0x11) == '\a') {
      fVar2 = *(float *)(iVar7 + 0xc);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 2)) = ((undefined2)0x27f);
      (*(undefined4 *)(gen_frame + 0x18)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(undefined4 *)(gen_frame + 0x18)));
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(((undefined2)0x27f) | 0xc00);
      (*(longlong *)(gen_frame + 0xc)) = (longlong)TRUNC((float10)fVar2);
      lVar4 = (*(longlong *)(gen_frame + 0xc));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (undefined4)(longlong)TRUNC((float10)fVar2);
      uVar3 = (undefined4)(*(longlong *)(gen_frame + 0xc));
      (*(longlong *)(gen_frame + 0xc)) = lVar4;
      uVar11 = F_005e98e0(pvVar8,uVar3);
      return uVar11;
    }
    break;
  case 0x2d: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9)));
    if (*(char *)((int)pvVar8 + 0x11) == '\a') {
      fVar2 = *(float *)(iVar7 + 0xc);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 2)) = ((undefined2)0x27f);
      (*(undefined4 *)(gen_frame + 0x18)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(undefined4 *)(gen_frame + 0x18)));
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(((undefined2)0x27f) | 0xc00);
      (*(longlong *)(gen_frame + 0xc)) = (longlong)TRUNC((float10)fVar2);
      lVar4 = (*(longlong *)(gen_frame + 0xc));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (undefined4)(longlong)TRUNC((float10)fVar2);
      uVar3 = (undefined4)(*(longlong *)(gen_frame + 0xc));
      (*(longlong *)(gen_frame + 0xc)) = lVar4;
      uVar11 = F_005f4000(pvVar8,uVar3);
      return uVar11;
    }
    break;
  case 0x2e: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9)));
    if (*(char *)((int)pvVar8 + 0x11) == '\x04') {
      uVar11 = F_005d79f0(pvVar8,*(float *)(iVar7 + 0xc),(uint)(*(char *)(iVar7 + 0x10) != '\0'));
      return uVar11;
    }
    break;
  case 0x2f: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9)));
    if (*(char *)((int)pvVar8 + 0x11) == '\x04') {
      uVar11 = F_005d7a80(pvVar8,*(undefined4 *)(iVar7 + 0xc));
      return uVar11;
    }
    break;
  case 0x30: ;
  case 0x31: ;
  case 0x32: ;
  case 0x33: ;
  case 0x34: ;
  case 0x35: ;
  case 0x36: ;
  case 0x37: ;
  case 0x38: ;
  case 0x39: ;
  case 0x3a: ;
  case 0x3b: ;
  case 0x3c: ;
  case 0x3d: ;
  case 0x3e: ;
  case 0x3f: ;
  case 0x40: ;
  case 0x41: ;
  case 0x42: ;
  case 0x43: ;
  case 0x47: ;
  case 0x48: ;
  case 0x49: ;
  case 0x4a: ;
  case 0x4b: ;
  case 0x4c: ;
  case 0x4d: ;
  case 0x4e: ;
  case 0x4f: ;
  case 0x50: ;
  case 0x51: ;
  case 0x52: ;
  case 0x53: ;
  case 0x54: ;
  case 0x55: ;
  case 0x56: ;
  case 0x57: ;
  case 0x58: ;
  case 0x59: ;
  case 0x5a: ;
  case 0x5b: ;
  case 0x5c: ;
  case 0x5d: ;
  case 0x5e: ;
  case 0x5f: ;
  case 0x60: ;
  case 0x61: ;
  case 0x62: ;
  case 99: ;
  case 100: ;
  case 0x65: ;
  case 0x66: ;
  case 0x67: ;
  case 0x68: ;
  case 0x69: ;
  case 0x6a: ;
  case 0x6b: ;
  case 0x6c: ;
  case 0x6d: ;
  case 0x6e: ;
  case 0x6f: ;
  case 0x70: ;
    break;
  case 0x44: ;
    bVar6 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    pvVar8 = ((undefined *)GEN_TOP(CONCAT31(uVar13,bVar6)));
    if ((bVar6 != 0) && (((byte)this[0x7c] >> 6 & 1) == 0)) {
      piVar9 = (int *)F_00bd3ff0(this);
      pvVar8 = (undefined *)0x0;
      if (piVar9 != (int *)0x0) {
        if (piVar9[0x1b] == 7) {
          pvVar10 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xb4))(piVar9)));
          pvVar8 = (undefined *)0x0;
          if (pvVar10 != (undefined *)0x0) {
            bVar14 = *(byte *)((int)pvVar10 + 0x28) >> 4;
            (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = bVar14;
            (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),bVar14)));
LAB_00bd649c: ;
            uVar11 = F_005d9bb0(pvVar10,(*(undefined * PTR32 *)(gen_frame + 0x14)),(uint)bVar6);
            pvVar8 = (undefined *)F_005e3880(pvVar10,uVar11);
            if ((char)pvVar8 != '\0') {
              F_00bd30b0(this,0);
              *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
              pvVar8 = (undefined *)F_0054d920(this);
              *(uint *)((int)pvVar8 + 0x2c) = *(uint *)((int)pvVar8 + 0x2c) | 8;
            }
          }
        }
        else {
          pvVar8 = (undefined *)(piVar9[0x1b] + -8);
          if (pvVar8 == (undefined *)0x0) {
            pvVar10 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xb4))(piVar9)));
            pvVar8 = (undefined *)0x0;
            if (pvVar10 != (undefined *)0x0) {
              cVar5 = (*(byte *)((int)pvVar10 + 0x28) >> 4) + 1;
              (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = cVar5;
              (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),cVar5)));
              goto LAB_00bd649c;
            }
          }
        }
      }
    }
    break;
  case 0x45: ;
    bVar6 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    pvVar8 = ((undefined *)GEN_TOP(CONCAT31(uVar13,bVar6)));
    if (bVar6 != 0) {
      piVar9 = (int *)F_00bd3ff0(this);
      pvVar8 = (undefined *)0x0;
      if (piVar9 != (int *)0x0) {
        if (piVar9[0x1b] == 7) {
          pvVar10 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xb4))(piVar9)));
          pvVar8 = (undefined *)0x0;
          if (pvVar10 != (undefined *)0x0) {
            bVar14 = *(byte *)((int)pvVar10 + 0x28) >> 4;
            (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = bVar14;
            (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),bVar14)));
            uVar11 = F_005d9bb0(pvVar10,(*(undefined * PTR32 *)(gen_frame + 0x14)),(uint)bVar6);
            bVar6 = F_005e37c0(pvVar10,uVar11);
            return CONCAT31(extraout_var_00,bVar6);
          }
        }
        else {
          pvVar8 = (undefined *)(piVar9[0x1b] + -8);
          if (pvVar8 == (undefined *)0x0) {
            pvVar10 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xb4))(piVar9)));
            pvVar8 = (undefined *)0x0;
            if (pvVar10 != (undefined *)0x0) {
              cVar5 = (*(byte *)((int)pvVar10 + 0x28) >> 4) + 1;
              (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = cVar5;
              (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),cVar5)));
              uVar11 = F_005d9bb0(pvVar10,(*(undefined * PTR32 *)(gen_frame + 0x14)),(uint)bVar6);
              bVar6 = F_005e37c0(pvVar10,uVar11);
              return CONCAT31(extraout_var,bVar6);
            }
          }
        }
      }
    }
    break;
  case 0x46: ;
    pvVar8 = *(undefined * PTR32 *)(this + 0x24);
    if (*(byte *)((int)pvVar8 + 0xc) != 0) {
      pcVar1 = (char *)((int)pvVar8 + 0xd);
      uVar12 = (uint)*(byte *)((int)pvVar8 + 0xc);
      iVar7 = (int)&(*(longlong *)(gen_frame + 0xc)) + 4;
      pcVar15 = pcVar1;
      uVar11 = F_00bd3ff0(this);
      pvVar8 = (undefined *)F_00bd61c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),uVar11,uVar12,iVar7,pcVar15);
      if ((*(undefined * PTR32 *)(gen_frame + 0x14)) != (undefined *)0x0) {
        if (*pcVar1 != '\0') {
          pvVar8 = (undefined *)F_005d6000((*(undefined * PTR32 *)(gen_frame + 0x14)));
          bVar6 = F_005ef790(pvVar8,*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x14),(*(undefined4 *)(gen_frame + 0x18)),0xffffffff);
          return CONCAT31(extraout_var_01,bVar6);
        }
        bVar6 = F_005e3670((*(undefined * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),0xffffffff,0);
        return CONCAT31(extraout_var_02,bVar6);
      }
    }
    break;
  case 0x71: ;
    pvVar8 = *(undefined * PTR32 *)(this + 0x24);
    if (*(byte *)((int)pvVar8 + 0xc) != 0) {
      pcVar1 = (char *)((int)pvVar8 + 0xd);
      uVar11 = (uint)*(byte *)((int)pvVar8 + 0xc);
      iVar7 = (int)&(*(longlong *)(gen_frame + 0xc)) + 4;
      pcVar15 = pcVar1;
      uVar12 = F_00bd3ff0(this);
      pvVar8 = (undefined *)F_00bd61c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),uVar12,uVar11,iVar7,pcVar15);
      if ((*(undefined * PTR32 *)(gen_frame + 0x14)) != (undefined *)0x0) {
        if (*pcVar1 != '\0') {
          pvVar8 = (undefined *)F_005d6000((*(undefined * PTR32 *)(gen_frame + 0x14)));
          bVar6 = F_005ef7d0(pvVar8,*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x14),(*(undefined4 *)(gen_frame + 0x18)));
          return CONCAT31(extraout_var_03,bVar6);
        }
        bVar6 = F_005e3700((*(undefined * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)));
        return CONCAT31(extraout_var_04,bVar6);
      }
    }
    break;
  default: ;
    goto switchD_00bd6304_default;
  }
switchD_00bd6304_default: ;
  return (uint)pvVar8;
}

/* ref: FUN_00bd6700 */
unsigned int F_00bd6700(float gen_a0)
{
  GEN_ENTER(0xbd6700u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd6720 */
uint F_00bd6720(unsigned int gen_a0)
{
  GEN_ENTER(0xbd6720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f284c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  uVar2 = F_00bd2e60(this);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf25 */
uint F_00bd6760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbd6760u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf26 */
unsigned int F_00bd6770(void)
{
  GEN_ENTER(0xbd6770u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf8 */
unsigned int F_00bd6780(unsigned int gen_a0)
{
  GEN_ENTER(0xbd6780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x88);
  this[0x8c] = (undefined1)0x0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if ((char)uVar2 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x50))))(*(int * PTR32 *)(this + 0x88),500);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x78))))(*(int * PTR32 *)(this + 0x88),500);
    *(undefined4 *)(this + 0x88) = 0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf7 */
byte F_00bd67d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd67d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (((*(int *)(this + 0x2c) == 0x29) || (*(int *)(this + 0x2c) == 0x33)) &&
     (piVar1 = *(int * PTR32 *)(this + 0x88), piVar1 != (int *)0x0)) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if (((char)uVar2 == '\0') &&
       (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x14))))(*(int * PTR32 *)(this + 0x88)),
       (char)uVar2 == '\0')) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x78))))(*(int * PTR32 *)(this + 0x88),500);
      *(undefined4 *)(this + 0x88) = 0;
      return 1;
    }
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf35 */
unsigned int F_00bd6830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd6830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((param_1 != 2) && (*(int *)(this + 0x88) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x58))))(*(int * PTR32 *)(this + 0x88),param_2,5);
  }
  return 0;
}

/* ref: FUN_00bd6860 */
uint F_00bd6860(unsigned int gen_a0)
{
  GEN_ENTER(0xbd6860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  undefined * this_00;
  
  iVar4 = *(int *)((int)this + 0x74);
  if (iVar4 == 0) {
    piVar5 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar5 == (int *)0x0) {
      iVar4 = *(int *)((int)this + 0x6c);
      if (iVar4 == 0) {
        if (*(int *)((int)this + 4) != 0) {
          *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
        }
        iVar4 = *(int *)((int)this + 0x6c);
        if (iVar4 != 0) goto LAB_00bd688d;
      }
      else {
LAB_00bd688d: ;
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar4 + 4);
      }
      piVar5 = *(int * PTR32 *)((int)this + 0x70);
      if (piVar5 != (int *)0x0) goto LAB_00bd689a;
    }
    else {
LAB_00bd689a: ;
      uVar3 = ((code *)*(gen_code32 *)(*piVar5 + 100))(piVar5);
      *(uint *)((int)this + 0x74) = uVar3;
    }
    iVar4 = *(int *)((int)this + 0x74);
    if (iVar4 != 0) goto LAB_00bd68ab;
  }
  else {
LAB_00bd68ab: ;
    bVar2 = F_00bbad00((undefined *)(iVar4 + 0x124));
    if (bVar2 != 0) {
      uVar3 = F_00bbaf90((undefined *)(iVar4 + 0x124));
      return uVar3;
    }
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd6900;
  iVar4 = *(int *)((int)this + 0x6c);
  if (iVar4 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar4 = *(int *)((int)this + 0x6c);
    if (iVar4 != 0) goto LAB_00bd68e7;
  }
  else {
LAB_00bd68e7: ;
    uVar1 = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
LAB_00bd6900: ;
  uVar3 = F_00bbaf90(this_00);
  return uVar3;
}

/* ref: FUN_00bd6910 */
uint F_00bd6910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if (((char)uVar2 == '\0') &&
       (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x14))))(*(int * PTR32 *)((int)this + 0x88)),
       (char)uVar2 == '\0')) {
      return uVar2;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x50))))(*(int * PTR32 *)((int)this + 0x88),param_1);
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x78))))(*(int * PTR32 *)((int)this + 0x88),500);
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  return in_EAX;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf1 */
byte F_00bd6970(unsigned int gen_a0)
{
  GEN_ENTER(0xbd6970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  float10 fVar3;
  byte bVar4;
  uint uVar5;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  bVar4 = F_00bd1fe0(this);
  if (((bVar4 == 0) && (*(int *)(this + 0x2c) == 0x33)) && (this[0x8c] == (undefined1)0x0)) {
    if (*(int *)(this + 0x88) == 0) {
      iVar1 = *(int *)(this + 0x24);
      fVar3 = (float10)0;
      uVar5 = F_004e96c0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),*(int *)(iVar1 + 0xc) + iVar1,
                           (float)(float10)1,0,(float)fVar3,(float)fVar3,(float)fVar3,
                           (float)(float10)1,0,*(undefined4 *)(iVar1 + 0x10),0);
      if (uVar5 != 0) {
        *(uint *)(this + 0x88) = uVar5;
      }
    }
    piVar2 = *(int * PTR32 *)(this + 0x88);
    if (piVar2 != (int *)0x0) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
      if ((char)uVar5 == '\0') {
        this[0x8c] = (undefined1)0x1;
        bVar4 = F_00bd2590((undefined *)this);
        return bVar4;
      }
      uVar5 = F_0054d950(this);
      if ((uVar5 != 0) && ((*(uint *)(uVar5 + 0x2c) >> 4 & 1) != 0)) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x78))))(*(int * PTR32 *)(this + 0x88),500);
        *(undefined4 *)(this + 0x88) = 0;
        F_00b61910(this);
        return 1;
      }
      return 0;
    }
  }
  bVar4 = F_00bd2590((undefined *)this);
  return bVar4;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf34 */
byte F_00bd6a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (((param_1 == 9) || (param_1 == 5)) || (param_1 == 3)) {
    if (*(int *)(this + 0x2c) == 0x29) {
      bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0x12))) & 1;
    }
    else {
      if (*(int *)(this + 0x2c) != 0x33) {
        return 1;
      }
      bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0x14))) & 2;
    }
    if (bVar1 != 0) {
      F_00bd6910(this,0x1e);
    }
  }
  return 1;
}

/* ref: FUN_00bd6ab0 */
byte F_00bd6ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x2c) == 0x29) {
    this_00 = (undefined *)F_00bd6860(this);
  }
  else {
    if (*(int *)((int)this + 0x2c) != 0x33) {
      return 1;
    }
    if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x24) + 0x14))) & 1) == 0) {
      return 0;
    }
    piVar1 = (int *)F_00bd3ff0(this);
    if (piVar1 != (int *)0x0) {
      puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
      *param_1 = *puVar2;
      param_1[1] = puVar2[1];
      param_1[2] = puVar2[2];
      return 1;
    }
    this_00 = (undefined *)F_00bd4050(this);
  }
  if (this_00 == (undefined *)0x0) {
    F_004e78b0(param_1,param_1 + 1,param_1 + 2);
    return 1;
  }
  puVar2 = (undefined4 *)F_00a5feb0(this_00);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  return 1;
}

/* ref: FUN_00bd6b60 */
uint F_00bd6b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if (((char)uVar2 == '\0') &&
       (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x14))))(*(int * PTR32 *)((int)this + 0x88)),
       (char)uVar2 == '\0')) {
      return uVar2;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x50))))(*(int * PTR32 *)((int)this + 0x88),param_1);
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x78))))(*(int * PTR32 *)((int)this + 0x88),500);
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00bd6bc0 */
uint F_00bd6bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd6bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00bd6ab0(this,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x44))))(*(int * PTR32 *)((int)this + 0x88));
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf33 */
uint F_00bd6c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  byte bVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int iVar6;
  uint uVar7;
  undefined3 extraout_var_01 = 0;
  undefined * this_00;
  
  bVar5 = F_00bd1fe0(this);
  this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar5)));
  if (bVar5 == 0) {
    bVar5 = F_00bd6ab0(this,&(*(float *)(gen_frame + 0x0)));
    (*(byte *)(gen_frame + 0x1f)) = bVar5;
    this_00 = *(undefined * PTR32 *)(this + 0x2c);
    if (this_00 == (undefined *)0x29) {
      bVar5 = F_00bd2480(this);
      this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_01,bVar5)));
      if (bVar5 == 0) {
        this_00 = (undefined *)F_00bd6860(this);
        if ((*(int *)(this + 0x88) == 0) && (this_00 != (undefined *)0x0)) {
          iVar3 = *(int *)(this + 0x24);
          uVar7 = F_00aa2e00(this_00,(uint)*(ushort *)(iVar3 + 0xe),(uint)*(ushort *)(iVar3 + 0xc)
                               ,0,0,(uint)*(ushort *)(iVar3 + 0x10));
          *(uint *)(this + 0x88) = uVar7;
          this_00 = (undefined *)0x0;
          if (uVar7 != 0) {
            this_00 = (undefined *)F_00bd6bc0(this);
          }
        }
      }
    }
    else if (this_00 == (undefined *)0x33) {
      bVar5 = F_00bd2480(this);
      this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_00,bVar5)));
      if (bVar5 == 0) {
        piVar1 = *(int * PTR32 *)(this + 0x88);
        uVar2 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
        iVar3 = *(int *)(this + 0x24);
        (*(undefined4 *)(gen_frame + 0x18)) = uVar2;
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
          fVar4 = (float10)1;
          iVar6 = *(int *)(iVar3 + 0xc) + iVar3;
          if ((*(byte *)(gen_frame + 0x1f)) != 0) {
            uVar7 = F_004e95a0((*(undefined4 *)(gen_frame + 0x18)),iVar6,(float)fVar4,0,(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x4)),(*(float *)(gen_frame + 0x8)),
                                 (float)fVar4,0,*(undefined4 *)(iVar3 + 0x10),0);
            *(uint *)(this + 0x88) = uVar7;
            return uVar7;
          }
          uVar7 = F_004e9a80((*(undefined4 *)(gen_frame + 0x18)),iVar6,(float)fVar4,*(undefined4 *)(iVar3 + 0x10),0,0);
          *(uint *)(this + 0x88) = uVar7;
          return uVar7;
        }
        fVar4 = (float10)1;
        iVar6 = *(int *)(iVar3 + 0xc) + iVar3;
        if ((*(byte *)(gen_frame + 0x1f)) == 0) {
          uVar7 = F_004e9a80(uVar2,iVar6,(float)fVar4,*(undefined4 *)(iVar3 + 0x10),0,0);
        }
        else {
          uVar7 = F_004e95a0(uVar2,iVar6,(float)fVar4,0,(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x4)),(*(float *)(gen_frame + 0x8)),(float)fVar4,0,
                               *(undefined4 *)(iVar3 + 0x10),0);
        }
        this_00 = (undefined *)0x0;
        if (uVar7 != 0) {
          *(uint *)(this + 0x88) = uVar7;
          return uVar7;
        }
      }
    }
  }
  return (uint)this_00;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf30 */
unsigned int F_00bd6de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd6de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  if (*(int *)(this + 0x88) != 0) {
    bVar1 = F_00bd6ab0(this,((undefined1 *)(gen_frame + 0x0)));
    if (bVar1 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x44))))(*(int * PTR32 *)(this + 0x88));
    }
  }
  return 0;
}

/* ref: FUN_00bd6e50 */
unsigned int F_00bd6e50(float gen_a0)
{
  GEN_ENTER(0xbd6e50u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SoundClip::vf25 */
unsigned int F_00bd6e70(void)
{
  GEN_ENTER(0xbd6e70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SoundClip::vf33 */
uint F_00bd6e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  undefined3 extraout_var_00 = 0;
  undefined * pvVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar4 = *(int *)(this + 0x2c) - 0x3c;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    bVar3 = F_00bd2480(this);
    uVar4 = CONCAT31(extraout_var,bVar3);
    if (bVar3 == 0) {
      iVar2 = *(int *)(this + 0x24);
      uVar4 = *(uint *)(iVar2 + 0x14);
      if (*(int *)(iVar2 + 0xc) == 1) {
        uVar4 = F_00ab4c70();
      }
      uVar5 = F_00bd3f80(this);
      *(uint *)(uVar5 + 0x100) = uVar4;
      cVar1 = *(char *)(iVar2 + 0x10);
      uVar5 = F_00bd3f80(this);
      *(bool *)(uVar5 + 0x104) = cVar1 != '\0';
      if (*(char *)(iVar2 + 0x11) == '\x01') {
        F_00ab4b90(100);
        F_00ab6dc0();
      }
      uVar4 = F_00ab6d50(uVar4,1,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x18),0,0);
      return uVar4;
    }
    break;
  case 1: ;
    iVar2 = *(int *)(this + 0x24);
    uVar4 = F_004e79c0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),(int)*(short *)(iVar2 + 0xc),
                         *(float *)(iVar2 + 0x10),(int)*(short *)(iVar2 + 0xe));
    return uVar4;
  case 2: ;
    bVar3 = F_00bd2480(this);
    uVar4 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 == 0) {
      iVar2 = *(int *)(this + 0x24);
      iVar7 = 0;
      if (0 < *(int *)(iVar2 + 0x10)) {
        do {
          uVar8 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0xc) + iVar7 * 4 + iVar2)));
          pvVar6 = (undefined *)F_00bd3f80(this);
          pvVar6 = (undefined *)F_00b607f0(pvVar6,uVar8);
          uVar4 = 0;
          if (pvVar6 != (undefined *)0x0) {
            uVar4 = *(uint *)((int)pvVar6 + 0x2c);
            if (uVar4 == 0x33) {
              uVar4 = *(uint *)(iVar2 + 0x14);
              if (uVar4 == 0) {
                uVar4 = F_00bd6b60(pvVar6,*(undefined4 *)(iVar2 + 0x18));
              }
              else if (uVar4 == 1) {
                uVar4 = F_00bd6910(pvVar6,*(undefined4 *)(iVar2 + 0x18));
              }
            }
            else if (uVar4 == 0x3c) {
              uVar4 = F_00ab6dc0();
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar2 + 0x10));
        return uVar4;
      }
    }
    break;
  case 3: ;
    iVar2 = *(int *)(this + 0x24);
    uVar4 = F_00bd40a0(this);
    if (uVar4 != 0) {
      *(bool *)(uVar4 + 0x2ea7) = *(char *)(iVar2 + 0xc) != '\0';
    }
  }
  return uVar4;
}

/* ref: FUN_00bd7000 */
uint F_00bd7000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7000u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x100) = param_2;
  return param_2;
}

/* ref: FUN_00bd7010 */
byte F_00bd7010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x104) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00bd7020 */
uint F_00bd7020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd7040 */
unsigned int F_00bd7040(float gen_a0)
{
  GEN_ENTER(0xbd7040u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::CutVFXTriggerClip::vf33 */
uint F_00bd7060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x24);
  this_00 = (undefined *)F_00bd3f80(this);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x10)) {
    do {
      this_01 = (undefined *)F_00b607f0(this_00,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0xc) + iVar3 * 4 + iVar1))));
      if ((this_01 != (undefined *)0x0) &&
         ((*(int *)((int)this_01 + 0x2c) == 9 || (*(int *)((int)this_01 + 0x2c) == 0x27)))) {
        F_00be2510(this_01,*(undefined4 *)(iVar1 + 0x14));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0x10));
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,1);
  return uVar2;
}

/* ref: FUN_00bd70d0 */
uint F_00bd70d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd70d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Clip::RandomSyncClip::vf26 */
uint F_00bd70f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd70f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x88) = 0;
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: FUN_00bd71b0 */
unsigned int F_00bd71b0(float gen_a0)
{
  GEN_ENTER(0xbd71b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::CutActionClip::vf26 */
uint F_00bd71f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd71f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(this + 0x78);
  if (uVar4 == 0) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar3 = *(int *)(this + 0x6c);
      if (iVar3 != 0) goto LAB_00bd7215;
    }
    else {
LAB_00bd7215: ;
      uVar1 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    uVar4 = *(uint *)(this + 0x78);
    if (uVar4 == 0) goto LAB_00bd7249;
  }
  if ((*(char *)(uVar4 + 0x12) == '\0') &&
     (piVar2 = *(int * PTR32 *)(uVar4 + 4), uVar4 = 0, piVar2 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,0);
  }
LAB_00bd7249: ;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return uVar4;
}

/* ref: FUN_00bd76e0 */
uint F_00bd76e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd76e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x14) + param_1 * 8 + (int)this;
}

/* ref: Client::System::Scheduler::Clip::EyeBlinkClip::vf33 */
uint F_00bd7700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(this + 0x78);
  if (iVar2 != 0) goto LAB_00bd773e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd7725;
  }
  else {
LAB_00bd7725: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar2 = *(int *)(this + 0x78);
  if (iVar2 == 0) {
    return 0;
  }
LAB_00bd773e: ;
  uVar3 = 0;
  if (*(int *)(iVar2 + 0x44c) != 0) {
    uVar3 = F_00a0c450(*(int *)(iVar2 + 0x44c),
                         (uint)(*((short *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) == 1));
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::EyeBlinkClip::vf25 */
uint F_00bd7770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbd7770u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::EyeBlinkClip::vf26 */
uint F_00bd7780(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(in_ecx + 0x78);
  uVar4 = uVar3;
  if (uVar3 != 0) goto LAB_00bd77be;
  iVar2 = *(int *)(in_ecx + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    iVar2 = *(int *)(in_ecx + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd77a9;
  }
  else {
LAB_00bd77a9: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(in_ecx + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  uVar4 = *(uint *)(in_ecx + 0x78);
LAB_00bd77be: ;
  if ((uVar4 != 0) && (*(int *)(uVar4 + 0x44c) != 0)) {
    uVar3 = F_00a0c450(*(int *)(uVar4 + 0x44c),1);
  }
  return uVar3;
}

/* ref: FUN_00bd77f0 */
uint F_00bd77f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd77f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2f14));
  if (this_00 != (undefined *)0x0) goto LAB_00bd7834;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd781f;
  }
  else {
LAB_00bd781f: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
LAB_00bd7834: ;
  if ((this_00 != (undefined *)0x0) && (*(int *)((int)this + 0x24) != 0)) {
    F_00bc3fb0(this_00,this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc))));
  }
  uVar3 = F_00bd2e60(this);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::PinningClip::vf25 */
uint F_00bd7860(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd789a;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd7885;
  }
  else {
LAB_00bd7885: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00bd789a: ;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_00bc5140(this_00);
    return uVar3;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::PinningClip::vf33 */
uint F_00bd78b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd78b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  undefined * pvVar3;
  undefined * this_00;
  
  pvVar3 = *(undefined * PTR32 *)(this + 0x78);
  this_00 = pvVar3;
  if (pvVar3 != (undefined *)0x0) goto LAB_00bd78ee;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    pvVar3 = (undefined *)0x0;
    if (iVar2 != 0) goto LAB_00bd78d9;
  }
  else {
LAB_00bd78d9: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    pvVar3 = (undefined *)F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00bd78ee: ;
  if (this_00 != (undefined *)0x0) {
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x24) != 0) {
      pvVar3 = (undefined *)F_00bc3fa0(this_00,this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc))));
    }
  }
  return (uint)pvVar3;
}

/* ref: Client::System::Scheduler::Clip::PinningClip::vf34 */
byte F_00bd7910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  int in_ecx;
  byte bVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd7954;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd793b;
  }
  else {
LAB_00bd793b: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 1;
  }
LAB_00bd7954: ;
  iVar3 = *(int *)(this + 0x24);
  if (((param_1 == 6) && (in_ecx = *(int *)((int)this_00 + 0x448), in_ecx != 0)) &&
     (bVar2 = F_00a0b720(in_ecx), bVar2 != 0)) {
    F_00a0b730(in_ecx,*(undefined4 *)(iVar3 + 0xc));
    return 0;
  }
  F_00bc3fb0(this_00,this,*(undefined4 *)(iVar3 + 0xc));
  return 1;
}

/* ref: Client::System::Scheduler::Clip::AutoShakeBaseClip::vf25 */
unsigned int F_00bd79b0(void)
{
  GEN_ENTER(0xbd79b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::AutoShakeBaseClip::vf26 */
unsigned int F_00bd79c0(void)
{
  GEN_ENTER(0xbd79c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::NonAutoShakeClip::vf33 */
uint F_00bd79d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd79d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd7a0e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd79f5;
  }
  else {
LAB_00bd79f5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd7a0e: ;
  uVar3 = F_00bc3f80(this_00,this);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::NonAutoShakeClip::vf34 */
byte F_00bd7a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd7a5e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd7a45;
  }
  else {
LAB_00bd7a45: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 1;
  }
LAB_00bd7a5e: ;
  F_00bc3f90(this_00,this);
  return 1;
}

/* ref: FUN_00bd7a70 */
unsigned int F_00bd7a70(float gen_a0)
{
  GEN_ENTER(0xbd7a70u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd7a90 */
uint F_00bd7a90(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1107cd4));
  *(undefined4 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: FUN_00bd7ad0 */
uint F_00bd7ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd7b11;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd7afc;
  }
  else {
LAB_00bd7afc: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd7b11: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bd7b30 */
uint F_00bd7b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)F_00bd3ff0(this);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf26 */
unsigned int F_00bd7b80(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7b80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x88) = 0;
  return 0;
}

/* ref: FUN_00bd7b90 */
uint F_00bd7b90(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7b90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00),param_1,0,0);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1);
    return uVar2;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf25 */
uint F_00bd7bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7bc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x88) = 0;
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: FUN_00bd7be0 */
uint F_00bd7be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd7be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc)));
  piVar2 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0x10))),0,0);
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = F_00ab4370(uVar1,param_2,uVar3,0,0);
      *(uint *)((int)this + 0x88) = uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf34 */
byte F_00bd7c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  if (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0) {
    F_009bc530(*(undefined * PTR32 *)(this + 0x88),1);
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf33 */
uint F_00bd7c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = F_00bd7ad0(this);
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    piVar3 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00),*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0x10))),0,0);
    uVar5 = 0;
    if (piVar3 != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3);
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = F_00ab4370(uVar1,uVar2,uVar4,0,0);
        *(uint *)(this + 0x88) = uVar5;
      }
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf0 */
uint F_00bd7cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1107cd4));
  *(undefined4 *)(this + 0x88) = 0;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd7d10 */
unsigned int F_00bd7d10(float gen_a0)
{
  GEN_ENTER(0xbd7d10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd7d30 */
uint F_00bd7d30(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110852c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf26 */
unsigned int F_00bd7d60(void)
{
  GEN_ENTER(0xbd7d60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00bd7e20 */
uint F_00bd7e20(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd7e61;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd7e4c;
  }
  else {
LAB_00bd7e4c: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd7e61: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bd7e80 */
uint F_00bd7e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)F_00bd3ff0(this);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1);
  return uVar2;
}

/* ref: FUN_00bd7ed0 */
uint F_00bd7ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7ed0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00),param_1,0,0);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1);
    return uVar2;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf25 */
uint F_00bd7f00(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7f00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf34 */
byte F_00bd8280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf33 */
uint F_00bd82a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd82a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  uVar4 = F_00bd7e20(this);
  uVar5 = 0;
  if (uVar4 != 0) {
    iVar1 = *(int *)(this + 0x24);
    if (*(char *)(iVar1 + 0x10) == '\0') {
      uVar5 = F_00bd7f10(this,param_1,uVar4);
    }
    else {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(float *)(gen_frame + 0x10)) = 0.0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      uVar5 = F_00ab1ed0(uVar2);
      uVar3 = (*(undefined4 *)(gen_frame + 0x8));
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = (short)uVar2;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 3)) = SUB41(uVar3,3);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = 1;
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 0, 3, (unsigned long long)(CONCAT12(1,(short)uVar2)));
      (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
      (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(ushort *)(uVar5 + 0x14) / (float10)REFG(double, 0x10944b8))));
      uVar5 = F_00a52d10(*(undefined4 *)(uVar4 + 0x74),&(*(undefined4 *)(gen_frame + 0x8)));
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  F_00c47745((*(uint *)(gen_frame + 0x2c)) ^ (uint)(uint)(gen_frame + 0x30));
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf0 */
uint F_00bd8360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110852c));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd8390 */
unsigned int F_00bd8390(float gen_a0)
{
  GEN_ENTER(0xbd8390u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd83b0 */
uint F_00bd83b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd83b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x11086cc));
  *(undefined2 *)((int)this + 0x89) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf7 */
byte F_00bd83f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd83f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x88);
}

/* ref: FUN_00bd8410 */
uint F_00bd8410(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd8451;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd843c;
  }
  else {
LAB_00bd843c: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd8451: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    return uVar4;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf26 */
byte F_00bd85a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd85a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined2 *)(in_ecx + 0x89) = 0;
  *(undefined1 *)(in_ecx + 0x88) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf25 */
uint F_00bd85c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd85c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf33 */
uint F_00bd85d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd85d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  
  uVar1 = F_00bd8410(this);
  uVar2 = 0;
  if (uVar1 != 0) {
    F_00bd8470(this);
    F_00bd84d0(this);
    this[0x89] = (undefined1)0x1;
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf34 */
byte F_00bd8600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf0 */
uint F_00bd8670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x11086cc));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd86a0 */
unsigned int F_00bd86a0(float gen_a0)
{
  GEN_ENTER(0xbd86a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd86c0 */
uint F_00bd86c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd86c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110886c));
  *(undefined1 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf7 */
byte F_00bd86f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd86f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x88);
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf26 */
unsigned int F_00bd8700(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x88) = 0;
  return 0;
}

/* ref: FUN_00bd8720 */
uint F_00bd8720(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd8761;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd874c;
  }
  else {
LAB_00bd874c: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd8761: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    return uVar4;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf25 */
uint F_00bd8780(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf33 */
uint F_00bd8790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint in_ecx;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  in_ecx = F_00bd8720(this);
  uVar2 = 0;
  if (in_ecx != 0) {
    bVar1 = F_00a9fa40(in_ecx,(uint)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xd))) != '\0'));
    uVar2 = CONCAT31(extraout_var,bVar1);
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf34 */
byte F_00bd87c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd87c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf30 */
uint F_00bd87e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd87e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_EAX = 0;
  undefined * this_00;
  uint uVar6;
  float * pfVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  
  uVar6 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    this_00 = (undefined *)F_00bd8720(this);
    uVar6 = 0;
    if (this_00 != (undefined *)0x0) {
      iVar4 = *(int *)(this + 0x24);
      (*(float *)(gen_frame + 0xc)) = gen_bits2f(REFG(float, 0x1108820));
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1108820);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1108820);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1108820);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1108820);
      (*(int *)(gen_frame + 0x2c)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined1 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      bVar8 = *(char *)(iVar4 + 0xc) != '\0';
      (*(undefined1 *)(gen_frame + 0x6f)) = (undefined1)0x0;
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x2c)) + 3)) = bVar8;
      (*(int *)(gen_frame + 0x2c)) = (uint)bVar8 << 0x18;
      pfVar7 = (float *)F_00a5feb0(this_00);
      fVar1 = pfVar7[1];
      (*(float *)(gen_frame + 0x54)) = *(float *)(iVar4 + 0x14);
      (*(float *)(gen_frame + 0x50)) = *(float *)(iVar4 + 0x10);
      (*(float *)(gen_frame + 0x58)) = *(float *)(iVar4 + 0x18);
      (*(float *)(gen_frame + 0x44)) = 0.0;
      fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x10) - (float10)*pfVar7)));
      fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x18) - (float10)pfVar7[2])));
      (*(float *)(gen_frame + 0x40)) = fVar2;
      (*(float *)(gen_frame + 0x48)) = fVar3;
      pfVar7 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x40)) = *pfVar7;
      (*(float *)(gen_frame + 0x44)) = pfVar7[1];
      (*(float *)(gen_frame + 0x48)) = pfVar7[2];
      fVar9 = F_00c4d1fa((float10)pfVar7[2]);
      (*(float *)(gen_frame + 0x68)) = (float)fVar9;
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x10abe50);
      (*(undefined4 *)(gen_frame + 0x28)) = 1;
      if ((*(uint *)&REFG(undefined, 0x14c5abc) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x14c5abc) = *(uint *)&REFG(undefined, 0x14c5abc) | 1;
        *(undefined4 *)&REFG(undefined, 0x14c5aac) = REFG(float, 0x1108830);
        *(undefined4 *)&REFG(undefined, 0x14c5ab0) = REFG(float, 0x10adb9c);
        *(undefined4 *)&REFG(undefined, 0x14c5ab4) = REFG(float, 0x1094870);
        *(undefined4 *)&REFG(undefined, 0x14c5ab8) = REFG(float, 0x1108984);
      }
      fVar12 = REFG(float, 0x1087f04);
      if (*(char *)(iVar4 + 0xe) != '\0') {
        fVar12 = REFG(float, 0x10ac108);
      }
      (*(float *)(gen_frame + 0x68)) = fVar12;
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1108820);
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      fVar12 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x14c5aac) +
                                          ((-(uint)(*(char *)((int)this_00 + 0x2e08) != '\0') & 2) +
                                          (uint)(*(char *)(iVar4 + 0xc) == '\0')) * 4) *
                      (float10)fVar12)));
      (*(float *)(gen_frame + 0x68)) = fVar12;
      (*(float *)(gen_frame + 0xc)) = fVar12;
      fVar10 = (float10)fVar2;
      fVar11 = (float10)fVar3;
      fVar2 = ((float)GEN_TOF((fVar11 * fVar11 + ((float10)0 * (float10)0 + fVar10 * fVar10))));
      (*(float *)(gen_frame + 0x64)) = fVar2;
      fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
      (*(float *)(gen_frame + 0x64)) = fVar2;
      if ((float10)fVar2 <= (float10)fVar12) {
        (*(undefined1 *)(gen_frame + 0x6f)) = (undefined1)0x1;
      }
      bVar5 = F_00a9fca0(this_00);
      if (bVar5 != 0) {
        (*(float *)(gen_frame + 0x54)) = fVar1;
      }
      uVar6 = F_00a9f7c0(this_00,(*(float *)(gen_frame + 0x50)),(*(float *)(gen_frame + 0x54)),(*(float *)(gen_frame + 0x58)),(float)fVar9,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
      (*(undefined * PTR32 *)(gen_frame + 0x3c))[0x88] = (*(undefined1 *)(gen_frame + 0x6f));
    }
  }
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf0 */
uint F_00bd8a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110886c));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd8aa0 */
unsigned int F_00bd8aa0(float gen_a0)
{
  GEN_ENTER(0xbd8aa0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd8ac0 */
uint F_00bd8ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1108b5c));
  *(undefined1 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf26 */
unsigned int F_00bd8af0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8af0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x88) = 0;
  return 0;
}

/* ref: FUN_00bd8b10 */
uint F_00bd8b10(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd8b51;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd8b3c;
  }
  else {
LAB_00bd8b3c: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd8b51: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bd8b80 */
uint F_00bd8b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8b80u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = (param_2[1] - *param_2) / 0x54;
  if (uVar6 < 3) {
    return uVar6;
  }
  pbVar2 = (byte *)F_0042a990(*param_2 + 0xa8);
  uVar6 = 0;
  do {
    pbVar3 = (&REFG(undefined * PTR32, 0x1108c74))[uVar6 * 2];
    pbVar5 = pbVar2;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00bd8be0: ;
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00bd8be5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00bd8be0;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00bd8be5: ;
    if (iVar4 == 0) {
      if ((int)uVar6 < 0) {
        return (uint)pbVar2;
      }
      if ((&REFG(undefined1, 0x1108c78))[uVar6 * 8] == '\0') {
        uVar6 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,5,0);
        return uVar6;
      }
      uVar6 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,5,0);
      return uVar6;
    }
    uVar6 = uVar6 + 1;
    if (1 < uVar6) {
      return (uint)pbVar2;
    }
  } while( true );
}

/* ref: FUN_00bd8c30 */
uint F_00bd8c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  bool bVar7;
  
  uVar3 = (param_2[1] - *param_2) / 0x54;
  if (2 < uVar3) {
    pbVar2 = (byte *)F_0042a990(*param_2 + 0xa8);
    pbVar4 = REFG(undefined * PTR32, 0x1108c84);
    pbVar6 = pbVar2;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00bd8c90: ;
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00bd8c95;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00bd8c90;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00bd8c95: ;
    if (iVar5 != 0) {
      return (uint)pbVar2;
    }
    uVar3 = F_00aaa5b0(param_1,REFG(undefined4, 0x1108c88));
  }
  return uVar3;
}

/* ref: FUN_00bd8cc0 */
uint F_00bd8cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = (param_2[1] - *param_2) / 0x54;
  if (uVar6 < 3) {
    return uVar6;
  }
  pbVar2 = (byte *)F_0042a990(*param_2 + 0xa8);
  uVar6 = 0;
  do {
    pbVar3 = (&REFG(undefined * PTR32, 0x1108c8c))[uVar6 * 2];
    pbVar5 = pbVar2;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00bd8d20: ;
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00bd8d25;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00bd8d20;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00bd8d25: ;
    if (iVar4 == 0) {
      if ((int)uVar6 < 0) {
        return (uint)pbVar2;
      }
      F_00aa2c50(param_1,0,0,0);
      uVar6 = F_00aa6f20(param_1,(uint)(byte)(&REFG(undefined1, 0x1108c90))[uVar6 * 8],1);
      return uVar6;
    }
    uVar6 = uVar6 + 1;
    if (1 < uVar6) {
      return (uint)pbVar2;
    }
  } while( true );
}

/* ref: FUN_00bd8d70 */
uint F_00bd8d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = (param_2[1] - *param_2) / 0x54;
  if (uVar6 < 3) {
    return uVar6;
  }
  pbVar2 = (byte *)F_0042a990(*param_2 + 0xa8);
  uVar6 = 0;
  do {
    pbVar3 = (&REFG(undefined * PTR32, 0x1108c9c))[uVar6 * 2];
    pbVar5 = pbVar2;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00bd8dd0: ;
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00bd8dd5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00bd8dd0;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00bd8dd5: ;
    if (iVar4 == 0) {
      if ((int)uVar6 < 0) {
        return (uint)pbVar2;
      }
      uVar6 = F_00aab790(param_1,(uint)(byte)(&REFG(undefined1, 0x1108ca0))[uVar6 * 8],0,0,0,0);
      return uVar6;
    }
    uVar6 = uVar6 + 1;
    if (1 < uVar6) {
      return (uint)pbVar2;
    }
  } while( true );
}

/* ref: FUN_00bd8e10 */
uint F_00bd8e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  uint uVar8;
  undefined * this;
  bool bVar9;
  
  uVar8 = (param_2[1] - *param_2) / 0x54;
  if (uVar8 < 4) {
    return uVar8;
  }
  pbVar2 = (byte *)F_0042a990(*param_2 + 0xa8);
  uVar8 = 0;
  do {
    pbVar5 = (&REFG(undefined * PTR32, 0x1108cb0))[uVar8 * 2];
    pbVar7 = pbVar2;
    do {
      bVar1 = *pbVar5;
      bVar9 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00bd8e80: ;
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00bd8e85;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar9 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00bd8e80;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_00bd8e85: ;
    if (iVar6 == 0) {
      uVar3 = F_00c4b813((&REFG(undefined * PTR32, 0x1108cb0))[uVar8 * 2],"mount",5);
      if ((int)uVar8 < 0) {
        return uVar3;
      }
      uVar4 = F_0042a990(*param_2 + 0xfc);
      uVar4 = F_00c4c74c(uVar4);
      this = param_1;
      if (uVar3 == 0) {
        if (8 < (int)uVar4) {
          uVar4 = 1;
        }
        this = *(undefined * PTR32 *)((int)param_1 + 0x2e00);
      }
      if (this == (undefined *)0x0) {
        return uVar4;
      }
      uVar8 = F_00aa2260(this,*(undefined4 *)(&REFG(undefined, 0x1108cb4) + uVar8 * 8),uVar4);
      return uVar8;
    }
    uVar8 = uVar8 + 1;
    if (0xe < uVar8) {
      return (uint)pbVar2;
    }
  } while( true );
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf25 */
uint F_00bd8f10(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf34 */
byte F_00bd8f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: FUN_00bd8f40 */
uint F_00bd8f40(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8f40u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  
  uVar2 = (param_1[1] - *param_1) / 0x54;
  if (4 < uVar2) {
    uVar2 = F_0042a990(*param_1 + 0xa8);
    uVar2 = F_00c4c74c(uVar2);
    uVar3 = F_0042a990(*param_1 + 0xfc);
    uVar3 = F_00c4c74c(uVar3);
    uVar4 = F_0042a990(*param_1 + 0x150);
    uVar4 = F_00c4c74c(uVar4);
    bVar1 = F_005f2520(REFG(void * PTR32, 0x1379cb0),uVar2,uVar3,uVar4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00bd8fd0 */
uint F_00bd8fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  uVar2 = (param_2[1] - iVar1) / 0x54;
  if (2 < uVar2) {
    (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1375ac0);
    (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1375ac4);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1375ac8);
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 9;
    uVar2 = F_0042a990(iVar1 + 0xa8);
    uVar2 = F_00c4c74c(uVar2);
    uVar2 = F_00aa4270(param_1,uVar2,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0);
  }
  return uVar2;
}

/* ref: FUN_00bd90a0 */
uint F_00bd90a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd90a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  char * _Str1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  byte * pbVar6;
  byte * pbVar7;
  bool bVar8;
  char * _Str2;
  
  iVar5 = param_1[1] - *param_1;
  uVar2 = iVar5 * 0x30c30c31;
  uVar4 = iVar5 / 0x54;
  if (1 < uVar4) {
    _Str2 = "omnishadow";
    _Str1 = (char *)F_0042a990(*param_1 + 0x54);
    uVar2 = F_00c4c468(_Str1,_Str2);
    if ((uVar2 == 0) && (2 < uVar4)) {
      pbVar3 = (byte *)F_0042a990(*param_1 + 0xa8);
      uVar2 = 0;
      do {
        pbVar6 = (&REFG(undefined * PTR32, 0x1108d28))[uVar2 * 2];
        pbVar7 = pbVar3;
        do {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00bd9130: ;
            uVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00bd9135;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00bd9130;
          pbVar6 = pbVar6 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_00bd9135: ;
        if (uVar4 == 0) {
          if ((int)uVar2 < 0) {
            return 0;
          }
          uVar2 = F_006352b0(REFG(void * PTR32, 0x1371280),(uint)(byte)(&REFG(undefined1, 0x1108d2c))[uVar2 * 8]);
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        if (1 < uVar2) {
          return uVar4;
        }
      } while( true );
    }
  }
  return uVar2;
}

/* ref: FUN_00bd9170 */
uint F_00bd9170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  bool bVar6;
  
  pbVar2 = ((byte *)GEN_TOP(((param_1[1] - *param_1) / 0x54)));
  if ((byte *)0x1 < pbVar2) {
    pbVar2 = (byte *)F_0042a990(*param_1 + 0x54);
    pbVar3 = REFG(undefined * PTR32, 0x1108d3c);
    pbVar5 = pbVar2;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00bd91d0: ;
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00bd91d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00bd91d0;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00bd91d5: ;
    if (iVar4 != 0) {
      return (uint)pbVar2;
    }
    if (REFG(int, 0x1108d38) == 0) {
      pbVar2 = (byte *)F_00bd8f40(param_1);
    }
  }
  return (uint)pbVar2;
}

/* ref: FUN_00bd9210 */
uint F_00bd9210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  uint uVar7;
  bool bVar8;
  
  uVar2 = F_00bd8b10(this);
  uVar7 = 0;
  if (uVar2 != 0) {
    uVar7 = (param_1[1] - *param_1) / 0x54;
    if (1 < uVar7) {
      pbVar3 = (byte *)F_0042a990(*param_1 + 0x54);
      uVar7 = 0;
      do {
        pbVar4 = (&REFG(undefined * PTR32, 0x1108d44))[uVar7 * 2];
        pbVar6 = pbVar3;
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00bd9290: ;
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00bd9295;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00bd9290;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00bd9295: ;
        if (iVar5 == 0) {
          if (-1 < (int)uVar7) {
            pbVar3 = ((byte *)GEN_TOP((&REFG(undefined4, 0x1108d40))[uVar7 * 2]));
            switch((unsigned int)(uintptr_t)(pbVar3)) {
            case (byte *)0x0: ;
              uVar7 = F_00bd8b80(uVar2,param_1);
              return uVar7;
            case (byte *)0x1: ;
              uVar7 = F_00bd8c30(uVar2,param_1);
              return uVar7;
            case (byte *)0x2: ;
              uVar7 = F_00bd8cc0(uVar2,param_1);
              return uVar7;
            case (byte *)0x3: ;
              uVar7 = F_00bd8d70(uVar2,param_1);
              return uVar7;
            case (byte *)0x4: ;
              uVar7 = F_00bd8fd0(uVar2,param_1);
              return uVar7;
            case (byte *)0x6: ;
              pbVar3 = (byte *)F_00bd8e10(uVar2,param_1);
            }
          }
          return (uint)pbVar3;
        }
        uVar7 = uVar7 + 1;
        if (6 < uVar7) {
          return (uint)pbVar3;
        }
      } while( true );
    }
  }
  return uVar7;
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf33 */
uint F_00bd9370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  undefined * pvVar8;
  undefined * pvVar9;
  bool bVar10;
  ulonglong uVar11;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  iVar6 = *(int *)(this + 0x24);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x8)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),&REFG(undefined, 0x1108a08),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),*(int *)(iVar6 + 0xc) + iVar6,REFG(undefined4, 0x108cc50));
  F_00ada1b0(((undefined1 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x64)),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  iVar6 = (int)(*(undefined * PTR32 *)(gen_frame + 0x4)) - (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f;
  if (((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0))) / 0x54 + iVar6 == iVar6) {
    uVar2 = F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
    return uVar2;
  }
  pbVar3 = (byte *)F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x0)));
  pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  uVar2 = 0;
LAB_00bd9450: ;
  pbVar5 = (&REFG(undefined * PTR32, 0x1108d7c))[uVar2 * 2];
  pbVar7 = pbVar3;
  do {
    bVar1 = *pbVar5;
    bVar10 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00bd9480: ;
      uVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00bd9485;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar10 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00bd9480;
    pbVar5 = pbVar5 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_00bd9485: ;
  if (uVar4 != 0) {
    uVar2 = uVar2 + 1;
    if (2 < uVar2) goto LAB_00bd9495;
    goto LAB_00bd9450;
  }
  if ((int)uVar2 < 0) goto LAB_00bd9495;
  iVar6 = (&REFG(undefined4, 0x1108d78))[uVar2 * 2];
  if (iVar6 == 0) {
    uVar4 = F_00bd9170(this,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  }
  else if (iVar6 == 1) {
    uVar4 = F_00bd9210(this,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  }
  else {
    uVar4 = iVar6 - 2;
    if (uVar4 == 0) {
      uVar4 = F_00bd90a0(&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    }
  }
  pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) == (undefined *)0x0) goto LAB_00bd957d;
  for (; pvVar9 != pvVar8; pvVar9 = (undefined *)((int)pvVar9 + 0x54)) {
    F_0042c880(pvVar9);
  }
  iVar6 = (*(int *)(gen_frame + 0x8)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0));
LAB_00bd9574: ;
  uVar11 = F_00429760((*(undefined * PTR32 *)(gen_frame + 0x0)),(iVar6 / 0x54) * 0x54,0x35);
  uVar4 = (uint)uVar11;
LAB_00bd957d: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar4;
LAB_00bd9495: ;
  pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) == (undefined *)0x0) goto LAB_00bd957d;
  for (; pvVar8 != pvVar9; pvVar8 = (undefined *)((int)pvVar8 + 0x54)) {
    F_0042c880(pvVar8);
  }
  iVar6 = (*(int *)(gen_frame + 0x8)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0));
  goto LAB_00bd9574;
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf0 */
uint F_00bd95a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd95a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1108b5c));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd95d0 */
unsigned int F_00bd95d0(float gen_a0)
{
  GEN_ENTER(0xbd95d0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd95f0 */
uint F_00bd95f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd95f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1108e1c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::GrassNearClip::vf34 */
byte F_00bd9620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::GrassNearClip::vf33 */
unsigned int F_00bd9650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x24);
  if ((*(int *)(iVar1 + 0xc) == 0) || (*(int *)(iVar1 + 0x10) == 0)) {
    F_00621530(REFG(int, 0x137127c) + 0xee30);
  }
  if (*(int *)(iVar1 + 0xc) == 2) {
    F_006214b0(REFG(int, 0x137127c) + 0xee30,*(float *)(iVar1 + 0x14));
  }
  if (*(int *)(iVar1 + 0x10) == 2) {
    F_006214e0(REFG(int, 0x137127c) + 0xee30,*(float *)(iVar1 + 0x18));
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::GrassNearClip::vf0 */
uint F_00bd96c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd96c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1108e1c));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd9720 */
uint F_00bd9720(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1108f3c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf25 */
uint F_00bd9740(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte * pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(in_ecx + 0x78);
  uVar5 = uVar4;
  if (uVar4 != 0) goto LAB_00bd977e;
  iVar3 = *(int *)(in_ecx + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    iVar3 = *(int *)(in_ecx + 0x6c);
    uVar4 = 0;
    if (iVar3 != 0) goto LAB_00bd9769;
  }
  else {
LAB_00bd9769: ;
    uVar2 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(in_ecx + 0x78) = uVar2;
    uVar4 = F_00b595f0(uVar2);
  }
  uVar5 = *(uint *)(in_ecx + 0x78);
LAB_00bd977e: ;
  if ((uVar5 != 0) && (*(int *)(uVar5 + 0x454) != 0)) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)(uVar5 + 0x454) + 0x19)));
    *pbVar1 = *pbVar1 & 0xfb;
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf26 */
unsigned int F_00bd97a0(void)
{
  GEN_ENTER(0xbd97a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf33 */
uint F_00bd97b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd97b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte * pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(in_ecx + 0x78);
  uVar5 = uVar4;
  if (uVar4 != 0) goto LAB_00bd97ee;
  iVar3 = *(int *)(in_ecx + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    iVar3 = *(int *)(in_ecx + 0x6c);
    uVar4 = 0;
    if (iVar3 != 0) goto LAB_00bd97d9;
  }
  else {
LAB_00bd97d9: ;
    uVar2 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(in_ecx + 0x78) = uVar2;
    uVar4 = F_00b595f0(uVar2);
  }
  uVar5 = *(uint *)(in_ecx + 0x78);
LAB_00bd97ee: ;
  if ((uVar5 != 0) && (*(int *)(uVar5 + 0x454) != 0)) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)(uVar5 + 0x454) + 0x19)));
    *pbVar1 = *pbVar1 | 4;
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf34 */
byte F_00bd9810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9810u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte * pbVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_ecx + 0x78);
  if (iVar3 != 0) goto LAB_00bd984e;
  iVar3 = *(int *)(in_ecx + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    iVar3 = *(int *)(in_ecx + 0x6c);
    if (iVar3 != 0) goto LAB_00bd9839;
  }
  else {
LAB_00bd9839: ;
    uVar2 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(in_ecx + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  iVar3 = *(int *)(in_ecx + 0x78);
LAB_00bd984e: ;
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x454) != 0)) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)(iVar3 + 0x454) + 0x19)));
    *pbVar1 = *pbVar1 & 0xfb;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf0 */
uint F_00bd9880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd98b0 */
unsigned int F_00bd98b0(float gen_a0)
{
  GEN_ENTER(0xbd98b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd98d0 */
uint F_00bd98d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd98d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x11090dc));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::KeepHighTextureClip::vf34 */
byte F_00bd9900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::KeepHighTextureClip::vf25 */
unsigned int F_00bd9910(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd994a;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd9935;
  }
  else {
LAB_00bd9935: ;
    uVar2 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00bd994a: ;
  if (this_00 != (undefined *)0x0) {
    uVar4 = F_00bbaf90(this_00);
    if ((uVar4 != 0) && (*(int *)(uVar4 + 0xec) != 0)) {
      puVar1 = ((ushort *)GEN_TOP((*(int *)(uVar4 + 0xec) + 0x70)));
      *puVar1 = *puVar1 & 0xffef;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::KeepHighTextureClip::vf33 */
uint F_00bd9970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  iVar1 = *(int *)(this + 0x24);
  if (this_00 != (undefined *)0x0) goto LAB_00bd99b2;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd9999;
  }
  else {
LAB_00bd9999: ;
    uVar2 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
LAB_00bd99b2: ;
  uVar4 = F_00bbaf90(this_00);
  uVar5 = 0;
  if ((uVar4 != 0) && (uVar5 = *(uint *)(uVar4 + 0xec), uVar5 != 0)) {
    *(ushort *)(uVar5 + 0x70) =
         (ushort)(*(char *)(iVar1 + 0xc) != '\0') << 4 | *(ushort *)(uVar5 + 0x70) & 0xffef;
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::KeepHighTextureClip::vf0 */
uint F_00bd99f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd99f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x11090dc));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd9a30 */
unsigned int F_00bd9a30(float gen_a0)
{
  GEN_ENTER(0xbd9a30u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd9a50 */
uint F_00bd9a50(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110927c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SpecialSelfShadowClip::vf25 */
uint F_00bd9a80(void)
{
  GEN_ENTER(0xbd9a80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14c4e78);
  if (REFG(undefined4, 0x14c4e78) != 0) {
    *(undefined4 *)(REFG(undefined4, 0x14c4e78) + 0x18) = *(undefined4 *)(REFG(undefined4, 0x14c4e78) + 0x1c);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::SpecialSelfShadowClip::vf34 */
byte F_00bd9a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::SpecialSelfShadowClip::vf33 */
uint F_00bd9aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x14c4e78);
  uVar3 = *(uint *)(this + 0x24);
  if (REFG(int, 0x14c4e78) != 0) {
    if (*(int *)(uVar3 + 0x10) == 0) {
      *(undefined4 *)(REFG(int, 0x14c4e78) + 0x18) = *(undefined4 *)(REFG(int, 0x14c4e78) + 0x1c);
    }
    piVar2 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00),*((undefined4 *)GEN_TOP((uVar3 + *(int *)(uVar3 + 0xc)))),0,0);
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
      *(uint *)(iVar1 + 0x18) = uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00bd9af0 */
uint F_00bd9af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Clip::SpecialSelfShadowClip::vf0 */
uint F_00bd9b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110927c));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd9b40 */
uint F_00bd9b40(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110939c));
  return (uint)this;
}

/* ref: FUN_00bd9b60 */
uint F_00bd9b60(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110939c));
  F_00bc09b0(this);
  uVar1 = F_00bd2e60(this);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::PhysicsWindClip::vf25 */
uint F_00bd9b80(void)
{
  GEN_ENTER(0xbd9b80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00bc09b0(in_ECX);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::PhysicsWindClip::vf26 */
unsigned int F_00bd9b90(void)
{
  GEN_ENTER(0xbd9b90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::PhysicsWindClip::vf33 */
unsigned int F_00bd9ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd9bde;
  iVar4 = *(int *)(this + 0x6c);
  if (iVar4 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar4 = *(int *)(this + 0x6c);
    if (iVar4 != 0) goto LAB_00bd9bc5;
  }
  else {
LAB_00bd9bc5: ;
    uVar2 = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
LAB_00bd9bde: ;
  if ((*(char *)((int)this_00 + 0x12) == '\0') && (iVar4 = *(int *)((int)this_00 + 4), iVar4 != 0))
  {
    bVar3 = false;
    if ((*(int *)(iVar4 + 0x6c) == 2) && (*(int *)(iVar4 + 0x88) == 0)) {
      bVar3 = true;
    }
    cVar1 = *((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    if (-1 < cVar1) {
      if (!bVar3) {
        F_00bc40b0(this_00,this,(int)cVar1);
        return 0;
      }
      F_00bc0910(this,(int)cVar1);
      return 0;
    }
    if (bVar3) {
      F_00bc09b0(this);
      return 0;
    }
    F_00bc40c0(this_00,this);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::PhysicsWindClip::vf0 */
uint F_00bd9c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110939c));
  F_00bc09b0(this);
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd9c90 */
unsigned int F_00bd9c90(float gen_a0)
{
  GEN_ENTER(0xbd9c90u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd9cb0 */
uint F_00bd9cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109554));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SetHigherEquipmentClip::vf34 */
byte F_00bd9ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00bd9cf0 */
uint F_00bd9cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x78);
  if (pvVar4 == (undefined *)0x0) {
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar2 = *(int *)((int)this + 0x6c);
      pvVar3 = (undefined *)0x0;
      if (iVar2 != 0) goto LAB_00bd9d16;
    }
    else {
LAB_00bd9d16: ;
      uVar1 = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)((int)this + 0x78) = uVar1;
      pvVar3 = (undefined *)F_00b595f0(uVar1);
    }
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x78);
    if (pvVar4 == (undefined *)0x0) {
      pvVar4 = (undefined *)0x0;
      goto LAB_00bd9d3a;
    }
  }
  pvVar3 = (undefined *)F_00bbaf90(pvVar4);
  pvVar4 = pvVar3;
LAB_00bd9d3a: ;
  iVar2 = REFG(int, 0x1379694);
  if ((pvVar4 != (undefined *)0x0) && (REFG(int, 0x1379694) != 0)) {
    F_00aa2260(pvVar4,0,*(undefined4 *)(REFG(int, 0x1379694) + 0x2d90));
    F_00aa2260(pvVar4,1,*(undefined4 *)(iVar2 + 0x2d94));
    F_00aa2260(pvVar4,2,*(undefined4 *)(iVar2 + 0x2d98));
    F_00aa2260(pvVar4,3,*(undefined4 *)(iVar2 + 0x2d9c));
    F_00aa2260(pvVar4,4,*(undefined4 *)(iVar2 + 0x2da0));
    F_00aa80c0(pvVar4,0,*(undefined4 *)(iVar2 + 0x16b0),*(undefined4 *)(iVar2 + 0x16b4));
    pvVar3 = (undefined *)F_00aa80c0(pvVar4,1,*(undefined4 *)(iVar2 + 0x1e50),
                                  *(undefined4 *)(iVar2 + 0x1e54));
  }
  return (uint)pvVar3;
}

/* ref: Client::System::Scheduler::Clip::SetHigherEquipmentClip::vf19 */
byte F_00bd9dd0(void)
{
  GEN_ENTER(0xbd9dd0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),"CharaMakeClassEquip");
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    iVar4 = 0;
    if (0 < (int)uVar2) {
      do {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,iVar4)));
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar2);
    }
  }
  return 1;
}

/* ref: FUN_00bd9e40 */
uint F_00bd9e40(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint local_8;
  
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x78);
  if (pvVar3 != (undefined *)0x0) goto LAB_00bd9e88;
  iVar6 = *(int *)((int)this + 0x6c);
  if (iVar6 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar6 = *(int *)((int)this + 0x6c);
    uVar2 = 0;
    if (iVar6 != 0) goto LAB_00bd9e6b;
  }
  else {
LAB_00bd9e6b: ;
    uVar1 = *(undefined4 *)(iVar6 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    uVar2 = F_00b595f0(uVar1);
  }
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x78);
  if (pvVar3 == (undefined *)0x0) {
    return uVar2;
  }
LAB_00bd9e88: ;
  pvVar3 = (undefined *)F_00bbaf90(pvVar3);
  uVar2 = 0;
  if (pvVar3 != (undefined *)0x0) {
    uVar4 = F_00ab21a0((uint)*(byte *)((int)pvVar3 + 0x1688));
    uVar2 = 0;
    if (uVar4 != 0) {
      local_8 = (uint)*(byte *)(uVar4 + 0x3e);
      if ((*(int *)(uVar4 + 0x10) == 0x20) || (*(int *)(uVar4 + 0x10) == 0x21)) {
        local_8 = 1;
      }
      iVar6 = 0;
      uVar2 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xc0);
      if (0 < (int)uVar2) {
        while( true ) {
          puVar5 = (undefined4 *)F_00ab3660(iVar6);
          if (puVar5[0xe] == local_8) break;
          iVar6 = iVar6 + 1;
          if ((int)uVar2 <= iVar6) {
            return local_8;
          }
        }
        F_00aa2260(pvVar3,0,*puVar5);
        F_00aa2260(pvVar3,1,puVar5[2]);
        F_00aa2260(pvVar3,2,puVar5[4]);
        F_00aa2260(pvVar3,3,puVar5[6]);
        F_00aa2260(pvVar3,4,puVar5[8]);
        F_00aa80c0(pvVar3,0,puVar5[10],0);
        uVar2 = F_00aa80c0(pvVar3,1,puVar5[0xc],0);
      }
    }
  }
  return uVar2;
}

