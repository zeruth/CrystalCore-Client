#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_007761d0 */
unsigned int F_007761d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7761d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar3 = *(int *)((int)this + 800) + 1;
  param_1[1] = param_2[1];
  fVar4 = (float10)REFG(double, 0x1088108);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *param_1 = ((float)GEN_TOF(((float10)*param_2 +
                    ((float10)*(float *)(&REFG(undefined, 0x13285d8) + iVar3 * 8) - fVar4) * fVar5)));
  fVar1 = *(float *)(&REFG(undefined, 0x13285dc) + iVar3 * 8);
  fVar2 = param_2[2];
  *(int *)((int)this + 800) = iVar3;
  param_1[2] = ((float)GEN_TOF((((float10)fVar1 - fVar4) * fVar5 + (float10)fVar2)));
  if (0x13 < iVar3) {
    *(undefined4 *)((int)this + 800) = 0;
  }
  return 0;
}

/* ref: FUN_00776230 */
uint F_00776230(unsigned int gen_a0)
{
  GEN_ENTER(0x776230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x1e);
  if (uVar2 != 0) {
    iVar4 = 0x13;
    iVar3 = 0x9c;
    do {
      if (*((int *)GEN_TOP((iVar3 + -0x48 + *(int *)(uVar2 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((iVar3 + -0x48 + *(int *)(uVar2 + 0x20)))) = 0;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 + -0x24 + *(int *)(uVar2 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((iVar3 + -0x24 + *(int *)(uVar2 + 0x20)))) = 0;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar3))) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar3))) = 0;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((iVar3 + 0x24 + *(int *)(uVar2 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((iVar3 + 0x24 + *(int *)(uVar2 + 0x20)))) = 0;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      iVar3 = iVar3 + 0x90;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (**(int * PTR32 *)(uVar2 + 0x20) != 0) {
      **(int * PTR32 *)(uVar2 + 0x20) = 0;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_007762e0 */
byte F_007762e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7762e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x3b0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_007762f0 */
unsigned int F_007762f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7762f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xc),0);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_00776320 */
unsigned int F_00776320(unsigned int gen_a0)
{
  GEN_ENTER(0x776320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  undefined * this_01;
  uint uVar6;
  uint * puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint local_c;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x3d);
    if (uVar4 != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0x38)));
      if (this_00 != (undefined *)0x0) {
        uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
        uVar11 = 0;
        uVar10 = 0;
        iVar8 = 1;
        uVar9 = 7;
        local_c = 1;
        this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar6 = F_0043bd00(this_01,uVar9,uVar10,uVar11);
        if (uVar6 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc)))) {
          *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc))) = uVar6;
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x80))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x80))) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        do {
          bVar2 = F_00a6a9e0(&REFG(undefined, 0x14b29c0),iVar8);
          if ((bVar2 != 0) && (puVar7 = (uint *)F_00ab2020(iVar8), puVar7 != (uint *)0x0)) {
            if ((char)uVar5 != '\0') {
              puVar7 = puVar7 + 1;
            }
            uVar6 = local_c & 0xffff;
            F_00431250(this_00,uVar6 + 3,(*puVar7 & 0xffffff) + (int)puVar7,0,1,0);
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x80 + uVar6 * 4))) != iVar8) {
              *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x80 + uVar6 * 4))) = iVar8;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            local_c = local_c + 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 0x100);
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x7c))) != (local_c & 0xffff)) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x7c))) = local_c & 0xffff;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00776460 */
uint F_00776460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  byte bVar4;
  ushort uVar5;
  undefined * this_00;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined * this_01;
  uint uVar11;
  undefined4 * puVar12;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  uVar6 = param_1 - 1000U;
  if (param_1 - 1000U == 0) {
    this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_1);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    uVar11 = *(uint *)(uVar6 + 0x28aac + param_1 * 4);
    uVar6 = uVar11;
    if ((this_00 != (undefined *)0x0) && (uVar11 != 0)) {
      piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0x24))(piVar7,8);
      uVar6 = 0;
      if (uVar8 != 0) {
        piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7,7);
        uVar6 = 0;
        if (uVar9 != 0) {
          local_18 = *(int *)((int)this_00 + 0xc);
          if (0xd < local_18) {
            local_18 = 0xe;
          }
          uVar10 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,0);
          uVar3 = REFG(undefined2, 0x14ab148);
          uVar6 = (uint)REFG(undefined2, 0x14ab148);
          if ((REFG(undefined2, 0x14ab148) == 0) || (bVar1 = true, (ushort)uVar10 <= REFG(undefined2, 0x14ab148))) {
            bVar1 = false;
          }
          local_14 = 0;
          if (0 < local_18) {
            local_c = 8;
            puVar12 = (undefined4 *)(uVar11 + 0x60);
            do {
              local_20 = 0;
              local_1c = 0;
              this_01 = (undefined *)F_00a37da0(this_00,local_14);
              bVar2 = 0;
              if ((this_01 == (undefined *)0x0) ||
                 ((*(char *)((int)this_01 + 6) == '\0' && (*(int *)((int)this_01 + 8) == 0)))) {
                ((code *)*(gen_code32 *)(puVar12[-0x18] + 4))(puVar12 + -0x18);
                if (*((int *)GEN_TOP((*(int *)(uVar8 + 0x20) + 4 + local_c))) != 0) {
                  *((undefined4 *)GEN_TOP((*(int *)(uVar8 + 0x20) + 4 + local_c))) = 0;
                  *(undefined1 *)(uVar8 + 0x1d) = 1;
                }
                if (*((int *)GEN_TOP((*(int *)(uVar8 + 0x20) + local_c))) != 0) {
                  *((undefined4 *)GEN_TOP((*(int *)(uVar8 + 0x20) + local_c))) = 0;
                  goto LAB_007766c0;
                }
              }
              else {
                uVar6 = F_00a37c50(this_01);
                local_1c = (uint)(uVar6 != 0);
                uVar6 = F_0046e5e0(this_01);
                if (puVar12[-2] != uVar6) {
                  ((code *)*(gen_code32 *)(puVar12[-0x18] + 4))(puVar12 + -0x18);
                  uVar11 = F_00ab24a0(uVar6);
                  if (uVar11 != 0) {
                    ((code *)*(gen_code32 *)(puVar12[-0x18] + 8))(puVar12 + -0x18,uVar6,uVar11);
                  }
                }
                local_20 = F_00760640((uint)*(byte *)(puVar12 + 1),this_01,*puVar12);
                bVar4 = F_00a36000(this_01);
                local_10 = (uint)bVar4;
                if (local_10 == 0) {
                  uVar5 = F_00906d60(this_01);
                  if (uVar5 != 0) {
                    local_10 = 1;
                  }
                }
                else if ((local_10 == 100) && (uVar5 = F_00906d60(this_01), uVar5 != 30000)) {
                  local_10 = 99;
                }
                if ((bVar1) && (uVar3 < *(byte *)((int)puVar12 + 6))) {
                  bVar2 = 1;
                }
                if (*((uint *)GEN_TOP((local_c + *(int *)(uVar8 + 0x20)))) != local_10) {
                  *((uint *)GEN_TOP((local_c + *(int *)(uVar8 + 0x20)))) = local_10;
                  *(undefined1 *)(uVar8 + 0x1d) = 1;
                }
                uVar6 = 0;
                if (*(char *)((int)puVar12 + 5) != '\0') {
                  bVar4 = F_00760e50(puVar12 + -0x18,this_01);
                  uVar6 = F_00760700((uint)bVar4);
                }
                uVar6 = uVar6 * 2 | (uint)(*(char *)((int)puVar12 + 5) != '\0');
                if (*((uint *)GEN_TOP((*(int *)(uVar8 + 0x20) + 4 + local_c))) != uVar6) {
                  *((uint *)GEN_TOP((*(int *)(uVar8 + 0x20) + 4 + local_c))) = uVar6;
LAB_007766c0: ;
                  *(undefined1 *)(uVar8 + 0x1d) = 1;
                }
              }
              if (*((int *)GEN_TOP((*(int *)(uVar8 + 0x20) + -8 + local_c))) != puVar12[-1]) {
                *((undefined4 *)GEN_TOP((*(int *)(uVar8 + 0x20) + -8 + local_c))) = puVar12[-1];
                *(undefined1 *)(uVar8 + 0x1d) = 1;
              }
              uVar6 = ((uint)bVar2 << 0x10 | local_1c) << 8 | local_20 & 0xff;
              if (*((uint *)GEN_TOP((*(int *)(uVar8 + 0x20) + -4 + local_c))) != uVar6) {
                *((uint *)GEN_TOP((*(int *)(uVar8 + 0x20) + -4 + local_c))) = uVar6;
                *(undefined1 *)(uVar8 + 0x1d) = 1;
              }
              uVar6 = F_0042a990(puVar12 + -0x17);
              if (uVar6 != *((uint *)GEN_TOP((*(int *)(uVar9 + 0x20) + local_14 * 4)))) {
                *((uint *)GEN_TOP((*(int *)(uVar9 + 0x20) + local_14 * 4))) = uVar6;
                *(undefined1 *)(uVar9 + 0x1d) = 1;
              }
              local_c = local_c + 0x10;
              local_14 = local_14 + 1;
              puVar12 = puVar12 + 0x1a;
            } while (local_14 < local_18);
          }
        }
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00776750 */
byte F_00776750(unsigned int gen_a0)
{
  GEN_ENTER(0x776750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar5 = false;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x3d);
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar6 = 0x95;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_0043c920(pvVar3,uVar6,uVar7);
    bVar5 = *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x714))) != uVar4;
    if (bVar5) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x714))) = uVar4;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    uVar7 = 0;
    uVar6 = 0x96;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_0043c920(pvVar3,uVar6,uVar7);
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x718))) != uVar4) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x718))) = uVar4;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
      return 1;
    }
  }
  return bVar5;
}

/* ref: FUN_007767e0 */
uint F_007767e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7767e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  
  ((uint *)(gen_frame + 0x0))[0x3e] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  ((uint *)(gen_frame + 0x0))[0x1f] = 0xc9a;
  ((uint *)(gen_frame + 0x0))[0x20] = 0xc9c;
  ((uint *)(gen_frame + 0x0))[0x21] = 0xc9b;
  ((uint *)(gen_frame + 0x0))[0x22] = 0xc9d;
  ((uint *)(gen_frame + 0x0))[0x23] = 0xc9e;
  ((uint *)(gen_frame + 0x0))[0x24] = 0xc9f;
  ((uint *)(gen_frame + 0x0))[0x25] = 0xca1;
  ((uint *)(gen_frame + 0x0))[0x26] = 0xca2;
  ((uint *)(gen_frame + 0x0))[0x27] = 0xca3;
  ((uint *)(gen_frame + 0x0))[0x28] = 0xca4;
  ((uint *)(gen_frame + 0x0))[0x29] = 0xca5;
  ((uint *)(gen_frame + 0x0))[0x2a] = 0xca6;
  ((uint *)(gen_frame + 0x0))[0x2b] = 0xca8;
  ((uint *)(gen_frame + 0x0))[0x2c] = 0xca9;
  ((uint *)(gen_frame + 0x0))[0x2d] = 0xcaa;
  ((uint *)(gen_frame + 0x0))[0x2e] = 0xcac;
  ((uint *)(gen_frame + 0x0))[0x2f] = 0xcad;
  ((uint *)(gen_frame + 0x0))[0x30] = 0xcae;
  ((uint *)(gen_frame + 0x0))[0x31] = 0xcb0;
  ((uint *)(gen_frame + 0x0))[0x32] = 0xcb1;
  ((uint *)(gen_frame + 0x0))[0x33] = 0xcb3;
  ((uint *)(gen_frame + 0x0))[0x34] = 0xcb4;
  ((uint *)(gen_frame + 0x0))[0x35] = 0xcb5;
  ((uint *)(gen_frame + 0x0))[0x36] = 0xcb7;
  ((uint *)(gen_frame + 0x0))[0x37] = 0xcb8;
  ((uint *)(gen_frame + 0x0))[0x38] = 0xcb9;
  ((uint *)(gen_frame + 0x0))[0x39] = 0xcbb;
  ((uint *)(gen_frame + 0x0))[0x3a] = 0xcc0;
  ((uint *)(gen_frame + 0x0))[0x3b] = 0xcc1;
  ((uint *)(gen_frame + 0x0))[0x3c] = 0xcbd;
  ((uint *)(gen_frame + 0x0))[0x3d] = 0xcbe;
  ((uint *)(gen_frame + 0x0))[0] = 1;
  ((uint *)(gen_frame + 0x0))[1] = 2;
  ((uint *)(gen_frame + 0x0))[2] = 3;
  ((uint *)(gen_frame + 0x0))[3] = 4;
  ((uint *)(gen_frame + 0x0))[4] = 5;
  ((uint *)(gen_frame + 0x0))[5] = 6;
  ((uint *)(gen_frame + 0x0))[6] = 0x25;
  ((uint *)(gen_frame + 0x0))[7] = 0x2a;
  ((uint *)(gen_frame + 0x0))[8] = 0x29;
  ((uint *)(gen_frame + 0x0))[9] = 0x27;
  ((uint *)(gen_frame + 0x0))[10] = 0x28;
  ((uint *)(gen_frame + 0x0))[0xb] = 0x26;
  ((uint *)(gen_frame + 0x0))[0xc] = 0x16;
  ((uint *)(gen_frame + 0x0))[0xd] = 0x1b;
  ((uint *)(gen_frame + 0x0))[0xe] = 0x2c;
  ((uint *)(gen_frame + 0x0))[0xf] = 0x15;
  ((uint *)(gen_frame + 0x0))[0x10] = 0x13;
  ((uint *)(gen_frame + 0x0))[0x11] = 0x18;
  ((uint *)(gen_frame + 0x0))[0x12] = 0x14;
  ((uint *)(gen_frame + 0x0))[0x13] = 0x2d;
  ((uint *)(gen_frame + 0x0))[0x14] = 0x1d;
  ((uint *)(gen_frame + 0x0))[0x15] = 0x1e;
  ((uint *)(gen_frame + 0x0))[0x16] = 0x1f;
  ((uint *)(gen_frame + 0x0))[0x17] = 0x21;
  ((uint *)(gen_frame + 0x0))[0x18] = 0x22;
  ((uint *)(gen_frame + 0x0))[0x19] = 0x2e;
  ((uint *)(gen_frame + 0x0))[0x1a] = 0x30;
  ((uint *)(gen_frame + 0x0))[0x1b] = 0x48;
  ((uint *)(gen_frame + 0x0))[0x1c] = 0x49;
  ((uint *)(gen_frame + 0x0))[0x1d] = 0x46;
  ((uint *)(gen_frame + 0x0))[0x1e] = 0x47;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))()));
  piVar6 = (int *)(param_1 + 0x1b4);
  iVar5 = 0;
  do {
    uVar3 = F_0043bd00(this_00,*(undefined4 *)((int)((uint *)(gen_frame + 0x0)) + iVar5 + 0x7c),0,0);
    F_005a2710(piVar6 + -0x3f,6);
    uVar1 = *(undefined4 *)((int)((uint *)(gen_frame + 0x0)) + iVar5);
    piVar6[-0x3e] = uVar3;
    uVar4 = F_00ab2290(uVar1);
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar2 = *(uint *)(uVar4 + 4);
      uVar3 = F_005a2710(piVar6 + -1,6);
      *piVar6 = (uVar2 & 0xffffff) + uVar4 + 4;
    }
    iVar5 = iVar5 + 4;
    piVar6 = piVar6 + 2;
  } while (iVar5 < 0x7c);
  F_00c47745(((uint *)(gen_frame + 0x0))[0x3e] ^ (uint)(uint)(gen_frame + 0xfc));
  return uVar3;
}

/* ref: FUN_00776aa0 */
uint F_00776aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x776aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x38)));
  pvVar3 = this_00;
  if (this_00 != (undefined *)0x0) {
    if (*((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x4dc))) == 0) {
      uVar2 = F_00463610(1,1,0);
      pvVar3 = (undefined *)0x0;
      if (uVar2 != 0) {
        pvVar3 = (undefined *)F_00431250(this_00,0x137,uVar2,0,1,0);
      }
    }
    iVar5 = 0x13c;
    iVar4 = 0x4f0;
    local_8 = 2;
    do {
      if ((*((int *)GEN_TOP((iVar4 + *(int *)((int)this_00 + 0x20)))) == 0) &&
         (pvVar3 = (undefined *)F_00463610(1,iVar5 + -0x125,0), pvVar3 != (undefined *)0x0)) {
        pvVar3 = (undefined *)F_00431250(this_00,iVar5,pvVar3,0,1,0);
      }
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    iVar5 = 0x141;
    iVar4 = 0x504;
    local_8 = 3;
    do {
      if ((*((int *)GEN_TOP((iVar4 + *(int *)((int)this_00 + 0x20)))) == 0) &&
         (pvVar3 = (undefined *)F_00463610(1,iVar5 + -0x12d,0), pvVar3 != (undefined *)0x0)) {
        pvVar3 = (undefined *)F_00431250(this_00,iVar5,pvVar3,0,1,0);
      }
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return (uint)pvVar3;
}

/* ref: Client::UI2::Agent::AgentStatus::vf15 */
uint F_00776ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar1 = F_00435250(param_1,0);
  uVar2 = F_00ab21a0(uVar1);
  uVar1 = 0;
  if (uVar2 != 0) {
    if (*(int *)(uVar2 + 0x10) == 0x20) {
      iVar3 = 2;
    }
    else if (*(int *)(uVar2 + 0x10) == 0x21) {
      iVar3 = 4;
    }
    else {
      iVar3 = 1;
    }
    uVar1 = (uint)(iVar3 != 1);
    if (iVar3 == 1) {
      return uVar1;
    }
  }
  if (*(int *)(this + 0xc) != 0) {
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
  }
  return uVar1;
}

/* ref: FUN_00776c20 */
uint F_00776c20(unsigned int gen_a0)
{
  GEN_ENTER(0x776c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ae0db0(&REFG(undefined, 0x14c0920),0x28);
  if (uVar1 != 0) {
    F_00ae0cd0(&REFG(undefined, 0x14c0920),0x28);
  }
  uVar1 = F_00ae3f10(&REFG(undefined, 0x14c0920),0x28);
  *(undefined4 *)((int)this + 0x14) = 1;
  return uVar1;
}

/* ref: FUN_00776c60 */
byte F_00776c60(unsigned int gen_a0)
{
  GEN_ENTER(0x776c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1[0x3b] == 0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00776c80 */
uint F_00776c80(unsigned int gen_a0)
{
  GEN_ENTER(0x776c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00ae0cd0(&REFG(undefined, 0x14c0920),0x28);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  piVar1 = *(int * PTR32 *)((int)this + 0x38);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar2;
}

/* ref: FUN_00776cc0 */
uint F_00776cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  *(char *)((int)this + 0x3c) = (char)param_1;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x3d);
  if (uVar2 != 0) {
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x710))) != (uint)((char)param_1 != '\0')) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x710))) = (uint)((char)param_1 != '\0');
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00776d10 */
uint F_00776d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776d10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = param_2 + param_1 * 2;
  if (0x15 < uVar1) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0) ^ (uint)(uint)(gen_out + 0x0));
    return uVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0) ^ (uint)(uint)(gen_out + 0x0));
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentTargetCircle::vf1 */
uint F_00776e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x776e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentTargetCircle::vf2 */
unsigned int F_00776e20(void)
{
  GEN_ENTER(0x776e20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::Agent::AgentTargetCursor::vf1 */
uint F_00776e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x776e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00776e40 */
uint F_00776e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776e40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  bVar3 = F_00ac3640(&REFG(undefined, 0x14bcf40));
  iVar2 = (*(int *)&gen_args[0]);
  iVar4 = 0;
  if (bVar3 != 0) {
    (*(int *)&gen_args[0]) = 0;
    (*(int *)(gen_frame + 0x8)) = 0;
    F_00ac8670(&(*(int *)&gen_args[0]),&(*(int *)(gen_frame + 0x8)));
    iVar4 = (*(int *)&gen_args[0]) * 0x10000 + (*(int *)(gen_frame + 0x8));
    if (*((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x98))) != iVar4) {
      *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x98))) = iVar4;
      *(undefined1 *)(iVar2 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x9c))) != -0x10018) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x9c))) = 0xfffeffe8;
      *(undefined1 *)(iVar2 + 0x1d) = 1;
    }
    iVar4 = 1;
    if (*((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xa0))) != -0x67aff8) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xa0))) = 0xff985008;
      *(undefined1 *)(iVar2 + 0x1d) = 1;
    }
  }
  uVar1 = *(uint *)(iVar2 + 0x20);
  if (*(int *)(uVar1 + 0x94) != iVar4) {
    *(int *)(uVar1 + 0x94) = iVar4;
    *(undefined1 *)(iVar2 + 0x1d) = 1;
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentTargetCursor::vf2 */
unsigned int F_00776ef0(void)
{
  GEN_ENTER(0x776ef0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00776f00 */
uint F_00776f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x776f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 < 6) {
    uVar1 = 1 << ((byte)param_1 & 0x1f);
    if ((char)param_2 != '\0') {
      *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | uVar1;
      return (uint)this;
    }
    *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) & ~uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00776f30 */
unsigned int F_00776f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_00538780(&REFG(undefined4, 0x1375bc0));
    *(ulonglong *)((int)this + 0xa8) = uVar1;
  }
  *(char *)((int)this + 0xa0) = (char)param_1;
  return 0;
}

/* ref: FUN_00776f62 */
unsigned int F_00776f62(unsigned int gen_a0)
{
  GEN_ENTER(0x776f62u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))()));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x2d) = 0;
  return 0;
}

/* ref: FUN_00776f70 */
uint F_00776f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x776f70u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  int in_esi = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(in_eax + 0x1c))()));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(in_esi + 8));
  *(undefined4 *)(in_esi + 8) = in_ebx;
  *(undefined4 *)(in_esi + 0x28) = in_ebx;
  *(undefined4 *)(in_esi + 0x24) = in_ebx;
  *(short *)(in_esi + 0x2d) = (short)in_ebx;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentTrade::vf5 */
uint F_00776fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x776fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  undefined1 AVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined * pvVar9;
  uint uVar10;
  uint uVar11;
  uint * puVar12;
  bool bVar13;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined * local_c;
  
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,10);
  if (uVar5 == 0) {
    return uVar6;
  }
  if (uVar6 == 0) {
    return 0;
  }
  bVar2 = F_00a36640(&REFG(undefined, 0x14a4230));
  if (bVar2 == 0) {
    if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd0))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd0))) = 0;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    uVar6 = *(uint *)(uVar5 + 0x20);
    if (*(int *)(uVar6 + 0xd4) == 0) {
      return uVar6;
    }
    *(undefined4 *)(uVar6 + 0xd4) = 0;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
    return uVar6;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd0))) == 0) {
    uVar7 = F_00a366a0();
    if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x28)))) {
      *(undefined1 *)(uVar6 + 0x1d) = 1;
    }
    *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x28))) = uVar7;
  }
  local_c = this + 0x70;
  local_14 = 0;
  local_1c = 4;
  do {
    pvVar8 = (undefined *)F_00a3af20(&REFG(undefined, 0x14a4230),local_14);
    if (pvVar8 == (undefined *)0x0) {
LAB_007771ed: ;
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(local_c + -0x60) + 4))))(local_c + -0x60);
      if (*((int *)GEN_TOP((local_1c + 8 + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_1c + 8 + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_1c + -4 + *(int *)(uVar5 + 0x20)))) != -1) {
        *((undefined4 *)GEN_TOP((local_1c + -4 + *(int *)(uVar5 + 0x20)))) = 0xffffffff;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_1c + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_1c + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_1c + 4 + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_1c + 4 + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_1c + 0xc + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_1c + 0xc + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar7 = F_0042a990(local_c + -0x5c);
      puVar12 = ((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_14 * 4)));
      if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_14 * 4)))) {
LAB_0077728a: ;
        *puVar12 = uVar7;
        *(undefined1 *)(uVar6 + 0x1d) = 1;
      }
    }
    else {
      if (*(char *)((int)pvVar8 + 6) == '\0') {
        uVar7 = *(uint *)((int)pvVar8 + 8);
        if ((*(byte *)((int)pvVar8 + 0x14) & 1) != 0) {
          uVar7 = uVar7 + 1000000;
        }
      }
      else {
        pvVar9 = (undefined *)F_00a3a860(pvVar8);
        uVar7 = F_0046e5e0(pvVar9);
      }
      if (uVar7 == 0) goto LAB_007771ed;
      if (*(char *)((int)pvVar8 + 6) == '\0') {
        uVar7 = *(uint *)((int)pvVar8 + 8);
        if ((*(byte *)((int)pvVar8 + 0x14) & 1) != 0) {
          uVar7 = uVar7 + 1000000;
        }
      }
      else {
        pvVar9 = (undefined *)F_00a3a860(pvVar8);
        uVar7 = F_0046e5e0(pvVar9);
      }
      if (*(uint *)(local_c + -8) != uVar7) {
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(local_c + -0x60) + 4))))(local_c + -0x60);
        *(undefined4 *)(local_c + -4) = 0xffffffff;
        uVar10 = F_0046e5e0(pvVar8);
        uVar10 = F_00ab24a0(uVar10);
        if (uVar10 != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(local_c + -0x60) + 8))))(local_c + -0x60,uVar7,uVar10);
        }
      }
      uVar7 = F_00760640((uint)(byte)local_c[4],pvVar8,*(undefined4 *)local_c);
      uVar10 = F_00a3a8a0(pvVar8);
      AVar3 = local_c[5];
      if (AVar3 != (undefined1)0x0) {
        bVar2 = F_00760e50(local_c + -0x60,pvVar8);
        piVar4 = (int *)F_00ab3c60((uint)bVar2);
        if (piVar4 == (int *)0x0) {
          local_20 = 0;
        }
        else {
          local_20 = *piVar4;
        }
      }
      if (*((uint *)GEN_TOP((local_1c + 8 + *(int *)(uVar5 + 0x20)))) != (uVar7 & 0xff)) {
        *((uint *)GEN_TOP((local_1c + 8 + *(int *)(uVar5 + 0x20)))) = uVar7 & 0xff;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_1c + -4 + *(int *)(uVar5 + 0x20)))) != *(int *)(local_c + -4)) {
        *((int *)GEN_TOP((local_1c + -4 + *(int *)(uVar5 + 0x20)))) = *(int *)(local_c + -4);
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_1c))) != uVar10) {
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_1c))) = uVar10;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((local_1c + 4 + *(int *)(uVar5 + 0x20)))) != (uint)(byte)local_c[4]) {
        *((uint *)GEN_TOP((local_1c + 4 + *(int *)(uVar5 + 0x20)))) = (uint)(byte)local_c[4];
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar7 = (uint)(AVar3 != (undefined1)0x0) | local_20 * 2;
      if (*((uint *)GEN_TOP((local_1c + 0xc + *(int *)(uVar5 + 0x20)))) != uVar7) {
        *((uint *)GEN_TOP((local_1c + 0xc + *(int *)(uVar5 + 0x20)))) = uVar7;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar7 = F_0042a990(local_c + -0x5c);
      puVar12 = ((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_14 * 4)));
      if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_14 * 4)))) goto LAB_0077728a;
    }
    local_c = local_c + 0x68;
    local_14 = local_14 + 1;
    local_1c = local_1c + 0x14;
  } while (local_14 < 5);
  uVar7 = F_00a3ade0(&REFG(undefined, 0x14a4230));
  if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 200))) != uVar7) {
    *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 200))) = uVar7;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd4))) == 0) {
    uVar7 = F_00a366c0(&REFG(undefined, 0x14a4230));
    if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x2c)))) {
      *(undefined1 *)(uVar6 + 0x1d) = 1;
    }
    *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x2c))) = uVar7;
  }
  local_c = this + 0x27d;
  local_14 = 0;
  local_18 = 0x68;
  do {
    pvVar8 = (undefined *)F_00a36610(&REFG(undefined, 0x14a4230),local_14);
    if (pvVar8 == (undefined *)0x0) {
LAB_007774f9: ;
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(local_c + -0x65) + 4))))(local_c + -0x65);
      if (*((int *)GEN_TOP((local_18 + 8 + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_18 + 8 + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_18 + -4 + *(int *)(uVar5 + 0x20)))) != -1) {
        *((undefined4 *)GEN_TOP((local_18 + -4 + *(int *)(uVar5 + 0x20)))) = 0xffffffff;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_18 + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_18 + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_18 + 4 + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_18 + 4 + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_18 + 0xc + *(int *)(uVar5 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_18 + 0xc + *(int *)(uVar5 + 0x20)))) = 0;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar7 = F_0042a990(local_c + -0x61);
      puVar12 = ((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x14 + local_14 * 4)));
      if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x14 + local_14 * 4)))) {
LAB_00777598: ;
        *puVar12 = uVar7;
        *(undefined1 *)(uVar6 + 0x1d) = 1;
      }
    }
    else {
      if (*(char *)((int)pvVar8 + 6) == '\0') {
        uVar7 = *(uint *)((int)pvVar8 + 8);
        if ((*(byte *)((int)pvVar8 + 0x14) & 1) != 0) {
          uVar7 = uVar7 + 1000000;
        }
      }
      else {
        pvVar9 = (undefined *)F_00a3a860(pvVar8);
        uVar7 = F_0046e5e0(pvVar9);
      }
      if (uVar7 == 0) goto LAB_007774f9;
      if (*(char *)((int)pvVar8 + 6) == '\0') {
        uVar7 = *(uint *)((int)pvVar8 + 8);
        if ((*(byte *)((int)pvVar8 + 0x14) & 1) != 0) {
          uVar7 = uVar7 + 1000000;
        }
      }
      else {
        pvVar9 = (undefined *)F_00a3a860(pvVar8);
        uVar7 = F_0046e5e0(pvVar9);
      }
      if (*(uint *)(local_c + -0xd) != uVar7) {
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(local_c + -0x65) + 4))))(local_c + -0x65);
        *(undefined4 *)(local_c + -9) = 0xffffffff;
        if (*(char *)((int)pvVar8 + 6) == '\0') {
          uVar10 = *(uint *)((int)pvVar8 + 8);
          if ((*(byte *)((int)pvVar8 + 0x14) & 1) != 0) {
            uVar10 = uVar10 + 1000000;
          }
        }
        else {
          pvVar9 = (undefined *)F_00a3a860(pvVar8);
          uVar10 = F_0046e5e0(pvVar9);
        }
        uVar10 = F_00ab24a0(uVar10);
        if (uVar10 != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(local_c + -0x65) + 8))))(local_c + -0x65,uVar7,uVar10);
        }
      }
      uVar7 = F_00760640((uint)(byte)local_c[-1],pvVar8,*(undefined4 *)(local_c + -5));
      uVar10 = F_00a3a8a0(pvVar8);
      AVar3 = *(undefined1 *)local_c;
      bVar13 = AVar3 != (undefined1)0x0;
      if (bVar13) {
        if (AVar3 == (undefined1)0xff) {
          if ((*(char *)((int)pvVar8 + 6) == '\0') || (uVar11 = F_00a3a860(pvVar8), uVar11 == 0))
          {
            AVar3 = *(undefined *)((int)pvVar8 + 0x2f);
          }
          else {
            pvVar8 = (undefined *)F_00a3a860(pvVar8);
            AVar3 = (undefined1)F_0046e590(pvVar8);
          }
        }
        piVar4 = (int *)F_00ab3c60((uint)(byte)AVar3);
        if (piVar4 == (int *)0x0) {
          local_20 = 0;
        }
        else {
          local_20 = *piVar4;
        }
      }
      if (*((uint *)GEN_TOP((local_18 + 8 + *(int *)(uVar5 + 0x20)))) != (uVar7 & 0xff)) {
        *((uint *)GEN_TOP((local_18 + 8 + *(int *)(uVar5 + 0x20)))) = uVar7 & 0xff;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_18 + -4 + *(int *)(uVar5 + 0x20)))) != *(int *)(local_c + -9)) {
        *((int *)GEN_TOP((local_18 + -4 + *(int *)(uVar5 + 0x20)))) = *(int *)(local_c + -9);
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_18))) != uVar10) {
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_18))) = uVar10;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((local_18 + 4 + *(int *)(uVar5 + 0x20)))) != (uint)(byte)local_c[-1]) {
        *((uint *)GEN_TOP((local_18 + 4 + *(int *)(uVar5 + 0x20)))) = (uint)(byte)local_c[-1];
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar7 = (uint)bVar13 | local_20 * 2;
      if (*((uint *)GEN_TOP((local_18 + 0xc + *(int *)(uVar5 + 0x20)))) != uVar7) {
        *((uint *)GEN_TOP((local_18 + 0xc + *(int *)(uVar5 + 0x20)))) = uVar7;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar7 = F_0042a990(local_c + -0x61);
      puVar12 = ((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x14 + local_14 * 4)));
      if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x14 + local_14 * 4)))) goto LAB_00777598;
    }
    local_c = local_c + 0x68;
    local_14 = local_14 + 1;
    local_18 = local_18 + 0x14;
  } while (local_14 < 5);
  uVar6 = F_00a3aec0(&REFG(undefined, 0x14a4230));
  if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xcc))) != uVar6) {
    *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xcc))) = uVar6;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  uVar6 = F_00a36680(&REFG(undefined, 0x14a4230));
  if ((int)uVar6 < 4) {
    iVar1 = *(int *)(uVar5 + 0x20);
    if (uVar6 == 3) {
      if (*(int *)(iVar1 + 0xd0) != 2) {
        *(undefined4 *)(iVar1 + 0xd0) = 2;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
    }
    else if (*(int *)(iVar1 + 0xd0) != 1) {
      *(undefined4 *)(iVar1 + 0xd0) = 1;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
  }
  else if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd0))) != 3) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd0))) = 3;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  uVar6 = F_00a36690(&REFG(undefined, 0x14a4230));
  if ((int)uVar6 < 4) {
    iVar1 = *(int *)(uVar5 + 0x20);
    if (uVar6 == 3) {
      if (*(int *)(iVar1 + 0xd4) == 2) goto LAB_00777686;
      *(undefined4 *)(iVar1 + 0xd4) = 2;
    }
    else {
      if (*(int *)(iVar1 + 0xd4) == 1) goto LAB_00777686;
      *(undefined4 *)(iVar1 + 0xd4) = 1;
    }
  }
  else {
    if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd4))) == 3) goto LAB_00777686;
    *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd4))) = 3;
  }
  *(undefined1 *)(uVar5 + 0x1d) = 1;
LAB_00777686: ;
  bVar2 = F_00a36660(&REFG(undefined, 0x14a4230));
  uVar6 = (uint)(bVar2 != 0);
  if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd8))) == uVar6) {
    return uVar6;
  }
  *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xd8))) = uVar6;
  *(undefined1 *)(uVar5 + 0x1d) = 1;
  return uVar6;
}

/* ref: FUN_007776f0 */
unsigned int F_007776f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7776f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    pcVar1 = *(gen_code32 *)(*(int *)this + 0xc);
    *(undefined1 *)((int)this + 0x428) = 1;
    (*pcVar1)(this);
    return 0;
  }
  return 0;
}

/* ref: FUN_00777710 */
unsigned int F_00777710(unsigned int gen_a0)
{
  GEN_ENTER(0x777710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x420) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x420),0);
    *(undefined4 *)((int)this + 0x420) = 0;
    *(undefined4 *)((int)this + 0x424) = *(undefined4 *)((int)this + 8);
    return 0;
  }
  *(undefined4 *)((int)this + 0x424) = *(undefined4 *)((int)this + 8);
  return 0;
}

/* ref: FUN_00777770 */
uint F_00777770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x777770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x424) = param_2;
  return param_2;
}

/* ref: Client::UI2::Agent::AgentHowtoList::vf3 */
unsigned int F_00777780(unsigned int gen_a0)
{
  GEN_ENTER(0x777780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_007777b0 */
unsigned int F_007777b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7777b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  int * piVar7;
  int * piVar8;
  int iVar9;
  int local_8;
  
  iVar1 = param_1;
  while (iVar1 < param_2) {
    iVar5 = iVar1 + param_2 >> 1;
    iVar2 = *(int *)((int)this + iVar5 * 8 + 0x18);
    uVar3 = *(undefined4 *)((int)this + iVar5 * 8 + 0x1c);
    piVar7 = (int *)((int)this + iVar1 * 8 + 0x18);
    *(undefined4 *)((int)this + iVar5 * 8 + 0x18) = *(undefined4 *)((int)this + iVar1 * 8 + 0x18);
    *(int *)((int)this + iVar5 * 8 + 0x1c) = piVar7[1];
    iVar5 = iVar1 + 1;
    iVar9 = iVar1;
    if (iVar5 <= param_2) {
      local_8 = (param_2 - iVar5) + 1;
      piVar6 = (int *)((int)this + iVar5 * 8 + 0x18);
      do {
        piVar8 = piVar7;
        if (*(byte *)(*piVar6 + 0x18) < *(byte *)(iVar2 + 0x18)) {
          iVar5 = piVar7[3];
          iVar4 = piVar7[2];
          iVar9 = iVar9 + 1;
          piVar8 = piVar7 + 2;
          *piVar8 = *piVar6;
          piVar7[3] = piVar6[1];
          *piVar6 = iVar4;
          piVar6[1] = iVar5;
        }
        piVar6 = piVar6 + 2;
        local_8 = local_8 + -1;
        piVar7 = piVar8;
      } while (local_8 != 0);
    }
    *(undefined4 *)((int)this + iVar1 * 8 + 0x18) = *(undefined4 *)((int)this + iVar9 * 8 + 0x18);
    *(undefined4 *)((int)this + iVar1 * 8 + 0x1c) = *(undefined4 *)((int)this + iVar9 * 8 + 0x1c);
    *(int *)((int)this + iVar9 * 8 + 0x18) = iVar2;
    *(undefined4 *)((int)this + iVar9 * 8 + 0x1c) = uVar3;
    F_007777b0(this,iVar1,iVar9 + -1);
    iVar1 = iVar9 + 1;
  }
  return 0;
}

/* ref: FUN_00777890 */
uint F_00777890(unsigned int gen_a0)
{
  GEN_ENTER(0x777890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  uint uVar9;
  uint local_18;
  int local_14;
  uint local_c;
  undefined1 local_5;
  
  local_5 = 0;
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x2d);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0x29);
  uVar7 = F_00ab0070();
  local_18 = 0;
  local_c = 0;
  if (uVar7 != 0) {
    local_14 = 0x18;
    piVar4 = (int *)((int)this + 0x80);
    do {
      piVar8 = (int *)F_00ab2ba0(local_c);
      if ((piVar8 != (int *)0x0) &&
         ((int)*(char *)((int)this + 0x21) == (uint)*(byte *)((int)piVar8 + 6))) {
        iVar2 = *piVar8;
        bVar3 = F_00a6af60(&REFG(undefined, 0x14ab440),local_c);
        if (bVar3 != 0) {
          uVar9 = F_00ab24a0(iVar2);
          if (uVar9 == 0) {
            local_5 = 1;
          }
          else {
            if (piVar4[-1] != iVar2) {
              ((code *)*(gen_code32 *)(piVar4[-0x17] + 8))(piVar4 + -0x17,iVar2,uVar9);
            }
            if (*((int *)GEN_TOP((local_14 + -0x10 + *(int *)(uVar5 + 0x20)))) != *piVar4) {
              *((int *)GEN_TOP((local_14 + -0x10 + *(int *)(uVar5 + 0x20)))) = *piVar4;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((local_14 + -4 + *(int *)(uVar5 + 0x20)))) != iVar2) {
              *((int *)GEN_TOP((local_14 + -4 + *(int *)(uVar5 + 0x20)))) = iVar2;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            puVar1 = ((uint *)GEN_TOP((local_14 + *(int *)(uVar5 + 0x20))));
            if (*puVar1 != local_c) {
              *puVar1 = local_c;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            uVar9 = F_0042a990(piVar4 + -0x16);
            if (uVar9 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_18 * 4)))) {
              *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_18 * 4))) = uVar9;
              *(undefined1 *)(uVar6 + 0x1d) = 1;
            }
            local_14 = local_14 + 0x14;
            local_18 = local_18 + 1;
            piVar4 = piVar4 + 0x1a;
            if (0x31 < local_18) break;
          }
        }
      }
      local_c = local_c + 1;
    } while (local_c < uVar7);
  }
  if (**(uint * PTR32 *)(uVar5 + 0x20) != local_18) {
    **(uint * PTR32 *)(uVar5 + 0x20) = local_18;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  uVar6 = (int)*(char *)((int)this + 0x21) - 1;
  if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) == uVar6) {
    *(undefined1 *)((int)this + 0x22) = local_5;
    return CONCAT31((int3)(uVar6 >> 8),local_5);
  }
  *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) = uVar6;
  *(undefined1 *)(uVar5 + 0x1d) = 1;
  *(undefined1 *)((int)this + 0x22) = local_5;
  return uVar6;
}

/* ref: FUN_00777a20 */
uint F_00777a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x777a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar1 = param_1 - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar2 = 0x26c;
    break;
  case 1: ;
    uVar2 = 0x26d;
    break;
  case 2: ;
    uVar2 = 0x275;
    break;
  case 3: ;
    uVar2 = 0x26f;
    break;
  case 4: ;
    uVar2 = 0x26e;
    break;
  default: ;
    goto switchD_00777a2f_default;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0046a630(this_00,uVar2);
switchD_00777a2f_default: ;
  *(undefined1 *)((int)this + 0x22) = 1;
  return uVar1;
}

/* ref: FUN_00777a90 */
uint F_00777a90(unsigned int gen_a0)
{
  GEN_ENTER(0x777a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x18) == 0) {
    uVar4 = *(undefined4 *)((int)this + 0x1c);
    uVar3 = 0x270;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0046a6b0(pvVar2,uVar3,uVar4);
  }
  else {
    uVar1 = *(int *)((int)this + 0x18) - 1;
    if (uVar1 == 0) {
      uVar4 = *(undefined4 *)((int)this + 0x1c);
      uVar3 = 0x271;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = F_0046a6b0(pvVar2,uVar3,uVar4);
      *(undefined1 *)((int)this + 0x22) = 1;
      return uVar1;
    }
  }
  *(undefined1 *)((int)this + 0x22) = 1;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCabinet::vf3 */
unsigned int F_00777ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x777ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_00777b10 */
unsigned int F_00777b10(unsigned int gen_a0)
{
  GEN_ENTER(0x777b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x10),0);
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return 0;
}

/* ref: FUN_00777b50 */
uint F_00777b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x777b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  int iVar1;
  undefined * this;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  do {
    if (param_3 < iVar3) {
      return 0;
    }
    this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),iVar3);
    if (this != (undefined *)0x0) {
      iVar1 = *(int *)((int)this + 0xc);
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          this_00 = (undefined *)F_00a37da0(this,iVar4);
          if (this_00 != (undefined *)0x0) {
            if (*(char *)((int)this_00 + 6) == '\0') {
              if (*(int *)((int)this_00 + 8) == 0) goto LAB_00777bc3;
              uVar2 = *(uint *)((int)this_00 + 8);
              if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
                uVar2 = uVar2 + 1000000;
              }
            }
            else {
              this_01 = (undefined *)F_00a3a860(this_00);
              uVar2 = F_0046e5e0(this_01);
            }
            if (uVar2 == param_1) {
              *param_4 = iVar3;
              *param_5 = iVar4;
              return (uint)this_00;
            }
          }
LAB_00777bc3: ;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

/* ref: FUN_00777c00 */
uint F_00777c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x777c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *(uint *)((int)this + 0x14) = param_1;
  return param_1;
}

/* ref: FUN_00777c20 */
unsigned int F_00777c20(unsigned int gen_a0)
{
  GEN_ENTER(0x777c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xc),0);
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return 0;
}

/* ref: FUN_00777cb0 */
unsigned int F_00777cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x777cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)((int)this + 0x38) != 0) {
    F_00406b30(*(int *)((int)this + 0x38) + -4);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  if (*(int *)((int)this + 0x34) != 0) {
    F_00406b30(*(int *)((int)this + 0x34));
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  uVar2 = F_00404270();
  uVar3 = F_00406c00(400,0,uVar2,0);
  *(uint *)((int)this + 0x34) = uVar3;
  puVar4 = (undefined4 *)F_00406c00(0x4b4,0,uVar2,0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar4 + 1;
    *puVar4 = 100;
    iVar7 = 99;
    puVar4 = puVar5;
    do {
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 1) = 0;
      *(undefined2 *)((int)puVar4 + 6) = 0;
      puVar4[2] = 0xffffffff;
      puVar4 = puVar4 + 3;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  *(undefined4 * PTR32 *)((int)this + 0x38) = puVar5;
  iVar6 = 0;
  iVar8 = 0xc;
  iVar7 = 2;
  do {
    *((int *)GEN_TOP((iVar8 + -0xc + *(int *)((int)this + 0x34)))) = *(int *)((int)this + 0x38) + iVar6;
    *((int *)GEN_TOP((iVar6 + 8 + *(int *)((int)this + 0x38)))) = iVar7 + -2;
    *((int *)GEN_TOP((iVar8 + -8 + *(int *)((int)this + 0x34)))) = iVar6 + 0xc + *(int *)((int)this + 0x38);
    *((int *)GEN_TOP((iVar6 + 0x14 + *(int *)((int)this + 0x38)))) = iVar7 + -1;
    *((int *)GEN_TOP((iVar8 + -4 + *(int *)((int)this + 0x34)))) = iVar6 + 0x18 + *(int *)((int)this + 0x38);
    *((int *)GEN_TOP((iVar6 + 0x20 + *(int *)((int)this + 0x38)))) = iVar7;
    *((int *)GEN_TOP((iVar8 + *(int *)((int)this + 0x34)))) = *(int *)((int)this + 0x38) + iVar6 + 0x24;
    *((int *)GEN_TOP((iVar6 + 0x2c + *(int *)((int)this + 0x38)))) = iVar7 + 1;
    *((int *)GEN_TOP((iVar8 + 4 + *(int *)((int)this + 0x34)))) = iVar6 + 0x30 + *(int *)((int)this + 0x38);
    *((int *)GEN_TOP((iVar6 + 0x38 + *(int *)((int)this + 0x38)))) = iVar7 + 2;
    iVar1 = iVar7 + 3;
    iVar8 = iVar8 + 0x14;
    iVar6 = iVar6 + 0x3c;
    iVar7 = iVar7 + 5;
  } while (iVar1 < 100);
  return 0;
}

/* ref: FUN_00777e10 */
unsigned int F_00777e10(unsigned int gen_a0)
{
  GEN_ENTER(0x777e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x24);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x24) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: FUN_00777e40 */
uint F_00777e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x777e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  uint uVar2;
  undefined * this;
  uint * puVar3;
  uint * puVar4;
  
  if (param_5 != -1) {
    F_005a2710((undefined *)(param_1 + 0x100),3);
    *(uint *)(param_1 + 0x104) = (uint)((char)param_6 != '\0');
    F_005a2710((undefined *)(param_1 + 0x108),3);
    *(undefined4 *)(param_1 + 0x10c) = 0x18;
    puVar3 = (uint *)(param_1 + 0x1d4);
    param_1 = 0x18;
    this = param_2;
    puVar4 = param_3;
    do {
      uVar1 = F_00ab65a0(0,*((undefined4 *)GEN_TOP(((param_4 - (int)param_3) + (int)puVar4))));
      F_005a2710(puVar3 + -0x31,3);
      puVar3[-0x30] = uVar1;
      uVar1 = F_00ab6240(*puVar4,1,*((undefined4 *)GEN_TOP(((param_4 - (int)param_3) + (int)puVar4))));
      F_0042e430(this,uVar1);
      uVar1 = F_0042a990(this);
      F_005a2710(puVar3 + -1,6);
      *puVar3 = uVar1;
      uVar1 = *puVar4;
      uVar2 = F_005a2710(puVar3 + 0x2f,3);
      puVar3[0x30] = uVar1;
      puVar3 = puVar3 + 2;
      this = (undefined *)((int)this + 0x54);
      puVar4 = puVar4 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    return uVar2;
  }
  uVar1 = F_005a2710((undefined *)(param_1 + 0x108),3);
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00777f50 */
uint F_00777f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x777f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  F_0042e430(param_2,&REFG(undefined, 0x10be21e));
  while( true ) {
    uVar3 = *(undefined4 *)((int)&REFG(undefined4, 0x10c44ac) + uVar2);
    uVar5 = 0;
    uVar4 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(this_00,uVar3,uVar4,uVar5);
    F_0042e370(param_2,uVar1);
    uVar2 = uVar2 + 4;
    if (0x1b < uVar2) break;
    F_0042e370(param_2,&REFG(undefined, 0x10c0390));
  }
  uVar2 = param_3;
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    uVar2 = F_0042a990(param_2);
    F_005a2710(param_1,6);
    *(uint *)((int)param_1 + 4) = uVar2;
    uVar3 = *(undefined4 *)((int)this + 0x2c);
    uVar2 = F_005a2710((undefined *)((int)param_1 + 8),4);
    *(undefined4 *)((int)param_1 + 0xc) = uVar3;
    return uVar2;
  case 2: ;
  case 4: ;
  case 7: ;
    uVar2 = F_0042a990(param_2);
    F_005a2710((undefined *)((int)param_1 + 0x18),6);
    *(uint *)((int)param_1 + 0x1c) = uVar2;
    uVar3 = *(undefined4 *)((int)this + 0x2c);
    uVar2 = F_005a2710((undefined *)((int)param_1 + 0x20),4);
    *(undefined4 *)((int)param_1 + 0x24) = uVar3;
  }
  return uVar2;
}

/* ref: FUN_00778040 */
uint F_00778040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x778040u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  bool bVar1;
  
  bVar1 = *(ushort *)(param_2 + 6) < *(ushort *)(param_1 + 6);
  if (*(ushort *)(param_2 + 6) == *(ushort *)(param_1 + 6)) {
    bVar1 = *(byte *)(param_1 + 4) < *(byte *)(param_2 + 4);
  }
  return (uint)bVar1;
}

/* ref: FUN_00778070 */
uint F_00778070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x778070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  
  pvVar1 = (undefined *)*param_1;
  if (*(char *)((int)pvVar1 + 6) == '\0') {
    uVar2 = *(uint *)((int)pvVar1 + 8);
    if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
      uVar2 = uVar2 + 1000000;
    }
  }
  else {
    pvVar1 = (undefined *)F_00a3a860(pvVar1);
    uVar2 = F_0046e5e0(pvVar1);
  }
  pvVar1 = (undefined *)*param_2;
  if (*(char *)((int)pvVar1 + 6) != '\0') {
    pvVar1 = (undefined *)F_00a3a860(pvVar1);
    uVar3 = F_0046e5e0(pvVar1);
    return (uint)(uVar2 < uVar3);
  }
  uVar3 = *(uint *)((int)pvVar1 + 8);
  if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
    uVar3 = uVar3 + 1000000;
  }
  return (uint)(uVar2 < uVar3);
}

/* ref: FUN_007780e0 */
uint F_007780e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7780e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  if (param_4 == 2) {
    uVar1 = F_0043bd00(this_00,0x1185,0,0);
    F_005a2710(param_1,6);
    *(uint *)((int)param_1 + 4) = uVar1;
    uVar1 = F_0043bd00(this_00,0x1186,0,0);
    F_005a2710(param_2,6);
    uVar3 = 0x118c;
  }
  else {
    if (param_4 == 4) {
      uVar1 = F_0043bd00(this_00,0x1126,0,0);
      F_005a2710(param_1,6);
      uVar3 = 0x1127;
    }
    else {
      if (param_4 - 7U != 0) {
        return param_4 - 7U;
      }
      uVar1 = F_0043bd00(this_00,0x111c,0,0);
      F_005a2710(param_1,6);
      uVar3 = 0x111d;
    }
    *(uint *)((int)param_1 + 4) = uVar1;
    uVar1 = F_0043bd00(this_00,uVar3,0,0);
    F_005a2710(param_2,6);
    uVar3 = 0x118d;
  }
  *(uint *)((int)param_2 + 4) = uVar1;
  uVar1 = F_0043bd00(this_00,uVar3,0,0);
  uVar2 = F_005a2710(param_3,6);
  *(uint *)((int)param_3 + 4) = uVar1;
  return uVar2;
}

/* ref: FUN_007781f0 */
uint F_007781f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7781f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  if (param_4 == 2) {
    F_005a2710(param_2,3);
    *(undefined4 *)((int)param_2 + 4) = 0;
    uVar1 = F_00a3ace0(&REFG(undefined, 0x14a4230));
    uVar1 = F_00460bd0(this_00,0x11,uVar1);
  }
  else {
    if (param_4 == 4) {
      F_005a2710(param_2,3);
      *(undefined4 *)((int)param_2 + 4) = 1;
      uVar1 = F_005a2710(param_3,6);
      *(undefined * PTR32 *)((int)param_3 + 4) = &REFG(undefined, 0x10be21f);
      return uVar1;
    }
    if (param_4 - 7U != 0) {
      return param_4 - 7U;
    }
    F_005a2710(param_2,3);
    *(undefined4 *)((int)param_2 + 4) = 2;
    uVar1 = F_00a3c240(&REFG(undefined, 0x14a4230),0x17);
    uVar1 = F_00560910(uVar1);
  }
  F_0042e430(param_1,uVar1);
  uVar1 = F_0042a990(param_1);
  uVar2 = F_005a2710(param_3,6);
  *(uint *)((int)param_3 + 4) = uVar1;
  return uVar2;
}

/* ref: FUN_007782c0 */
uint F_007782c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7782c0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * this;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  
  this = param_1;
  uVar4 = 0;
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  param_1 = (undefined *)0x0;
  bVar1 = F_00a3bef0(this);
  if (bVar1 != 0) {
    do {
      if (*(char *)((int)this + 6) == '\0') {
LAB_0077830d: ;
        uVar2 = *((ushort *)GEN_TOP(((int)this + (uVar4 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar3 = F_00a3a860(this);
        if (uVar3 == 0) goto LAB_0077830d;
        uVar3 = uVar4;
        this_00 = (undefined *)F_00a3a860(this);
        uVar2 = F_0071d2c0(this_00,uVar3);
      }
      if (uVar2 == 1) {
        param_1 = (undefined *)((int)param_1 + 1);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)bVar1);
  }
  return (uint)param_1;
}

/* ref: FUN_00778330 */
uint F_00778330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x778330u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * this;
  uint uVar4;
  
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  bVar1 = F_00a3bef0(param_1);
  uVar4 = 0;
  if (bVar1 != 0) {
    do {
      if (*(char *)((int)param_1 + 6) == '\0') {
LAB_00778379: ;
        uVar2 = *((ushort *)GEN_TOP(((int)param_1 + (uVar4 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar3 = F_00a3a860(param_1);
        if (uVar3 == 0) goto LAB_00778379;
        uVar3 = uVar4;
        this = (undefined *)F_00a3a860(param_1);
        uVar2 = F_0071d2c0(this,uVar3);
      }
      if (uVar2 == 1) {
        if (param_2 == 0) {
          return uVar4;
        }
        param_2 = param_2 + -1;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)bVar1);
  }
  return 0;
}

/* ref: FUN_007783b0 */
uint F_007783b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7783b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    do {
      if (*(int *)(param_1 + uVar1 * 4) == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 10);
  }
  return 0;
}

/* ref: FUN_007783e0 */
uint F_007783e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7783e0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * this;
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined * pvVar5;
  uint * puVar6;
  uint uVar7;
  
  this = param_1;
  uVar7 = 0;
  if (param_1 != (undefined *)0x0) {
    param_1 = (undefined *)0x0;
    bVar1 = F_00a3bef0(this);
    if (bVar1 != 0) {
      do {
        if ((*(char *)((int)this + 6) == '\0') || (uVar4 = F_00a3a860(this), uVar4 == 0)) {
          uVar3 = *((ushort *)GEN_TOP(((int)this + (uVar7 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar4 = uVar7;
          pvVar5 = (undefined *)F_00a3a860(this);
          uVar3 = F_0071d2c0(pvVar5,uVar4);
        }
        if (uVar3 == 1) {
          if ((*(char *)((int)this + 6) == '\0') || (uVar4 = F_00a3a860(this), uVar4 == 0)) {
            bVar2 = *((byte *)GEN_TOP(((uVar7 & 0xff) + 0x2a + (int)this)));
          }
          else {
            uVar4 = uVar7;
            pvVar5 = (undefined *)F_00a3a860(this);
            bVar2 = F_0071d300(pvVar5,uVar4);
          }
          param_1 = (undefined *)((int)param_1 + 1 + (uint)bVar2);
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)(uint)bVar1);
    }
    puVar6 = (uint *)F_00ab2140(param_1);
    if (puVar6 != (uint *)0x0) {
      return *puVar6;
    }
  }
  return 0;
}

/* ref: FUN_007784a0 */
uint F_007784a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7784a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  *(undefined4 *)((int)this + 0xc) = 7;
  *(undefined4 *)((int)this + 0x10) = 6;
  *(uint *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 0x4c) = param_3;
  return param_1;
}

/* ref: FUN_007784e0 */
unsigned int F_007784e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7784e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  
  if (*(int *)((int)this + 0x5c) != 0) {
    F_00406b30(*(int *)((int)this + 0x5c) + -4);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  if (*(int *)((int)this + 0x58) != 0) {
    F_00406b30(*(int *)((int)this + 0x58) + -4);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  if (*(int *)((int)this + 0x54) != 0) {
    F_00406b30(*(int *)((int)this + 0x54));
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  if (*(int *)((int)this + 0x50) != 0) {
    F_00406b30(*(int *)((int)this + 0x50));
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  uVar1 = F_00404270();
  uVar2 = F_00406c00(400,0,uVar1,0);
  *(uint *)((int)this + 0x50) = uVar2;
  uVar2 = F_00406c00(400,0,uVar1,0);
  *(uint *)((int)this + 0x54) = uVar2;
  puVar3 = (undefined4 *)F_00406c00(0x324,0,uVar1,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 100;
    puVar3 = puVar3 + 1;
    iVar5 = 99;
    puVar4 = puVar3;
    do {
      *puVar4 = 0;
      *(undefined2 *)(puVar4 + 1) = 0xffff;
      *(undefined1 *)((int)puVar4 + 6) = 0;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  *(undefined4 * PTR32 *)((int)this + 0x58) = puVar3;
  puVar3 = (undefined4 *)F_00406c00(0x324,0,uVar1,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = 100;
    iVar5 = 99;
    puVar3 = puVar4;
    do {
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 0xffff;
      *(undefined1 *)((int)puVar3 + 6) = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  *(undefined4 * PTR32 *)((int)this + 0x5c) = puVar4;
  iVar5 = 0;
  do {
    *((int *)GEN_TOP((*(int *)((int)this + 0x50) + iVar5 * 4))) = *(int *)((int)this + 0x58) + iVar5 * 8;
    *((int *)GEN_TOP((*(int *)((int)this + 0x54) + iVar5 * 4))) = *(int *)((int)this + 0x5c) + iVar5 * 8;
    *((short *)GEN_TOP((*(int *)((int)this + 0x58) + 4 + iVar5 * 8))) = (short)iVar5;
    *((short *)GEN_TOP((*(int *)((int)this + 0x5c) + 4 + iVar5 * 8))) = (short)iVar5;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 100);
  return 0;
}

/* ref: FUN_00778630 */
uint F_00778630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x778630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  F_0042e430(param_2,&REFG(undefined, 0x10be31e));
  while( true ) {
    uVar7 = *(undefined4 *)((int)&REFG(undefined4, 0x10c44c8) + uVar4);
    uVar9 = 0;
    uVar8 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(this_00,uVar7,uVar8,uVar9);
    F_0042e370(param_2,uVar1);
    uVar4 = uVar4 + 4;
    if (0x1b < uVar4) break;
    F_0042e370(param_2,&REFG(undefined, 0x10c03f8));
  }
  iVar3 = param_4;
  if (param_4 == -1) {
    if (param_3 == 1000) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
    else if (param_3 != 9999) {
      iVar6 = 0;
      piVar5 = &REFG(undefined4, 0x10bd928);
      do {
        iVar3 = 0;
        piVar2 = piVar5;
        do {
          if (*piVar2 == 9999) break;
          if (*piVar2 == param_3) {
            iVar3 = iVar6 + 1;
            if (iVar3 != -1) goto LAB_007786f6;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar3 < 4);
        piVar5 = piVar5 + 4;
        iVar6 = iVar6 + 1;
      } while ((int)piVar5 < 0x10bd998);
    }
  }
  else {
LAB_007786f6: ;
    *(int *)((int)this + 0x20) = iVar3;
  }
  uVar4 = F_0042a990(param_2);
  F_005a2710((undefined *)(param_1 + 0x10),6);
  *(uint *)(param_1 + 0x14) = uVar4;
  uVar7 = *(undefined4 *)((int)this + 0x20);
  uVar4 = F_005a2710((undefined *)(param_1 + 0x18),4);
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  return uVar4;
}

/* ref: FUN_00778730 */
unsigned int F_00778730(unsigned int gen_a0)
{
  GEN_ENTER(0x778730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x18) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x18),0);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_00778760 */
unsigned int F_00778760(unsigned int gen_a0)
{
  GEN_ENTER(0x778760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x1c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x1c),0);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return 0;
}

/* ref: FUN_00778790 */
uint F_00778790(unsigned int gen_a0)
{
  GEN_ENTER(0x778790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1000];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xff8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xffc);
  puVar1 = ((undefined4 *)(gen_frame + 0x8));
  iVar4 = 0x1fd;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_005a2710(((undefined1 *)(gen_frame + 0xff0)),3);
  (*(undefined4 *)(gen_frame + 0xff4)) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x1fe,((undefined4 *)(gen_frame + 0x8)));
  *(undefined1 *)((int)this + 0x90) = 0;
  this_00 = &(*(uint *)(gen_frame + 0xff8));
  iVar4 = 0x1fd;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0xff8)) ^ (uint)(uint)(gen_frame + 0xffc));
  return uVar3;
}

/* ref: FUN_00778860 */
uint F_00778860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x778860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (param_3 == 1) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(this_00,0x116c,0,0);
    F_005a2710(param_1,6);
    *(uint *)((int)param_1 + 4) = uVar1;
    uVar1 = F_0043bd00(this_00,0x116d,0,0);
    uVar2 = F_005a2710(param_2,6);
    *(uint *)((int)param_2 + 4) = uVar1;
    return uVar2;
  }
  F_005a2710(param_1,6);
  *(undefined * PTR32 *)((int)param_1 + 4) = &REFG(undefined, 0x10be31f);
  uVar1 = F_005a2710(param_2,6);
  *(undefined * PTR32 *)((int)param_2 + 4) = &REFG(undefined, 0x10be322);
  return uVar1;
}

/* ref: FUN_007788f0 */
uint F_007788f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7788f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte * pbVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  pbVar1 = param_1;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  if ((*param_1 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 4);
    if (3 < uVar3) {
      return (uint)this_00;
    }
  }
  switch((unsigned int)(uintptr_t)(uVar3)) {
  default: ;
    uVar4 = 0x1169;
    param_1 = (byte *)0x116a;
    break;
  case 1: ;
    uVar4 = 0x1170;
    param_1 = (byte *)0x116a;
    break;
  case 2: ;
    uVar4 = 0x1170;
    param_1 = (byte *)0x1172;
    break;
  case 3: ;
    uVar4 = 0x1174;
    param_1 = (byte *)0x1175;
  }
  uVar3 = F_0043bd00(this_00,uVar4,0,0);
  F_005a2710(pbVar1 + 0x180,6);
  *(uint *)(pbVar1 + 0x184) = uVar3;
  uVar3 = F_0043bd00(this_00,param_1,0,0);
  uVar2 = F_005a2710(pbVar1 + 0x188,6);
  *(uint *)(pbVar1 + 0x18c) = uVar3;
  return uVar2;
}

/* ref: FUN_007789c0 */
uint F_007789c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7789c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    do {
      if (*(int *)(param_1 + iVar1 * 4) == param_2) {
        return (int)*(char *)(iVar1 + 0x29 + param_1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
  }
  return 0;
}

/* ref: FUN_007789f0 */
uint F_007789f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7789f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((int)(&REFG(undefined4, 0x10c44e4))[uVar1] <= param_1) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 3;
}

/* ref: FUN_00778a20 */
byte F_00778a20(unsigned int gen_a0)
{
  GEN_ENTER(0x778a20u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  if (*(char *)((int)param_1 + 6) == '\0') {
    uVar2 = *(uint *)((int)param_1 + 8);
    if ((*(byte *)((int)param_1 + 0x14) & 1) != 0) {
      uVar2 = uVar2 + 1000000;
    }
  }
  else {
    this = (undefined *)F_00a3a860(param_1);
    uVar2 = F_0046e5e0(this);
  }
  uVar2 = F_00ab24a0(uVar2);
  if (uVar2 == 0) {
    return 0;
  }
  bVar1 = F_00a3bef0(param_1);
  return *(byte *)(uVar2 + 0xa5) <= bVar1;
}

/* ref: FUN_00778a90 */
uint F_00778a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x778a90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = *(byte *)((int)param_1 + 6) < *(byte *)((int)param_2 + 6);
  if (*(byte *)((int)param_1 + 6) == *(byte *)((int)param_2 + 6)) {
    pvVar1 = (undefined *)*param_1;
    if (*(char *)((int)pvVar1 + 6) == '\0') {
      uVar2 = *(uint *)((int)pvVar1 + 8);
      if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
        uVar2 = uVar2 + 1000000;
      }
    }
    else {
      pvVar1 = (undefined *)F_00a3a860(pvVar1);
      uVar2 = F_0046e5e0(pvVar1);
    }
    pvVar1 = (undefined *)*param_2;
    if (*(char *)((int)pvVar1 + 6) != '\0') {
      pvVar1 = (undefined *)F_00a3a860(pvVar1);
      uVar3 = F_0046e5e0(pvVar1);
      return (uint)(uVar2 < uVar3);
    }
    uVar3 = *(uint *)((int)pvVar1 + 8);
    if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
      uVar3 = uVar3 + 1000000;
    }
    bVar4 = uVar2 < uVar3;
  }
  return (uint)bVar4;
}

/* ref: Client::UI2::Agent::AgentCrossEditor::vf3 */
unsigned int F_00778b10(unsigned int gen_a0)
{
  GEN_ENTER(0x778b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined2 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 8) = 0;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x30))))(*(int * PTR32 *)(this + 4));
    *(byte *)(uVar2 + 0x2c24c) = *(byte *)(uVar2 + 0x2c24c) & 0xbf;
  }
  return 0;
}

/* ref: FUN_00778b60 */
uint F_00778b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x778b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined2 *)((int)this + 0xc) = 1;
  F_0042e430((undefined *)((int)this + 0x14),param_2);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return uVar1;
}

/* ref: FUN_00778b90 */
unsigned int F_00778b90(unsigned int gen_a0)
{
  GEN_ENTER(0x778b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 0xc) = 2;
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return 0;
}

/* ref: FUN_00778c80 */
byte F_00778c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x778c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4));
  if ((-1 < param_1) && (param_1 != 0)) {
    if (param_1 == 1) {
      if (*(short *)((int)this + 0xc) == 1) goto LAB_00778cc6;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x54))))(*(int * PTR32 *)((int)this + 4))));
      F_0044d7e0(this_00);
    }
    return 0;
  }
LAB_00778cc6: ;
  if (*(int *)((int)this + 0x68) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x68),0);
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(byte *)(uVar1 + 0x2c24c) = *(byte *)(uVar1 + 0x2c24c) & 0xbf;
  return 1;
}

/* ref: FUN_00778d10 */
byte F_00778d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x778d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((param_1 < 0) || (param_1 == 1)) {
    *(undefined4 *)((int)this + 0x6c) = 2;
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x68) = 0;
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0x6c) = 1;
      return 1;
    }
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentColorant::vf15 */
uint F_00778d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x778d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((char)uVar1 != '\0') || (*(int *)(this + 0xc) != 0)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  return uVar1;
}

/* ref: FUN_00778d80 */
unsigned int F_00778d80(unsigned int gen_a0)
{
  GEN_ENTER(0x778d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x14) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x14),0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return 0;
}

/* ref: FUN_00778db0 */
unsigned int F_00778db0(unsigned int gen_a0)
{
  GEN_ENTER(0x778db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x28) = 0;
  if (*(int *)((int)this + 0x30) != 0) {
    iVar2 = 0;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + *(int *)((int)this + 0x30))));
      if (puVar1 != (undefined4 *)0x0) {
        F_00a3d7c0(&REFG(undefined, 0x14a4230),*puVar1,(uint)*(ushort *)(puVar1 + 1));
        *((undefined4 *)GEN_TOP((iVar2 + *(int *)((int)this + 0x30)))) = 0;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x1e4);
  }
  return 0;
}

/* ref: FUN_00778e00 */
uint F_00778e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x778e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_0042e430(param_2,&REFG(undefined, 0x10be32a));
  while( true ) {
    uVar5 = *(undefined4 *)((int)&REFG(undefined4, 0x10c4500) + uVar4);
    uVar7 = 0;
    uVar6 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043bd00(this_00,uVar5,uVar6,uVar7);
    F_0042e370(param_2,uVar1);
    uVar4 = uVar4 + 4;
    if (0xf < uVar4) break;
    F_0042e370(param_2,&REFG(undefined, 0x10c0450));
  }
  iVar3 = param_4;
  if (param_4 == -1) {
    if (param_3 == 1000) {
      *(undefined4 *)((int)this + 0x18) = 0;
    }
    else if (param_3 != 9999) {
      uVar4 = 0;
      do {
        iVar3 = 0;
        piVar2 = &REFG(undefined4, 0x10bd928) + (char)(&REFG(undefined1, 0x10c44fc))[uVar4] * 4;
        do {
          if (*piVar2 == 9999) break;
          if (*piVar2 == param_3) {
            iVar3 = (int)(char)(&REFG(undefined, 0x10c44f4))[(char)(&REFG(undefined1, 0x10c44fc))[uVar4]];
            if (iVar3 != -1) goto LAB_00778ec7;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar3 < 4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
    }
  }
  else {
LAB_00778ec7: ;
    *(int *)((int)this + 0x18) = iVar3;
  }
  uVar4 = F_0042a990(param_2);
  F_005a2710(param_1,6);
  *(uint *)((int)param_1 + 4) = uVar4;
  uVar5 = *(undefined4 *)((int)this + 0x18);
  uVar4 = F_005a2710((undefined *)((int)param_1 + 8),4);
  *(undefined4 *)((int)param_1 + 0xc) = uVar5;
  return uVar4;
}

/* ref: FUN_00778f00 */
uint F_00778f00(unsigned int gen_a0)
{
  GEN_ENTER(0x778f00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if ((-1 < (int)param_1) && (param_1 < 8)) {
    return *(uint *)(&REFG(undefined, 0x10c4510) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00778f20 */
uint F_00778f20(unsigned int gen_a0)
{
  GEN_ENTER(0x778f20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if ((-1 < (int)param_1) && (param_1 < 0xb)) {
    return *(uint *)(&REFG(undefined, 0x10c4530) + param_1 * 4);
  }
  return 0xffffffff;
}

/* ref: FUN_00778f50 */
uint F_00778f50(unsigned int gen_a0)
{
  GEN_ENTER(0x778f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x20);
  if ((-1 < iVar1) && (iVar1 < *(int *)((int)this + 0x1c))) {
    return **((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + iVar1 * 4)));
  }
  return 0;
}

/* ref: FUN_00778f70 */
uint F_00778f70(unsigned int gen_a0)
{
  GEN_ENTER(0x778f70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x2c);
  if ((-1 < iVar1) && (iVar1 < *(int *)(in_ecx + 0x28))) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x30) + iVar1 * 4)));
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentContentsTimer::vf1 */
uint F_00778f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x778f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (((0 < param_3) && ((*param_2 & 0xf) != 0)) && (*(int *)(param_2 + 4) < 0)) {
    *(undefined4 *)(this + 8) = 0;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentContentsTimer::vf3 */
unsigned int F_00778fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x778fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (this[0x454] != (undefined1)0x0) {
    this[0x454] = (undefined1)0x0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentGrandCompanyRank::vf1 */
uint F_00779010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x779010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  int iVar3;
  undefined1 * this_00;
  
  (*(char *)(gen_frame + 0x1b)) = '\0';
  if ((param_4 == 0) && (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    bVar1 = F_00a68940(&REFG(undefined1, 0x14ab070));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)(this + 8),2,((undefined4 *)(gen_frame + 0x8)));
    this_00 = ((undefined1 *)(gen_frame + 0x18));
    iVar3 = 1;
    do {
      this_00 = this_00 + -8;
      F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  piVar2 = *(int * PTR32 *)(this + 0xc);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,&(*(undefined4 *)(gen_frame + 0x10)),param_2,param_3,0);
    if (((byte)(*(undefined4 *)(gen_frame + 0x10)) & 0xf) == 2) {
      (*(char *)(gen_frame + 0x1b)) = (char)(*(uint *)(gen_frame + 0x14));
    }
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x10)));
    if ((*(char *)(gen_frame + 0x1b)) != '\0') goto LAB_007790e9;
  }
  if (((*param_2 & 0xf) == 0) || (-1 < *(int *)(param_2 + 4))) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
LAB_007790e9: ;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_00779150 */
uint F_00779150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x779150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined * pvVar5;
  int in_ecx;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint local_10;
  uint local_c;
  int local_8;
  
  F_005a2710(param_1,4);
  *(undefined4 *)((int)param_1 + 4) = 1;
  sVar2 = *(short *)((int)this + 0x24);
  F_005a2710((undefined *)((int)param_1 + 0x10),4);
  *(int *)((int)param_1 + 0x14) = (int)sVar2;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_8 = 0;
  uVar4 = F_005a2710((undefined *)((int)param_1 + 0x18),4);
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  if ((*(short *)((int)this + 0x24) == 2) && (*(char *)((int)this + 0x26) == '\0')) {
    return uVar4;
  }
  local_c = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    local_10 = 0;
    do {
      if (0x121f < local_10) break;
      in_ecx = *(int *)((int)this + 0x10) + local_10;
      if ((((ushort)*((byte *)GEN_TOP((*(int *)((int)this + 0x10) + 0x6e + local_10))) ==
            *(ushort *)((int)this + 0x24)) &&
          (local_8 = local_8 + 1, *(char *)(in_ecx + 0x6f) == '\0')) &&
         ((*(ushort *)((int)this + 0x24) != 2 || (*(int *)(in_ecx + 0x60) != 0)))) {
        uVar1 = *(undefined1 *)(in_ecx + 0x70);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x38)));
        F_005a2710(pvVar5,2);
        *(undefined1 *)((int)pvVar5 + 4) = uVar1;
        uVar6 = *(undefined4 *)(in_ecx + 0x54);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x178)));
        F_005a2710(pvVar5,3);
        *(undefined4 *)((int)pvVar5 + 4) = uVar6;
        uVar4 = F_0042a990(in_ecx);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x2b8)));
        F_005a2710(pvVar5,6);
        *(uint *)((int)pvVar5 + 4) = uVar4;
        uVar6 = *(undefined4 *)(in_ecx + 0x58);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x3f8)));
        F_005a2710(pvVar5,4);
        *(undefined4 *)((int)pvVar5 + 4) = uVar6;
        uVar6 = *(undefined4 *)(in_ecx + 0x5c);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x538)));
        F_005a2710(pvVar5,4);
        *(undefined4 *)((int)pvVar5 + 4) = uVar6;
        uVar6 = *(undefined4 *)(in_ecx + 0x60);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x678)));
        F_005a2710(pvVar5,4);
        *(undefined4 *)((int)pvVar5 + 4) = uVar6;
        uVar3 = *(ushort *)(in_ecx + 0x6c);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x7b8)));
        F_005a2710(pvVar5,4);
        *(uint *)((int)pvVar5 + 4) = (uint)uVar3;
        uVar6 = *(undefined4 *)(in_ecx + 100);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *(int *)((int)this + 0x18) * 8 + 0x8f8)));
        F_005a2710(pvVar5,4);
        *(undefined4 *)((int)pvVar5 + 4) = uVar6;
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0x74;
    } while (local_c < *(uint *)((int)this + 0x14));
    if (local_8 != 0) {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0x11ec;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_0043bd00(pvVar5,uVar6,uVar7,uVar8);
      F_005a2710((undefined *)((int)param_1 + 0x28),6);
      *(uint *)((int)param_1 + 0x2c) = uVar4;
      goto LAB_007793a7;
    }
  }
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0x11fc;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar6,uVar7,uVar8);
  F_005a2710((undefined *)((int)param_1 + 0x28),6);
  *(uint *)((int)param_1 + 0x2c) = uVar4;
LAB_007793a7: ;
  uVar6 = *(undefined4 *)((int)this + 0x18);
  uVar4 = F_005a2710((undefined *)((int)param_1 + 0x18),4);
  *(undefined4 *)((int)param_1 + 0x1c) = uVar6;
  return uVar4;
}

/* ref: FUN_007793c0 */
byte F_007793c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0x7793c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int param_9 = (int)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  int param_11 = (int)gen_a11;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  
  if (param_1 < *(uint *)((int)this + 0x14)) {
    this_00 = ((undefined *)GEN_TOP((param_1 * 0x74 + *(int *)((int)this + 0x10))));
    *(undefined4 *)((int)this_00 + 0x5c) = param_4;
    *(undefined2 *)((int)this_00 + 0x6c) = (undefined2)param_8;
    *(undefined4 *)((int)this_00 + 0x58) = param_3;
    *(undefined1 *)((int)this_00 + 0x70) = (undefined1)param_5;
    *(undefined4 *)((int)this_00 + 100) = param_2;
    *(undefined1 *)((int)this_00 + 0x6f) = (undefined1)param_7;
    *(char *)((int)this_00 + 0x6e) = (char)param_6;
    F_0042e430(this_00,param_10);
    iVar1 = param_11;
    if ((char)param_6 != '\x02') {
      if (param_9 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_9 + 62000;
      }
    }
    *(uint *)((int)this_00 + 0x68) = param_1;
    *(int *)((int)this_00 + 0x54) = iVar1;
    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),param_2,1,1,1);
    *(uint *)((int)this_00 + 0x60) = uVar2;
    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),param_2,0,1,1);
    *(int *)((int)this_00 + 0x60) = *(int *)((int)this_00 + 0x60) + uVar2;
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentGrandCompanyExchange::vf1 */
uint F_007794b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7794b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined1 AVar4;
  int iVar5;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = param_1;
  (*(char *)(gen_frame + 0x17)) = '\0';
  if ((*param_2 & 0xf) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 4);
  }
  if (iVar5 == 1) {
    if ((param_2[8] & 0xf) == 0) {
      AVar4 = (undefined1)0x0;
    }
    else {
      AVar4 = SUB41(*(undefined4 *)(param_2 + 0xc),0);
    }
    this[0x11] = AVar4;
  }
  else if (iVar5 == 2) {
    if ((param_2[8] & 0xf) == 0) {
      this[0x12] = (undefined1)0xff;
    }
    else {
      this[0x12] = (undefined1)((char)*(undefined4 *)(param_2 + 0xc) + -1);
    }
  }
  else if (iVar5 == 4) {
    ((undefined4 *)(gen_frame + 0x18))[0] = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    uVar1 = F_00a3ad50(&REFG(undefined, 0x14a4230),(uint)(byte)this[0x10]);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x60)),4);
    (*(uint *)(gen_frame + 0x64)) = uVar1;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)(this + 8),10,((undefined4 *)(gen_frame + 0x18)));
    puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
    *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 1) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 2;
    this_00 = &(*(uint *)(gen_frame + 0x68));
    iVar5 = 9;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)puVar3;
  }
  piVar2 = *(int * PTR32 *)(this + 0xc);
  if (piVar2 == (int *)0x0) {
LAB_007795e7: ;
    if (((*param_2 & 0xf) == 0) || (-1 < *(int *)(param_2 + 4))) {
      *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 1) = 0;
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
      goto LAB_00779600;
    }
  }
  else {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,((byte *)(gen_frame + 0x8)),param_2,param_3,0);
    if ((((byte *)(gen_frame + 0x8))[0] & 0xf) == 2) {
      (*(char *)(gen_frame + 0x17)) = (*(char *)(gen_frame + 0xc));
    }
    F_005a2670(((byte *)(gen_frame + 0x8)));
    if ((*(char *)(gen_frame + 0x17)) == '\0') goto LAB_007795e7;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 1) = 1;
  puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
LAB_00779600: ;
  *puVar3 = 2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar3;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)puVar3;
}

/* ref: FUN_00779620 */
uint F_00779620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x779620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  code * pcVar1;
  
  if ((param_1 != 0) && ((char)param_2 != '\0')) {
    *(char *)((int)this + 0x10) = (char)param_2;
    pcVar1 = *(gen_code32 *)(*(int *)this + 8);
    *(int *)((int)this + 0xc) = param_1;
    (*pcVar1)(this);
    return *(uint *)((int)this + 8);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentGrandCompanyExchange::vf3 */
unsigned int F_00779660(unsigned int gen_a0)
{
  GEN_ENTER(0x779660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_00779690 */
uint F_00779690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x779690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)((int)this + 8),param_2,param_1);
  return uVar2;
}

/* ref: FUN_007796c0 */
byte F_007796c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7796c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00434dd0(param_1);
  return bVar1;
}

/* ref: Client::UI2::Agent::AgentMovieSubtitle::vf1 */
uint F_007796e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7796e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  if (1 < param_4) {
    if ((*(byte *)(param_3 + 8) & 0xf) == 0) {
      *(undefined1 *)(in_ecx + 0x1d) = 0;
      *param_2 = 2;
      *(undefined1 *)(param_2 + 1) = 0;
      return (uint)param_2;
    }
    *(undefined1 *)(in_ecx + 0x1d) = *(undefined1 *)(param_3 + 0xc);
  }
  *param_2 = 2;
  *(undefined1 *)(param_2 + 1) = 0;
  return (uint)param_2;
}

/* ref: Client::UI2::Agent::AgentMovieSubtitle::vf2 */
unsigned int F_00779720(void)
{
  GEN_ENTER(0x779720u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::Agent::AgentMovieSubtitle::vf3 */
uint F_00779730(unsigned int gen_a0)
{
  GEN_ENTER(0x779730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0xc) = 0;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
  *(undefined4 *)(this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00779760 */
byte F_00779760(unsigned int gen_a0)
{
  GEN_ENTER(0x779760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x1d) == '\0';
}

/* ref: FUN_00779770 */
unsigned int F_00779770(unsigned int gen_a0)
{
  GEN_ENTER(0x779770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x14) = 2;
  return 0;
}

/* ref: FUN_00779780 */
uint F_00779780(unsigned int gen_a0)
{
  GEN_ENTER(0x779780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x14) = 3;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined1 *)(in_ecx + 0x1c) = 0;
  return 0;
}

/* ref: FUN_007797b0 */
uint F_007797b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7797b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) == 1) {
    uVar1 = F_00ab3720(param_1);
  }
  else if (*(int *)((int)this + 0x10) == 2) {
    uVar1 = F_00ab3750(param_1);
    return uVar1;
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentPadMouseMode::vf1 */
uint F_007797e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7797e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_007797f0 */
unsigned int F_007797f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x7797f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  undefined * this_00;
  
  if ((*(int *)((int)this + 0xc) != 0) && (param_1 < 0x10)) {
    this_00 = ((undefined *)GEN_TOP((param_1 * 0xc4 + 8 + *(int *)((int)this + 0xc))));
    F_0042e430(this_00,param_2);
    F_0042e430((undefined *)((int)this_00 + 0x54),param_3);
    *(undefined1 *)((int)this_00 + 0xc0) = (undefined1)param_4;
    *(undefined4 *)((int)this_00 + 0xa8) = param_5;
    *(undefined4 *)((int)this_00 + 0xac) = param_6;
    *(undefined4 *)((int)this_00 + 0xb0) = param_7;
    *(undefined4 *)((int)this_00 + 0xb4) = param_8;
    *(undefined4 *)((int)this_00 + 0xb8) = param_9;
    *(undefined4 *)((int)this_00 + 0xbc) = param_10;
  }
  return 0;
}

/* ref: FUN_00779870 */
uint F_00779870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x779870u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  int iVar4;
  bool bVar5;
  
  if (*(byte *)(param_1 + 0xc1) != *(byte *)(param_2 + 0xc1)) {
    return (uint)(*(byte *)(param_1 + 0xc1) < *(byte *)(param_2 + 0xc1));
  }
  pbVar2 = (byte *)F_0042a990(param_2);
  pbVar3 = (byte *)F_0042a990(param_1);
  while( true ) {
    bVar1 = *pbVar3;
    bVar5 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar3[1];
    bVar5 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  iVar4 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  return CONCAT31((int3)((uint)iVar4 >> 8),iVar4 < 0);
}

/* ref: FUN_007798e0 */
uint F_007798e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7798e0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this;
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 * puVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10be32b),REFG(undefined4, 0x108cc50));
  uVar4 = 0;
  puVar3 = ((undefined1 *)(gen_frame + 0x4));
  uVar2 = 1;
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1)));
  F_00459b00(this,uVar2,puVar3,param_2,uVar4);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar1;
}

/* ref: FUN_00779950 */
uint F_00779950(unsigned int gen_a0)
{
  GEN_ENTER(0x779950u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(int *)(&REFG(undefined, 0x10c046c) + param_1 * 0xc) - *(int *)(&REFG(undefined, 0x10c0468) + param_1 * 0xc);
}

/* ref: FUN_00779970 */
uint F_00779970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x779970u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 < *(int *)(&REFG(undefined, 0x10c046c) + param_1 * 0xc) - *(int *)(&REFG(undefined, 0x10c0468) + param_1 * 0xc)) {
    return *(int *)(&REFG(undefined, 0x10c0468) + param_1 * 0xc) + param_2;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentRecommendList::vf3 */
unsigned int F_007799a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7799a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_007799d0 */
unsigned int F_007799d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7799d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0xc) = 1;
  return 0;
}

/* ref: FUN_007799e0 */
uint F_007799e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x7799e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  int * piVar1;
  uint uVar2;
  
  *(int *)(param_1 + 8) = param_5;
  F_0042e430((undefined *)(param_1 + 0xc),param_6);
  if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + param_4 * 4))) != param_5) {
    *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + param_4 * 4))) = param_5;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  uVar2 = F_0042a990((undefined *)(param_1 + 0xc));
  if (uVar2 != *((uint *)GEN_TOP((*(int *)(param_3 + 0x20) + param_4 * 4)))) {
    *((uint *)GEN_TOP((*(int *)(param_3 + 0x20) + param_4 * 4))) = uVar2;
    *(undefined1 *)(param_3 + 0x1d) = 1;
  }
  piVar1 = ((int *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x28 + param_4 * 4)));
  if (param_7 != *piVar1) {
    *piVar1 = param_7;
    *(undefined1 *)(param_3 + 0x1d) = 1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00779a50 */
byte F_00779a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x779a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  byte * param_6 = (byte *)(uintptr_t)gen_a5;
  byte bVar1;
  undefined * this;
  uint uVar2;
  
  bVar1 = F_00a629f0(param_2);
  *param_4 = (uint)bVar1;
  F_00a68280(param_1,param_2,0);
  this = (undefined *)F_00a629e0(&REFG(undefined, 0x14a9728),(uint)(byte)*param_4);
  bVar1 = F_00a63450(this);
  uVar2 = F_00a629e0(&REFG(undefined, 0x14a9728),(uint)(byte)*param_4);
  uVar2 = (uint)*(byte *)(uVar2 + 0x30);
  *param_5 = uVar2;
  if ((uVar2 < 5) && (uVar2 <= bVar1)) {
    bVar1 = *(byte *)(param_3 + 0x40);
    *param_6 = bVar1;
    if ((bVar1 == 0) || (3 < bVar1)) {
      *param_6 = 1;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00779ae0 */
byte F_00779ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x779ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  byte * param_5 = (byte *)(uintptr_t)gen_a4;
  byte bVar1;
  uint uVar2;
  undefined * this;
  
  bVar1 = *(byte *)(param_1 + 0x22a);
  *param_2 = bVar1;
  if (bVar1 != 0) {
    uVar2 = F_00ab3960((uint)bVar1);
    if (uVar2 != 0) {
      *(int *)param_3 = (int)*(char *)(uVar2 + 0x14);
      F_00a68920(param_1,(uint)*param_2);
      this = (undefined *)F_00a629e0(&REFG(undefined, 0x14a9728),(uint)*param_3);
      bVar1 = F_00a63450(this);
      uVar2 = F_00a629e0(&REFG(undefined, 0x14a9728),(uint)*param_3);
      uVar2 = (uint)*(byte *)(uVar2 + 0x30);
      *param_4 = uVar2;
      if ((uVar2 < 5) && (uVar2 <= bVar1)) {
        bVar1 = F_00434da0((uint)*param_2);
        *param_5 = bVar1;
        if ((bVar1 == 0) || (3 < bVar1)) {
          *param_5 = 1;
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00779b90 */
uint F_00779b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x779b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  undefined * param_7 = (undefined *)(uintptr_t)gen_a7;
  int param_8 = (int)gen_a8;
  uint param_9 = (uint)gen_a9;
  uint * puVar1;
  byte bVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined * pvVar9;
  ushort * puVar10;
  undefined4 * puVar11;
  uint uVar12;
  ushort * puVar13;
  int iVar14;
  undefined4 uVar15;
  int local_10;
  
  sVar3 = *(short *)(param_3 + 0x1a);
  uVar7 = F_00a629e0(&REFG(undefined, 0x14a9728),param_7);
  local_10 = 0;
  do {
    uVar8 = F_00ab3d80(param_5 * param_6 + 1 + param_8 * 10 + local_10);
    pvVar9 = (undefined *)0x0;
    if (uVar8 != 0) {
      uVar6 = (ulonglong)(byte)((char)local_10 * '\x05');
      lVar4 = ((ulonglong)((uVar6 < 0x40) ? ((1L << uVar6)) : 0));
      lVar5 = lVar4 * 0x10;
      pvVar9 = ((undefined *)GEN_TOP(((uint)lVar5 & *(uint *)(uVar7 + 0x28) |
                       (uint)((ulonglong)lVar5 >> 0x20) & *(uint *)(uVar7 + 0x2c))));
      if (pvVar9 == (undefined *)0x0) {
        puVar13 = (ushort *)(uVar8 + 8);
        param_7 = (undefined *)0x0;
        do {
          puVar10 = (ushort *)F_00ab3db0((uint)*puVar13);
          if (((puVar10 != (ushort *)0x0) && (*puVar10 != 0)) &&
             (lVar5 = ((ulonglong)(((ulonglong)(byte)param_7 < 0x40) ? ((lVar4 << (ulonglong)(byte)param_7)) : 0)),
             ((uint)lVar5 & *(uint *)(uVar7 + 0x28)) == 0 &&
             ((uint)((ulonglong)lVar5 >> 0x20) & *(uint *)(uVar7 + 0x2c)) == 0)) {
            iVar14 = (param_9 & 0xff) - 1;
            if (((puVar10[(param_9 & 0xff) + 1] == 0) && (bVar2 = (byte)puVar10[8], bVar2 != 0)) &&
               (bVar2 < 4)) {
              iVar14 = bVar2 - 1;
            }
            if (((*(uint *)(param_3 + 0x10) == (uint)puVar10[iVar14 + 2]) ||
                (*(uint *)(param_3 + 0x10) == (uint)puVar10[iVar14 + 5])) &&
               (puVar10[iVar14 + 5] != 0)) {
              uVar12 = 0;
              uVar8 = F_00aafa90();
              if (uVar8 != 0) {
                do {
                  uVar8 = F_00ab1e70(uVar12);
                  if ((uVar8 != 0) && (*(uint *)(uVar8 + 0x10) == (uint)puVar10[iVar14 + 5])) {
                    if (*(short *)(uVar8 + 0x1a) != sVar3) goto LAB_00779e36;
                    break;
                  }
                  uVar12 = uVar12 + 1;
                  uVar8 = F_00aafa90();
                } while (uVar12 < uVar8);
              }
              if (-1 < iVar14) {
                uVar15 = 0;
                uVar8 = F_00404270();
                puVar11 = (undefined4 *)F_00406bd0(0xc0,0,uVar8,uVar15);
                if (puVar11 == (undefined4 *)0x0) {
                  puVar11 = (undefined4 *)0x0;
                }
                else {
                  *puVar11 = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
                  puVar11[1] = 4;
                  puVar11[2] = 0;
                  F_0042b630(puVar11 + 3);
                  *puVar11 = (*(undefined * PTR32 (*)[1])REFP(0x10c43fc));
                  *(undefined1 *)(puVar11 + 0x18) = 0;
                  puVar11[0x19] = 0;
                  *(undefined2 *)(puVar11 + 0x1a) = 0;
                  *(undefined1 *)((int)puVar11 + 0x6a) = 0;
                  F_0042b630(puVar11 + 0x1b);
                }
                *(char *)(puVar11 + 0x18) = (char)param_4;
                if ((char)param_4 == '\0') {
                  puVar11[0x19] = param_5;
                }
                else {
                  *(undefined1 *)(puVar11 + 0x19) = (undefined1)param_5;
                }
                *(undefined1 *)(puVar11 + 0x1a) = (undefined1)param_8;
                *(char *)((int)puVar11 + 0x69) = (char)local_10;
                *(byte *)((int)puVar11 + 0x6a) = (byte)param_7;
                uVar8 = (uint)puVar10[iVar14 + 5];
                uVar12 = (uint)puVar10[iVar14 + 2];
                uVar15 = 0x750;
                pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                           (*(int * PTR32 *)((int)this + 4))));
                uVar8 = F_00460c80(pvVar9,uVar15,uVar12,uVar8);
                F_0042e430(puVar11 + 0x1b,uVar8);
                uVar8 = F_0042a990(puVar11 + 0x1b);
                uVar12 = F_00463610(0,(uint)*puVar10,2);
                iVar14 = *(int *)((int)this + 0x10);
                puVar11[2] = 0xea63;
                F_0042e430(puVar11 + 3,uVar12);
                if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + iVar14 * 4))) != 0xea63) {
                  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + iVar14 * 4))) = 0xea63;
                  *(undefined1 *)(param_1 + 0x1d) = 1;
                }
                uVar12 = F_0042a990(puVar11 + 3);
                if (uVar12 != *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar14 * 4)))) {
                  *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar14 * 4))) = uVar12;
                  *(undefined1 *)(param_2 + 0x1d) = 1;
                }
                puVar1 = ((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x28 + iVar14 * 4)));
                if (uVar8 != *puVar1) {
                  *puVar1 = uVar8;
                  *(undefined1 *)(param_2 + 0x1d) = 1;
                }
                *((undefined4 * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) * 4 + 0x1c))) = puVar11;
                *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
                pvVar9 = this;
                if (9 < *(int *)((int)this + 0x10)) break;
              }
            }
          }
LAB_00779e36: ;
          pvVar9 = (undefined *)((int)param_7 + 1);
          puVar13 = puVar13 + 1;
          param_7 = pvVar9;
        } while ((int)pvVar9 < 4);
        if (9 < *(int *)((int)this + 0x10)) {
          return (uint)pvVar9;
        }
      }
    }
    local_10 = local_10 + 1;
    if (9 < local_10) {
      return (uint)pvVar9;
    }
  } while( true );
}

/* ref: Client::UI2::Agent::AgentCatch::vf1 */
uint F_00779e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x779e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  
  if ((*param_2 & 0xf) == 0) {
LAB_00779e97: ;
    if ((param_2[8] & 0xf) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    if (iVar1 != *(int *)(this + 8)) goto LAB_00779eb0;
  }
  else {
    if (*(int *)(param_2 + 4) == -2) goto LAB_00779eb0;
    if (*(int *)(param_2 + 4) == 0) goto LAB_00779e97;
  }
  *(undefined4 *)(this + 8) = 0;
LAB_00779eb0: ;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_00779ed0 */
uint F_00779ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x779ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined2 *)((int)this + 0x10) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x12) = (undefined1)param_3;
  *(undefined1 *)((int)this + 0x13) = (undefined1)param_4;
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_5;
  *(undefined1 *)((int)this + 0x15) = (undefined1)param_6;
  *(undefined1 *)((int)this + 0x16) = (undefined1)param_7;
  *(undefined1 *)((int)this + 0x17) = (undefined1)param_8;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_9;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCatch::vf7 */
uint F_00779f30(unsigned int gen_a0)
{
  GEN_ENTER(0x779f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 10;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 1;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)(this + 8),0xb,((undefined4 *)(gen_frame + 0x0)));
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    this_00 = &(*(uint *)(gen_frame + 0x58));
    iVar4 = 10;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCatch::vf3 */
unsigned int F_00779fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x779fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return 0;
}

/* ref: Client::UI2::Agent::AgentCatch::vf5 */
uint F_0077a000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77a000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x1c) - 1;
  if (uVar1 == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentShop::vf2 */
unsigned int F_0077a070(void)
{
  GEN_ENTER(0x77a070u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0077a0b0 */
uint F_0077a0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77a0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte * pbVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_c;
  uint local_8;
  
  bVar1 = *(byte *)((int)this + 0x4a);
  F_005a2710((undefined *)(param_1 + 8),4);
  *(uint *)(param_1 + 0xc) = (uint)bVar1;
  iVar6 = 0;
  local_10 = 0;
  local_8 = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    local_c = 0;
    puVar5 = (undefined4 *)(param_1 + 0x18c);
    do {
      iVar7 = *(int *)((int)this + 0x20) + local_c;
      if (*(byte *)((int)this + 0x49) < 2) {
LAB_0077a11b: ;
        uVar3 = F_0042a990(iVar7);
        F_005a2710(puVar5 + -0x51,6);
        puVar5[-0x50] = uVar3;
        uVar2 = *(undefined4 *)(iVar7 + 0xa8);
        F_005a2710(puVar5 + -1,3);
        *puVar5 = uVar2;
        uVar3 = F_0042a990(iVar7 + 0x54);
        F_005a2710(puVar5 + 0x4f,6);
        puVar5[0x50] = uVar3;
        uVar2 = *(undefined4 *)(iVar7 + 0xb4);
        F_005a2710(puVar5 + 0x9f,4);
        puVar5[0xa0] = uVar2;
        uVar2 = *(undefined4 *)(iVar7 + 0xb0);
        F_005a2710(puVar5 + 0xef,4);
        puVar5[0xf0] = uVar2;
        uVar2 = *(undefined4 *)(iVar7 + 0xb8);
        F_005a2710(puVar5 + 0x13f,4);
        puVar5[0x140] = uVar2;
        F_005a2710(puVar5 + 0x1df,4);
        puVar5[0x1e0] = local_8;
        uVar2 = *(undefined4 *)(iVar7 + 0xc4);
        F_005a2710(puVar5 + 399,4);
        local_10 = local_10 + 1;
        puVar5[400] = uVar2;
        puVar5 = puVar5 + 2;
      }
      else {
        iVar6 = local_10;
        if (*(byte *)((int)this + 0x49) <= *(byte *)((int)this + 0x4a)) break;
        if (*((char *)GEN_TOP((*(byte *)((int)this + 0x4a) + 0x4b + (int)this))) == *(char *)(iVar7 + 0xbc))
        goto LAB_0077a11b;
      }
      local_c = local_c + 0xcc;
      local_8 = local_8 + 1;
      iVar6 = local_10;
    } while (local_8 < *(uint *)((int)this + 0x28));
  }
  uVar3 = F_005a2710((undefined *)(param_1 + 0x10),4);
  *(int *)(param_1 + 0x14) = iVar6;
  if ((*(char *)((int)this + 0x48) == '\x03') && (iVar6 != 0)) {
    pbVar4 = (byte *)(param_1 + 0x908);
    local_8 = iVar6;
    do {
      if ((*pbVar4 & 0xf) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(pbVar4 + 4);
      }
      iVar7 = iVar6 * 0x198;
      puVar5 = (undefined4 *)(param_1 + 0xcd4 + iVar6 * 0x10);
      local_c = 2;
      do {
        iVar6 = *(int *)((int)this + 0x24) + iVar7;
        uVar3 = F_0042a990(iVar6);
        F_005a2710(puVar5 + -0xa1,6);
        puVar5[-0xa0] = uVar3;
        uVar2 = *(undefined4 *)(iVar6 + 0xa8);
        F_005a2710(puVar5 + -1,3);
        *puVar5 = uVar2;
        uVar3 = F_0042a990(iVar6 + 0x54);
        F_005a2710(puVar5 + 0x9f,6);
        puVar5[0xa0] = uVar3;
        uVar2 = *(undefined4 *)(iVar6 + 0xb4);
        F_005a2710(puVar5 + 0x13f,4);
        puVar5[0x140] = uVar2;
        uVar2 = *(undefined4 *)(iVar6 + 0xb0);
        F_005a2710(puVar5 + 0x1df,4);
        puVar5[0x1e0] = uVar2;
        uVar2 = *(undefined4 *)(iVar6 + 0xb8);
        uVar3 = F_005a2710(puVar5 + 0x27f,4);
        puVar5[0x280] = uVar2;
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 0xcc;
        local_c = local_c + -1;
      } while (local_c != 0);
      pbVar4 = pbVar4 + 8;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return uVar3;
}

/* ref: FUN_0077a340 */
unsigned int F_0077a340(unsigned int gen_a0)
{
  GEN_ENTER(0x77a340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint local_c;
  int local_8;
  
  *(undefined1 *)((int)this + 0x54) = 0;
  local_c = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    local_8 = 0;
    do {
      pvVar3 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x20) + local_8)));
      if (*(int *)((int)pvVar3 + 0xa8) == -1) {
        uVar1 = F_00ab24a0(*(undefined4 *)((int)pvVar3 + 0xb8));
        if (uVar1 == 0) {
          *(undefined1 *)((int)this + 0x54) = 1;
        }
        else {
          uVar2 = F_00ab6240(*(undefined4 *)((int)pvVar3 + 0xb8),0,uVar1);
          F_0042e430(pvVar3,uVar2);
          uVar2 = F_00ab25d0((uint)*(byte *)(uVar1 + 0xa1));
          if (uVar2 == 0) {
            uVar2 = F_00ab65a0(*(undefined4 *)((int)pvVar3 + 0xb8),uVar1);
          }
          else {
            uVar2 = *(uint *)(uVar2 + 4);
          }
          *(uint *)((int)pvVar3 + 0xa8) = uVar2;
          *(undefined1 *)((int)pvVar3 + 200) = *(undefined1 *)(uVar1 + 0xbe);
          uVar1 = *(uint *)(uVar1 + 0x28);
          *(uint *)((int)pvVar3 + 0xc0) = uVar1;
          if (99 < uVar1) {
            *(undefined4 *)((int)pvVar3 + 0xc0) = 99;
          }
          *(undefined4 *)((int)pvVar3 + 0xc4) = *(undefined4 *)((int)pvVar3 + 0xc0);
        }
      }
      local_8 = local_8 + 0xcc;
      local_c = local_c + 1;
    } while (local_c < *(uint *)((int)this + 0x28));
  }
  local_c = 0;
  if (*(int *)((int)this + 0x2c) != 0) {
    local_8 = 0;
    do {
      pvVar3 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x24) + local_8)));
      if (*(int *)((int)pvVar3 + 0xa8) == -1) {
        uVar1 = F_00ab24a0(*(undefined4 *)((int)pvVar3 + 0xb8));
        if (uVar1 == 0) {
          *(undefined1 *)((int)this + 0x54) = 1;
        }
        else {
          uVar2 = F_00ab6240(*(undefined4 *)((int)pvVar3 + 0xb8),0,uVar1);
          F_0042e430(pvVar3,uVar2);
          uVar1 = F_00ab65a0(*(undefined4 *)((int)pvVar3 + 0xb8),uVar1);
          *(uint *)((int)pvVar3 + 0xa8) = uVar1;
        }
      }
      local_8 = local_8 + 0xcc;
      local_c = local_c + 1;
    } while (local_c < *(uint *)((int)this + 0x2c));
  }
  return 0;
}

/* ref: FUN_0077a4b0 */
uint F_0077a4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77a4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0x12;
  uVar3 = param_2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_00461bb0(this_00,uVar2,uVar3);
  F_005a2710((undefined *)(param_1 + 0x20),6);
  *(uint *)(param_1 + 0x24) = uVar1;
  uVar1 = F_005a2710((undefined *)(param_1 + 0x28),4);
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  if (*(char *)((int)this + 0x48) == '\x02') {
    uVar3 = *(undefined4 *)((int)this + 0x34);
    F_005a2710((undefined *)(param_1 + 0x30),3);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    uVar3 = *(undefined4 *)((int)this + 0x38);
    uVar1 = F_005a2710((undefined *)(param_1 + 0x38),6);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
  }
  return uVar1;
}

/* ref: FUN_0077a530 */
uint F_0077a530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77a530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return param_1;
}

/* ref: FUN_0077a550 */
uint F_0077a550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x77a550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0x30) != param_1) {
    *(uint *)((int)this + 0x30) = param_1;
    *(uint *)((int)this + 0x38) = param_2;
    *(undefined4 *)((int)this + 0x34) = param_3;
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_0077a570 */
uint F_0077a570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x77a570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar1 = param_1 + param_2 * 2;
  uVar2 = param_2;
  if (uVar1 < *(uint *)((int)this + 0x2c)) {
    this_00 = ((undefined *)GEN_TOP((uVar1 * 0xcc + *(int *)((int)this + 0x24))));
    *(undefined4 *)((int)this_00 + 0xb8) = param_3;
    *(uint *)((int)this_00 + 0xb0) = param_4 & 0xffff;
    *(undefined4 *)((int)this_00 + 0xa8) = 0xffffffff;
    uVar1 = F_00ab24a0(param_3);
    if (uVar1 == 0) {
      *(undefined1 *)((int)this + 0x54) = 1;
    }
    else {
      uVar2 = F_00ab6240(*(undefined4 *)((int)this_00 + 0xb8),0,uVar1);
      F_0042e430(this_00,uVar2);
      uVar1 = F_00ab65a0(param_3,uVar1);
      *(uint *)((int)this_00 + 0xa8) = uVar1;
    }
    uVar1 = F_00a41080(&REFG(undefined, 0x14a4230),param_3,1,1,1);
    *(uint *)((int)this_00 + 0xb4) = uVar1;
    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),param_3,0,1,1);
    *(int *)((int)this_00 + 0xb4) = *(int *)((int)this_00 + 0xb4) + uVar2;
  }
  return uVar2;
}

/* ref: FUN_0077a630 */
byte F_0077a630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77a630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 < *(uint *)((int)this + 0x28)) {
    iVar6 = param_1 * 0xcc;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + 0xb8 + iVar6)));
    F_00a3ace0(&REFG(undefined, 0x14a4230));
    uVar2 = F_00a40f50(&REFG(undefined, 0x14a4230),uVar1,0);
    uVar3 = F_00a41080(&REFG(undefined, 0x14a4230),uVar1,1,1,1);
    uVar4 = F_00a41080(&REFG(undefined, 0x14a4230),uVar1,0,1,1);
    uVar5 = *((int *)GEN_TOP((iVar6 + 0xac + *(int *)((int)this + 0x20)))) * *(int *)((int)this + 0x44);
    if (((*((char *)GEN_TOP((iVar6 + 200 + *(int *)((int)this + 0x20)))) == '\0') || (uVar3 + uVar4 == 0)) &&
       (uVar5 < *(uint *)((int)this + 0x3c) || uVar5 - *(uint *)((int)this + 0x3c) == 0)) {
      return uVar2 != 0;
    }
  }
  return 0;
}

/* ref: FUN_0077a6e0 */
uint F_0077a6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x77a6e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (param_1 - 0x17U < 4) {
    uVar1 = F_00a3c240(&REFG(undefined, 0x14a4230),param_1);
    return uVar1;
  }
  uVar1 = F_00a41080(&REFG(undefined, 0x14a4230),param_1,1,1,1);
  uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),param_1,0,1,1);
  return uVar2 + uVar1;
}

/* ref: FUN_0077a730 */
uint F_0077a730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77a730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  uint local_8;
  
  iVar3 = 0;
  local_8 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    this_00 = (undefined *)(param_2 + 0x20);
    do {
      uVar2 = F_0042a990(*(int *)((int)this + 0x30) + 4 + iVar3);
      F_005a2710(this_00,8);
      *(uint *)((int)this_00 + 4) = uVar2;
      local_8 = local_8 + 1;
      this_00 = (undefined *)((int)this_00 + 8);
      iVar3 = iVar3 + 0x58;
    } while (local_8 < *(uint *)((int)this + 0x14));
  }
  uVar1 = *(undefined4 *)((int)this + 0x18);
  F_005a2710((undefined *)(param_2 + 0x18),4);
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  uVar1 = *(undefined4 *)((int)this + 0x14);
  F_005a2710((undefined *)(param_2 + 0x10),4);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  return 4;
}

/* ref: FUN_0077a7c0 */
uint F_0077a7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77a7c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (*(int *)(in_ecx + 0x30) != 0) {
    return *((int *)GEN_TOP((param_2 * 0x58 + *(int *)(in_ecx + 0x30)))) - 1;
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentBait::vf1 */
uint F_0077a7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x77a7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  undefined4 uVar3;
  
  (*(undefined1 *)(gen_frame + 0x1b)) = 0;
  if ((*param_2 & 0xf) != 0) {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 < -2) goto LAB_0077a86d;
    if (iVar1 < 0) {
      (*(undefined1 *)(gen_frame + 0x1b)) = 1;
      *(undefined4 *)(this + 8) = 0;
      goto LAB_0077a86d;
    }
    if (iVar1 != 0) goto LAB_0077a86d;
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if ((param_2[0x18] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x1c);
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  piVar2 = *(int * PTR32 *)(this + 0x1c);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x10)),1,0);
    F_005a2670(((undefined1 *)(gen_frame + 0x8)));
  }
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x10)));
LAB_0077a86d: ;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = (*(undefined1 *)(gen_frame + 0x1b));
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentBait::vf2 */
unsigned int F_0077a890(void)
{
  GEN_ENTER(0x77a890u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0077a8a0 */
uint F_0077a8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x77a8a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Client::UI2::Agent::AgentBlacklist::vf11 */
byte F_0077a8b0(void)
{
  GEN_ENTER(0x77a8b0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_004351d0();
  return bVar1 == 0;
}

/* ref: FUN_0077a8c0 */
uint F_0077a8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x77a8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int * piVar1;
  
  if (*(int *)((int)this + 100) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 100),0);
    *(undefined4 *)((int)this + 100) = 0;
  }
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentDetail::vf1 */
uint F_0077a8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x77a8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (((*(int *)(this + 100) == 0) && (param_2 != (byte *)0x0)) &&
     (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    this[0x68] = (undefined1)0x1;
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 100) = 0;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentDetail::vf3 */
unsigned int F_0077a930(unsigned int gen_a0)
{
  GEN_ENTER(0x77a930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 100) = 0;
  return 0;
}

/* ref: FUN_0077a970 */
uint F_0077a970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77a970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 == *(uint *)((int)this + 100)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  return uVar1;
}

/* ref: FUN_0077a990 */
uint F_0077a990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77a990u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((param_1 & 0x1000) != 0) {
    return 1;
  }
  if ((param_1 & 0x80000) != 0) {
    return 2;
  }
  if ((param_1 & 0x400000) != 0) {
    return 3;
  }
  if ((param_1 & 0x800000) != 0) {
    return 4;
  }
  return 0;
}

/* ref: FUN_0077a9f0 */
ulonglong F_0077a9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x77a9f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 5) {
    return ((ulonglong)(((ulonglong)(byte)(&REFG(undefined4, 0x132824c))[param_1] < 0x40) ? ((1L << (ulonglong)(byte)(&REFG(undefined4, 0x132824c))[param_1])) : 0));
  }
  return ((ulonglong)(((ulonglong)(byte)REFG(undefined4, 0x132824c) < 0x40) ? ((1L << (ulonglong)(byte)REFG(undefined4, 0x132824c))) : 0));
}

/* ref: Client::UI2::Agent::AgentFriendlist::vf11 */
byte F_0077aa20(void)
{
  GEN_ENTER(0x77aa20u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_004351d0();
  return bVar1 == 0;
}

/* ref: FUN_0077aa30 */
uint F_0077aa30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77aa30u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(char *)(param_2 + 0xa0) == '\r') {
    uVar2 = F_00a6add0(param_3);
    if ((uVar2 != 0) && (*(byte *)(uVar2 + 0x28) == param_1)) {
      uVar4 = 0;
      while (param_3 != *(int *)(uVar2 + uVar4 * 4)) {
        uVar4 = uVar4 + 1;
        if (9 < uVar4) {
          return 0;
        }
      }
      cVar1 = *(char *)(uVar4 + 0x29 + uVar2);
      if (cVar1 != '\0') {
        return (int)cVar1;
      }
    }
  }
  else {
    if (param_1 == 0xc) {
      uVar6 = (uint)*(ushort *)(param_2 + 0x80);
    }
    else if (param_1 == 0xd) {
      uVar6 = (uint)*(ushort *)(param_2 + 0x82);
    }
    else if (param_1 == 0x15) {
      uVar6 = (uint)*(ushort *)(param_2 + 0x8a);
    }
    else if (param_1 == 0xe) {
      uVar6 = (uint)*(ushort *)(param_2 + 0x84);
    }
    else if (param_1 == 0x11) {
      uVar6 = (uint)*(ushort *)(param_2 + 0x86);
    }
    else if (param_1 == 0x12) {
      uVar6 = (uint)*(ushort *)(param_2 + 0x88);
    }
    else if (param_1 == 0x18) {
      uVar6 = (uint)*(ushort *)(param_2 + 0x8c);
    }
    iVar3 = 0;
    puVar5 = (uint *)(param_2 + 0x44);
    while (*puVar5 != param_1) {
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
      if (5 < iVar3) {
        return uVar6;
      }
    }
    uVar6 = uVar6 + (int)*(short *)(param_2 + 0x92 + iVar3 * 2);
  }
  return uVar6;
}

/* ref: FUN_0077ab20 */
uint F_0077ab20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77ab20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*(ushort *)(param_1 + 8) < *(ushort *)(param_2 + 8));
}

/* ref: FUN_0077ab40 */
uint F_0077ab40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77ab40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0077aa30(REFG(undefined4, 0x148a2ac),param_1[1],*param_1);
  uVar2 = F_0077aa30(REFG(undefined4, 0x148a2ac),param_2[1],*param_2);
  if (uVar1 == uVar2) {
    return (uint)(*(ushort *)(param_1 + 2) < *(ushort *)(param_2 + 2));
  }
  return CONCAT31((int3)(uVar2 >> 8),(int)uVar2 < (int)uVar1);
}

/* ref: FUN_0077aba0 */
uint F_0077aba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77aba0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  uint uVar9;
  bool bVar10;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar9 = 0;
  if (*(char *)(iVar2 + 0xa0) == '\r') {
    uVar3 = F_00a6add0(0);
    if ((uVar3 != 0) && (*(char *)(uVar3 + 0x28) == '\x0e')) {
      uVar6 = 0;
      do {
        if (*(int *)(uVar3 + uVar6 * 4) == 0) {
          cVar1 = *(char *)(uVar6 + 0x29 + uVar3);
          if (cVar1 != '\0') {
            uVar9 = (uint)cVar1;
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 10);
    }
  }
  else {
    uVar9 = (uint)*(ushort *)(iVar2 + 0x84);
    iVar5 = 0;
    piVar8 = (int *)(iVar2 + 0x44);
    do {
      if (*piVar8 == 0xe) {
        uVar9 = uVar9 + (int)*(short *)(iVar2 + 0x92 + iVar5 * 2);
        break;
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar5 < 6);
  }
  uVar3 = F_0077aa30(0xc,*(undefined4 *)(param_1 + 4),0);
  iVar2 = *(int *)(param_2 + 4);
  uVar6 = 0;
  if (*(char *)(iVar2 + 0xa0) == '\r') {
    uVar4 = F_00a6add0(0);
    if ((uVar4 != 0) && (*(char *)(uVar4 + 0x28) == '\x0e')) {
      uVar7 = 0;
      do {
        if (*(int *)(uVar4 + uVar7 * 4) == 0) {
          cVar1 = *(char *)(uVar7 + 0x29 + uVar4);
          if (cVar1 != '\0') {
            uVar6 = (uint)cVar1;
          }
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 10);
    }
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar2 + 0x84);
    iVar5 = 0;
    piVar8 = (int *)(iVar2 + 0x44);
    do {
      if (*piVar8 == 0xe) {
        uVar6 = uVar6 + (int)*(short *)(iVar2 + 0x92 + iVar5 * 2);
        break;
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar5 < 6);
  }
  uVar4 = F_0077aa30(0xc,*(undefined4 *)(param_2 + 4),0);
  bVar10 = uVar4 * uVar6 < uVar3 * uVar9;
  if (uVar4 * uVar6 - uVar3 * uVar9 == 0) {
    bVar10 = *(ushort *)(param_1 + 8) < *(ushort *)(param_2 + 8);
  }
  return (uint)bVar10;
}

/* ref: FUN_0077acc0 */
byte F_0077acc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77acc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  pbVar3 = ((byte *)GEN_TOP(((**(uint * PTR32 *)(param_2 + 4) & 0xffffff) + (int)*(uint * PTR32 *)(param_2 + 4))));
  pbVar2 = ((byte *)GEN_TOP(((**(uint * PTR32 *)(param_1 + 4) & 0xffffff) + (int)*(uint * PTR32 *)(param_1 + 4))));
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (int)((1 - (uint)bVar4) - (uint)(bVar4 != 0)) < 0;
}

/* ref: FUN_0077ad20 */
uint F_0077ad20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77ad20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  bool bVar1;
  
  bVar1 = *(ushort *)(param_2 + 10) < *(ushort *)(param_1 + 10);
  if (*(ushort *)(param_2 + 10) == *(ushort *)(param_1 + 10)) {
    bVar1 = *(ushort *)(param_1 + 8) < *(ushort *)(param_2 + 8);
  }
  return (uint)bVar1;
}

/* ref: FUN_0077ad50 */
uint F_0077ad50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77ad50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if (*(int *)((int)this + 8) != 0) {
    *(uint *)((int)this + 0x18) = param_1;
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_0077ad70 */
uint F_0077ad70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x77ad70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined1 *)((int)this + 0x3d0) = 1;
  if (((param_1 < 100) && (*(int *)((int)this + param_1 * 4 + 0x3d4) == 0)) && (param_2 != 0)) {
    *(int *)((int)this + 0x564) = *(int *)((int)this + 0x564) + 1;
    *(int *)((int)this + param_1 * 4 + 0x3d4) = param_2;
  }
  return param_1;
}

/* ref: FUN_0077ae70 */
unsigned int F_0077ae70(unsigned int gen_a0)
{
  GEN_ENTER(0x77ae70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0xdb4) = 0;
  return 0;
}

/* ref: FUN_0077ae80 */
ulonglong F_0077ae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77ae80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x1c) != 0) {
    bVar1 = F_00438840(*(int *)((int)this + 0x1c));
    if (param_1 < bVar1) {
      uVar2 = F_00438850(*(undefined4 *)((int)this + 0x1c),param_1);
      if (uVar2 != 0) {
        return *(ulonglong *)(uVar2 + 0x10);
      }
    }
  }
  return 0;
}

/* ref: FUN_0077aec0 */
uint F_0077aec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77aec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x564) = 0;
  *(undefined2 *)((int)this + 0x3d0) = 0;
  F_00c48350((undefined *)((int)this + 0x3d4),0,400);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x24);
  if (uVar2 != 0) {
    if (**(int * PTR32 *)(uVar2 + 0x20) != *(int *)((int)this + 0x564)) {
      **(int * PTR32 *)(uVar2 + 0x20) = *(int *)((int)this + 0x564);
      *(bool *)(uVar2 + 0x1d) = (char)param_1 == '\0';
    }
  }
  return uVar2;
}

/* ref: FUN_0077af30 */
uint F_0077af30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77af30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  undefined * puVar5;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc3c);
  (*(uint *)(gen_frame + 0xc38)) = uVar1;
  if (*(int *)((int)this + 8) != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x186;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),3);
    ((undefined4 *)(gen_frame + 0x0))[1] = 1;
    F_005a2710(((undefined1 *)(gen_frame + 0x638)),3);
    (*(undefined4 *)(gen_frame + 0x63c)) = param_1;
    puVar5 = param_2;
    if (param_2 == (undefined *)0x0) {
      puVar5 = &REFG(undefined, 0x10be42e);
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x640)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x644)) = puVar5;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x187,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xc38));
    iVar4 = 0x186;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc38)) ^ (uint)(uint)(gen_frame + 0xc3c));
  return uVar1;
}

/* ref: FUN_0077b010 */
uint F_0077b010(unsigned int gen_a0)
{
  GEN_ENTER(0x77b010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xca0];
  uint uVar1;
  undefined4 * puVar2;
  undefined * this_00;
  int * piVar3;
  int iVar4;
  int iVar5;
  uint * this_01;
  undefined4 uVar6;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc9c);
  (*(uint *)(gen_frame + 0xc98)) = uVar1;
  if (*(int *)((int)this + 8) != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x60));
    iVar4 = 0x186;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x60)),3);
    ((undefined4 *)(gen_frame + 0x60))[1] = 4;
    iVar4 = *((int *)GEN_TOP(((int)this + ((uint)*(byte *)((int)this + 0xb40) * 3 + 0x2d3) * 4)));
    F_005a2710(((undefined1 *)(gen_frame + 0x680)),3);
    (*(uint *)(gen_frame + 0x684)) = (uint)(iVar4 != 0);
    iVar5 = *((int *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0xb40) * 0xc + 0xb44)));
    iVar4 = *((int *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0xb40) * 0xc + 0xb48)));
    F_005a2710(((undefined1 *)(gen_frame + 0x688)),3);
    (*(uint *)(gen_frame + 0x68c)) = (uint)(iVar5 != iVar4);
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x10be42f),REFG(undefined4, 0x108cc50));
    if (*(int *)((int)this + 0x564) != 0) {
      if (*(int *)((int)this + 0x20) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_00435750(*(int *)((int)this + 0x20));
      }
      iVar5 = *(byte *)((int)this + 0xb40) * uVar1;
      iVar4 = *(int *)((int)this + 0x564) + iVar5;
      iVar5 = iVar5 + 1;
      uVar6 = 0x7cb;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = F_00461c60(this_00,uVar6,iVar5,iVar4);
      F_0042e430(((undefined1 *)(gen_frame + 0xc)),uVar1);
    }
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0xc)));
    F_005a2710(((undefined1 *)(gen_frame + 0x7c8)),6);
    (*(uint *)(gen_frame + 0x7cc)) = uVar1;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x187,((undefined4 *)(gen_frame + 0x60)));
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    this_01 = &(*(uint *)(gen_frame + 0xc98));
    iVar4 = 0x186;
    do {
      this_01 = this_01 + -2;
      uVar1 = F_005a2670(this_01);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc98)) ^ (uint)(uint)(gen_frame + 0xc9c));
  return uVar1;
}

/* ref: FUN_0077b1a0 */
uint F_0077b1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77b1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc3c);
  (*(uint *)(gen_frame + 0xc38)) = uVar1;
  if (*(int *)((int)this + 8) != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x186;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),3);
    ((undefined4 *)(gen_frame + 0x0))[1] = 8;
    F_005a2710(((undefined1 *)(gen_frame + 0x770)),3);
    (*(uint *)(gen_frame + 0x774)) = (uint)((char)param_1 != '\0');
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x187,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xc38));
    iVar4 = 0x186;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc38)) ^ (uint)(uint)(gen_frame + 0xc3c));
  return uVar1;
}

/* ref: FUN_0077b260 */
uint F_0077b260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x77b260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 < 0x48) {
    iVar2 = param_1 + ((int)param_1 / 0x18) * 0x36;
    uVar1 = *(uint *)((int)this + iVar2 * 4 + 0x28);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)((int)this + iVar2 * 4 + 0x88);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)((int)this + iVar2 * 4 + 0x100);
    }
  }
  return uVar1;
}

/* ref: FUN_0077b2c0 */
byte F_0077b2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77b2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  
  bVar1 = 0;
  if (param_1 < 0x48) {
    bVar1 = *((byte *)GEN_TOP((((int)param_1 / 0x18) * 0x120 + param_1 + 0xe8 + (int)this)));
  }
  return bVar1;
}

/* ref: FUN_0077b300 */
ushort F_0077b300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77b300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0;
  if ((byte)param_1 < 0x1d) {
    iVar4 = (int)(char)(byte)param_1;
    if (*(short *)((int)this + iVar4 * 2 + 0xa18) == 0) {
      uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070),iVar4,1);
      sVar1 = (short)uVar3;
      if (sVar1 == 0) {
        sVar1 = 1;
      }
      *(short *)((int)this + iVar4 * 2 + 0xa18) = sVar1;
    }
    uVar2 = *(ushort *)((int)this + iVar4 * 2 + 0xa18);
  }
  return uVar2;
}

/* ref: FUN_0077b380 */
uint F_0077b380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77b380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  switch((unsigned int)(uintptr_t)(param_1 & 0xffff)) {
  case 1000: ;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x11e;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar4,uVar5,uVar6);
    return uVar2;
  case 0x3e9: ;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x76b;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar4,uVar5,uVar6);
    return uVar2;
  case 0x3ea: ;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x76a;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar4,uVar5,uVar6);
    return uVar2;
  case 0x3eb: ;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x769;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar4,uVar5,uVar6);
    return uVar2;
  }
  puVar3 = (uint *)F_00ab2290(param_1 & 0xffff);
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  return (*puVar3 & 0xffffff) + (int)puVar3;
}

/* ref: FUN_0077b450 */
uint F_0077b450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77b450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined2 uVar5;
  ushort uVar6;
  bool bVar7;
  
  *(undefined2 *)((int)this + 0x1088) = 0;
  *(undefined2 *)((int)this + 0x1024) = 0x3eb;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  uVar1 = *(ushort *)((int)this + 0x1088);
  *(undefined2 *)((int)this + (uint)uVar1 * 2 + 0x1024) = 0x3e9;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  uVar6 = *(ushort *)((int)this + 0x1088);
  if (param_1 < 0) {
    return (uint)uVar1;
  }
  iVar2 = param_1 / 0x18;
  uVar4 = param_1 % 0x18;
  bVar3 = false;
  if (iVar2 == 0) {
    if (uVar4 < 5) {
      uVar5 = 0xc;
    }
    else {
      if (7 < uVar4) {
        if (uVar4 < 0x10) {
          *(undefined2 *)((int)this + (uint)uVar6 * 2 + 0x1024) = 0x46;
          *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
          *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x47;
          *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
          *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0xb;
          uVar5 = 0xc;
        }
        else {
          if (0x12 < uVar4) {
            return uVar4;
          }
          *(undefined2 *)((int)this + (uint)uVar6 * 2 + 0x1024) = 0x48;
          *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
          *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x49;
          *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
          *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 10;
          uVar5 = 0xc;
        }
        goto LAB_0077b792;
      }
      uVar5 = 0xd;
    }
    *(undefined2 *)((int)this + (uint)uVar6 * 2 + 0x1024) = uVar5;
    uVar5 = 1000;
LAB_0077b7d1: ;
    bVar7 = false;
    *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
    *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = uVar5;
    *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
    uVar6 = *(ushort *)((int)this + 0x1088);
  }
  else {
    bVar3 = false;
    if (iVar2 == 1) {
      if (uVar4 == 0) {
        *(undefined2 *)((int)this + (uint)uVar6 * 2 + 0x1024) = 0x12;
        uVar5 = 0x11;
      }
      else {
        *(undefined2 *)((int)this + (uint)uVar6 * 2 + 0x1024) = 0x15;
        bVar3 = true;
        uVar5 = 0x18;
      }
      goto LAB_0077b7d1;
    }
    bVar7 = uVar4 == 0xe;
    if ((iVar2 != 1) && (bVar3 = false, !bVar7)) {
      return CONCAT31((int3)(uVar4 >> 8),bVar7);
    }
  }
  *(undefined2 *)((int)this + (uint)uVar6 * 2 + 0x1024) = 1;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 2;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 3;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 4;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 5;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 6;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x13;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x16;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x1b;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x2c;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x2d;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  uVar1 = *(ushort *)((int)this + 0x1088);
  *(undefined2 *)((int)this + (uint)uVar1 * 2 + 0x1024) = 0x2e;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  uVar6 = *(ushort *)((int)this + 0x1088);
  if (bVar7 == false) {
    *(undefined2 *)((int)this + (uint)uVar6 * 2 + 0x1024) = 0x30;
    *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
    uVar6 = *(ushort *)((int)this + 0x1088);
  }
  *(undefined2 *)((int)this + (uint)uVar6 * 2 + 0x1024) = 0x25;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x26;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x27;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x28;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x29;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x2a;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  if ((!bVar3) && (bVar7 == false)) {
    return (uint)CONCAT11((char)(uVar1 >> 8),bVar7);
  }
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x46;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x47;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0xb;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x48;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*(ushort *)((int)this + 0x1088) * 2 + 0x1024))) = 0x49;
  uVar5 = 10;
LAB_0077b792: ;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  uVar1 = *(ushort *)((int)this + 0x1088);
  *(undefined2 *)((int)this + (uint)uVar1 * 2 + 0x1024) = uVar5;
  *(short *)((int)this + 0x1088) = *(short *)((int)this + 0x1088) + 1;
  return (uint)uVar1;
}

/* ref: FUN_0077b8f0 */
uint F_0077b8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x77b8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined * this_01;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x24);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x21)));
  if ((uVar2 != 0) && (this_00 != (undefined *)0x0)) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x324))) = 0;
    *(undefined1 *)(uVar2 + 0x1d) = 1;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x7a7;
    this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(this_01,uVar3,uVar4,uVar5);
    if (uVar2 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x324)))) {
      *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x324))) = uVar2;
      *(undefined1 *)((int)this_00 + 0x1d) = 1;
    }
    this_00 = (undefined *)F_00431250(this_00,0xca,&REFG(undefined, 0x10be43a),0,1,0);
  }
  return (uint)this_00;
}

/* ref: FUN_0077b990 */
unsigned int F_0077b990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77b990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0x1c) != 0) {
    F_00443df0(*(int *)((int)this + 0x1c));
    F_00438870(*(undefined4 *)((int)this + 0x1c),param_1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x10))))(*(int * PTR32 *)((int)this + 0x1c));
  }
  return 0;
}

/* ref: FUN_0077b9c0 */
unsigned int F_0077b9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x77b9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x1c) != (undefined *)0x0) {
    F_00438970(*(undefined * PTR32 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0xdac));
    F_00443e00(*(undefined * PTR32 *)((int)this + 0x1c));
    return 0;
  }
  return 0;
}

/* ref: FUN_0077b9f0 */
unsigned int F_0077b9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77b9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  if (*(int *)((int)this + 0x1c) != 0) {
    F_00443df0(*(int *)((int)this + 0x1c));
    F_00438870(*(undefined4 *)((int)this + 0x1c),param_1);
    F_00438880(*(undefined4 *)((int)this + 0x1c),(uint)(byte)((*param_2 < '\x01') + 1));
    F_00438890(*(undefined4 *)((int)this + 0x1c),
                 (uint)*(byte *)(param_2[1] * 0x58 + 0xe08 + (int)this));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x10))))(*(int * PTR32 *)((int)this + 0x1c));
  }
  return 0;
}

/* ref: FUN_0077ba50 */
unsigned int F_0077ba50(unsigned int gen_a0)
{
  GEN_ENTER(0x77ba50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (0 < *(int *)((int)this + 0xe00)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xe00),0);
    *(undefined4 *)((int)this + 0xe00) = 0;
  }
  return 0;
}

/* ref: FUN_0077ba90 */
unsigned int F_0077ba90(unsigned int gen_a0)
{
  GEN_ENTER(0x77ba90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (0 < *(int *)((int)this + 0x101c)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x101c),0);
    *(undefined4 *)((int)this + 0x101c) = 0;
  }
  return 0;
}

/* ref: FUN_0077bad0 */
unsigned int F_0077bad0(unsigned int gen_a0)
{
  GEN_ENTER(0x77bad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (0 < *(int *)((int)this + 0x1020)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x1020),0);
    *(undefined4 *)((int)this + 0x1020) = 0;
  }
  return 0;
}

/* ref: FUN_0077bb10 */
uint F_0077bb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77bb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this);
  return uVar1;
}

/* ref: FUN_0077bb40 */
byte F_0077bb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x77bb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 8) == 0) {
    uVar2 = 6;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    uVar1 = F_00435440(uVar1,uVar2);
    *(uint *)((int)this + 0x10) = uVar1;
    F_0042ccf0((undefined *)((int)this + 0x20),param_1);
    *(undefined4 *)((int)this + 0x18) = param_3;
    *(undefined4 *)((int)this + 0x1c) = param_4;
    if ((char)param_2 != '\0') {
      F_0042aca0((int)this + 0x74);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    return 1;
  }
  return 0;
}

/* ref: FUN_0077bba0 */
unsigned int F_0077bba0(unsigned int gen_a0)
{
  GEN_ENTER(0x77bba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x16c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x16c),0);
    *(undefined4 *)((int)this + 0x16c) = 0;
  }
  return 0;
}

/* ref: FUN_0077bbe0 */
uint F_0077bbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x77bbe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 200) == 0) {
    return 0;
  }
  if (*(int *)(in_ecx + 0xd4) == 0) {
    return 1;
  }
  if (*(int *)(in_ecx + 0xe0) == 0) {
    return 2;
  }
  if (*(int *)(in_ecx + 0xec) == 0) {
    return 3;
  }
  return (-(uint)(*(int *)(in_ecx + 0xf8) != 0) & 0xfffffffb) + 4;
}

/* ref: FUN_0077bc30 */
byte F_0077bc30(unsigned int gen_a0)
{
  GEN_ENTER(0x77bc30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((((*(int *)(in_ecx + 200) == 0) && (*(int *)(in_ecx + 0xd4) == 0)) &&
      (*(int *)(in_ecx + 0xe0) == 0)) &&
     ((*(int *)(in_ecx + 0xec) == 0 && (*(int *)(in_ecx + 0xf8) == 0)))) {
    return *(int *)(in_ecx + 0x108) != 0;
  }
  return 1;
}

/* ref: FUN_0077bc70 */
uint F_0077bc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77bc70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 200;
  case 1: ;
    return in_ecx + 0xd4;
  case 2: ;
    return in_ecx + 0xe0;
  case 3: ;
    return in_ecx + 0xec;
  case 4: ;
    return in_ecx + 0xf8;
  default: ;
    return 0;
  }
}

/* ref: FUN_0077bcd0 */
uint F_0077bcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x77bcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    puVar1 = (undefined4 *)(in_ecx + 200);
    break;
  case 1: ;
    puVar1 = (undefined4 *)(in_ecx + 0xd4);
    break;
  case 2: ;
    puVar1 = (undefined4 *)(in_ecx + 0xe0);
    break;
  case 3: ;
    puVar1 = (undefined4 *)(in_ecx + 0xec);
    break;
  case 4: ;
    puVar1 = (undefined4 *)(in_ecx + 0xf8);
    break;
  default: ;
    puVar1 = (undefined4 *)0x0;
  }
  if ((char)param_3 != '\0') {
    F_00a3ced0(&REFG(undefined, 0x14a4230),0x7d2,param_2,1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return 0;
}

/* ref: FUN_0077bd50 */
uint F_0077bd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x77bd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (((*(int *)((int)this + 0xcc) != 0) && (*(ushort *)((int)this + 0xd0) == param_2)) &&
     (*(ushort *)((int)this + 0xd2) == param_1)) {
    if ((char)param_3 != '\0') {
      F_00a3ced0(&REFG(undefined, 0x14a4230),0x7d2,0,1);
    }
    *(undefined4 *)((int)this + 200) = 0;
    *(undefined4 *)((int)this + 0xcc) = 0;
    *(undefined4 *)((int)this + 0xd0) = 0;
    return 0;
  }
  if (((*(int *)((int)this + 0xd8) != 0) && (*(ushort *)((int)this + 0xdc) == param_2)) &&
     (*(ushort *)((int)this + 0xde) == param_1)) {
    if ((char)param_3 != '\0') {
      F_00a3ced0(&REFG(undefined, 0x14a4230),0x7d2,1,1);
    }
    *(undefined4 *)((int)this + 0xd4) = 0;
    *(undefined4 *)((int)this + 0xd8) = 0;
    *(undefined4 *)((int)this + 0xdc) = 0;
    return 0;
  }
  if (((*(int *)((int)this + 0xe4) != 0) && (*(ushort *)((int)this + 0xe8) == param_2)) &&
     (*(ushort *)((int)this + 0xea) == param_1)) {
    if ((char)param_3 != '\0') {
      F_00a3ced0(&REFG(undefined, 0x14a4230),0x7d2,2,1);
    }
    *(undefined4 *)((int)this + 0xe0) = 0;
    *(undefined4 *)((int)this + 0xe4) = 0;
    *(undefined4 *)((int)this + 0xe8) = 0;
    return 0;
  }
  if (((*(int *)((int)this + 0xf0) != 0) && (*(ushort *)((int)this + 0xf4) == param_2)) &&
     (*(ushort *)((int)this + 0xf6) == param_1)) {
    if ((char)param_3 != '\0') {
      F_00a3ced0(&REFG(undefined, 0x14a4230),0x7d2,3,1);
    }
    *(undefined4 *)((int)this + 0xec) = 0;
    *(undefined4 *)((int)this + 0xf0) = 0;
    *(undefined4 *)((int)this + 0xf4) = 0;
    return 0;
  }
  uVar1 = param_2;
  if (((*(int *)((int)this + 0xfc) != 0) && (*(ushort *)((int)this + 0x100) == param_2)) &&
     (uVar1 = (uint)*(ushort *)((int)this + 0x102), uVar1 == param_1)) {
    if ((char)param_3 != '\0') {
      uVar1 = F_00a3ced0(&REFG(undefined, 0x14a4230),0x7d2,4,1);
    }
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0xfc) = 0;
    *(undefined4 *)((int)this + 0x100) = 0;
  }
  return uVar1;
}

/* ref: FUN_0077bef0 */
unsigned int F_0077bef0(unsigned int gen_a0)
{
  GEN_ENTER(0x77bef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x16c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x16c),0);
    *(undefined4 *)((int)this + 0x16c) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentLetterView::vf2 */
unsigned int F_0077bf40(void)
{
  GEN_ENTER(0x77bf40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0077bf50 */
unsigned int F_0077bf50(unsigned int gen_a0)
{
  GEN_ENTER(0x77bf50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x20) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x20),0);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  return 0;
}

/* ref: FUN_0077bf80 */
unsigned int F_0077bf80(unsigned int gen_a0)
{
  GEN_ENTER(0x77bf80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x84) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x84),0);
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  return 0;
}

/* ref: FUN_0077bfc0 */
uint F_0077bfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77bfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (-1 < *(int *)((int)this + 100)) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x18))))(*(int * PTR32 *)((int)this + 8));
    return (uint)(param_1 < uVar2);
  }
  piVar1 = (int *)F_00439130(*(undefined4 *)((int)this + 4),param_1);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0 || piVar1[1] != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentPartyInvite::vf16 */
uint F_0077c040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x77c040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int iVar1;
  uint in_EAX = 0;
  int * piVar2;
  uint uVar3;
  
  if (((*(int *)(this + 8) != 0) || (*(int *)(this + 0x68) != 0)) &&
     (piVar2 = *(int * PTR32 *)(this + 0xc), piVar2 != (int *)0x0)) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
    if (in_EAX == 0) {
      iVar1 = *(int *)(this + 0x68);
      if (iVar1 != 0) {
        *(undefined4 *)(this + 0x68) = 0;
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
      }
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))
                        (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar3;
    }
  }
  return in_EAX;
}

/* ref: FUN_0077c090 */
uint F_0077c090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77c090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return uVar1;
}

/* ref: FUN_0077c0b0 */
byte F_0077c0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77c0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (REFG(int, 0x1379694) != 0) {
    bVar1 = F_00ae09c0(&REFG(undefined, 0x1336e40),*(undefined4 *)(REFG(int, 0x1379694) + 0x74));
    if (bVar1 != 0) {
      iVar2 = 1;
    }
  }
  return iVar2 == param_1;
}

/* ref: FUN_0077c0f0 */
uint F_0077c0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77c0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  F_0042aca0(this);
  bVar1 = REFG(undefined1, 0x132814a) & 0x1f;
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(int *)((int)this + 0x5c) = (1 << bVar1) + -1;
  *(undefined4 *)((int)this + 0x60) = 1;
  *(undefined4 *)((int)this + 100) = 0x32;
  *(undefined4 *)((int)this + 0x68) = 1;
  *(undefined2 *)((int)this + 0x6c) = 0;
  if (-1 < param_1) {
    *(byte *)((int)this + 0x6e) = (byte)param_1;
    *(char *)((int)this + 0x6c) = '\x01' << ((byte)param_1 & 0x1f);
  }
  return 0;
}

/* ref: FUN_0077c140 */
uint F_0077c140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77c140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042e430(this,param_1);
  *(undefined1 *)((int)this + 0x54) = (undefined1)param_2;
  uVar1 = F_0042b790(this);
  if (0xf < uVar1) {
    uVar1 = F_0042d2f0(this,((undefined1 *)(gen_frame + 0x4)),0,0xf);
    F_0042ccf0(this,uVar1);
    uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar1 = (uint)uVar2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_0077c1a0 */
unsigned int F_0077c1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x77c1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 < REFG(undefined1, 0x1328147)) {
    uVar1 = 1 << ((byte)param_1 & 0x1f);
    if ((char)param_2 != '\0') {
      if ((char)param_3 != '\0') {
        *(int *)((int)this + 0x58) = (1 << (REFG(undefined1, 0x1328147) & 0x1f)) + -1;
      }
      *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | uVar1;
      return 0;
    }
    if ((char)param_3 != '\0') {
      *(undefined4 *)((int)this + 0x58) = 0;
    }
    *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) & ~uVar1;
  }
  return 0;
}

/* ref: FUN_0077c200 */
unsigned int F_0077c200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x77c200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 < REFG(undefined1, 0x132814a)) {
    uVar1 = 1 << ((byte)param_1 & 0x1f);
    if ((char)param_2 != '\0') {
      if ((char)param_3 != '\0') {
        *(int *)((int)this + 0x5c) = (1 << (REFG(undefined1, 0x132814a) & 0x1f)) + -1;
      }
      *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) | uVar1;
      return 0;
    }
    if ((char)param_3 != '\0') {
      *(undefined4 *)((int)this + 0x5c) = 0;
    }
    *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) & ~uVar1;
  }
  return 0;
}

/* ref: FUN_0077c260 */
uint F_0077c260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77c260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  if ((int)param_1 < param_2) {
    *(uint *)((int)this + 0x60) = param_1;
    *(int *)((int)this + 100) = param_2;
    return param_1;
  }
  *(int *)((int)this + 0x60) = param_2;
  *(uint *)((int)this + 100) = param_1;
  return param_1;
}

/* ref: FUN_0077c290 */
unsigned int F_0077c290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77c290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 < REFG(undefined2, 0x1328260)) {
    uVar2 = 1 << ((byte)param_1 & 0x1f);
    uVar1 = *(undefined4 *)((int)this + 0x68);
    if ((char)param_2 == '\0') {
      *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & ~uVar2;
    }
    else {
      *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | uVar2;
      if (param_1 == 0) {
        *(undefined4 *)((int)this + 0x68) = 1;
      }
      else {
        *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffffe;
      }
    }
    if (*(int *)((int)this + 0x68) == 0) {
      *(undefined4 *)((int)this + 0x68) = uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0077c2f0 */
unsigned int F_0077c2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x77c2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  byte bVar2;
  
  if (param_1 < 5) {
    bVar1 = *(byte *)((int)this + 0x6c);
    bVar2 = (byte)(1 << ((byte)param_1 & 0x1f));
    if ((char)param_2 == '\0') {
      *(byte *)((int)this + 0x6c) = ~bVar2 & bVar1;
    }
    else {
      if ((char)param_3 != '\0') {
        *(byte *)((int)this + 0x6c) = ~('\x01' << (*(byte *)((int)this + 0x6e) & 0x1f)) & bVar1;
      }
      *(byte *)((int)this + 0x6c) = *(byte *)((int)this + 0x6c) | bVar2;
    }
    if (*(char *)((int)this + 0x6c) == '\0') {
      *(byte *)((int)this + 0x6c) = bVar1;
    }
  }
  return 0;
}

/* ref: FUN_0077c340 */
unsigned int F_0077c340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x77c340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (param_1 < 4) {
    bVar1 = (byte)(1 << ((byte)param_1 & 0x1f));
    if ((char)param_2 != '\0') {
      if ((char)param_3 != '\0') {
        *(undefined1 *)((int)this + 0x6d) = 7;
        return 0;
      }
      *(byte *)((int)this + 0x6d) = *(byte *)((int)this + 0x6d) | bVar1;
      return 0;
    }
    if ((char)param_3 != '\0') {
      *(undefined1 *)((int)this + 0x6d) = 0;
      return 0;
    }
    *(byte *)((int)this + 0x6d) = *(byte *)((int)this + 0x6d) & ~bVar1;
  }
  return 0;
}

/* ref: FUN_0077c390 */
uint F_0077c390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77c390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4));
  return (uint)(param_1 < uVar1);
}

/* ref: Client::UI2::Agent::AgentSearch::vf11 */
byte F_0077c3b0(void)
{
  GEN_ENTER(0x77c3b0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_004351d0();
  return bVar1 == 0;
}

/* ref: Client::UI2::Agent::AgentSearch::vf13 */
unsigned int F_0077c3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77c3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  byte bVar2;
  int * piVar3;
  undefined1 AVar4;
  
  if (param_1 == 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4))));
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
    iVar1 = *piVar3;
    F_0042aca0(this + 0x18);
    bVar2 = REFG(undefined1, 0x132814a) & 0x1f;
    this[0x6c] = (undefined1)0x0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x78) = 1;
    *(int *)(this + 0x74) = (1 << bVar2) + -1;
    *(undefined4 *)(this + 0x7c) = 0x32;
    *(undefined4 *)(this + 0x80) = 1;
    *(undefined2 *)(this + 0x84) = 0;
    if (-1 < iVar1) {
      AVar4 = SUB41(iVar1,0);
      this[0x86] = AVar4;
      this[0x84] = (undefined1)('\x01' << ((byte)AVar4 & 0x1f));
    }
  }
  return 0;
}

/* ref: FUN_0077c440 */
uint F_0077c440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77c440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x380];
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint * puVar5;
  int * piVar6;
  int iVar7;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x37c);
  (*(uint *)(gen_frame + 0x378)) = uVar4;
  if (0 < *(int *)((int)this + 0x14)) {
    puVar5 = ((uint *)(gen_frame + 0x0));
    iVar7 = 0x6e;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    F_005a2710(((uint *)(gen_frame + 0x0)),4);
    ((uint *)(gen_frame + 0x0))[1] = param_1;
    if ((param_1 & 1) != 0) {
      uVar4 = F_0042a990((int)this + 0x18);
      F_005a2710(((undefined1 *)(gen_frame + 0x2f8)),6);
      (*(uint *)(gen_frame + 0x2fc)) = uVar4;
      cVar1 = *(char *)((int)this + 0x6c);
      F_005a2710(((undefined1 *)(gen_frame + 0x300)),3);
      (*(int *)(gen_frame + 0x304)) = (int)cVar1;
    }
    if ((param_1 & 2) != 0) {
      uVar3 = *(undefined4 *)((int)this + 0x70);
      F_005a2710(((undefined1 *)(gen_frame + 0x308)),4);
      (*(undefined4 *)(gen_frame + 0x30c)) = uVar3;
    }
    if ((param_1 & 4) != 0) {
      uVar3 = *(undefined4 *)((int)this + 0x74);
      F_005a2710(((undefined1 *)(gen_frame + 0x310)),4);
      (*(undefined4 *)(gen_frame + 0x314)) = uVar3;
    }
    if ((param_1 & 8) != 0) {
      uVar3 = *(undefined4 *)((int)this + 0x78);
      F_005a2710(((undefined1 *)(gen_frame + 0x318)),3);
      (*(undefined4 *)(gen_frame + 0x31c)) = uVar3;
      uVar3 = *(undefined4 *)((int)this + 0x7c);
      F_005a2710(((undefined1 *)(gen_frame + 0x320)),3);
      (*(undefined4 *)(gen_frame + 0x324)) = uVar3;
    }
    if ((param_1 & 0x10) != 0) {
      uVar3 = *(undefined4 *)((int)this + 0x80);
      F_005a2710(((undefined1 *)(gen_frame + 0x328)),4);
      (*(undefined4 *)(gen_frame + 0x32c)) = uVar3;
    }
    if ((param_1 & 0x20) != 0) {
      bVar2 = *(byte *)((int)this + 0x84);
      F_005a2710(((undefined1 *)(gen_frame + 0x330)),4);
      (*(uint *)(gen_frame + 0x334)) = (uint)bVar2;
    }
    if ((param_1 & 0x40) != 0) {
      bVar2 = *(byte *)((int)this + 0x85);
      F_005a2710(((undefined1 *)(gen_frame + 0x338)),4);
      (*(uint *)(gen_frame + 0x33c)) = (uint)bVar2;
    }
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6,*(undefined4 *)((int)this + 0x14),0x6f,((uint *)(gen_frame + 0x0)));
    puVar5 = &(*(uint *)(gen_frame + 0x378));
    iVar7 = 0x6e;
    do {
      puVar5 = puVar5 + -2;
      uVar4 = F_005a2670(puVar5);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  F_00c47745((*(uint *)(gen_frame + 0x378)) ^ (uint)(uint)(gen_frame + 0x37c));
  return uVar4;
}

/* ref: FUN_0077c5b0 */
uint F_0077c5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77c5b0u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_0042aca0(param_2);
  *param_3 = 0;
  if (param_1 != (char *)0x0) {
    F_0042e430(param_2,param_1);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10c058c),REFG(undefined4, 0x108cc50));
    F_00ad9dd0(param_2,((undefined1 *)(gen_frame + 0x4)));
    uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar1 = (uint)uVar2;
    if (*param_1 == ' ') {
      *param_3 = 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_0077c630 */
uint F_0077c630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77c630u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  char * pcVar2;
  
  F_0042aca0(param_3);
  pcVar2 = param_1;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    if ((char)param_2 == '\0') {
      uVar1 = F_0042e430(param_3,param_1);
      return uVar1;
    }
    pcVar2 = (char *)F_0042d000(param_3,(*(undefined * PTR32 (*)[1])REFP(0x10c0590)));
  }
  return (uint)pcVar2;
}

/* ref: FUN_0077c670 */
uint F_0077c670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77c670u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint local_8;
  
  iVar3 = 0;
  local_8 = 0;
  bVar2 = 0x17;
  do {
    lVar1 = ((ulonglong)(((ulonglong)bVar2 < 0x40) ? ((1L << (ulonglong)bVar2)) : 0));
    if (((uint)lVar1 & (*(uint *)&gen_args[0])) != 0 || ((uint)((ulonglong)lVar1 >> 0x20) & (*(uint *)&gen_args[1])) != 0) {
      local_8 = local_8 | 1 << ((byte)iVar3 & 0x1f);
    }
    bVar2 = (&REFG(undefined1, 0x10c053d))[iVar3];
    iVar3 = iVar3 + 1;
  } while (bVar2 != 0xff);
  return local_8;
}

/* ref: FUN_0077c6c0 */
ulonglong F_0077c6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x77c6c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  iVar4 = 0;
  bVar2 = 0x17;
  uVar5 = 0;
  do {
    if ((param_1 & 1 << ((byte)iVar4 & 0x1f)) != 0) {
      lVar1 = ((ulonglong)(((ulonglong)bVar2 < 0x40) ? ((1L << (ulonglong)bVar2)) : 0));
      uVar5 = uVar5 | (uint)lVar1;
      uVar3 = uVar3 | (uint)((ulonglong)lVar1 >> 0x20);
    }
    bVar2 = (&REFG(undefined1, 0x10c053d))[iVar4];
    iVar4 = iVar4 + 1;
  } while (bVar2 != 0xff);
  if (uVar5 == 0 && uVar3 == 0) {
    return 0x800000000;
  }
  return CONCAT44(uVar3,uVar5);
}

/* ref: FUN_0077c720 */
uint F_0077c720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77c720u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint local_8;
  
  iVar3 = 0;
  local_8 = 0;
  cVar2 = '\x01';
  do {
    lVar1 = ((ulonglong)(((ulonglong)(byte)(cVar2 - 1) < 0x40) ? ((1L << (ulonglong)(byte)(cVar2 - 1))) : 0));
    if (((uint)lVar1 & (*(uint *)&gen_args[0])) != 0 || ((uint)((ulonglong)lVar1 >> 0x20) & (*(uint *)&gen_args[1])) != 0) {
      local_8 = local_8 | 1 << ((byte)iVar3 & 0x1f);
    }
    cVar2 = (&REFG(undefined1, 0x10c0545))[iVar3];
    iVar3 = iVar3 + 1;
  } while (cVar2 != -1);
  return local_8;
}

/* ref: FUN_0077c770 */
ulonglong F_0077c770(unsigned int gen_a0)
{
  GEN_ENTER(0x77c770u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  iVar4 = 0;
  cVar2 = '\x01';
  uVar5 = 0;
  do {
    if ((param_1 & 1 << ((byte)iVar4 & 0x1f)) != 0) {
      lVar1 = ((ulonglong)(((ulonglong)(byte)(cVar2 - 1) < 0x40) ? ((1L << (ulonglong)(byte)(cVar2 - 1))) : 0));
      uVar5 = uVar5 | (uint)lVar1;
      uVar3 = uVar3 | (uint)((ulonglong)lVar1 >> 0x20);
    }
    cVar2 = (&REFG(undefined1, 0x10c0545))[iVar4];
    iVar4 = iVar4 + 1;
  } while (cVar2 != -1);
  return CONCAT44(uVar3,uVar5);
}

/* ref: FUN_0077c7c0 */
unsigned int F_0077c7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x77c7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x28) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x28),0);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return 0;
}

/* ref: FUN_0077c7f0 */
unsigned int F_0077c7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x77c7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x5c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x5c),0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return 0;
}

/* ref: FUN_0077c820 */
uint F_0077c820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77c820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  if ((byte)param_1 < 2) {
    *(byte *)((int)this + 0xc6) = (byte)param_1;
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x2c);
    if (uVar2 != 0) {
      if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xcc))) != (uint)*(byte *)((int)this + 0xc6)) {
        *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xcc))) = (uint)*(byte *)((int)this + 0xc6);
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0077c870 */
uint F_0077c870(unsigned int gen_a0)
{
  GEN_ENTER(0x77c870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  int iVar6;
  
  F_0090d130((undefined *)((int)this + 0xc4));
  *(undefined1 *)((int)this + 0xc4) = 1;
  iVar6 = 0;
  do {
    puVar3 = (uint *)F_00ab4100(iVar6);
    if (((puVar3 != (uint *)0x0) && (uVar5 = puVar3[1], uVar5 != 0)) && ((int)uVar5 < 5)) {
      puVar4 = (uint *)F_00ab4130(uVar5);
      if (puVar4 != (uint *)0x0) {
        piVar1 = ((int *)GEN_TOP(((int)this + (puVar3[1] * 5 + 0x14) * 8)));
        bVar2 = *(byte *)(piVar1 + 1);
        if (bVar2 == 0) {
          *piVar1 = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        *(byte *)(piVar1 + 1) = bVar2 + 1;
        piVar1[(uint)bVar2 * 2 + 2] = (*puVar3 & 0xffffff) + (int)puVar3;
        *(char *)(piVar1 + (uint)bVar2 * 2 + 2 + 1) = (char)iVar6;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x24);
  uVar5 = F_0043bd00(*(undefined * PTR32 *)((int)this + 0x10),0xa7f,0,0);
  *(uint *)((int)this + 0x168) = uVar5;
  uVar5 = F_0043bd00(*(undefined * PTR32 *)((int)this + 0x10),0xa80,0,0);
  *(uint *)((int)this + 0x16c) = uVar5;
  uVar5 = F_0043bd00(*(undefined * PTR32 *)((int)this + 0x10),0xa81,0,0);
  *(uint *)((int)this + 0x170) = uVar5;
  return uVar5;
}

/* ref: FUN_0077c950 */
byte F_0077c950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77c950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = 0;
  if ((((*param_1 & 0xf) != 0) && (-3 < *(int *)(param_1 + 4))) && (*(int *)(param_1 + 4) < 0)) {
    bVar1 = 1;
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return bVar1;
}

/* ref: FUN_0077c980 */
byte F_0077c980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77c980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x30) = 0;
  if (*(char *)((int)this + 0x34) == '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  return 1;
}

/* ref: FUN_0077c9a0 */
uint F_0077c9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x77c9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x27);
  if (uVar3 != 0) {
    if ((*(int *)((int)this + 0x14) == 0) ||
       (bVar1 = F_00436890(*(int *)((int)this + 0x14)), bVar1 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x1908))) != uVar4) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x1908))) = uVar4;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    return uVar4;
  }
  return 0;
}

/* ref: FUN_0077ca00 */
unsigned int F_0077ca00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77ca00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((byte)param_1 < 6) {
    *(byte *)((int)this + 0x20) = (byte)param_1;
    if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
      F_00441ed0(*(undefined * PTR32 *)((int)this + 0x14),param_1);
    }
  }
  return 0;
}

/* ref: FUN_0077ca30 */
byte F_0077ca30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77ca30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if ((byte)param_2 < 4) {
    *(byte *)(in_ecx + 0x21) = (byte)param_2;
    if (*(int *)(in_ecx + 0x14) != 0) {
      bVar1 = F_00436dc0(*(int *)(in_ecx + 0x14),param_2);
      uVar2 = (uint)bVar1;
    }
  }
  return (byte)uVar2;
}

/* ref: FUN_0077ca60 */
ushort F_0077ca60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77ca60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  undefined4 in_EAX = 0;
  
  uVar1 = (ushort)CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  if ((byte)param_1 < 3) {
    *(byte *)((int)this + 0x22) = (byte)param_1;
    if (*(int *)((int)this + 0x14) != 0) {
      uVar1 = F_00436de0(*(int *)((int)this + 0x14),(uint)(ushort)((ushort)(byte)param_1 * 200));
    }
  }
  return uVar1;
}

/* ref: FUN_0077caa0 */
byte F_0077caa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77caa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((byte)((char)param_1 - 1U) < 3) {
    *(char *)((int)this + 0x23) = (char)param_1;
    if (*(int *)((int)this + 0x14) != 0) {
      bVar1 = F_00436dd0(*(int *)((int)this + 0x14),param_1);
      uVar2 = (uint)bVar1;
    }
  }
  return (byte)uVar2;
}

/* ref: FUN_0077cae0 */
byte F_0077cae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77cae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if ((byte)param_2 < 3) {
    *(byte *)(in_ecx + 0x24) = (byte)param_2;
    if (*(int *)(in_ecx + 0x14) != 0) {
      bVar1 = F_00436df0(*(int *)(in_ecx + 0x14),param_2);
      uVar2 = (uint)bVar1;
    }
  }
  return (byte)uVar2;
}

/* ref: FUN_0077cb00 */
uint F_0077cb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77cb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x2c)));
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar5 = 0;
    uVar4 = 1;
    uVar3 = 0;
    uVar2 = F_00461190(*(undefined * PTR32 *)((int)this + 0x10),0xa03,param_1);
    uVar2 = F_00431250(this_00,2,uVar2,uVar3,uVar4,uVar5);
  }
  return uVar2;
}

/* ref: FUN_0077cb50 */
uint F_0077cb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77cb50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x30);
  if (uVar2 != 0) {
    if (**(int * PTR32 *)(uVar2 + 0x20) != param_2) {
      **(int * PTR32 *)(uVar2 + 0x20) = param_2;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) != param_1) {
      *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) = param_1;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_0077cba0 */
byte F_0077cba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77cba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if ((*param_1 & 0xf) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    if (-3 < iVar1) {
      if (iVar1 < 0) {
        *(undefined4 *)((int)this + 0x5c) = 0;
      }
      else if (iVar1 == 0) goto LAB_0077cbbf;
    }
    return 1;
  }
LAB_0077cbbf: ;
  if ((param_1[8] & 0xf) == 0) {
    F_0077c820(this,0);
    return 0;
  }
  F_0077c820(this,*(undefined4 *)(param_1 + 0xc));
  return 0;
}

/* ref: FUN_0077cbf0 */
byte F_0077cbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77cbf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte * pbVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((*param_1 & 0xf) == 0) {
LAB_0077cc28: ;
    this_00 = *(undefined * PTR32 *)((int)this + 0x14);
    if (this_00 != (undefined *)0x0) {
      ((char *)(gen_frame + 0x18))[0] = '\0';
      ((char *)(gen_frame + 0x18))[1] = '\0';
      ((char *)(gen_frame + 0x18))[2] = '\0';
      ((char *)(gen_frame + 0x18))[3] = '\0';
      ((char *)(gen_frame + 0x18))[4] = '\0';
      ((char *)(gen_frame + 0x18))[5] = '\0';
      ((char *)(gen_frame + 0x18))[6] = '\0';
      ((char *)(gen_frame + 0x18))[7] = '\0';
      ((char *)(gen_frame + 0x18))[8] = '\0';
      ((char *)(gen_frame + 0x18))[9] = '\0';
      ((char *)(gen_frame + 0x18))[10] = '\0';
      ((char *)(gen_frame + 0x18))[0xb] = '\0';
      ((char *)(gen_frame + 0x18))[0xc] = '\0';
      ((char *)(gen_frame + 0x18))[0xd] = '\0';
      ((char *)(gen_frame + 0x18))[0xe] = '\0';
      ((char *)(gen_frame + 0x18))[0xf] = 0;
      if ((param_1[8] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0xc);
      }
      uVar4 = 0;
      if (uVar5 != 0) {
        pbVar6 = param_1 + 0x10;
        do {
          if ((*pbVar6 & 0xf) == 0) {
            bVar3 = 0;
          }
          else {
            bVar3 = (byte)*(undefined4 *)(pbVar6 + 4);
          }
          ((byte *)(gen_frame + 0x8))[(int)(uVar4)] = bVar3;
          uVar4 = uVar4 + 1;
          pbVar6 = pbVar6 + 8;
          ((char *)(gen_frame + 0x18))[(int)(bVar3)] = '\x01';
        } while (uVar4 < uVar5);
      }
      uVar4 = 0;
      (*(undefined1 *)(gen_frame + 0x17)) = 0xf;
      for (; uVar5 < 0xf; uVar5 = uVar5 + 1) {
        bVar3 = (byte)uVar4;
        cVar1 = ((char *)(gen_frame + 0x18))[(int)(uVar4)];
        while ((cVar1 != '\0' && (bVar3 = (byte)uVar4, bVar3 < 0x10))) {
          bVar3 = bVar3 + 1;
          uVar4 = (uint)bVar3;
          cVar1 = ((char *)(gen_frame + 0x18))[(int)(uVar4)];
        }
        ((byte *)(gen_frame + 0x8))[(int)(uVar5)] = bVar3;
        uVar4 = (uint)(byte)(bVar3 + 1);
        if (0xf < (byte)(bVar3 + 1)) break;
      }
      F_00441810(this_00,((byte *)(gen_frame + 0x8)));
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 < -2) goto LAB_0077ccd4;
    if (-1 < iVar2) {
      if (iVar2 != 0) goto LAB_0077ccd4;
      goto LAB_0077cc28;
    }
  }
  *(undefined4 *)((int)this + 0x60) = 0;
LAB_0077ccd4: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: FUN_0077ccf0 */
byte F_0077ccf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77ccf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  bool bVar1;
  
  bVar1 = false;
  if ((char)param_1 == '\x0f') {
    bVar1 = *(int *)((int)this + 100) != 0;
  }
  else {
    if ((char)param_1 == -0x68) {
      return *(int *)((int)this + 0x58) != 0;
    }
    if ((char)param_1 == -0x65) {
      return *(int *)((int)this + 0x60) != 0;
    }
  }
  return bVar1;
}

/* ref: FUN_0077cd30 */
uint F_0077cd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77cd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = param_1 & 0xff;
  if (uVar1 == 0xf) {
    uVar1 = 0;
    if (*(int *)((int)this + 100) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 100),0);
      *(undefined4 *)((int)this + 100) = 0;
    }
  }
  else if (uVar1 == 0x98) {
    uVar1 = 0;
    if (*(int *)((int)this + 0x58) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x58),0);
      *(undefined4 *)((int)this + 0x58) = 0;
      return uVar1;
    }
  }
  else {
    uVar1 = uVar1 - 0x9b;
    if ((uVar1 == 0) && (*(int *)((int)this + 0x60) != 0)) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x60),0);
      *(undefined4 *)((int)this + 0x60) = 0;
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_0077cdd0 */
byte F_0077cdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77cdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_004368a0(param_1);
  if (bVar1 == 0) {
    if ((byte)param_1 < 3) {
      F_0042e430((undefined *)((int)this + 0x70),&REFG(undefined, 0x10be467));
    }
    uVar2 = F_0042a990((int)this + 0x70);
    bVar1 = F_004414f0(*(undefined * PTR32 *)((int)this + 0x14),param_1,uVar2);
  }
  return bVar1;
}

/* ref: FUN_0077ce20 */
uint F_0077ce20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77ce20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x2c);
  if (uVar2 != 0) {
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 200))) != (param_1 & 0xff)) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 200))) = param_1 & 0xff;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_0077ce60 */
uint F_0077ce60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77ce60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if ((byte)param_1 < 5) {
    uVar2 = (uint)(byte)param_1;
    bVar1 = F_00436d30(param_2,param_3,(uint)(byte)(&REFG(undefined1, 0x10c0596))[uVar2 * 3]);
    if (bVar1 != 0) {
      return 2;
    }
    bVar1 = F_00436d30(param_2,param_3,(uint)(byte)(&REFG(undefined1, 0x10c0595))[uVar2 * 3]);
    if (bVar1 != 0) {
      return 1;
    }
    F_00436d30(param_2,param_3,(uint)(byte)(&REFG(undefined1, 0x10c0594))[uVar2 * 3]);
  }
  return 0;
}

/* ref: FUN_0077cee0 */
uint F_0077cee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77cee0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00436d30(param_1,param_2,0x20);
  if (bVar1 != 0) {
    return 2;
  }
  bVar1 = F_00436d30(param_1,param_2,0x1f);
  if (bVar1 != 0) {
    return 1;
  }
  bVar1 = F_00436d30(param_1,param_2,0x1e);
  if (bVar1 != 0) {
    return 0;
  }
  return 0;
}

/* ref: FUN_0077cf50 */
uint F_0077cf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77cf50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00436d30(param_1,param_2,0x23);
  if (bVar1 != 0) {
    return 2;
  }
  bVar1 = F_00436d30(param_1,param_2,0x22);
  if (bVar1 != 0) {
    return 1;
  }
  bVar1 = F_00436d30(param_1,param_2,0x21);
  if (bVar1 != 0) {
    return 0;
  }
  return 0;
}

/* ref: FUN_0077cfc0 */
uint F_0077cfc0(unsigned int gen_a0)
{
  GEN_ENTER(0x77cfc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  undefined * this_00;
  uint uVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x2c);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0x28)));
  pvVar8 = this_00;
  if (((uVar5 != 0) && (this_00 != (undefined *)0x0)) && (*(int *)((int)this + 0x14) != 0)) {
    bVar3 = F_00436990(*(int *)((int)this + 0x14));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
    uVar6 = F_00436a90(*(undefined4 *)((int)this + 0x14),(*(undefined4 *)(gen_frame + 0x8)));
    pvVar8 = (undefined *)0x0;
    if (uVar6 != 0) {
      uVar7 = (uint)bVar3;
      if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc0))) != uVar7) {
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc0))) = uVar7;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      iVar1 = *(int *)(uVar5 + 0x20);
      iVar2 = *(int *)(iVar1 + 4 + uVar7 * 0xc);
      if (*(int *)(iVar1 + 0xc4) != iVar2) {
        *(int *)(iVar1 + 0xc4) = iVar2;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar11 = 0;
      uVar10 = 1;
      uVar9 = 0;
      uVar7 = F_00460bd0(*(undefined * PTR32 *)((int)this + 0x10),0xa1e,iVar2 + 1);
      F_00431250(this_00,0x11,uVar7,uVar9,uVar10,uVar11);
      uVar6 = F_00441270(uVar6);
      if (uVar6 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x48)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x48))) = uVar6;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      bVar3 = F_00441290(*(undefined * PTR32 *)((int)this + 0x14),2);
      iVar1 = *(int *)(uVar5 + 0x20);
      if (bVar3 == 0) {
        if (*(int *)(iVar1 + 0x160) != 0) {
          *(undefined4 *)(iVar1 + 0x160) = 0;
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        pvVar8 = (undefined *)F_0043bd00(*(undefined * PTR32 *)((int)this + 0x10),0xa29,0,0);
        if (pvVar8 != *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xe4)))) {
          *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xe4))) = pvVar8;
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
        }
      }
      else {
        if (*(int *)(iVar1 + 0x160) != 1) {
          *(undefined4 *)(iVar1 + 0x160) = 1;
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        pvVar8 = (undefined *)F_0043bd00(*(undefined * PTR32 *)((int)this + 0x10),0xa2a,0,0);
        if (pvVar8 != *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xe8)))) {
          *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xe8))) = pvVar8;
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
          return (uint)pvVar8;
        }
      }
    }
  }
  return (uint)pvVar8;
}

/* ref: FUN_0077d140 */
uint F_0077d140(unsigned int gen_a0)
{
  GEN_ENTER(0x77d140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  int * piVar5;
  undefined * pvVar6;
  undefined * this_00;
  ulonglong * puVar7;
  byte * pbVar8;
  uint uVar9;
  uint uVar10;
  undefined * pvVar11;
  int iVar12;
  int iVar13;
  byte * pbVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_10;
  
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,0x2c)));
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5,0x28)));
  pvVar11 = this_00;
  if (((pvVar6 != (undefined *)0x0) && (this_00 != (undefined *)0x0)) && (*(int *)((int)this + 0x14) != 0)) {
    puVar7 = (ulonglong *)F_00436a90(*(int *)((int)this + 0x14),(uint)*(byte *)((int)this + 0xc5))
    ;
    pvVar11 = (undefined *)0x0;
    if (puVar7 != (ulonglong *)0x0) {
      if (*(char *)((int)this + 0xc4) == '\0') {
        F_0077c870(this);
      }
      if (*((uint *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 0xcc))) != (uint)*(byte *)((int)this + 0xc6)) {
        *((uint *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 0xcc))) = (uint)*(byte *)((int)this + 0xc6);
        *(undefined1 *)((int)pvVar6 + 0x1d) = 1;
      }
      iVar12 = 0;
      pbVar8 = (byte *)((int)this + 0xcc);
      local_10 = 0;
      local_2c = 4;
      do {
        bVar3 = false;
        local_28 = 0;
        if (*pbVar8 != 0) {
          local_24 = iVar12 * 4 + 0xd0;
          iVar12 = iVar12 * 4 + 0x5c;
          pbVar14 = pbVar8 + 4;
          do {
            if (((uint)(((ulonglong)(((ulonglong)pbVar14[4] < 0x40) ? ((*puVar7 >> (ulonglong)pbVar14[4])) : 0))) & 1) == 1) {
              iVar13 = local_24;
              if (!bVar3) {
                if (*(int *)(pbVar8 + -4) != *((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + iVar12)))) {
                  *((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + iVar12))) = *(int *)(pbVar8 + -4);
                  *(undefined1 *)((int)this_00 + 0x1d) = 1;
                }
                if (*((int *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + local_24))) != 1) {
                  *((undefined4 *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + local_24))) = 1;
                  *(undefined1 *)((int)pvVar6 + 0x1d) = 1;
                }
                local_10 = local_10 + 1;
                iVar12 = iVar12 + 4;
                iVar13 = local_24 + 4;
              }
              bVar3 = true;
              if (*(int *)pbVar14 != *((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + iVar12)))) {
                *((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + iVar12))) = *(int *)pbVar14;
                *(undefined1 *)((int)this_00 + 0x1d) = 1;
              }
              if (*((int *)GEN_TOP((iVar13 + *(int *)((int)pvVar6 + 0x20)))) != 0) {
                *((undefined4 *)GEN_TOP((iVar13 + *(int *)((int)pvVar6 + 0x20)))) = 0;
                *(undefined1 *)((int)pvVar6 + 0x1d) = 1;
              }
              local_10 = local_10 + 1;
              iVar12 = iVar12 + 4;
              local_24 = iVar13 + 4;
            }
            local_28 = local_28 + 1;
            pbVar14 = pbVar14 + 8;
          } while (local_28 < (int)(uint)*pbVar8);
          iVar12 = local_10;
          if ((bVar3) && (*((int *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 0xcc + local_10 * 4))) != 2)) {
            *((undefined4 *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 0xcc + local_10 * 4))) = 2;
            *(undefined1 *)((int)pvVar6 + 0x1d) = 1;
          }
        }
        pbVar8 = pbVar8 + 0x28;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
      if (*((int *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 0x120))) != iVar12) {
        *((int *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 0x120))) = iVar12;
        *(undefined1 *)((int)pvVar6 + 0x1d) = 1;
      }
      iVar12 = 0;
      bVar4 = F_00436c80(*(undefined * PTR32 *)((int)this + 0x14),0);
      if (bVar4 != 0) {
        iVar13 = 0x124;
        local_10 = 0xac;
        uVar10 = 0;
        do {
          uVar17 = 0;
          uVar16 = 1;
          uVar15 = 0;
          uVar1 = uVar10 + 1;
          uVar9 = F_00461c60(*(undefined * PTR32 *)((int)this + 0x10),0xb4a,uVar1,0);
          F_00431250(this_00,iVar12 + 0x2b,uVar9,uVar15,uVar16,uVar17);
          if (*((int *)GEN_TOP((iVar13 + *(int *)((int)pvVar6 + 0x20)))) != 1) {
            *((undefined4 *)GEN_TOP((iVar13 + *(int *)((int)pvVar6 + 0x20)))) = 1;
            *(undefined1 *)((int)pvVar6 + 0x1d) = 1;
          }
          uVar10 = F_0077ce60(uVar10,(int)*puVar7,*(undefined4 *)((int)puVar7 + 4));
          iVar2 = *(int *)((int)this + uVar10 * 4 + 0x168);
          if (iVar2 != *((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_10 + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_10 + 4))) = iVar2;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((iVar13 + 4 + *(int *)((int)pvVar6 + 0x20)))) != 2) {
            *((undefined4 *)GEN_TOP((iVar13 + 4 + *(int *)((int)pvVar6 + 0x20)))) = 2;
            *(undefined1 *)((int)pvVar6 + 0x1d) = 1;
          }
          local_10 = local_10 + 8;
          iVar12 = iVar12 + 2;
          iVar13 = iVar13 + 8;
          uVar10 = uVar1;
        } while (uVar1 < bVar4);
      }
      uVar17 = 0;
      uVar16 = 1;
      uVar15 = 0;
      uVar10 = F_0043bd00(*(undefined * PTR32 *)((int)this + 0x10),0xbae,0,0);
      F_00431250(this_00,iVar12 + 0x2b,uVar10,uVar15,uVar16,uVar17);
      if (*((int *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 0x124 + iVar12 * 4))) != 1) {
        *((undefined4 *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 0x124 + iVar12 * 4))) = 1;
        *(undefined1 *)((int)pvVar6 + 0x1d) = 1;
      }
      uVar15 = *(undefined4 *)((int)puVar7 + 4);
      uVar16 = (undefined4)*puVar7;
      local_1c = 0;
      bVar4 = F_00436d30(uVar16,uVar15,0x20);
      if (bVar4 == 0) {
        bVar4 = F_00436d30(uVar16,uVar15,0x1f);
        if (bVar4 == 0) {
          bVar4 = F_00436d30(uVar16,uVar15,0x1e);
          if (bVar4 != 0) {
            local_1c = 0;
          }
        }
        else {
          local_1c = 1;
        }
      }
      else {
        local_1c = 2;
      }
      iVar13 = *(int *)((int)this + local_1c * 4 + 0x168);
      if (iVar13 != *((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xb0 + iVar12 * 4)))) {
        *((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xb0 + iVar12 * 4))) = iVar13;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 0x128 + iVar12 * 4))) != 2) {
        *((undefined4 *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 0x128 + iVar12 * 4))) = 2;
        *(undefined1 *)((int)pvVar6 + 0x1d) = 1;
      }
      uVar17 = 0;
      uVar16 = 1;
      uVar15 = 0;
      uVar10 = F_0043bd00(*(undefined * PTR32 *)((int)this + 0x10),0xbaf,0,0);
      F_00431250(this_00,iVar12 + 0x2d,uVar10,uVar15,uVar16,uVar17);
      if (*((int *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 300 + iVar12 * 4))) != 1) {
        *((undefined4 *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 300 + iVar12 * 4))) = 1;
        *(undefined1 *)((int)pvVar6 + 0x1d) = 1;
      }
      uVar15 = *(undefined4 *)((int)puVar7 + 4);
      uVar16 = (undefined4)*puVar7;
      local_20 = 0;
      bVar4 = F_00436d30(uVar16,uVar15,0x23);
      if (bVar4 == 0) {
        bVar4 = F_00436d30(uVar16,uVar15,0x22);
        if (bVar4 == 0) {
          bVar4 = F_00436d30(uVar16,uVar15,0x21);
          if (bVar4 != 0) {
            local_20 = 0;
          }
        }
        else {
          local_20 = 1;
        }
      }
      else {
        local_20 = 2;
      }
      iVar13 = *(int *)((int)this + local_20 * 4 + 0x168);
      if (iVar13 != *((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xb8 + iVar12 * 4)))) {
        *((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xb8 + iVar12 * 4))) = iVar13;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 0x130 + iVar12 * 4))) != 2) {
        *((undefined4 *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 0x130 + iVar12 * 4))) = 2;
        *(undefined1 *)((int)pvVar6 + 0x1d) = 1;
      }
      pvVar11 = pvVar6;
      if (*((int *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 0x15c))) != iVar12 + 4) {
        *((int *)GEN_TOP((*(int *)((int)pvVar6 + 0x20) + 0x15c))) = iVar12 + 4;
        *(undefined1 *)((int)pvVar6 + 0x1d) = 1;
      }
    }
  }
  return (uint)pvVar11;
}

/* ref: FUN_0077d600 */
uint F_0077d600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77d600u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0x24;
  if (4 < param_1 - 0xcU) {
    if (param_1 != 0x11) {
      if (param_1 == 0x12) {
        if (param_2 != 0) {
          if (param_2 == 1) {
            return 0x22;
          }
          if (param_2 == 2) {
            return 0x23;
          }
        }
        uVar1 = 0x21;
      }
      return uVar1;
    }
    if (param_2 != 0) {
      if (param_2 == 1) {
        return 0x1f;
      }
      if (param_2 == 2) {
        return 0x20;
      }
    }
    return 0x1e;
  }
  uVar1 = param_1 - 0xcU & 0xff;
  if (param_2 != 0) {
    if (param_2 == 1) {
      return (uint)(byte)(&REFG(undefined1, 0x10c0595))[uVar1 * 3];
    }
    if (param_2 == 2) {
      return (uint)(byte)(&REFG(undefined1, 0x10c0596))[uVar1 * 3];
    }
  }
  return (uint)(byte)(&REFG(undefined1, 0x10c0594))[uVar1 * 3];
}

/* ref: FUN_0077d6b0 */
byte F_0077d6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x77d6b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  bool bVar1;
  byte bVar2;
  byte * pbVar3;
  uint uVar4;
  byte * pbVar5;
  
  if (*(char *)*param_1 == '\0') {
    return 0;
  }
  pbVar3 = (byte *)F_0042a990(param_1);
  bVar1 = false;
  pbVar5 = pbVar3;
  if (pbVar3 != (byte *)0x0) {
    do {
      if (*pbVar5 == 0) break;
      uVar4 = F_0042acc0((uint)*pbVar5);
      if (uVar4 == 1) {
        if (*pbVar5 == 0x20) goto LAB_0077d739;
LAB_0077d6ef: ;
        if (bVar1) {
          bVar1 = false;
        }
      }
      else {
        if ((((uVar4 != 3) || (*pbVar5 != 0xe3)) || (pbVar5[1] != 0x80)) || (pbVar5[2] != 0x80))
        goto LAB_0077d6ef;
LAB_0077d739: ;
        if (pbVar5 == pbVar3) {
          return 0;
        }
        if (bVar1) {
          return 0;
        }
        bVar1 = true;
      }
      pbVar5 = pbVar5 + uVar4;
    } while (pbVar5 != (byte *)0x0);
    if (bVar1) {
      return 0;
    }
  }
  if ((*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25dc) != (undefined *)0x0) &&
     (bVar2 = F_009f0240(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25dc),param_1), bVar2 != 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_0077d6c3 */
byte F_0077d6c3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77d6c3u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  int in_ebp = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  bool bVar1;
  byte bVar2;
  byte * pbVar3;
  uint uVar4;
  byte * pbVar5;
  
  pbVar3 = (byte *)F_0042a990(in_ecx);
  bVar1 = false;
  pbVar5 = pbVar3;
  if (pbVar3 != (byte *)0x0) {
    do {
      if (*pbVar5 == 0) break;
      uVar4 = F_0042acc0((uint)*pbVar5);
      if (uVar4 == 1) {
        if (*pbVar5 == 0x20) goto LAB_0077d739;
LAB_0077d6ef: ;
        if (bVar1) {
          bVar1 = false;
        }
      }
      else {
        if ((((uVar4 != 3) || (*pbVar5 != 0xe3)) || (pbVar5[1] != 0x80)) || (pbVar5[2] != 0x80))
        goto LAB_0077d6ef;
LAB_0077d739: ;
        if (pbVar5 == pbVar3) {
          return 0;
        }
        if (bVar1) {
          return 0;
        }
        bVar1 = true;
      }
      pbVar5 = pbVar5 + uVar4;
    } while (pbVar5 != (byte *)0x0);
    if (bVar1) {
      return 0;
    }
  }
  if ((*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25dc) != (undefined *)0x0) &&
     (bVar2 = F_009f0240(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25dc),*(undefined4 *)(in_ebp + 8)),
     bVar2 != 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_0077d750 */
uint F_0077d750(unsigned int gen_a0)
{
  GEN_ENTER(0x77d750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),(*(char *)((int)this + 0x20) == '\x03') + '\x01');
  F_00441df0(*(undefined * PTR32 *)((int)this + 0x14),local_8);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x2f);
  if (uVar2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) = 0;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    if (**(int * PTR32 *)(uVar2 + 0x20) != 0) {
      **(int * PTR32 *)(uVar2 + 0x20) = 0;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_0077d7c0 */
uint F_0077d7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x77d7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  char * pcVar2;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 1: ;
    *param_3 = *param_4;
    return 2;
  case 2: ;
  case 3: ;
    F_0042e430(param_2,(int)param_4 + 0x33);
    return 1;
  case 4: ;
    pcVar2 = (char *)((int)param_4 + 0x13);
    if (*pcVar2 == '\0') {
      uVar1 = F_0043bd00(*(undefined * PTR32 *)((int)this + 0x10),0x3c4,0,0);
      F_0042e430(param_2,uVar1);
      return 1;
    }
    break;
  case 5: ;
    if (*(int *)((int)this + 0x14) != 0) {
      uVar1 = F_00436ad0((int)param_4 + 0x33);
      F_0042e430(param_2,uVar1);
      return 1;
    }
    pcVar2 = "";
    break;
  default: ;
    return 0;
  }
  F_0042e430(param_2,pcVar2);
  return 1;
}

/* ref: FUN_0077d890 */
uint F_0077d890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77d890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((char)uVar2 != '\0') && (*(char *)((int)this + 0x174) != '\x01')) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_1);
    F_0043be20(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x4)));
    bVar1 = F_0042b6f0((undefined *)((int)this + 0x178),((undefined1 *)(gen_frame + 0x4)));
    if (bVar1 != 0) {
      F_0042ccf0((undefined *)((int)this + 0x1cc),param_1);
      uVar2 = F_0042a990((int)this + 0x1cc);
      F_00441c40(uVar2);
      *(undefined1 *)((int)this + 0x174) = 1;
    }
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_0077d930 */
uint F_0077d930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77d930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0((undefined *)((int)this + 0x178),param_1);
  *(undefined1 *)((int)this + 0x175) = 1;
  return uVar1;
}

/* ref: FUN_0077d960 */
uint F_0077d960(unsigned int gen_a0)
{
  GEN_ENTER(0x77d960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x31);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x2d);
  if (uVar3 == 0) {
    return uVar4;
  }
  if (uVar4 != 0) {
    if ((*(undefined * PTR32 *)((int)this + 0x14) == (undefined *)0x0) ||
       (bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x14),0), bVar1 == 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x3c))) != iVar5) {
      *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x3c))) = iVar5;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    uVar3 = F_0043bd00(*(undefined * PTR32 *)((int)this + 0x10),0x12bd,0,0);
    if (uVar3 != *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x2c)))) {
      *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x2c))) = uVar3;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    return uVar3;
  }
  return 0;
}

/* ref: FUN_0077d9f0 */
uint F_0077d9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77d9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((char)uVar2 != '\0') && (*(char *)((int)this + 0x220) != '\x01')) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_1);
    F_0043be20(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x4)));
    bVar1 = F_0042b6f0((undefined *)((int)this + 0x224),((undefined1 *)(gen_frame + 0x4)));
    if (bVar1 != 0) {
      F_0042ccf0((undefined *)((int)this + 0x278),param_1);
      uVar2 = F_0042a990((int)this + 0x278);
      F_00440c80(uVar2);
      *(undefined1 *)((int)this + 0x220) = 1;
    }
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_0077da90 */
uint F_0077da90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77da90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_01;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  this_00 = (undefined *)((int)this + 0x224);
  F_0042ccf0(this_00,param_1);
  F_0043be20(*(undefined * PTR32 *)((int)this + 0x10),this_00);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x31);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_01 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x2d)));
  if ((uVar3 != 0) && (this_01 != (undefined *)0x0)) {
    F_0042b630(((undefined1 *)(gen_frame + 0x4)));
    piVar2 = *(int * PTR32 *)((int)this + 0x10);
    iVar1 = *piVar2;
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,((undefined1 *)(gen_frame + 0x4)));
    ((code *)*(gen_code32 *)(iVar1 + 0xc))(*(undefined4 *)((int)this + 0x10),this_00,uVar4);
    uVar4 = **(uint * PTR32 *)(uVar3 + 0x20);
    uVar5 = uVar4 | 2;
    if (uVar4 != uVar5) {
      **(uint * PTR32 *)(uVar3 + 0x20) = uVar5;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    uVar9 = 0;
    uVar8 = 1;
    uVar7 = 0;
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    F_00431250(this_01,7,uVar3,uVar7,uVar8,uVar9);
    uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    this_01 = (undefined *)uVar6;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this_01;
}

/* ref: FUN_0077db70 */
uint F_0077db70(unsigned int gen_a0)
{
  GEN_ENTER(0x77db70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  
  uVar4 = 0xb;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  this_00 = (undefined *)F_00435440(uVar2,uVar4);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x3a);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0x36)));
  if (((this_00 != (undefined *)0x0) && (uVar2 != 0)) && (piVar3 != (int *)0x0)) {
    bVar1 = F_00436d60(this_00,4);
    piVar3 = *(int * PTR32 *)(uVar2 + 0x20);
    if (bVar1 != 0) {
      if (*piVar3 != 1) {
        *piVar3 = 1;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      bVar1 = F_00441190();
      return CONCAT31(extraout_var,bVar1);
    }
    if (*piVar3 != 0) {
      *piVar3 = 0;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_0077dc00 */
byte F_0077dc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x77dc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = 0;
  if ((char)param_1 == '\0') {
    if (*(char *)((int)this + 0x4ae) == '\0') {
      return 0;
    }
    while ((*((char *)GEN_TOP(((int)this + ((uint)bVar1 * 3 + 0x135) * 4))) != (char)param_2 ||
           (*(short *)((int)this + (uint)bVar1 * 0xc + 0x4d6) != (short)param_3))) {
      bVar1 = bVar1 + 1;
      if (*(byte *)((int)this + 0x4ae) <= bVar1) {
        return 0;
      }
    }
  }
  else {
    if (*(char *)((int)this + 0x4ad) == '\0') {
      return 0;
    }
    while ((*((char *)GEN_TOP(((int)this + ((uint)bVar1 * 3 + 300) * 4))) != (char)param_2 ||
           (*(short *)((int)this + (uint)bVar1 * 0xc + 0x4b2) != (short)param_3))) {
      bVar1 = bVar1 + 1;
      if (*(byte *)((int)this + 0x4ad) <= bVar1) {
        return 0;
      }
    }
  }
  return 1;
}

/* ref: FUN_0077dca0 */
uint F_0077dca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77dca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  undefined * this_00;
  uint uVar6;
  undefined * this_01;
  __time64_t _Var7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_18;
  uint local_14;
  int local_10;
  int * local_8;
  
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x3a);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0x36)));
  uVar10 = 0xb;
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  this_01 = (undefined *)F_00435440(uVar6,uVar10);
  _Var7 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x598) = (int)_Var7;
  uVar8 = F_00427d90();
  *(ulonglong *)((int)this + 0x5a0) = uVar8;
  uVar8 = F_00427e30();
  uVar6 = (uint)uVar8;
  *(ulonglong *)((int)this + 0x5a8) = uVar8;
  *(undefined4 *)((int)this + 0x5b0) = 0;
  if (((uVar5 != 0) && (this_00 != (undefined *)0x0)) && (this_01 != (undefined *)0x0)) {
    if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x870))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x870))) = 0;
      *(undefined1 *)(uVar5 + 0x1d) = 0;
    }
    *(undefined1 *)((int)this + 0x4ad) = 0;
    bVar3 = F_00436d60(this_01,4);
    if (bVar3 != 0) {
      local_8 = (int *)((int)this + 0x5b4);
      param_1 = (undefined4 *)((int)param_1 + 0x14);
      local_18 = 1;
      local_14 = 0;
      local_10 = 0x10;
      do {
        iVar2 = param_1[-3];
        if ((iVar2 != 0) && (uVar6 = F_00ab4220(iVar2), uVar6 != 0)) {
          *((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0x4ad) * 4 + 0x5b4))) = *param_1;
          bVar3 = *(byte *)((int)this + 0x4ad);
          *(byte *)((int)this + 0x4ad) = bVar3 + 1;
          puVar1 = ((undefined1 *)GEN_TOP(((int)this + ((uint)bVar3 * 3 + 300) * 4)));
          *puVar1 = (undefined1)local_14;
          *(short *)(puVar1 + 2) = (short)iVar2;
          puVar1[4] = *(undefined1 *)(uVar6 + 0x11);
          *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(uVar6 + 0xc);
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + -8 + local_10))) != iVar2) {
            *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + -8 + local_10))) = iVar2;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + -4 + local_10))) != *(int *)(uVar6 + 0xc)) {
            *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + -4 + local_10))) = *(int *)(uVar6 + 0xc);
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_10))) != *local_8) {
            *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_10))) = *local_8;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          uVar11 = 0;
          uVar9 = 1;
          uVar10 = 0;
          uVar6 = F_00463610(2,iVar2,0xc);
          F_00431250(this_00,local_18,uVar6,uVar10,uVar9,uVar11);
          uVar11 = 0;
          uVar9 = 1;
          uVar10 = 0;
          uVar6 = F_00462880(*(undefined * PTR32 *)((int)this + 0x10),*local_8);
          F_00431250(this_00,local_18 + 1,uVar6,uVar10,uVar9,uVar11);
          local_10 = local_10 + 0xc;
          local_18 = local_18 + 2;
        }
        param_1 = param_1 + 1;
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
      } while (local_14 < 3);
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) != (uint)*(byte *)((int)this + 0x4ad)) {
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) = (uint)*(byte *)((int)this + 0x4ad);
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    uVar11 = 0;
    uVar9 = 1;
    uVar10 = 0;
    bVar3 = F_00436ba0(this_01,0);
    uVar5 = F_00461c60(*(undefined * PTR32 *)((int)this + 0x10),0x7fc,(uint)*(byte *)((int)this + 0x4ad),
                         (uint)bVar3);
    uVar6 = F_00431250(this_00,0,uVar5,uVar10,uVar9,uVar11);
  }
  return uVar6;
}

/* ref: FUN_0077df00 */
uint F_0077df00(unsigned int gen_a0)
{
  GEN_ENTER(0x77df00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * in_EAX = 0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  __time64_t _Var7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_10;
  int local_c;
  int * local_8;
  
  if (*(char *)((int)this + 0x4ad) != '\0') {
    _Var7 = F_00c4b7c2((__time64_t *)0x0);
    in_EAX = ((undefined *)GEN_TOP(((int)_Var7 - *(int *)((int)this + 0x598))));
    if (*(undefined * PTR32 *)((int)this + 0x5b0) != in_EAX) {
      *(undefined * PTR32 *)((int)this + 0x5b0) = in_EAX;
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x3a);
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x36)));
      in_EAX = this_00;
      if ((uVar2 != 0) && (this_00 != (undefined *)0x0)) {
        if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x870))) != *(int *)((int)this + 0x5b0)) {
          *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x870))) = *(int *)((int)this + 0x5b0);
          *(undefined1 *)(uVar2 + 0x1d) = 0;
        }
        iVar6 = 2;
        local_8 = (int *)((int)this + 0x5b4);
        local_c = 0;
        iVar5 = 0x10;
        local_10 = 3;
        do {
          iVar3 = *local_8 - *(int *)((int)this + 0x5b0);
          if (iVar3 < 0) {
            iVar3 = 0;
            local_c = local_c + 1;
          }
          if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar5))) != iVar3) {
            *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar5))) = iVar3;
            *(undefined1 *)(uVar2 + 0x1d) = 0;
          }
          uVar10 = 1;
          uVar9 = 1;
          uVar8 = 0;
          uVar4 = F_00462880(*(undefined * PTR32 *)((int)this + 0x10),iVar3);
          in_EAX = (undefined *)F_00431250(this_00,iVar6,uVar4,uVar8,uVar9,uVar10);
          local_8 = local_8 + 1;
          iVar5 = iVar5 + 0xc;
          iVar6 = iVar6 + 2;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        if (local_c == 3) {
          *(undefined1 *)((int)this + 0x4ad) = 0;
        }
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: Client::UI2::Agent::AgentFreeCompany::vf5 */
uint F_0077e020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77e020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar2 = F_0077df00(this);
  if (((*(int *)(this + 8) != 0) && (this[0x20] == (undefined1)0x0)) &&
     (this[0x175] != (undefined1)0x0)) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3,*(undefined4 *)(this + 0x1c));
    if ((char)uVar2 != '\0') {
      (*(undefined4 *)(gen_frame + 0x58)) = 0;
      (*(undefined4 *)(gen_frame + 0x60)) = 0;
      (*(undefined4 *)(gen_frame + 0x68)) = 0;
      (*(undefined4 *)(gen_frame + 0x70)) = 0;
      F_0043be20(*(undefined * PTR32 *)(this + 0x10),this + 0x178);
      F_0042b630(((undefined1 *)(gen_frame + 0x4)));
      piVar3 = *(int * PTR32 *)(this + 0x10);
      iVar4 = *piVar3;
      uVar2 = ((code *)*(gen_code32 *)(iVar4 + 4))(piVar3,((undefined1 *)(gen_frame + 0x4)));
      ((code *)*(gen_code32 *)(iVar4 + 0xc))(piVar3,this + 0x178,uVar2);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x58)),4);
      (*(undefined4 *)(gen_frame + 0x5c)) = 3;
      bVar1 = F_00441290(*(undefined * PTR32 *)(this + 0x14),9);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x68)),4);
      (*(uint *)(gen_frame + 0x6c)) = (uint)bVar1;
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x70)),6);
      (*(uint *)(gen_frame + 0x74)) = uVar2;
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)(this + 0x1c),4,&(*(undefined4 *)(gen_frame + 0x58)));
      this[0x175] = (undefined1)0x0;
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      this_00 = &(*(uint *)(gen_frame + 0x78));
      iVar4 = 3;
      do {
        this_00 = this_00 + -2;
        uVar2 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentFreeCompany::vf13 */
unsigned int F_0077e160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77e160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 3) {
    this[0x20] = (undefined1)0x0;
    if (*(undefined * PTR32 *)(this + 0x14) != (undefined *)0x0) {
      F_00441ed0(*(undefined * PTR32 *)(this + 0x14),0);
    }
    this[0x21] = (undefined1)0x0;
    if (*(int *)(this + 0x14) != 0) {
      F_00436dc0(*(int *)(this + 0x14),0);
    }
    this[0x22] = (undefined1)0x0;
    if (*(int *)(this + 0x14) != 0) {
      F_00436de0(*(int *)(this + 0x14),0);
    }
    this[0x23] = (undefined1)0x3;
    if (*(int *)(this + 0x14) != 0) {
      F_00436dd0(*(int *)(this + 0x14),3);
    }
    this[0x24] = (undefined1)0x0;
    if (*(int *)(this + 0x14) != 0) {
      F_00436df0(*(int *)(this + 0x14),0);
    }
    F_0090d130(this + 0xc4);
  }
  return 0;
}

/* ref: FUN_0077e1e0 */
uint F_0077e1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x77e1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined * this_01;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x2a);
  uVar3 = 0;
  if (uVar2 != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x26)));
    uVar3 = 0;
    if (this_00 != (undefined *)0x0) {
      this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar3 = F_00434d60(param_5 & 0xff);
      if (**(uint * PTR32 *)(uVar2 + 0x20) != uVar3) {
        **(uint * PTR32 *)(uVar2 + 0x20) = uVar3;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      uVar6 = 0;
      uVar5 = 1;
      uVar4 = 0;
      uVar3 = F_00461bb0(this_01,0xa50,param_5 & 0xff);
      F_00431250(this_00,3,uVar3,uVar4,uVar5,uVar6);
      F_00431250(this_00,0,param_3,0,1,0);
      uVar6 = 0;
      uVar5 = 1;
      uVar4 = 0;
      uVar3 = F_00461190(this_01,0xa07,param_4);
      F_00431250(this_00,1,uVar3,uVar4,uVar5,uVar6);
      uVar6 = 0;
      uVar5 = 1;
      uVar4 = 0;
      uVar3 = F_00461bb0(this_01,0x17,param_6);
      F_00431250(this_00,2,uVar3,uVar4,uVar5,uVar6);
      uVar3 = F_0042e430((undefined *)((int)this + 0x68),param_4);
    }
  }
  return uVar3;
}

/* ref: FUN_0077e2e0 */
uint F_0077e2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x77e2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x60) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x60),0);
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyOrganizeSheet::vf13 */
unsigned int F_0077e310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77e310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfile::vf3 */
unsigned int F_0077e320(unsigned int gen_a0)
{
  GEN_ENTER(0x77e320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined4 *)(this + 0x10) = 0xe0000000;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfile::vf1 */
uint F_0077e850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x77e850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((((param_2 != (byte *)0x0) && (param_3 == 1)) && ((*param_2 & 0xf) != 0)) &&
     (0x7fffffff < *(uint *)(param_2 + 4))) {
    *(undefined4 *)(this + 8) = 0;
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    uVar1 = 1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0077e890 */
uint F_0077e890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77e890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((((char)uVar1 != '\0') && (*(int *)((int)this + 0xc) == 1)) &&
      ((uVar1 = *(uint *)((int)this + 0x10), uVar1 != 0xe0000000 ||
       (*(int *)((int)this + 0x18) != 0 || *(int *)((int)this + 0x1c) != 0)))) &&
     ((uVar1 == param_1[6] ||
      ((*(int *)((int)this + 0x18) == *param_1 &&
       (uVar1 = *(uint *)((int)this + 0x1c), uVar1 == param_1[1])))))) {
    *(int *)((int)this + 0x20) = *param_1;
    *(int *)((int)this + 0x24) = param_1[1];
    *(int *)((int)this + 0x28) = param_1[2];
    *(int *)((int)this + 0x2c) = param_1[3];
    *(int *)((int)this + 0x30) = param_1[4];
    *(int *)((int)this + 0x34) = param_1[5];
    *(int *)((int)this + 0x38) = param_1[6];
    *(int *)((int)this + 0x3c) = param_1[7];
    *(short *)((int)this + 0x40) = (short)param_1[9];
    *(undefined2 *)((int)this + 0x42) = *(undefined2 *)((int)param_1 + 0x26);
    *(char *)((int)this + 0x44) = (char)param_1[10];
    *(undefined1 *)((int)this + 0x45) = *(undefined1 *)((int)param_1 + 0x29);
    *(undefined1 *)((int)this + 0x46) = *(undefined1 *)((int)param_1 + 0x2a);
    *(undefined1 *)((int)this + 0x47) = *(undefined1 *)((int)param_1 + 0x23);
    F_0042e430((undefined *)((int)this + 0x48),(int)param_1 + 0x2b);
    F_0042e430((undefined *)((int)this + 0x9c),(int)param_1 + 0x41);
    F_0042e430((undefined *)((int)this + 0xf0),param_1 + 0x12);
    uVar1 = F_0042e430((undefined *)((int)this + 0x144),param_1 + 0x1a);
    *(undefined4 *)((int)this + 0xc) = 2;
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInvite::vf16 */
uint F_0077e9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x77e9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int iVar1;
  uint in_EAX = 0;
  int * piVar2;
  uint uVar3;
  
  if (((*(int *)(this + 8) != 0) || (*(int *)(this + 0x68) != 0)) &&
     (piVar2 = *(int * PTR32 *)(this + 0xc), piVar2 != (int *)0x0)) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
    if (in_EAX == 0) {
      iVar1 = *(int *)(this + 0x68);
      if (iVar1 != 0) {
        *(undefined4 *)(this + 0x68) = 0;
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
      }
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))
                        (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar3;
    }
  }
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInvite::vf2 */
unsigned int F_0077ea10(void)
{
  GEN_ENTER(0x77ea10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInvite::vf13 */
unsigned int F_0077ea20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77ea20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInputString::vf3 */
unsigned int F_0077ea30(unsigned int gen_a0)
{
  GEN_ENTER(0x77ea30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInputString::vf5 */
unsigned int F_0077ea60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77ea60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInputString::vf1 */
uint F_0077ea70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x77ea70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = 0;
  if (((param_4 == 0) && ((*param_2 & 0xf) != 0)) && (*(int *)(param_2 + 4) != 0)) {
    if (*(int *)(param_2 + 4) == 1) {
      if ((param_2[8] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 0xc);
      }
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
      this_00 = *(undefined * PTR32 *)(uVar1 + 0x108);
      if (this_00 != (undefined *)0x0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x4)),uVar3,REFG(undefined4, 0x108cc50));
        F_0077d890(this_00,((undefined1 *)(gen_frame + 0x4)));
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      }
    }
    uVar2 = 1;
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = 2;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)param_1;
}

/* ref: FUN_0077eb20 */
byte F_0077eb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77eb20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*param_1 & 0xf) == 0) || ((-2 < *(int *)(param_1 + 4) && (*(int *)(param_1 + 4) < 1)))) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  *(undefined4 *)((int)this + 0x1480) = 0;
  return 1;
}

/* ref: FUN_0077eb60 */
byte F_0077eb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77eb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if (((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) == 0)) {
    if (*(int *)((int)this + 0x1490) != 9999) {
      F_00a3d7c0(&REFG(undefined, 0x14a4230),*(int *)((int)this + 0x1490),(uint)*(ushort *)((int)this + 0x1494))
      ;
      uVar2 = F_00a3a150(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x1490),
                           (int)*(short *)((int)this + 0x1494));
      if (uVar2 != 0) {
        uVar2 = F_00a3a150(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x1490),
                             (int)*(short *)((int)this + 0x1494));
        if ((*(char *)(uVar2 + 6) != '\0') || (*(int *)(uVar2 + 8) != 0)) {
          iVar1 = *(int *)((int)this + 0x14a0);
          if (iVar1 == 9999) {
            if (*(int *)((int)this + 0x149c) == 0) {
              F_00a41970(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x1490),
                           (uint)*(ushort *)((int)this + 0x1494),1);
            }
            else {
              F_00a41970(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x1490),
                           (uint)*(ushort *)((int)this + 0x1494),*(int *)((int)this + 0x149c));
            }
          }
          else if (*(int *)((int)this + 0x149c) == 0) {
            F_00a47f70(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x1490),
                         (uint)*(ushort *)((int)this + 0x1494),iVar1,
                         (uint)*(ushort *)((int)this + 0x14a4),1);
          }
          else {
            F_00a493a0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x1490),
                         (uint)*(ushort *)((int)this + 0x1494),iVar1,
                         (uint)*(ushort *)((int)this + 0x14a4),*(int *)((int)this + 0x149c));
          }
          goto LAB_0077ecbf;
        }
      }
      uVar3 = 0x745;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
      F_0046a630(this_00,uVar3);
    }
  }
  else if (*(int *)((int)this + 0x1490) != 9999) {
    F_00a3d7c0(&REFG(undefined, 0x14a4230),*(int *)((int)this + 0x1490),(uint)*(ushort *)((int)this + 0x1494));
  }
LAB_0077ecbf: ;
  *(undefined4 *)((int)this + 0x1484) = 0;
  *(undefined4 *)((int)this + 0x1498) = 0;
  *(undefined4 *)((int)this + 0x149c) = 0;
  *(undefined4 *)((int)this + 0x1490) = 9999;
  *(undefined2 *)((int)this + 0x1494) = 0;
  *(undefined4 *)((int)this + 0x14a8) = 0;
  *(undefined4 *)((int)this + 0x14ac) = 0;
  *(undefined4 *)((int)this + 0x14a0) = 9999;
  *(undefined2 *)((int)this + 0x14a4) = 0;
  return 1;
}

/* ref: FUN_0077ed10 */
unsigned int F_0077ed10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77ed10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  bool bVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  undefined * this_01;
  undefined * this_02;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  
  bVar2 = false;
  if ((*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) &&
     ((bVar3 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),0x20), bVar3 != 0 ||
      (bVar3 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),0x1f), bVar3 != 0)))) {
    bVar2 = true;
  }
  this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x55f1);
  if ((this_00 == (undefined *)0x0) || (!bVar2)) {
    iVar9 = 0xcc;
    iVar6 = 0x3ec;
    iVar8 = 0x12;
    do {
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + -4 + iVar6))) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + -4 + iVar6))) = 0;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + iVar6))) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + iVar6))) = 0;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar6))) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar6))) = 0;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      if (*((char * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar9))) != "") {
        *((char * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar9))) = "";
        *(undefined1 *)(param_2 + 0x1d) = 1;
      }
      iVar6 = iVar6 + 0xc;
      iVar9 = iVar9 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    return 0;
  }
  local_c = 2;
  local_10 = 0xe0;
  local_20 = 0xcc;
  local_1c = 0x3ec;
  do {
    uVar10 = 0;
    local_18 = 0;
    local_14 = 0xffff;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    iVar6 = uVar4 + 0x29188 + local_10;
    uVar4 = F_0042a990(iVar6 + 4);
    iVar8 = *(int *)(iVar6 + 0x5c);
    bVar3 = *(byte *)(iVar6 + 100);
    uVar7 = 0;
    if (0 < *(int *)((int)this_00 + 0xc)) {
      do {
        this_01 = (undefined *)F_00a37da0(this_00,uVar7);
        if (this_01 != (undefined *)0x0) {
          if (*(char *)((int)this_01 + 6) == '\0') {
            uVar5 = *(uint *)((int)this_01 + 8);
            if ((*(byte *)((int)this_01 + 0x14) & 1) != 0) {
              uVar5 = uVar5 + 1000000;
            }
          }
          else {
            this_02 = (undefined *)F_00a3a860(this_01);
            uVar5 = F_0046e5e0(this_02);
          }
          if (uVar5 == local_c) {
            local_18 = F_00a3a8a0(this_01);
            uVar10 = F_00a37c50(this_01);
            uVar10 = (uint)(uVar10 != 0);
            local_14 = uVar7;
            break;
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < *(int *)((int)this_00 + 0xc));
    }
    if (*((int *)GEN_TOP((local_1c + -4 + *(int *)(param_1 + 0x20)))) != iVar8) {
      *((int *)GEN_TOP((local_1c + -4 + *(int *)(param_1 + 0x20)))) = iVar8;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    uVar10 = uVar10 << 0x10 | local_14;
    puVar1 = ((uint *)GEN_TOP((local_1c + 4 + *(int *)(param_1 + 0x20))));
    if (*puVar1 != uVar10) {
      *puVar1 = uVar10;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    uVar10 = local_18 << 0x10 | (uint)bVar3;
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + local_1c))) != uVar10) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + local_1c))) = uVar10;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (uVar4 != *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + local_20)))) {
      *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + local_20))) = uVar4;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    local_c = local_c + 1;
    local_10 = local_10 + 0x70;
    local_20 = local_20 + 4;
    local_1c = local_1c + 0xc;
    if (0x110 < local_20) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_0077ef40 */
uint F_0077ef40(unsigned int gen_a0)
{
  GEN_ENTER(0x77ef40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 != '\0') {
    if (*(undefined * PTR32 *)((int)this + 0x18) == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      bVar1 = F_00436c80(*(undefined * PTR32 *)((int)this + 0x18),0);
      uVar2 = (uint)bVar1;
    }
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
    iVar5 = 0xe;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 4;
    F_005a2710(((undefined1 *)(gen_frame + 0x20)),4);
    (*(uint *)(gen_frame + 0x24)) = uVar2;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 8),0xf,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x78));
    iVar5 = 0xe;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar2;
}

/* ref: FUN_0077eff0 */
uint F_0077eff0(unsigned int gen_a0)
{
  GEN_ENTER(0x77eff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar3 != '\0') {
    puVar4 = ((undefined4 *)(gen_frame + 0x0));
    iVar6 = 0xe;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    cVar1 = *(char *)((int)this + 0x14ec);
    ((undefined4 *)(gen_frame + 0x0))[1] = 0x10;
    F_005a2710(((undefined1 *)(gen_frame + 0x40)),4);
    (*(uint *)(gen_frame + 0x44)) = (uint)(cVar1 == '\0');
    uVar2 = *(undefined4 *)((int)this + 0x14f0);
    F_005a2710(((undefined1 *)(gen_frame + 0x48)),4);
    (*(undefined4 *)(gen_frame + 0x4c)) = uVar2;
    piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5,*(undefined4 *)((int)this + 8),0xf,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x78));
    iVar6 = 0xe;
    do {
      this_00 = this_00 + -2;
      uVar3 = F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar3;
}

/* ref: FUN_0077f0b0 */
uint F_0077f0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x77f0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte * pbVar5;
  uint local_c;
  
  uVar2 = 0;
  local_c = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    bVar3 = 0;
    pbVar5 = &REFG(undefined1, 0x10c0595);
    do {
      iVar4 = 0;
      bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),(uint)pbVar5[1]);
      if (bVar1 == 0) {
        bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),(uint)*pbVar5);
        if (bVar1 == 0) {
          bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),(uint)pbVar5[-1]);
          if (bVar1 != 0) {
            iVar4 = 0;
          }
        }
        else {
          iVar4 = 1;
        }
      }
      else {
        iVar4 = 2;
      }
      bVar1 = bVar3 & 0x1f;
      pbVar5 = pbVar5 + 3;
      bVar3 = bVar3 + 2;
      uVar2 = local_c | iVar4 << bVar1;
      local_c = uVar2;
    } while ((int)pbVar5 < 0x10c05a4);
  }
  return uVar2;
}

/* ref: FUN_0077f140 */
uint F_0077f140(unsigned int gen_a0)
{
  GEN_ENTER(0x77f140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),0x20);
    if (bVar1 != 0) {
      return 2;
    }
    bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),0x1f);
    if (bVar1 != 0) {
      return 1;
    }
    bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),0x1e);
    if (bVar1 != 0) {
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_0077f190 */
uint F_0077f190(unsigned int gen_a0)
{
  GEN_ENTER(0x77f190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),0x23);
    if (bVar1 != 0) {
      return 2;
    }
    bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),0x22);
    if (bVar1 != 0) {
      return 1;
    }
    bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),0x21);
    if (bVar1 != 0) {
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_0077f1e0 */
byte F_0077f1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77f1e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((byte)param_2 < 3) {
    *(byte *)(in_ecx + 0x1c) = (byte)param_2;
  }
  return (byte)param_2;
}

/* ref: FUN_0077f210 */
byte F_0077f210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77f210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((byte)param_2 < 5) {
    *(byte *)(in_ecx + 0x1d) = (byte)param_2;
  }
  return (byte)param_2;
}

/* ref: FUN_0077f240 */
unsigned int F_0077f240(unsigned int gen_a0)
{
  GEN_ENTER(0x77f240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x1480) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x1480),0);
    *(undefined4 *)((int)this + 0x1480) = 0;
  }
  return 0;
}

/* ref: FUN_0077f280 */
unsigned int F_0077f280(unsigned int gen_a0)
{
  GEN_ENTER(0x77f280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x1484) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x1484),0);
    *(undefined4 *)((int)this + 0x1484) = 0;
  }
  return 0;
}

/* ref: FUN_0077f2c0 */
unsigned int F_0077f2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x77f2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x1488) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x1488),0);
    *(undefined4 *)((int)this + 0x1488) = 0;
  }
  return 0;
}

/* ref: FUN_0077f300 */
unsigned int F_0077f300(unsigned int gen_a0)
{
  GEN_ENTER(0x77f300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x148c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x148c),0);
    *(undefined4 *)((int)this + 0x148c) = 0;
  }
  return 0;
}

/* ref: FUN_0077f340 */
uint F_0077f340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77f340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar2;
  undefined3 extraout_var_02 = 0;
  
  if ((char)param_1 == '\0') {
    if (*(char *)((int)this + 0x1c) == '\0') {
      bVar1 = F_00a3a5d0(&REFG(undefined, 0x14a4230),*(byte *)((int)this + 0x1d) + 20000);
      if (bVar1 != 0) {
        *(uint *)((int)this + 0x14f0) =
             *(uint *)((int)this + 0x14f0) | 1 << (*(byte *)((int)this + 0x1d) & 0x1f);
        return CONCAT31(extraout_var_01,bVar1);
      }
      uVar2 = 1 << (*(byte *)((int)this + 0x1d) & 0x1f);
      if ((*(uint *)((int)this + 0x14f0) & uVar2) != 0) goto LAB_0077f378;
    }
    else if (*(char *)((int)this + 0x1c) == '\x01') {
      bVar1 = F_00a3a5d0(&REFG(undefined, 0x14a4230),0x55f1);
      if (bVar1 != 0) {
        *(uint *)((int)this + 0x14f0) = *(uint *)((int)this + 0x14f0) | 0x20;
        return CONCAT31(extraout_var_00,bVar1);
      }
      if ((*(byte *)((int)this + 0x14f0) & 0x20) != 0) {
        return CONCAT31(extraout_var_00,1);
      }
    }
    bVar1 = F_00a37a90(&REFG(undefined, 0x14a4230));
    uVar2 = CONCAT31(extraout_var_02,bVar1);
  }
  else {
    bVar1 = F_00a3a5d0(&REFG(undefined, 0x14a4230),22000);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x14f0) = *(uint *)((int)this + 0x14f0) | 0x40;
      return uVar2;
    }
    if ((*(byte *)((int)this + 0x14f0) & 0x40) != 0) {
LAB_0077f378: ;
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2;
}

/* ref: FUN_0077f410 */
byte F_0077f410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77f410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  byte bVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x18);
  if (this_00 != (undefined *)0x0) {
    if (param_1 == 0x55f1) {
      bVar1 = F_00441290(this_00,0x20);
      return bVar1 != 0;
    }
    bVar1 = (char)param_1 - 0x20;
    if (bVar1 < 5) {
      bVar1 = F_00441290(this_00,(uint)(byte)(&REFG(undefined1, 0x10c0596))[(uint)bVar1 * 3]);
      return bVar1 != 0;
    }
  }
  return 0;
}

/* ref: FUN_0077f460 */
byte F_0077f460(unsigned int gen_a0)
{
  GEN_ENTER(0x77f460u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((param_1 < 20000) || (0x4e24 < param_1)) && (param_1 != 0x55f1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_0077f490 */
uint F_0077f490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77f490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(char *)((int)this + 0x1c) == '\0') {
    uVar1 = F_00a3a150(&REFG(undefined, 0x14a4230),*(byte *)((int)this + 0x1d) + 20000,param_1);
  }
  else if (*(char *)((int)this + 0x1c) == '\x01') {
    uVar1 = F_00a3a150(&REFG(undefined, 0x14a4230),0x55f1,param_1);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_0077f4e0 */
byte F_0077f4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77f4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) == 0)) && (*(int *)((int)this + 0x14) != 0)
     ) {
    F_00440ee0(*(undefined4 *)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  return 1;
}

/* ref: FUN_0077f520 */
byte F_0077f520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77f520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*param_1 & 0xf) == 0) || ((-2 < *(int *)(param_1 + 4) && (*(int *)(param_1 + 4) < 1)))) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  return 1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyExchange::vf5 */
uint F_0077f550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77f550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((char)uVar2 != '\0') && (uVar2 = *(int *)(this + 0x24) - 1, uVar2 == 0)) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3,*(undefined4 *)(this + 8));
    if ((char)uVar2 != '\0') {
      *(undefined4 *)(this + 0x24) = 0;
      if (*(int *)(this + 0x14) != 0) {
        bVar1 = F_00436880(*(int *)(this + 0x14));
        uVar2 = CONCAT31(extraout_var,bVar1);
        if (bVar1 != 3) {
          uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0077f5e0 */
uint F_0077f5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x77f5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x39);
  uVar4 = uVar3;
  if ((uVar3 != 0) && (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0)) {
    bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x14),0xc);
    uVar4 = (uint)(bVar1 != 0);
    if (**(uint * PTR32 *)(uVar3 + 0x20) != uVar4) {
      **(uint * PTR32 *)(uVar3 + 0x20) = uVar4;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
  }
  return uVar4;
}

/* ref: FUN_0077f630 */
unsigned int F_0077f630(unsigned int gen_a0)
{
  GEN_ENTER(0x77f630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x1c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x1c),0);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return 0;
}

/* ref: FUN_0077f660 */
unsigned int F_0077f660(unsigned int gen_a0)
{
  GEN_ENTER(0x77f660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x20) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x20),0);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfileEdit::vf1 */
uint F_0077f690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x77f690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  undefined1 uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar3 = 0;
  if ((*param_2 & 0xf) == 0) {
LAB_0077f6c2: ;
    if ((param_2[8] & 0xf) == 0) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(param_2 + 0xc);
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    this_00 = *(undefined * PTR32 *)(uVar2 + 0x108);
    if (this_00 != (undefined *)0x0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),REFG(undefined4, 0x108cc50));
      F_0077d9f0(this_00,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 < -2) goto LAB_0077f723;
    if (-1 < iVar1) {
      if (iVar1 != 0) goto LAB_0077f723;
      goto LAB_0077f6c2;
    }
  }
  uVar3 = 1;
  *(undefined4 *)(this + 8) = 0;
LAB_0077f723: ;
  *(undefined1 *)(param_1 + 1) = uVar3;
  *param_1 = 2;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfileEdit::vf3 */
unsigned int F_0077f740(unsigned int gen_a0)
{
  GEN_ENTER(0x77f740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_0077f770 */
uint F_0077f770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77f770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  return uVar1;
}

/* ref: FUN_0077f780 */
uint F_0077f780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77f780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar2 = F_0044e020(((undefined *)GEN_TOP((*(int *)((int)this + 0x24) + 0x490))),(int)this + 0xc);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar1 != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,iVar1,0);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x58) = 0;
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x4)),param_1,param_2,0);
    uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return uVar2;
}

/* ref: FUN_0077f800 */
unsigned int F_0077f800(unsigned int gen_a0)
{
  GEN_ENTER(0x77f800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x48) = 0;
  if (iVar1 != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: FUN_0077f830 */
unsigned int F_0077f830(unsigned int gen_a0)
{
  GEN_ENTER(0x77f830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x4c);
  *(undefined4 *)((int)this + 0x4c) = 0;
  if (iVar1 != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: FUN_0077f860 */
unsigned int F_0077f860(unsigned int gen_a0)
{
  GEN_ENTER(0x77f860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x50) = 0;
  if (iVar1 != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: FUN_0077f890 */
unsigned int F_0077f890(unsigned int gen_a0)
{
  GEN_ENTER(0x77f890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x54) = 0;
  if (iVar1 != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: FUN_0077f8c0 */
uint F_0077f8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x77f8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  if ((((0 < param_3) && (param_2 != 0)) && (param_4 != 0)) && (*(int *)((int)this + 0x54) != 0)) {
    F_0077f890(this);
    F_0077f780(this,param_2,param_3);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_0077f910 */
unsigned int F_0077f910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77f910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x34);
    uVar2 = *(undefined4 *)((int)this + 0x30);
    this_00 = (undefined *)(param_1 + param_2 * 8);
    F_005a2710(this_00,4);
    *(undefined4 *)((int)this_00 + 4) = uVar2;
    F_005a2710((undefined *)((int)this_00 + 8),4);
    *(undefined4 *)((int)this_00 + 0xc) = uVar1;
  }
  return 0;
}

/* ref: FUN_0077f960 */
uint F_0077f960(unsigned int gen_a0)
{
  GEN_ENTER(0x77f960u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint local_8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = 0;
  local_8 = 0;
  puVar2 = (uint *)(param_1 + 0x1034);
  do {
    if (0xff < local_8) break;
    F_005a2710(puVar2 + -1,4);
    *puVar2 = uVar3;
    uVar1 = F_004353d0(uVar3);
    F_005a2710(puVar2 + 1,4);
    local_8 = local_8 + 1;
    puVar2[2] = uVar1;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 4;
  } while (uVar3 < 0x40);
  F_005a2710((undefined *)(param_1 + 0x2030),4);
  *(uint *)(param_1 + 0x2034) = local_8;
  return local_8;
}

/* ref: FUN_0077f9e0 */
uint F_0077f9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x77f9e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint local_8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = 0;
  local_8 = 0;
  puVar2 = (uint *)(param_1 + 0x203c);
  do {
    if (0x3f < local_8) break;
    F_005a2710(puVar2 + -1,4);
    *puVar2 = uVar3;
    uVar1 = F_004353c0(uVar3);
    F_005a2710(puVar2 + 1,4);
    local_8 = local_8 + 1;
    puVar2[2] = uVar1;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 4;
  } while (uVar3 < 0x40);
  F_005a2710((undefined *)(param_1 + 0x2438),4);
  *(uint *)(param_1 + 0x243c) = local_8;
  return local_8;
}

/* ref: FUN_0077fa60 */
uint F_0077fa60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77fa60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte * pbVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = 0;
  pbVar1 = (byte *)F_00ab4250(param_2);
  if ((pbVar1 != (byte *)0x0) && (uVar4 = 0, *pbVar1 != 0)) {
    puVar3 = (undefined4 *)(param_1 + 0x2444);
    do {
      if (0xf < uVar2) break;
      F_005a2710(puVar3 + -1,4);
      *puVar3 = 0xffffff;
      F_005a2710(puVar3 + 1,4);
      puVar3[2] = uVar4;
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar4 < *pbVar1);
  }
  F_005a2710((undefined *)(param_1 + 0x2540),4);
  *(uint *)(param_1 + 0x2544) = uVar2;
  return uVar2;
}

/* ref: FUN_0077faf0 */
uint F_0077faf0(unsigned int gen_a0)
{
  GEN_ENTER(0x77faf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = 0;
  uVar4 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x254c);
  do {
    if (0xf < uVar2) break;
    puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c05d0))[uVar4];
    F_005a2710(puVar3 + -1,4);
    *puVar3 = puVar1;
    F_005a2710(puVar3 + 1,4);
    puVar3[2] = uVar4;
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 4;
    uVar2 = uVar2 + 1;
  } while (uVar4 < 0x10);
  F_005a2710((undefined *)(param_1 + 0x2648),4);
  *(uint *)(param_1 + 0x264c) = uVar2;
  return uVar2;
}

/* ref: FUN_0077fb70 */
unsigned int F_0077fb70(unsigned int gen_a0)
{
  GEN_ENTER(0x77fb70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * puVar1;
  undefined * this;
  uint uVar2;
  uint local_8;
  
  uVar2 = 0;
  if (param_1 != 0) {
    local_8 = 0;
    this = (undefined *)(param_1 + 8);
    do {
      if (0xf < local_8) break;
      puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c05d0))[uVar2];
      F_005a2710(this,4);
      *(undefined * PTR32 *)((int)this + 4) = puVar1;
      F_005a2710((undefined *)((int)this + -8),4);
      local_8 = local_8 + 1;
      *(uint *)((int)this + -4) = uVar2;
      uVar2 = uVar2 + 1;
      this = (undefined *)((int)this + 0x10);
    } while (uVar2 < 0x10);
    F_005a2710((undefined *)(param_1 + 0x100),4);
    *(uint *)(param_1 + 0x104) = local_8;
  }
  return 0;
}

/* ref: FUN_0077fbe0 */
unsigned int F_0077fbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x77fbe0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte * pbVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint local_8;
  
  if (param_1 != 0) {
    local_8 = 0;
    pbVar1 = (byte *)F_00ab4250(param_2);
    if ((pbVar1 != (byte *)0x0) && (uVar4 = 0, *pbVar1 != 0)) {
      puVar3 = (uint *)(param_1 + 4);
      do {
        if (0xf < local_8) break;
        F_005a2710(puVar3 + -1,4);
        *puVar3 = uVar4;
        uVar2 = F_004353e0(param_2,uVar4);
        F_005a2710(puVar3 + 1,4);
        local_8 = local_8 + 1;
        puVar3[2] = uVar2;
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 4;
      } while (uVar4 < *pbVar1);
    }
    F_005a2710((undefined *)(param_1 + 0x100),4);
    *(uint *)(param_1 + 0x104) = local_8;
  }
  return 0;
}

/* ref: FUN_0077fc80 */
byte F_0077fc80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77fc80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (*(int *)((int)this + 0x24) != 0) {
    bVar1 = F_00440e40(param_1,param_2);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0077fcb0 */
byte F_0077fcb0(unsigned int gen_a0)
{
  GEN_ENTER(0x77fcb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 < 3;
}

/* ref: FUN_0077fcf0 */
uint F_0077fcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77fcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = param_2;
  param_1[1] = param_3;
  return (uint)param_1;
}

/* ref: FUN_0077fd10 */
uint F_0077fd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x77fd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  *param_1 = param_3;
  *param_2 = param_4;
  return (uint)param_2;
}

/* ref: FUN_0077fd30 */
byte F_0077fd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x77fd30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*param_1 & 0xf) == 0) || ((-2 < *(int *)(param_1 + 4) && (*(int *)(param_1 + 4) < 1)))) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  return 1;
}

/* ref: FUN_0077fd60 */
uint F_0077fd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x77fd60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  undefined * this;
  int * piVar5;
  int iVar6;
  uint * puVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  uVar1 = ((code *)*(gen_code32 *)(*in_ecx + 0x10))(in_ecx);
  if ((char)uVar1 != '\0') {
    puVar2 = ((undefined4 *)(gen_frame + 0x68));
    iVar6 = 0x3b;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x68)),4);
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(uint *)(gen_frame + 0x0)) = 0;
    uVar1 = param_3 & 0xff;
    ((undefined4 *)(gen_frame + 0x68))[1] = 4;
    puVar7 = ((uint *)(gen_frame + 0xb4));
    piVar5 = in_ecx + uVar1 * 0x32 + 0x12;
    do {
      if ((uint)in_ecx[0xb] <= uVar1) break;
      if ((char)piVar5[2] != '\0') {
        F_00a3d750(&REFG(undefined, 0x14a4230),piVar5[-5],(uint)*(ushort *)(piVar5 + -4));
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
        *(char *)piVar5 = (char)in_ecx[0xc];
        in_ecx[0xc] = in_ecx[0xc] + 1;
        uVar3 = piVar5[1];
        F_005a2710(puVar7 + -3,3);
        puVar7[-2] = uVar3;
        uVar3 = F_0042a990(piVar5 + 3);
        F_005a2710(puVar7 + -1,8);
        *puVar7 = uVar3;
        uVar4 = F_0042a990(piVar5 + 0x18);
        F_005a2710(puVar7 + 1,8);
        uVar3 = piVar5[-1];
        puVar7[2] = uVar4;
        F_005a2710(puVar7 + 3,3);
        iVar6 = piVar5[-4];
        puVar7[4] = uVar3;
        F_005a2710(puVar7 + 5,3);
        puVar7[6] = (int)(short)iVar6;
        puVar7 = puVar7 + 10;
      }
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
      uVar1 = uVar1 + 1;
      piVar5 = piVar5 + 0x32;
    } while ((*(uint *)(gen_frame + 0x0)) < 10);
    F_005a2710(((undefined1 *)(gen_frame + 0xa0)),4);
    (*(int *)(gen_frame + 0xa4)) = (*(int *)(gen_frame + 0x8));
    F_005a2710(((undefined1 *)(gen_frame + 0x238)),4);
    (*(uint *)(gen_frame + 0x23c)) = (uint)((char)param_4 != '\0');
    iVar6 = in_ecx[10];
    uVar8 = REFG(undefined4, 0x108cc50);
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)in_ecx[1] + 0x18))((int *)in_ecx[1],0xd82)));
    uVar1 = F_00461bb0(this,iVar6,uVar8);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),uVar1,in_edi);
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
    F_005a2710(((undefined1 *)(gen_frame + 0x240)),6);
    (*(uint *)(gen_frame + 0x244)) = uVar1;
    piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)in_ecx[1] + 0x1c))((int *)in_ecx[1])));
    ((code *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5,in_ecx[2],0x3c,((undefined4 *)(gen_frame + 0x68)));
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    puVar7 = &(*(uint *)(gen_frame + 0x248));
    iVar6 = 0x3b;
    do {
      puVar7 = puVar7 + -2;
      uVar1 = F_005a2670(puVar7);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c));
  return uVar1;
}

/* ref: FUN_0077ffc0 */
uint F_0077ffc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x77ffc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 local_8;
  
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(char *)((int)this + 0x20) == '\0');
  if ((char)param_1 == '\0') {
    uVar1 = F_00a37920(param_2,param_3,local_8);
  }
  else {
    uVar1 = (uint)*(byte *)((int)this + 0x21);
    if (uVar1 == 0) {
      uVar1 = F_00a37950(local_8);
      return uVar1;
    }
    if (uVar1 == 1) {
      uVar1 = F_00a37970(6,local_8);
      return uVar1;
    }
    uVar1 = uVar1 - 2;
    if (uVar1 == 0) {
      uVar1 = F_00a37970(5,local_8);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00780044 */
uint F_00780044(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x780044u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int in_ebx = (int)gen_a1;
  uint uVar1;
  ushort * puVar2;
  int iVar3;
  
  *(int *)(in_ecx + 0x2c) = in_ebx;
  *(char *)(in_ecx + 0x4e54) = (char)in_ebx;
  *(int *)(in_ecx + 0x30) = in_ebx;
  *(int *)(in_ecx + 0x28) = in_ebx;
  puVar2 = (ushort *)(in_ecx + 0x38);
  iVar3 = in_ebx + 100;
  do {
    uVar1 = *(uint *)(puVar2 + -2);
    if (uVar1 != 9999) {
      uVar1 = F_00a3d7c0(&REFG(undefined, 0x14a4230),uVar1,(uint)*puVar2);
    }
    puVar2[-0xffffffff00000002] = 9999;
    puVar2[-0xffffffff00000001] = 0;
    *puVar2 = 0;
    *(int *)(puVar2 + 2) = in_ebx;
    *(int *)(puVar2 + 4) = in_ebx;
    *(int *)(puVar2 + 6) = in_ebx;
    *(undefined1 *)(puVar2 + 8) = 0xff;
    puVar2[10] = 0xffff;
    puVar2[0xb] = 0xffff;
    *(char *)(puVar2 + 0xc) = (char)in_ebx;
    puVar2 = puVar2 + 100;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_007800b0 */
byte F_007800b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7800b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined * this_00;
  char * pcVar9;
  undefined4 uVar10;
  uint local_b;
  byte local_6;
  byte local_5;
  
  local_6 = *(byte *)((int)this + 0x4e54);
  uVar6 = (uint)local_6;
  uVar3 = local_b >> 8;
  local_b = local_b & 0xffffff00;
  bVar2 = true;
  if (uVar6 < uVar6 + 10) {
    do {
      if (*(uint *)((int)this + 0x2c) <= uVar6) break;
      piVar1 = (int *)(uVar6 * 200 + 0x34 + (int)this);
      uVar6 = F_00a3a150(&REFG(undefined, 0x14a4230),*piVar1,(int)*(short *)(uVar6 * 200 + 0x38 + (int)this));
      if (((*piVar1 != 9999) && ((char)piVar1[7] == '\0')) && (uVar6 != 0)) {
        uVar7 = F_00ab24a0(piVar1[2]);
        if (uVar7 == 0) {
          bVar2 = false;
        }
        else {
          bVar4 = *(byte *)(uVar6 + 0x14) >> 1 & 1;
          if (*(char *)((int)this + 0x20) == '\0') {
            if ((bVar4 != 0) || (local_5 = 1, *(char *)(uVar7 + 0xbb) == '\0')) {
              local_5 = 0;
            }
            uVar6 = F_00a37840(piVar1[2]);
            bVar4 = local_5;
LAB_00780183: ;
            if (bVar4 != 0) {
              *(undefined1 *)(piVar1 + 7) = 1;
              uVar8 = F_00760600(piVar1[2],uVar7);
              piVar1[6] = uVar8;
              uVar7 = F_00ab6240(piVar1[2],1,uVar7);
              F_0042e430(piVar1 + 8,uVar7);
              if ((int)uVar6 < 0) {
                pcVar9 = "";
              }
              else {
                uVar10 = 0x12;
                uVar7 = uVar6;
                this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                            (*(int * PTR32 *)((int)this + 4))));
                pcVar9 = (char *)F_00461bb0(this_00,uVar10,uVar7);
              }
              F_0042e430(piVar1 + 0x1d,pcVar9);
              *(int *)((int)this + 0x28) =
                   *(int *)((int)this + 0x28) + (((int)uVar6 < 0) - 1 & uVar6);
              goto LAB_00780215;
            }
          }
          else if (*(char *)((int)this + 0x20) == '\x01') {
            uVar6 = 0xffffffff;
            goto LAB_00780183;
          }
          *piVar1 = 9999;
          *(undefined2 *)(piVar1 + 1) = 0;
          piVar1[2] = 0;
          piVar1[3] = 0;
          piVar1[4] = 0;
          *(undefined1 *)(piVar1 + 5) = 0xff;
          piVar1[6] = -1;
          *(undefined1 *)(piVar1 + 7) = 0;
        }
      }
LAB_00780215: ;
      local_6 = local_6 + 1;
      uVar6 = (uint)local_6;
    } while (uVar6 < *(byte *)((int)this + 0x4e54) + 10);
    if (!bVar2) goto LAB_00780263;
  }
  bVar4 = *(byte *)((int)this + 0x4e54);
  bVar5 = bVar4 + 10;
  *(byte *)((int)this + 0x4e54) = bVar5;
  if (*(uint *)((int)this + 0x2c) < (uint)bVar5) {
    local_b = CONCAT31((int3)uVar3,1);
  }
  F_0077fd60(this,this,(uint)bVar4,local_b);
LAB_00780263: ;
  return (byte)local_b;
}

/* ref: FUN_00780270 */
unsigned int F_00780270(unsigned int gen_a0)
{
  GEN_ENTER(0x780270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x18) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x18),0);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_007802a0 */
unsigned int F_007802a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7802a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x1c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x1c),0);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return 0;
}

/* ref: FUN_007802d0 */
uint F_007802d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7802d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((char)param_1 == '\0') {
    uVar2 = 0xd7f;
  }
  else {
    if ((char)param_1 != '\x01') {
      return 0x10be51d;
    }
    uVar2 = 0xdc1;
  }
  uVar4 = 0;
  uVar3 = 0;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043bd00(this_00,uVar2,uVar3,uVar4);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCharaMake::vf3 */
uint F_00780340(unsigned int gen_a0)
{
  GEN_ENTER(0x780340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)(this + 0xc);
  uVar3 = REFG(undefined4, 0x137104c);
  if (*(char *)(REFG(undefined4, 0x137104c) + 8) == '\0') {
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x6c))(piVar1);
      if ((char)uVar3 == '\0') {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0xc))))(*(int * PTR32 *)(this + 0xc));
        this[0x60] = (undefined1)0x1;
      }
    }
  }
  else if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xc);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0xc) = 0;
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::UI2::Agent::AgentCharaMake::vf4 */
byte F_007803c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7803c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0xc) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))
                      (*(int * PTR32 *)(this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                       ,param_8);
    return (byte)uVar1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMake::vf12 */
uint F_007803e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7803e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0xc) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x30))))
                      (*(int * PTR32 *)(this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                       ,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMake::vf2 */
uint F_00780410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x780410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0xc) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 8))))
                      (*(int * PTR32 *)(this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                       ,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentCharaMake::vf5 */
uint F_00780430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x780430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 * puVar1;
  int * piVar2;
  uint in_EAX = 0;
  uint uVar3;
  
  if (this[0x60] != (undefined1)0x0) {
    puVar1 = *(undefined4 * PTR32 *)(this + 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      in_EAX = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)(this + 0xc) = 0;
    }
    this[0x60] = (undefined1)0x0;
  }
  piVar2 = *(int * PTR32 *)(this + 0xc);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))
                      (piVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar3;
  }
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentCharaMake::vf1 */
uint F_00780470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x780470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (*(int *)(this + 0xc) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 4))))(*(int * PTR32 *)(this + 0xc),param_1,param_2,param_3,param_4)
    ;
    return (uint)param_1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00780510 */
uint F_00780510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x780510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x5c))))
                      (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00780530 */
uint F_00780530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x780530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x60))))
                      (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00780550 */
uint F_00780550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x780550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 100))))
                      (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00780570 */
uint F_00780570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x780570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (*(int *)((int)this + 0xc) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x70))))(*(int * PTR32 *)((int)this + 0xc),param_1);
    return (uint)param_1;
  }
  F_0042cc20(param_1,"",REFG(undefined4, 0x108cc50));
  return (uint)param_1;
}

/* ref: FUN_007805d0 */
ushort F_007805d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7805d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x78))))(*(int * PTR32 *)((int)this + 0xc));
    return (ushort)uVar1;
  }
  return 0;
}

/* ref: FUN_007805f0 */
uint F_007805f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7805f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x7c))))
                      (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00780610 */
byte F_00780610(unsigned int gen_a0)
{
  GEN_ENTER(0x780610u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xc) != 0) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x1fa8)));
  }
  return 0xff;
}

/* ref: FUN_00780630 */
uint F_00780630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x780630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x80))))
                      (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00780650 */
unsigned int F_00780650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x780650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = (undefined4 *)(in_ecx + 0x10);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
  return 0;
}

/* ref: FUN_007806a0 */
unsigned int F_007806a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7806a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = (undefined4 *)(in_ecx + 0x2f);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
  return 0;
}

/* ref: FUN_007806c0 */
uint F_007806c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7806c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2f;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf2 */
uint F_007806d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7806d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar1 = F_007601d0(this_00,uVar2);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf16 */
unsigned int F_007806f0(void)
{
  GEN_ENTER(0x7806f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf17 */
uint F_00780700(unsigned int gen_a0)
{
  GEN_ENTER(0x780700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  undefined3 extraout_var = 0;
  ulonglong uVar3;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x137104c);
  if (*(char *)(REFG(undefined4, 0x137104c) + 8) == '\0') {
    this_00 = *(undefined * PTR32 *)(REFG(undefined4, 0x137104c) + 0x25d8);
    F_00530190(this_00,"CharaMakeType",0,1);
    F_00530190(this_00,"Calendar",0,1);
    uVar3 = F_0069cb10(*(undefined * PTR32 *)(this + 0x1fa4),(uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 7))));
    bVar1 = F_0069e910(*(undefined4 *)(this + 0x1fa4),(int)(uVar3 >> 0x20),1,0,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf18 */
unsigned int F_00780760(void)
{
  GEN_ENTER(0x780760u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  if (*(char *)(REFG(int, 0x137104c) + 8) == '\0') {
    this = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8);
    F_00530190(this,"CharaMakeType",0,0);
    F_00530190(this,"Calendar",0,0);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf19 */
byte F_007807a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7807a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  if ((char)uVar2 != '\0') {
    return 0;
  }
  uVar2 = F_00ab3630(0);
  return uVar2 != 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf21 */
unsigned int F_007807d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7807d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 0x1fb4) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x1fb4),0);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf28 */
uint F_00780800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x780800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_0042cbc0(param_1,this + 0x1fdc);
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf29 */
uint F_00780820(unsigned int gen_a0)
{
  GEN_ENTER(0x780820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(int *)(this + 0xf5c) != 0) &&
     (uVar1 = F_00ab3660((uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 7)))), uVar1 != 0)) {
    return *(uint *)(uVar1 + 0x38);
  }
  return 0;
}

/* ref: FUN_00780850 */
unsigned int F_00780850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x780850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))
              (this,*(undefined4 *)((int)this + 0x1fac),*(undefined4 *)((int)this + 0xf5c),param_2);
    F_005a2710((undefined *)((int)this + 0xf7c),3);
    *(undefined4 *)((int)this + 0xf80) = param_1;
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x5c))
              (piVar1,*(undefined4 *)((int)this + 8),0x205,(undefined *)((int)this + 0xf7c));
  }
  return 0;
}

/* ref: FUN_007808b0 */
uint F_007808b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7808b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined3 uVar5;
  byte bVar6;
  bool bVar7;
  
  uVar4 = param_4;
  iVar1 = *param_3;
  *(uint *)(param_2 + 0x54 + param_1 * 4) = param_4;
  bVar2 = (byte)param_4;
  uVar5 = (undefined3)(param_4 >> 8);
  if (iVar1 < 0x6ce) {
    if (0x6cb < iVar1) {
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) & 0xe0 | bVar2;
      return uVar4;
    }
    switch((unsigned int)(uintptr_t)(iVar1)) {
    case 200: ;
      if (param_4 != 0) {
        *(undefined1 *)(param_2 + 3) = 0;
        return uVar4;
      }
      uVar4 = F_00b89230(param_2 + 0xc);
      return uVar4;
    case 0xc9: ;
      *(byte *)(param_2 + 0xf) = bVar2;
      return uVar4;
    case 0xca: ;
      *(byte *)(param_2 + 0x14) = bVar2;
      return uVar4;
    case 0xcb: ;
      *(byte *)(param_2 + 10) = bVar2;
      return uVar4;
    case 0xcc: ;
    case 0xcf: ;
    case 0xd2: ;
    case 0xd5: ;
    case 0xd8: ;
    case 0xdb: ;
    case 0xde: ;
    case 0xe1: ;
    case 0xe4: ;
    case 0xe7: ;
      *(byte *)(param_2 + 0x21) = bVar2;
      return uVar4;
    case 0xcd: ;
    case 0xd0: ;
    case 0xd3: ;
    case 0xd6: ;
    case 0xd9: ;
    case 0xdc: ;
    case 0xdf: ;
    case 0xe2: ;
    case 0xe5: ;
    case 0xe8: ;
      iVar1 = param_3[param_4 + 0x1f];
      *(char *)(param_2 + 0x22) = (char)iVar1;
      return CONCAT31(uVar5,(char)iVar1);
    default: ;
      goto switchD_007808f5_caseD_ce;
    case 0xd1: ;
    case 0xd7: ;
    case 0xdd: ;
    case 0xe0: ;
    case 0xe3: ;
    case 0xe6: ;
    case 0xe9: ;
      *(byte *)(param_2 + 0x23) = bVar2;
      return uVar4;
    case 0xea: ;
      *(char *)(param_2 + 0x12) = (char)param_3[param_4 + 0x1f];
      return uVar4;
    case 0xec: ;
      bVar7 = (param_4 & 0xff000000) != 0;
      *(byte *)(param_2 + 0x16) = bVar2;
      if (bVar7) {
        uVar4 = param_4 >> 0x10;
        *(char *)(param_2 + 0x17) = (char)(param_4 >> 0x10);
      }
      uVar4 = CONCAT31((int3)(uVar4 >> 8),*(undefined1 *)(param_2 + 0x13)) & 0xffffff7f;
      cVar3 = (char)uVar4 + bVar7 * -0x80;
      *(char *)(param_2 + 0x13) = cVar3;
      return CONCAT31((int3)(uVar4 >> 8),cVar3);
    case 0xee: ;
      *(char *)(param_2 + 0x11) = (char)param_3[param_4 + 0x1f];
      return uVar4;
    case 0xf0: ;
switchD_007808f5_caseD_f0: ;
      *(byte *)(param_2 + 0x19) = bVar2;
      return uVar4;
    case 0xf1: ;
      iVar1 = param_3[param_4 + 0x1f];
      *(char *)(param_2 + 0x1e) = (char)iVar1;
      return CONCAT31(uVar5,(char)iVar1);
    case 0xf2: ;
      *(char *)(param_2 + 0x1a) = (char)param_3[param_4 + 0x1f];
      return uVar4;
    case 0xf3: ;
      *(byte *)(param_2 + 0x1c) = (*(byte *)(param_2 + 0x1c) & 0x80) + (char)param_3[param_4 + 0x1f]
      ;
      return uVar4;
    case 0xf4: ;
      cVar3 = (char)param_3[param_4 + 0x1f] * -0x80 + (*(byte *)(param_2 + 0x1c) & 0x7f);
      *(char *)(param_2 + 0x1c) = cVar3;
      return CONCAT31(uVar5,cVar3);
    case 0xf5: ;
      *(byte *)(param_2 + 0x15) = bVar2;
      if ((param_4 & 0xff000000) != 0) {
        uVar4 = param_4 >> 0x10;
      }
      *(char *)(param_2 + 0x1b) = (char)uVar4;
      return uVar4;
    case 0xf6: ;
      iVar1 = param_3[param_4 + 0x1f];
      *(char *)(param_2 + 0x1d) = (char)iVar1;
      return CONCAT31(uVar5,(char)iVar1);
    case 0xf7: ;
      bVar6 = (*(byte *)(param_2 + 0x1f) & 0x80) + (char)param_3[param_4 + 0x1f];
      break;
    case 0xf8: ;
      bVar6 = *(byte *)(param_2 + 0x1f) & 0x7f;
      *(byte *)(param_2 + 0x20) = bVar2;
      if ((param_4 & 0xffffff00) != 0) {
        *(byte *)(param_2 + 0x1f) = bVar6 | 0x80;
        return uVar4;
      }
      break;
    case 0xf9: ;
      cVar3 = (char)(param_4 & 0xffffff80) + (char)param_3[(param_4 & 0x7f) + 0x1f];
      *(char *)(param_2 + 0x24) = cVar3;
      return CONCAT31((int3)((param_4 & 0xffffff80) >> 8),cVar3);
    case 0xfa: ;
      *(byte *)(param_2 + 0x25) = bVar2;
      return uVar4;
    }
    *(byte *)(param_2 + 0x1f) = bVar6;
    return uVar4;
  }
  switch((unsigned int)(uintptr_t)(iVar1)) {
  case 0x6ce: ;
  case 0x6cf: ;
    *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) & 0x9f | bVar2 << 5;
    return CONCAT31(uVar5,bVar2 << 5);
  case 0x6d0: ;
  case 0x6d1: ;
    goto switchD_007808f5_caseD_f0;
  }
switchD_007808f5_caseD_ce: ;
  return uVar4;
}

/* ref: FUN_00780b30 */
uint F_00780b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x780b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  F_005a2710((undefined *)((int)this + 0x1dc4),3);
  if ((char)param_1 == '\0') {
    *(undefined4 *)((int)this + 0x1dc8) = 0x92;
  }
  else {
    *(undefined4 *)((int)this + 0x1dc8) = 0x51;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))
                    (piVar1,*(undefined4 *)((int)this + 8),0x205,(int)this + 0xf7c);
  return uVar2;
}

/* ref: FUN_00780b90 */
uint F_00780b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x780b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  return (param_3 + (param_2 + param_1 * 2) * 2) * 0xc4 + 0xc + (int)this;
}

/* ref: FUN_00780bb0 */
uint F_00780bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x780bb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ab3630(param_3 + (param_2 + param_1 * 2) * 2);
  return uVar1;
}

/* ref: FUN_00780bd0 */
uint F_00780bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x780bd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * puVar1;
  
  if (-1 < param_1) {
    puVar1 = (uint *)F_00ab36c0(param_1);
    if (puVar1 != (uint *)0x0) {
      return (*puVar1 & 0xffffff) + (int)puVar1;
    }
  }
  return 0;
}

/* ref: FUN_00780c00 */
uint F_00780c00(unsigned int gen_a0)
{
  GEN_ENTER(0x780c00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (-1 < param_1) {
    uVar1 = F_00ab36c0(param_1);
    if (uVar1 != 0) {
      return (*(uint *)(uVar1 + 8) & 0xffffff) + (int)(uVar1 + 8);
    }
  }
  return 0;
}

/* ref: FUN_00780c30 */
uint F_00780c30(unsigned int gen_a0)
{
  GEN_ENTER(0x780c30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (-1 < param_1) {
    uVar1 = F_00ab36c0(param_1);
    if (uVar1 != 0) {
      return (*(uint *)(uVar1 + 4) & 0xffffff) + (int)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00780c60 */
byte F_00780c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x780c60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  uint * puVar2;
  
  iVar1 = 0;
  puVar2 = (uint *)(param_1 + 8);
  do {
    if (*puVar2 == (uint)(byte)param_2) goto LAB_00780c82;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x3c;
  } while (iVar1 < 0x1c);
  iVar1 = 0xff;
LAB_00780c82: ;
  return (byte)iVar1;
}

/* ref: FUN_00780c90 */
byte F_00780c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x780c90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  puVar2 = (uint *)(param_1 + 8);
  do {
    if ((*puVar2 == (uint)(byte)param_2) && (iVar3 = iVar3 + 1, iVar3 == 2)) goto LAB_00780cba;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x3c;
  } while (iVar1 < 0x1c);
  iVar1 = 0;
LAB_00780cba: ;
  return (byte)iVar1;
}

/* ref: FUN_00780cc0 */
byte F_00780cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x780cc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint * puVar2;
  
  iVar1 = 0;
  puVar2 = (uint *)((uint)(byte)param_2 * 0xf0 + 0x7c + param_1);
  do {
    if (*puVar2 == (uint)(byte)param_3) goto LAB_00780cef;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0x1c);
  iVar1 = 0;
LAB_00780cef: ;
  return (byte)iVar1;
}

/* ref: FUN_00780d00 */
byte F_00780d00(void)
{
  GEN_ENTER(0x780d00u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
  F_004142d0(&(*(undefined4 *)(gen_frame + 0x8)),*(undefined4 *)(uVar1 + 0x14));
  switch((unsigned int)(uintptr_t)((*(undefined4 *)(gen_frame + 0x8)))) {
  default: ;
    return 0;
  case 1: ;
    return 3;
  case 2: ;
    return 6;
  case 3: ;
    return 9;
  }
}

/* ref: FUN_00780d60 */
byte F_00780d60(unsigned int gen_a0)
{
  GEN_ENTER(0x780d60u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  do {
    if (*piVar2 == 0xcb) goto LAB_00780d7e;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x3c;
  } while (iVar1 < 0x1c);
  iVar1 = 0;
LAB_00780d7e: ;
  return (byte)iVar1;
}

/* ref: FUN_00780d90 */
uint F_00780d90(unsigned int gen_a0)
{
  GEN_ENTER(0x780d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_00760260(this_00,uVar2);
  return uVar1;
}

/* ref: FUN_00780db0 */
uint F_00780db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x780db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  ((uint *)(gen_frame + 0x0))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = param_1;
  if ((int)*(char *)((int)this + 0x1fb8) != param_1) {
    *(char *)((int)this + 0x1fb8) = (char)param_1;
    ((uint *)(gen_frame + 0x0))[0] = 0x1c3;
    ((uint *)(gen_frame + 0x0))[1] = 0x1c3;
    ((uint *)(gen_frame + 0x0))[2] = 0x1c4;
    ((uint *)(gen_frame + 0x0))[3] = 0x1c5;
    ((uint *)(gen_frame + 0x0))[4] = 0x1c6;
    ((uint *)(gen_frame + 0x0))[5] = 0x1c7;
    ((uint *)(gen_frame + 0x0))[6] = 0x1c8;
    ((uint *)(gen_frame + 0x0))[7] = 0x1c9;
    ((uint *)(gen_frame + 0x0))[8] = 0;
    ((uint *)(gen_frame + 0x0))[9] = 0;
    uVar1 = F_00ab36c0(((uint *)(gen_frame + 0x0))[(int)((uint)*(byte *)((int)this + 0x1fb9) + (char)param_1 * 2)]);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(uVar1 + 0x10);
    }
    *(short *)((int)this + 0x1fba) = (short)uVar1;
  }
  F_00c47745(((uint *)(gen_frame + 0x0))[10] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_00780e60 */
uint F_00780e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x780e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    F_006a6400(*(undefined * PTR32 *)((int)this + 0x1fa4),(uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x10))),
                 (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0xd))));
  }
  else {
    if (param_1 - 1U != 0) {
      return param_1 - 1U;
    }
    F_006a64c0(*(undefined * PTR32 *)((int)this + 0x1fa4),(uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x10))),
                 (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0xd))));
  }
  F_006916f0(*(undefined * PTR32 *)((int)this + 0x1fa4));
  uVar1 = F_00691710(*(undefined * PTR32 *)((int)this + 0x1fa4));
  return uVar1;
}

/* ref: FUN_00780ed0 */
uint F_00780ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x780ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    F_0069cb10(*(undefined * PTR32 *)((int)this + 0x1fa4),(uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 7))));
    F_00691710(*(undefined * PTR32 *)((int)this + 0x1fa4));
    uVar1 = F_00691730(*(undefined * PTR32 *)((int)this + 0x1fa4));
  }
  else {
    uVar1 = param_1 - 2;
    if (uVar1 == 0) {
      F_0069d250(*(undefined * PTR32 *)((int)this + 0x1fa4),
                   (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0x10))),
                   (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0xd))));
      F_006916f0(*(undefined * PTR32 *)((int)this + 0x1fa4));
      uVar1 = F_00691730(*(undefined * PTR32 *)((int)this + 0x1fa4));
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00780f50 */
uint F_00780f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x780f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined1 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_3 != 1) && (param_3 != 0xffffffff)) {
    puVar1 = (undefined1 *)((int)this + 0x11);
    iVar4 = 0x14;
    do {
      puVar1[-1] = (undefined1)param_1;
      *puVar1 = (undefined1)param_2;
      puVar1 = puVar1 + 0xc4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return (uint)puVar1;
  }
  uVar3 = param_3;
  if (*(int *)((int)this + 8) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))
              (this,*(undefined4 *)((int)this + 0x1fac),*(undefined4 *)((int)this + 0xf5c),
               0xffffffff);
    F_005a2710((undefined *)((int)this + 0xf7c),3);
    *(undefined4 *)((int)this + 0xf80) = 0xffffffff;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x5c))
                      (piVar2,*(undefined4 *)((int)this + 8),0x205,(undefined *)((int)this + 0xf7c));
  }
  return uVar3;
}

/* ref: FUN_00780fe0 */
uint F_00780fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x780fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_2 != 1) && (param_2 != 0xffffffff)) {
    puVar1 = (undefined1 *)((int)this + 0x12);
    iVar4 = 0x14;
    do {
      *puVar1 = (undefined1)param_1;
      puVar1 = puVar1 + 0xc4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return (uint)puVar1;
  }
  uVar3 = param_2;
  if (*(int *)((int)this + 8) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))
              (this,*(undefined4 *)((int)this + 0x1fac),*(undefined4 *)((int)this + 0xf5c),
               0xffffffff);
    F_005a2710((undefined *)((int)this + 0xf7c),3);
    *(undefined4 *)((int)this + 0xf80) = 0xffffffff;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x5c))
                      (piVar2,*(undefined4 *)((int)this + 8),0x205,(undefined *)((int)this + 0xf7c));
  }
  return uVar3;
}

/* ref: FUN_00781070 */
uint F_00781070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x781070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  undefined1 * puVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_2 != 1) && (param_2 != 0xffffffff)) {
    puVar2 = (undefined1 *)((int)this + 0x13);
    iVar5 = 0x14;
    do {
      *puVar2 = (undefined1)param_1;
      puVar2 = puVar2 + 0xc4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = *(int *)((int)this + 0xf5c);
    bVar1 = F_0069e910(*(undefined4 *)((int)this + 0x1fa4),(uint)*(byte *)(iVar5 + 0xd),
                         (uint)*(byte *)(iVar5 + 0x10),(uint)*(byte *)(iVar5 + 0xd),
                         (uint)*(byte *)(iVar5 + 7));
    return CONCAT31(extraout_var,bVar1);
  }
  uVar4 = param_2;
  if (*(int *)((int)this + 8) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))
              (this,*(undefined4 *)((int)this + 0x1fac),*(undefined4 *)((int)this + 0xf5c),
               0xffffffff);
    F_005a2710((undefined *)((int)this + 0xf7c),3);
    *(undefined4 *)((int)this + 0xf80) = 0xffffffff;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x5c))
                      (piVar3,*(undefined4 *)((int)this + 8),0x205,(undefined *)((int)this + 0xf7c));
  }
  return uVar4;
}

/* ref: FUN_00781120 */
unsigned int F_00781120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x781120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 * puVar1;
  int * piVar2;
  int iVar3;
  
  if ((param_2 == 1) || (param_2 == 0)) {
    puVar1 = (undefined1 *)((int)this + 0x15);
    iVar3 = 0x14;
    do {
      puVar1[-1] = (char)param_1;
      *puVar1 = (char)((uint)param_1 >> 8);
      puVar1 = puVar1 + 0xc4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (((param_2 == 1) || (param_2 == -1)) && (*(int *)((int)this + 8) != 0)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))
              (this,*(undefined4 *)((int)this + 0x1fac),*(undefined4 *)((int)this + 0xf5c),
               0xffffffff);
    F_005a2710((undefined *)((int)this + 0xf7c),3);
    *(undefined4 *)((int)this + 0xf80) = 0xffffffff;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))
              (piVar2,*(undefined4 *)((int)this + 8),0x205,(undefined *)((int)this + 0xf7c));
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf39 */
unsigned int F_007811c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7811c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 == 1) {
    F_0042e430(this + 0x1fdc,param_1);
    F_00780850(this,0xffffffff,0xffffffff);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf40 */
unsigned int F_007811f0(void)
{
  GEN_ENTER(0x7811f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf42 */
byte F_00781200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x781200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf43 */
unsigned int F_00781210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x781210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreate::vf17 */
uint F_00781220(unsigned int gen_a0)
{
  GEN_ENTER(0x781220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)(REFG(undefined4, 0x137104c) + 8) == '\0') {
    uVar1 = F_00780700((undefined *)this);
    return uVar1;
  }
  return REFG(undefined4, 0x137104c);
}

/* ref: Client::UI2::Agent::AgentCreate::vf18 */
unsigned int F_00781240(void)
{
  GEN_ENTER(0x781240u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  if (*(char *)(REFG(int, 0x137104c) + 8) == '\0') {
    this = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8);
    F_00530190(this,"CharaMakeType",0,0);
    F_00530190(this,"Calendar",0,0);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreate::vf19 */
byte F_00781280(unsigned int gen_a0)
{
  GEN_ENTER(0x781280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  if ((char)uVar2 != '\0') {
    return 0;
  }
  uVar2 = F_00ab3630(0);
  return uVar2 != 0;
}

/* ref: Client::UI2::Agent::AgentCreate::vf23 */
uint F_007812b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7812b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2180) = param_2;
  return param_2;
}

/* ref: Client::UI2::Agent::AgentCreate::vf24 */
unsigned int F_007812c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7812c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  
  if ((char)param_1 == '\0') {
    if (*(int *)(this + 8) != 0) {
      F_005a2710(this + 0x1dc4,3);
      *(undefined4 *)(this + 0x1dc8) = 0x21a;
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)(this + 8),0x205,this + 0xf7c);
    }
    iVar2 = param_2;
    if (param_2 < 0) {
      iVar2 = *(int *)(this + 0x1fac);
    }
    F_00780850(this,iVar2,0xffffffff);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreate::vf30 */
ushort F_00781330(unsigned int gen_a0)
{
  GEN_ENTER(0x781330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,2);
  return *((ushort *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x22 +
          ((uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 8))) +
          (uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 9))) * 0x28) * 4)));
}

/* ref: Client::UI2::Agent::AgentLicenseViewer::vf1 */
uint F_00781370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x781370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((((*param_2 & 0xf) != 0) && (-3 < *(int *)(param_2 + 4))) && (*(int *)(param_2 + 4) < 0)) {
    *(undefined4 *)(this + 8) = 0;
    uVar1 = 1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentLicenseViewer::vf3 */
unsigned int F_007813a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7813a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentLobby::vf2 */
unsigned int F_007813d0(void)
{
  GEN_ENTER(0x7813d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_007813e0 */
unsigned int F_007813e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7813e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  if (*(char *)(REFG(int, 0x137104c) + 8) == '\0') {
    this_00 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8);
    F_00530190(this_00,"Lobby",0,1);
    F_00530190(this_00,"CharaMakeName",0,1);
    *(undefined4 *)((int)this + 0x2e8) = 0;
  }
  return 0;
}

/* ref: FUN_00781480 */
byte F_00781480(unsigned int gen_a0)
{
  GEN_ENTER(0x781480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x14))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  if ((char)uVar2 == '\0') {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x14))))(*(int * PTR32 *)((int)this + 4))));
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,"Lobby")));
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,1);
      if (uVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007814d0 */
unsigned int F_007814d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7814d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
  iVar3 = 0;
  do {
    if (*((undefined * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar3))) != &REFG(undefined, 0x10be549)) {
      *((undefined * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar3))) = &REFG(undefined, 0x10be549);
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x1ec);
  return 0;
}

/* ref: FUN_00781520 */
uint F_00781520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x781520u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  undefined * this;
  uint * puVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,param_3)));
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
  puVar2 = (uint *)F_00cb0910(this,param_2);
  return *puVar2;
}

/* ref: FUN_00781550 */
uint F_00781550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x781550u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,param_3)));
  if (piVar1 == (int *)0x0) {
    return 0x10be54a;
  }
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
  uVar2 = F_00cb0950(this,param_2);
  return uVar2;
}

/* ref: FUN_00781590 */
uint F_00781590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x781590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),param_1)));
  if (piVar1 == (int *)0x0) {
    return 0x10be54a;
  }
  uVar3 = 3;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
  uVar2 = F_00cb0950(this_00,uVar3);
  return uVar2;
}

/* ref: FUN_007815d0 */
uint F_007815d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7815d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint * puVar2;
  
  if (0 < param_1) {
    uVar1 = F_00ab1c90(param_1);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(uVar1 + 0x20);
    }
    puVar2 = (uint *)F_00ab2750(uVar1);
    if (puVar2 != (uint *)0x0) {
      return (*puVar2 & 0xffffff) + (int)puVar2;
    }
  }
  return 0;
}

/* ref: FUN_00781620 */
byte F_00781620(unsigned int gen_a0)
{
  GEN_ENTER(0x781620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
  F_0045f5d0(pvVar2,uVar4);
  iVar3 = (int)*(char *)((int)this + 0x5fc);
  uVar4 = 0;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4))));
  bVar1 = F_00448810(pvVar2,iVar3,uVar4);
  return bVar1;
}

/* ref: FUN_00781660 */
uint F_00781660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x781660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar1 + 0x850) + 0x1c))))((int *)(uVar1 + 0x850),param_1,param_2);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x2c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,param_1,param_2);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,param_1,param_2);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,param_1,param_2);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x58))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,param_1,param_2);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x38))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,param_1,param_2);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2,param_1,param_2);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x7c))))(*(int * PTR32 *)((int)this + 4),0,0,0);
  *(undefined1 *)((int)this + 0x6c8) = 1;
  *(undefined1 *)((int)this + 0x6cb) = 0;
  return uVar1;
}

/* ref: FUN_00781730 */
uint F_00781730(unsigned int gen_a0)
{
  GEN_ENTER(0x781730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,2);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,1)));
  local_c = 0;
  iVar5 = 0x20;
  local_8 = 0x10;
  do {
    piVar2 = ((int *)GEN_TOP((local_8 + -8 + *(int *)(uVar3 + 0x20))));
    iVar6 = 0;
    if (*piVar2 != 0) {
      *piVar2 = 0;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((local_8 + *(int *)(uVar3 + 0x20)))) != 0) {
      *((undefined4 *)GEN_TOP((local_8 + *(int *)(uVar3 + 0x20)))) = 0;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((local_8 + 8 + *(int *)(uVar3 + 0x20)))) != 0) {
      *((undefined4 *)GEN_TOP((local_8 + 8 + *(int *)(uVar3 + 0x20)))) = 0;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x188))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x188))) = 0;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    do {
      if (*((int *)GEN_TOP((iVar5 + *(int *)(uVar3 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((iVar5 + *(int *)(uVar3 + 0x20)))) = 0;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      F_00431250(this_00,local_c + iVar6,"",0,1,0);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < 0x28);
    local_c = local_c + 0x28;
    local_8 = local_8 + 4;
  } while (local_8 < 0x18);
  uVar1 = **(uint * PTR32 *)(uVar3 + 0x20);
  uVar4 = uVar1 | 0x41;
  if (uVar1 != uVar4) {
    **(uint * PTR32 *)(uVar3 + 0x20) = uVar4;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  return uVar4;
}

/* ref: FUN_00781840 */
uint F_00781840(unsigned int gen_a0)
{
  GEN_ENTER(0x781840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,2);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,1)));
  iVar5 = 0;
  iVar6 = 0x160;
  do {
    F_00431250(this_00,iVar5 + 0x50,"",0,1,0);
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar6))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar6))) = 0;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    iVar6 = iVar6 + 4;
    iVar5 = iVar5 + 1;
  } while (iVar6 < 0x180);
  if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4))) = 0;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x188))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x188))) = 0;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x184))) != -1) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x184))) = 0xffffffff;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  uVar1 = **(uint * PTR32 *)(uVar3 + 0x20);
  uVar4 = uVar1 & 0xfffffffb;
  if (uVar1 != uVar4) {
    **(uint * PTR32 *)(uVar3 + 0x20) = uVar4;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  return uVar4;
}

/* ref: FUN_00781910 */
uint F_00781910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x781910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,2);
  if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 400))) != (uint)((char)param_1 != '\0')) {
    *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 400))) = (uint)((char)param_1 != '\0');
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  uVar1 = **(uint * PTR32 *)(uVar3 + 0x20);
  uVar4 = uVar1 | 8;
  if (uVar1 != uVar4) {
    **(uint * PTR32 *)(uVar3 + 0x20) = uVar4;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  return uVar3;
}

/* ref: FUN_007819a0 */
unsigned int F_007819a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7819a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
  if (uVar2 != 0) {
    iVar3 = 0x160;
    do {
      if (*((char * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar3))) != "") {
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      *((char * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar3))) = "";
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x1d8);
  }
  return 0;
}

/* ref: FUN_007819f0 */
uint F_007819f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7819f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int in_ecx;
  byte bVar1;
  
  in_ecx = *param_1;
  if ((in_ecx != 0) && (*(int *)(in_ecx + 8) != 0 || *(int *)(in_ecx + 0xc) != 0)) {
    bVar1 = F_00e3be50(in_ecx);
    if (bVar1 != 0) {
      if (*param_1 != 0) {
        bVar1 = F_00e3be70(*param_1);
        if (bVar1 != 0) {
          return 8;
        }
      }
      if ((*(byte *)(param_1 + 4) & 1) != 0) {
        return 0x80;
      }
      return (-(uint)(((uint)param_1[4] >> 2 & 1) != 0) & 0xff) + 1;
    }
  }
  return 2;
}

/* ref: FUN_00781a60 */
byte F_00781a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x781a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab2200(param_1);
  uVar2 = F_00ab24a0(*(undefined4 *)(uVar1 + 8 + param_2 * 4));
  if (uVar2 == 0) {
    return 0;
  }
  param_3[1] = *(undefined4 *)(uVar2 + 0x18);
  uVar2 = F_00ab24a0(*(undefined4 *)(uVar1 + 0x10 + param_2 * 4));
  if (uVar2 != 0) {
    param_3[2] = *(undefined4 *)(uVar2 + 0x18);
    uVar2 = F_00ab24a0(*(undefined4 *)(uVar1 + 0x18 + param_2 * 4));
    if (uVar2 != 0) {
      param_3[3] = *(undefined4 *)(uVar2 + 0x18);
      uVar1 = F_00ab24a0(*(undefined4 *)(uVar1 + 0x20 + param_2 * 4));
      if (uVar1 != 0) {
        param_3[4] = *(undefined4 *)(uVar1 + 0x18);
        *param_3 = 0;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00781b00 */
uint F_00781b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x781b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),4);
  (*(int *)(gen_frame + 0x4)) = (uint)((char)param_1 == '\0') * 2 + 2;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)((int)this + 8),5,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar3 = 4;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_00781b90 */
uint F_00781b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x781b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  uint * this_00;
  int iVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  if (*(char *)((int)this + 0x68f) == '\x02') {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),4);
    (*(int *)(gen_frame + 0x4)) = (-(uint)((char)param_1 != '\0') & 0xffffffe0) + 0x40;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),5,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar3 = 4;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_00781c20 */
unsigned int F_00781c20(unsigned int gen_a0)
{
  GEN_ENTER(0x781c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x684);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x684) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: FUN_00781c50 */
unsigned int F_00781c50(unsigned int gen_a0)
{
  GEN_ENTER(0x781c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x688) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x688),0);
    *(undefined4 *)((int)this + 0x688) = 0;
  }
  return 0;
}

/* ref: FUN_00781c90 */
unsigned int F_00781c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x781c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x6f4);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x6f4) = 0;
  }
  return 0;
}

/* ref: FUN_00781cc0 */
unsigned int F_00781cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x781cc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x6b5) = 1;
  return 0;
}

/* ref: FUN_00781cf0 */
uint F_00781cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x781cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,2);
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = F_00e3bdc0(param_2);
    if (3 < (int)uVar4) {
      if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x18 + param_1 * 4))) != -1) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x18 + param_1 * 4))) = 0xffffffff;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      uVar1 = **(uint * PTR32 *)(uVar3 + 0x20);
      uVar4 = uVar1 | 0x41;
      if (uVar1 != uVar4) {
        **(uint * PTR32 *)(uVar3 + 0x20) = uVar4;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00781d70 */
unsigned int F_00781d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x781d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf17 */
unsigned int F_00781d80(unsigned int gen_a0)
{
  GEN_ENTER(0x781d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)(REFG(int, 0x137104c) + 8) == '\0') {
    F_00780700((undefined *)this);
    F_00530190(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),"Lobby",0,1);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf18 */
unsigned int F_00781db0(void)
{
  GEN_ENTER(0x781db0u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  if (*(char *)(REFG(int, 0x137104c) + 8) == '\0') {
    this = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8);
    F_00530190(this,"CharaMakeType",0,0);
    F_00530190(this,"Calendar",0,0);
    F_00530190(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),"Lobby",0,0);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf19 */
byte F_00781e00(unsigned int gen_a0)
{
  GEN_ENTER(0x781e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  if ((char)uVar2 == '\0') {
    uVar2 = F_00ab3630(0);
    if (uVar2 != 0) {
      uVar2 = F_00ab36c0(1);
      if (uVar2 != 0) {
        uVar2 = F_00ab36c0(2);
        if (uVar2 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf42 */
byte F_00781e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x781e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ((code *)*(gen_code32 *)(*(int *)this + 100))(this,param_1);
  *(undefined4 *)(this + 0x2180) = 5;
  *(undefined4 *)(this + 0x1fb4) = 0;
  return 1;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf27 */
byte F_00781e80(unsigned int gen_a0)
{
  GEN_ENTER(0x781e80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x2180);
  if (((iVar1 != 2) && (iVar1 != 9)) && (iVar1 != 8)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00781eb0 */
unsigned int F_00781eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x781eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    puVar2 = (undefined4 *)F_00a5feb0(REFG(int * PTR32, 0x1379694));
    *(undefined4 *)((int)this + 0x2190) = *puVar2;
    *(undefined4 *)((int)this + 0x2194) = puVar2[1];
    *(undefined4 *)((int)this + 0x2198) = puVar2[2];
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,1);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf17 */
uint F_00781f60(unsigned int gen_a0)
{
  GEN_ENTER(0x781f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((this[0x1fa8] == (undefined1)0x2) && (*(char *)(REFG(undefined4, 0x137104c) + 8) != '\0')) {
    return REFG(undefined4, 0x137104c);
  }
  uVar1 = F_00780700((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf18 */
unsigned int F_00781f80(void)
{
  GEN_ENTER(0x781f80u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  if (*(char *)(REFG(int, 0x137104c) + 8) == '\0') {
    this = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8);
    F_00530190(this,"CharaMakeType",0,0);
    F_00530190(this,"Calendar",0,0);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf19 */
byte F_00781fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x781fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 4);
  if (this[0x1fa8] == (undefined1)0x2) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 == '\0') {
      uVar2 = F_00ab3630(0);
      if (uVar2 != 0) {
        uVar2 = F_00ab3690(0);
        if (uVar2 != 0) {
          return 1;
        }
      }
    }
  }
  else {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 == '\0') {
      uVar2 = F_00ab3630(0);
      return uVar2 != 0;
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf39 */
unsigned int F_00782030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x782030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 == 1) {
    F_0042e430(this + 0x1fdc,param_1);
    F_00780850(this,0xffffffff,0xffffffff);
  }
  return 0;
}

/* ref: FUN_00782060 */
unsigned int F_00782060(unsigned int gen_a0)
{
  GEN_ENTER(0x782060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    F_005a2710((undefined *)((int)this + 0x1dc4),3);
    *(undefined4 *)((int)this + 0x1dc8) = 0x21a;
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)((int)this + 8),0x205,(int)this + 0xf7c);
  }
  return 0;
}

/* ref: FUN_007820b0 */
uint F_007820b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7820b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 1 + param_1 * 2;
}

/* ref: FUN_007820c0 */
uint F_007820c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7820c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1 * -2 + 1;
}

/* ref: FUN_007820e0 */
uint F_007820e0(void)
{
  GEN_ENTER(0x7820e0u, 0u, 0u, 0u, 0u);
  F_00b70d10(&REFG(undefined4, 0x1375b90),2);
  if (REFG(int, 0x1375bbc) == -1) {
    REFG(undefined4, 0x148a444) = 0;
    return 0xffffffff;
  }
  REFG(undefined4, 0x148a444) = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
  return (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
}

/* ref: FUN_00782110 */
unsigned int F_00782110(unsigned int gen_a0)
{
  GEN_ENTER(0x782110u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  ushort uVar2;
  float * pfVar3;
  float * pfVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  if (REFG(int, 0x148a444) == 0) {
    return 0;
  }
  F_004315c0(((undefined1 *)(gen_frame + 0x0)),0x19,REFG(undefined4, 0x148a44c));
  fVar8 = F_0053b3e0();
  (*(float *)(gen_frame + 0x3c)) = fVar8;
  bVar5 = GEN_ISNAN((float10)fVar8) || GEN_ISNAN((float10)0);
  if (((bVar5 != (bVar5 || (float10)fVar8 == (float10)0)) ||
      (bVar1 = F_00a34870(param_1,0x11f), bVar1 == 0)) &&
     (bVar1 = F_00a34150(param_1,2,0,0), bVar1 == 0)) {
    return 0;
  }
  F_004315c0(((undefined1 *)(gen_frame + 0x10)),0x19,REFG(undefined4, 0x148a44c));
  (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1094884);
  (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) -
                    ((float10)GEN_TOD(gen_bits2f((&REFG(float, 0x1328290))[(uint)REFG(undefined1, 0x132814b) * 5]))))));
  pfVar3 = &(*(float *)(gen_frame + 0x30));
  if (!((double)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) -
                       ((float10)GEN_TOD(gen_bits2f((&REFG(float, 0x1328290))[(uint)REFG(undefined1, 0x132814b) * 5])))))) < REFG(double, 0x1094800))
     ) {
    pfVar3 = &(*(float *)(gen_frame + 0x38));
  }
  (*(float *)(gen_frame + 0x38)) = *pfVar3;
  fVar6 = F_00b6b6d0(REFG(int, 0x148a444));
  (*(float *)(gen_frame + 0x2c)) = (float)fVar6;
  bVar1 = F_00a34150(param_1,2,0,0);
  if (bVar1 == 0) {
    fVar6 = (float10)(*(float *)(gen_frame + 0x3c)) * (float10)*(double *)&REFG(undefined, 0x10928e8);
  }
  else {
    uVar2 = F_00a341c0(param_1);
    (*(float *)(gen_frame + 0x30)) = gen_bits2f((int)(short)uVar2);
    fVar6 = (float10)(int)(short)uVar2 * (float10)*(double *)&REFG(undefined, 0x109ce00);
  }
  (*(float *)(gen_frame + 0x3c)) = (float)fVar6;
  fVar7 = F_00b6ddd0(REFG(int, 0x148a444));
  (*(float *)(gen_frame + 0x30)) = (float)fVar7;
  pfVar3 = &(*(float *)(gen_frame + 0x3c));
  fVar6 = (float10)(*(float *)(gen_frame + 0x2c));
  (*(float *)(gen_frame + 0x2c)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) + fVar6);
  fVar7 = (float10)(float)fVar7;
  fVar8 = ((float)GEN_TOF((fVar7 + (float10)(float)((float10)(*(float *)(gen_frame + 0x3c)) + fVar6))));
  (*(float *)(gen_frame + 0x3c)) = fVar8;
  if (!((float10)(*(float *)(gen_frame + 0x38)) < (float10)fVar8)) {
    pfVar3 = &(*(float *)(gen_frame + 0x38));
  }
  pfVar4 = &(*(float *)(gen_frame + 0x3c));
  (*(float *)(gen_frame + 0x3c)) = *pfVar3;
  if (!((float10)*pfVar3 < (float10)(*(float *)(gen_frame + 0x34)))) {
    pfVar4 = &(*(float *)(gen_frame + 0x34));
  }
  (*(float *)(gen_frame + 0x3c)) = *pfVar4;
  fVar8 = (float)((float10)*pfVar4 - fVar7);
  (*(float *)(gen_frame + 0x2c)) = fVar8;
  F_00b6b6b0(REFG(int, 0x148a444),fVar8);
  return 0;
}

/* ref: FUN_007822b0 */
unsigned int F_007822b0(void)
{
  GEN_ENTER(0x7822b0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  if (((REFG(int, 0x148a444) != 0) && (REFG(undefined1, 0x132814b) < 4)) && (REFG(int * PTR32, 0x148a44c) != (int *)0x0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x68))))(REFG(int * PTR32, 0x148a44c));
    if ((char)uVar1 != '\0') {
      F_004315c0(((undefined1 *)(gen_frame + 0x10)),*(undefined4 *)((uint)REFG(undefined1, 0x132814b) * 0x14 + 0x1328288),REFG(int * PTR32, 0x148a44c));
      F_00b6b600(REFG(int, 0x148a444),(*(float *)(gen_frame + 0x14)));
      if (REFG(undefined1, 0x132814b) == 0) {
        F_004315c0(((undefined1 *)(gen_frame + 0x0)),REFG(undefined4, 0x13282c4),REFG(int * PTR32, 0x148a44c));
        F_00b6b620(REFG(int, 0x148a444),(*(float *)(gen_frame + 0x4)));
      }
    }
  }
  return 0;
}

/* ref: FUN_00782390 */
unsigned int F_00782390(void)
{
  GEN_ENTER(0x782390u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  if ((REFG(int, 0x148a444) != 0) && (REFG(int, 0x148a44c) != 0)) {
    F_004315c0(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)((uint)REFG(undefined1, 0x132814b) * 0x14 + 0x1328288),REFG(int, 0x148a44c));
    F_00b6b600(REFG(int, 0x148a444),(*(float *)(gen_frame + 0x4)));
    F_00b6b660(REFG(int, 0x148a444),(uint)(REFG(undefined1, 0x132814b) == 0));
    F_00b6b670(REFG(int, 0x148a444),1);
    F_007822b0();
  }
  return 0;
}

/* ref: FUN_00782420 */
uint F_00782420(unsigned int gen_a0)
{
  GEN_ENTER(0x782420u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  int * piVar2;
  undefined * this;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  ((uint *)(gen_frame + 0x8))[0x10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  ((uint *)(gen_frame + 0x8))[0] = 0x76d;
  ((uint *)(gen_frame + 0x8))[1] = 0x76e;
  ((uint *)(gen_frame + 0x8))[2] = 0x76f;
  ((uint *)(gen_frame + 0x8))[3] = 0x770;
  ((uint *)(gen_frame + 0x8))[4] = 0x777;
  ((uint *)(gen_frame + 0x8))[5] = 0x778;
  ((uint *)(gen_frame + 0x8))[6] = 0x779;
  ((uint *)(gen_frame + 0x8))[7] = 0x77a;
  ((uint *)(gen_frame + 0x8))[8] = 0x781;
  ((uint *)(gen_frame + 0x8))[9] = 0x782;
  ((uint *)(gen_frame + 0x8))[10] = 0x783;
  ((uint *)(gen_frame + 0x8))[0xb] = 0x784;
  ((uint *)(gen_frame + 0x8))[0xc] = 0x78b;
  ((uint *)(gen_frame + 0x8))[0xd] = 0x78c;
  ((uint *)(gen_frame + 0x8))[0xe] = 0x78d;
  ((uint *)(gen_frame + 0x8))[0xf] = 0x78e;
  iVar3 = 0;
  (*(float * PTR32 *)(gen_frame + 0x4)) = (float *)&REFG(float, 0x1328290);
  do {
    iVar4 = 0;
    do {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,((uint *)(gen_frame + 0x8))[(int)(iVar3 + iVar4)])));
      uVar5 = 1;
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
      piVar2 = (int *)F_00cb0910(this,uVar5);
      fVar1 = (float)((float10)*piVar2 / (float10)REFG(double, 0x10944b8));
      switch((unsigned int)(uintptr_t)(iVar4)) {
      case 0: ;
        (*(float * PTR32 *)(gen_frame + 0x4))[-1] = fVar1;
        break;
      case 1: ;
        *(*(float * PTR32 *)(gen_frame + 0x4)) = fVar1;
        break;
      case 2: ;
        (*(float * PTR32 *)(gen_frame + 0x4))[1] = fVar1;
        break;
      case 3: ;
        (*(float * PTR32 *)(gen_frame + 0x4))[2] = fVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    (*(float * PTR32 *)(gen_frame + 0x4)) = (*(float * PTR32 *)(gen_frame + 0x4)) + 5;
    iVar3 = iVar3 + 4;
  } while ((int)(*(float * PTR32 *)(gen_frame + 0x4)) < 0x13282e0);
  F_00c47745(((uint *)(gen_frame + 0x8))[0x10] ^ (uint)(uint)(gen_frame + 0x4c));
  return (uint)(*(float * PTR32 *)(gen_frame + 0x4));
}

/* ref: FUN_00782600 */
byte F_00782600(void)
{
  GEN_ENTER(0x782600u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  if (REFG(void * PTR32, 0x148a450) != (undefined *)0x0) {
    bVar1 = F_009bc4f0(REFG(void * PTR32, 0x148a450));
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00782620 */
uint F_00782620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x782620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  return param_3 + -2 + param_2 * 2;
}

/* ref: FUN_00782630 */
uint F_00782630(unsigned int gen_a0)
{
  GEN_ENTER(0x782630u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (-1 < param_1) {
    uVar1 = F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x13282e0))[param_1]);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00782660 */
unsigned int F_00782660(void)
{
  GEN_ENTER(0x782660u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  int * piVar3;
  int local_8;
  
  iVar1 = 0;
  piVar3 = &REFG(undefined4, 0x13282e0);
  do {
    local_8 = 2;
    do {
      iVar2 = 2;
      do {
        if (iVar1 < 0) {
          REFG(int * PTR32, 0x148a44c) = (int *)0x0;
        }
        else {
          REFG(int * PTR32, 0x148a44c) = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),*piVar3);
        }
        if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x30))))(REFG(int * PTR32, 0x148a44c));
        }
        if (-1 < *piVar3) {
          F_00ae0cd0(&REFG(undefined, 0x14c0920),*piVar3);
          *piVar3 = -1;
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  } while ((int)piVar3 < 0x1328330);
  REFG(int * PTR32, 0x148a44c) = (int *)iVar2;
  return 0;
}

