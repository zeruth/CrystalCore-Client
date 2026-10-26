#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00b09e00 */
uint F_00b09e00(unsigned int gen_a0)
{
  GEN_ENTER(0xb09e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  F_00b0fab0((undefined4 *)((int)this + 0x14),0x20);
  F_00b0fab0((undefined *)((int)this + 0x24),0x20);
  F_00c48350((undefined *)((int)this + 0x34),0,0x180);
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  F_0042b630((int)this + 0x1c4);
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined2 *)((int)this + 0x230) = 0;
  *(undefined1 *)((int)this + 0x232) = 0;
  F_00b100f0((undefined *)((int)this + 0x1b4),8);
  return (uint)this;
}

/* ref: FUN_00b09eb0 */
uint F_00b09eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb09eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  ulonglong uVar6;
  
  piVar5 = *(int * PTR32 *)((int)this + 0x220);
  if (piVar5 != *(int * PTR32 *)((int)this + 0x224)) {
    do {
      puVar3 = (undefined4 *)*piVar5;
      if (puVar3 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x224));
  }
  iVar1 = *(int *)((int)this + 0x220);
  if (iVar1 != *(int *)((int)this + 0x224)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0x224),0);
    *(int *)((int)this + 0x224) = iVar1;
  }
  iVar1 = *(int *)((int)this + 0x220);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x228) - iVar1 >> 2) * 4,0x321);
  }
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  F_0042c880((undefined *)((int)this + 0x1c4));
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x1b4);
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1b8);
    for (; puVar3 != puVar2; puVar3 = puVar3 + 0x12) {
      *puVar3 = 0xe0000000;
    }
    F_00429760(*(int *)((int)this + 0x1b4),
                 ((*(int *)((int)this + 0x1bc) - *(int *)((int)this + 0x1b4)) / 0x48) * 0x48,0x321);
  }
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  F_00b097f0((undefined *)((int)this + 0x10));
  iVar1 = *(int *)this;
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar6 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x321);
    uVar4 = (uint)uVar6;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00b0a000 */
uint F_00b0a000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0a000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)this; piVar1 != *(int * PTR32 *)((int)this + 4); piVar1 = piVar1 + 2) {
    if (*piVar1 == param_1) goto LAB_00b0a036;
  }
  ((int *)(gen_frame + 0x4))[0] = param_1;
  F_00b10060(this,((int *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 4) + -8)));
  if (piVar1 != (int *)0x0) {
LAB_00b0a036: ;
    *(undefined1 *)(piVar1 + 1) = (undefined1)param_2;
  }
  return (uint)piVar1;
}

/* ref: FUN_00b0a050 */
uint F_00b0a050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0a050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x220);
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x224)) {
    while (*(short *)((int)*puVar1 + 0x18) != (short)param_1) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *(undefined4 * PTR32 *)((int)this + 0x224)) {
        return (uint)puVar1;
      }
    }
    puVar1 = (undefined4 *)F_00b09cd0((undefined *)*puVar1,param_2);
  }
  return (uint)puVar1;
}

/* ref: FUN_00b0a090 */
unsigned int F_00b0a090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb0a090u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((*(uint *)&gen_args[2]) != 0) {
    do {
      if ((*(int *)&gen_args[3]) == 0xc3) {
        F_00b07950(*(undefined4 *)((*(int *)&gen_args[4]) + 0x1c),(*(int *)&gen_args[4]) + 0x20,
                     *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + uVar6 * 4) + 4))));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (*(uint *)&gen_args[2]));
  }
  for (piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      (piVar3 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) && (*piVar3 != (*(int *)&gen_args[4]))); piVar3 = piVar3 + 1) {
  }
  F_00c46e20(piVar3,piVar3 + 1,(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - (int)(piVar3 + 1) >> 2) * 4);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -4;
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  if ((&(*(int *)&gen_args[4]) < puVar1) && (puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))), puVar2 <= &(*(int *)&gen_args[4]))) {
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)))) {
      iVar4 = (int)puVar1 - (int)((int)(uintptr_t)puVar2) >> 2;
      if (iVar4 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar5 = iVar4 + 1;
      uVar6 = (int)*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) - (int)((int)(uintptr_t)puVar2) >> 2;
      if (uVar6 < uVar5) {
        if (-(uVar6 >> 1) - 1 < uVar6) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar6 + (uVar6 >> 1);
        }
        if (uVar6 < uVar5) {
          uVar6 = uVar5;
        }
        F_00b0fab0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),uVar6);
      }
    }
    if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != (undefined4 *)0x0) {
      **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) =
           *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) + ((int)&(*(int *)&gen_args[4]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)))) {
      iVar4 = (int)puVar1 - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) >> 2;
      if (iVar4 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar5 = iVar4 + 1;
      uVar6 = (int)*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) >> 2;
      if (uVar6 < uVar5) {
        if (-(uVar6 >> 1) - 1 < uVar6) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar6 + (uVar6 >> 1);
        }
        if (uVar6 < uVar5) {
          uVar6 = uVar5;
        }
        F_00b0fab0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),uVar6);
      }
    }
    if (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != (int *)0x0) {
      **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = (*(int *)&gen_args[4]);
    }
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 4;
  return 0;
}

/* ref: FUN_00b0a1e0 */
unsigned int F_00b0a1e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0a1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  int * piVar3;
  int iVar4;
  undefined4 * PTR32 * ppuVar5;
  undefined4 * PTR32 * ppuVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  
  piVar7 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar7 != *(int * PTR32 *)((int)this + 0x18)) {
    do {
      if (*piVar7 != 0) {
        piVar3 = *(int * PTR32 *)this;
        if (piVar3 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,*piVar7);
        }
        puVar9 = (undefined4 *)*piVar7;
        if (puVar9 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
          *piVar7 = 0;
        }
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != *(int * PTR32 *)((int)this + 0x18));
  }
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  iVar4 = *(int *)((int)this + 0x14);
  if (iVar4 != *(int *)((int)this + 0x18)) {
    F_00c46e20(iVar4,*(int *)((int)this + 0x18),0);
    *(int *)((int)this + 0x18) = iVar4;
  }
  (*(uint *)(gen_frame + 0x4)) = 0x24;
  do {
    if (*(int *)((*(uint *)(gen_frame + 0x4)) + 4 + (int)this) != 0) {
      if (*(int *)((*(uint *)(gen_frame + 0x4)) + (int)this) != -0x20000000) {
        piVar7 = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0),*(int *)((*(uint *)(gen_frame + 0x4)) + (int)this));
        if (piVar7 != (int *)0x0) {
          uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0x68))(piVar7);
          if ((char)uVar8 != '\0') {
            if (*(int *)this == 0) {
              uVar8 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
              *(uint *)this = uVar8;
            }
            puVar9 = (undefined4 *)F_00406b90(0x74,0,0);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              F_00cb4700(puVar9,1,0xc3);
              puVar9[5] = 1;
              puVar9[6] = this;
              *puVar9 = (*(undefined * PTR32 (*)[2])REFP(0x10ecd70));
              F_0042b630(puVar9 + 8);
            }
            ppuVar5 = *(undefined4 * PTR32 * PTR32 *)((int)this + 8);
            (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar9;
            if (&(*(undefined4 * PTR32 *)(gen_frame + 0x8)) < ppuVar5) {
              ppuVar6 = *(undefined4 * PTR32 * PTR32 *)((int)this + 4);
              if (&(*(undefined4 * PTR32 *)(gen_frame + 0x8)) < ppuVar6) goto LAB_00b0a34d;
              if (ppuVar5 == *(undefined4 * PTR32 * PTR32 *)((int)this + 0xc)) {
                F_00b0fd10((undefined *)((int)this + 4),1);
              }
              if (*(undefined4 * PTR32 *)((int)this + 8) != (undefined4 *)0x0) {
                **(undefined4 * PTR32 *)((int)this + 8) =
                     *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + ((int)&(*(undefined4 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppuVar6) >> 2) * 4)));
              }
            }
            else {
LAB_00b0a34d: ;
              if (ppuVar5 == *(undefined4 * PTR32 * PTR32 *)((int)this + 0xc)) {
                F_00b0fd10((undefined *)((int)this + 4),1);
              }
              if (*(undefined4 * PTR32 *)((int)this + 8) != (undefined4 *)0x0) {
                **(undefined4 * PTR32 *)((int)this + 8) = puVar9;
              }
            }
            *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
            puVar9[7] = *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + (int)this);
            uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7);
            F_0042e430(puVar9 + 8,uVar8);
            F_00cb4540(puVar9,0,*(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 4 + (int)this));
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x48))))(*(int * PTR32 *)this,puVar9);
            *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 4 + (int)this) = 0;
            goto LAB_00b0a3d0;
          }
        }
      }
      fVar2 = ((float)GEN_TOF(((float10)fVar1 + (float10)*(float *)((*(uint *)(gen_frame + 0x4)) + 8 + (int)this))));
      *(float *)((*(uint *)(gen_frame + 0x4)) + 8 + (int)this) = fVar2;
      if ((float10)*(float *)&REFG(undefined, 0x10ecd14) <= (float10)fVar2) {
        *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 4 + (int)this) = 0;
      }
    }
LAB_00b0a3d0: ;
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 0xc;
    if (0x1a3 < (*(uint *)(gen_frame + 0x4))) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b0a3f0 */
unsigned int F_00b0a3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0a3f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint * this_00;
  int iVar5;
  uint uVar6;
  uint local_8;
  
  this_00 = (*(uint * PTR32 *)&gen_args[1]);
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) >> 7;
  if (((uVar6 & 1) == 0) ||
     ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2f8))) != '\x02' && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2f8))) != '\b')))) {
    if (((uVar6 & 1) != 0) && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2f8))) == '\a')) {
      *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x684))) = *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
      iVar1 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x654;
      *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x686))) =
           *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x686))) ^
           ((char)(*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) >> 0xb) * '\x02' ^ *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x686)))) & 2;
      puVar3 = ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1]));
      if ((&(*(uint * PTR32 *)&gen_args[1]) < puVar3) && (puVar4 = ((undefined4 *)GEN_TOP(*(*(uint * PTR32 *)&gen_args[1]))), puVar4 <= &(*(uint * PTR32 *)&gen_args[1]))) {
        if (puVar3 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[2]))) {
          (*(uint * PTR32 *)&gen_args[1]) = (uint *)iVar1;
          F_00b0fe90(this_00,1);
        }
        if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
          *(undefined4 *)this_00[1] =
               *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar4) >> 2) * 4)));
          this_00[1] = this_00[1] + 4;
          return 0;
        }
      }
      else {
        if (puVar3 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[2]))) {
          (*(uint * PTR32 *)&gen_args[1]) = (uint *)iVar1;
          F_00b0fe90(this_00,1);
        }
        if ((int *)this_00[1] != (int *)0x0) {
          *(int *)this_00[1] = iVar1;
        }
      }
      this_00[1] = this_00[1] + 4;
    }
    return 0;
  }
  local_8 = 0;
  do {
    iVar5 = *((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10ecffc) + local_8))) * 0x9c;
    *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar5 + 0x54c))) = *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
    iVar1 = (int)(*(undefined * PTR32 *)&gen_args[0]) + iVar5 + 0x51c;
    pbVar2 = ((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar5 + 0x54e)));
    *pbVar2 = *pbVar2 ^ ((char)(*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) >> 0xb) * '\x02' ^
                        *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar5 + 0x54e)))) & 2;
    puVar3 = (undefined4 *)this_00[1];
    (*(uint * PTR32 *)&gen_args[1]) = (uint *)iVar1;
    if (&(*(uint * PTR32 *)&gen_args[1]) < puVar3) {
      puVar4 = (undefined4 *)*this_00;
      if (&(*(uint * PTR32 *)&gen_args[1]) < puVar4) goto LAB_00b0a49d;
      if (puVar3 == (undefined4 *)this_00[2]) {
        F_00b0fe90(this_00,1);
      }
      if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
        *(undefined4 *)this_00[1] =
             *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar4) >> 2) * 4)));
      }
    }
    else {
LAB_00b0a49d: ;
      if (puVar3 == (undefined4 *)this_00[2]) {
        F_00b0fe90(this_00,1);
      }
      if ((int *)this_00[1] != (int *)0x0) {
        *(int *)this_00[1] = iVar1;
      }
    }
    this_00[1] = this_00[1] + 4;
    local_8 = local_8 + 4;
    if (0xb < local_8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b0a580 */
unsigned int F_00b0a580(void)
{
  GEN_ENTER(0xb0a580u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  if (REFG(undefined4, 0x14c0cf8) == 0) {
    this = (undefined *)F_00406b90(0x234,0,0);
    if (this != (undefined *)0x0) {
      uVar1 = F_00b09e00(this);
      REFG(undefined4, 0x14c0cf8) = uVar1;
      return 0;
    }
    REFG(undefined4, 0x14c0cf8) = 0;
  }
  return 0;
}

/* ref: FUN_00b0a830 */
uint F_00b0a830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0a830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  (*(int *)(gen_frame + 0xc)) = 0;
  F_00b0fc60(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = *(undefined4 * PTR32 *)((int)this + 0x220);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != *(undefined4 * PTR32 *)((int)this + 0x224)) {
    do {
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      this_00 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (*(undefined4 * PTR32 *)(gen_frame + 0x8))) {
        F_00c46e20((*(undefined4 * PTR32 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)(gen_frame + 0x8)),0);
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar3;
      }
      F_00b0a3f0(this_00,&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (*(undefined4 * PTR32 *)(gen_frame + 0x8))) {
        do {
          puVar5 = (undefined4 *)*puVar3;
          if ((((puVar5 != (undefined4 *)0x0) && ((*(byte *)((int)puVar5 + 0x32) & 1) == 0)) &&
              (puVar5[2] != 0)) && (*(short *)(puVar5 + 8) == (short)param_1)) {
            puVar6 = (undefined4 *)param_2[1];
            if ((puVar5 < puVar6) && (puVar1 = (undefined4 *)*param_2, puVar1 <= puVar5)) {
              if (puVar6 == (undefined4 *)param_2[2]) {
                F_00969650(param_2,1);
              }
              puVar5 = ((undefined4 *)GEN_TOP(((((int)puVar5 - (int)puVar1) / 0x34) * 0x34 + *param_2)));
            }
            else if (puVar6 == (undefined4 *)param_2[2]) {
              F_00969650(param_2,1);
            }
            if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
              puVar6 = (undefined4 *)param_2[1];
              for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
            }
            param_2[1] = param_2[1] + 0x34;
          }
          puVar3 = puVar3 + 1;
        } while (puVar3 != (*(undefined4 * PTR32 *)(gen_frame + 0x8)));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 1;
    } while ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x224));
  }
  uVar2 = 0;
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0) {
    uVar7 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),((*(int *)(gen_frame + 0xc)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x4))) >> 2) * 4,0x321);
    uVar2 = (uint)uVar7;
  }
  return uVar2;
}

/* ref: FUN_00b0a980 */
uint F_00b0a980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0a980u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(int *)&gen_args[1]) != 0) {
    for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x220))); piVar1 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x224)));
        piVar1 = piVar1 + 1) {
      if (*(short *)(*piVar1 + 0x18) == *(short *)((*(int *)&gen_args[1]) + 0x18)) {
        return (uint)piVar1;
      }
    }
    uVar2 = F_00b10470(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x220))),&(*(int *)&gen_args[1]));
  }
  return uVar2;
}

/* ref: FUN_00b0a9d0 */
unsigned int F_00b0a9d0(void)
{
  GEN_ENTER(0xb0a9d0u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  pvVar1 = REFG(undefined4, 0x14c0cf8);
  if (REFG(undefined4, 0x14c0cf8) != (undefined *)0x0) {
    F_00b09eb0(REFG(undefined4, 0x14c0cf8));
    F_00406ad0(pvVar1);
    REFG(undefined4, 0x14c0cf8) = (undefined *)0x0;
  }
  return 0;
}

/* ref: FUN_00b0aa00 */
uint F_00b0aa00(unsigned int gen_a0)
{
  GEN_ENTER(0xb0aa00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  
  pvVar1 = (undefined *)F_00406b90(0x730,0,0);
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = (undefined *)F_00b09920(pvVar1,param_1);
  }
  uVar2 = F_00b09600(pvVar1);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  if (pvVar1 != (undefined *)0x0) {
    for (piVar3 = *(int * PTR32 *)(REFG(int, 0x14c0cf8) + 0x220); piVar3 != *(int * PTR32 *)(REFG(int, 0x14c0cf8) + 0x224);
        piVar3 = piVar3 + 1) {
      if (*(short *)(*piVar3 + 0x18) == *(short *)((int)pvVar1 + 0x18)) {
        return (uint)piVar3;
      }
    }
    uVar2 = F_00b10470((undefined *)(REFG(int, 0x14c0cf8) + 0x220),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return uVar2;
}

/* ref: FUN_00b0aa80 */
uint F_00b0aa80(void)
{
  GEN_ENTER(0xb0aa80u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  ulonglong uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_00b07100(0x81b,REFG(undefined4, 0x1379694),&(*(int * PTR32 *)(gen_frame + 0x4)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  uVar2 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  return (uint)uVar2;
}

/* ref: FUN_00b0ab00 */
uint F_00b0ab00(unsigned int gen_a0)
{
  GEN_ENTER(0xb0ab00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((*(uint *)&REFG(undefined, 0x14c0d20) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14c0d20) = *(uint *)&REFG(undefined, 0x14c0d20) | 1;
    REFG(undefined4, 0x14c0d08) = (undefined4 *)0x0;
    puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
    REFG(undefined4, 0x14c0d08) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    *REFG(int * PTR32, 0x14c0d08) = &REFG(undefined4, 0x14c0d08);
    *(undefined4 *)&REFG(undefined, 0x14c0d0c) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d10) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d14) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d18) = 0;
    F_00c47de6(((code *)REFP(0x107c7d0)));
  }
  iVar1 = REFG(int, 0x1379694);
  if ((REFG(int, 0x1379694) != 0) && (*(char *)(REFG(int, 0x1379694) + 0x18a) == '\x10')) {
    uVar3 = 0;
    do {
      if (param_1 == *(int *)((int)&REFG(undefined4, 0x10ecd3c) + uVar3)) {
        return uVar3;
      }
      uVar3 = uVar3 + 4;
    } while (uVar3 < 0xc);
  }
  F_006b8c00();
  uVar3 = F_006c5f80(param_1,iVar1,&REFG(undefined4, 0x14c0d08));
  return uVar3;
}

/* ref: FUN_00b0abc0 */
byte F_00b0abc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0abc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  
  for (piVar5 = *(int * PTR32 *)this; piVar5 != *(int * PTR32 *)((int)this + 4); piVar5 = piVar5 + 2) {
    if (*piVar5 == param_1[0x1d]) {
      if ((*(byte *)(piVar5 + 1) & 2) == 0) goto LAB_00b0ac82;
      piVar4 = *(int * PTR32 *)((int)this + 0x220);
      goto joined_r0x00b0ac43;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar2 != 7) {
    return 0;
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x220);
  if (puVar3 == *(undefined4 * PTR32 *)((int)this + 0x224)) {
    return 0;
  }
  while (this_00 = (undefined *)*puVar3, *(short *)((int)this_00 + 0x18) != (short)param_1[0x3a]) {
    puVar3 = puVar3 + 1;
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
  }
  if (*(char *)((int)this_00 + 800) != '\x02') {
    return 0;
  }
  bVar1 = F_00b0d9e0(this_00,REFG(undefined4, 0x1379694));
  if (bVar1 != 0) {
    return 1;
  }
  goto LAB_00b0acb3;
joined_r0x00b0ac43: ;
  if (piVar4 == *(int * PTR32 *)((int)this + 0x224)) goto LAB_00b0ac54;
  iVar6 = *piVar4;
  if (*(short *)(iVar6 + 0x18) == (short)param_1[0x3a]) goto LAB_00b0ac56;
  piVar4 = piVar4 + 1;
  goto joined_r0x00b0ac43;
LAB_00b0ac54: ;
  iVar6 = 0;
LAB_00b0ac56: ;
  if ((iVar6 == 0) ||
     (((REFG(undefined4, 0x1379694) != (undefined *)0x0 && (uVar2 = F_00a5f290(REFG(undefined4, 0x1379694)), uVar2 != 0)) &&
      (*(byte *)(uVar2 + 0x1689) <= *(byte *)(iVar6 + 0x322))))) {
LAB_00b0ac82: ;
    return *(byte *)(piVar5 + 1) & 1;
  }
LAB_00b0acb3: ;
  F_00b0ab00(0x81a);
  return 0;
}

/* ref: FUN_00b0acd0 */
unsigned int F_00b0acd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0acd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  undefined4 * puVar5;
  float * pfVar6;
  uint uVar7;
  undefined * pvVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  
  if ((*(uint *)&REFG(undefined, 0x14c0d3c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14c0d3c) = *(uint *)&REFG(undefined, 0x14c0d3c) | 1;
    REFG(undefined4, 0x14c0d24) = (undefined4 *)0x0;
    puVar5 = (undefined4 *)F_004296a0(8,0,0x2c4);
    REFG(undefined4, 0x14c0d24) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
    }
    *REFG(int * PTR32, 0x14c0d24) = &REFG(undefined4, 0x14c0d24);
    *(undefined4 *)&REFG(undefined, 0x14c0d28) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d2c) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d30) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0d34) = 0;
    F_00c47de6(((code *)REFP(0x107c800)));
  }
  if (((*(uint *)((int)this + 0x1c) >> 7 & 1) != 0) &&
     (((*(uint *)((int)this + 0x1c) >> 6 & 1) == 0 || (*(int *)((int)this + 0x340) != -0x20000000)))
     ) {
    F_00b07c70(this);
  }
  pvVar8 = (undefined *)((int)this + 0x4b8);
  (*(float *)(gen_frame + 0x38)) = 5.60519e-45;
  do {
    F_00b07ac0(pvVar8);
    pvVar8 = (undefined *)((int)pvVar8 + 0x9c);
    fVar1 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + -1);
    (*(float *)(gen_frame + 0x38)) = fVar1;
  } while (fVar1 != 0.0);
  if (*(undefined * PTR32 *)((int)REFG(undefined4, 0x14c0cf8) + 0x21c) == this) {
    F_00b08b80(this);
  }
  fVar1 = *(float *)((int)this + 0x2f4);
  (*(float *)(gen_frame + 0x30)) = fVar1;
  if (0.0 < fVar1) {
    *(float *)((int)this + 0x2f4) =
         ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
  }
  (*(float *)(gen_frame + 0x20)) = 0.0;
  (*(float *)(gen_frame + 0x24)) = 0.0;
  (*(float *)(gen_frame + 0x28)) = 0.0;
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  bVar4 = F_00b08260(this,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x0)));
  if ((bVar4 == 0) || (REFG(undefined4, 0x1379694) == (undefined *)0x0)) goto LAB_00b0b100;
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)*(double *)&REFG(undefined, 0x1090718));
  fVar9 = (float10)(float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)*(double *)&REFG(undefined, 0x1090718));
  (*(float *)(gen_frame + 0x38)) = (float)(fVar9 * fVar9);
  pfVar6 = (float *)F_00a5feb0(REFG(undefined4, 0x1379694));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar6 - (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)pfVar6[1] - (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)pfVar6[2] - (float10)(*(float *)(gen_frame + 0x28)));
  fVar9 = (float10)(float)((float10)*pfVar6 - (float10)(*(float *)(gen_frame + 0x20)));
  fVar10 = (float10)(float)((float10)pfVar6[2] - (float10)(*(float *)(gen_frame + 0x28)));
  fVar1 = (float)(fVar10 * fVar10 + fVar9 * fVar9);
  (*(float *)(gen_frame + 0x30)) = fVar1;
  pvVar8 = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0))))));
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar8;
  if ((float10)fVar1 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar8)))) {
    (*(char *)(gen_frame + 0x3f)) = '\x01';
    pvVar8 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)(float)((float10)pfVar6[1] - (float10)(*(float *)(gen_frame + 0x24)))))))));
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar8;
    if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar8))) < (float10)(*(float *)(gen_frame + 0x4)))) goto LAB_00b0ae93;
  }
  else {
LAB_00b0ae93: ;
    (*(char *)(gen_frame + 0x3f)) = '\0';
  }
  if ((*(byte *)((int)this + 0x1c) & 1) == 0) {
    if ((*(char *)(gen_frame + 0x3f)) != '\0') {
      F_00a51200(0x57,(uint)*(ushort *)((int)this + 0x18),0,0,0);
      *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 1;
      *(char *)((int)REFG(undefined4, 0x14c0cf8) + 0x232) = *(char *)((int)REFG(undefined4, 0x14c0cf8) + 0x232) + '\x01';
    }
  }
  else {
    if (((*(uint *)((int)this + 0x1c) >> 7 & 1) != 0) &&
       ((*(char *)((int)this + 0x2f8) == '\x02' || (*(char *)((int)this + 0x2f8) == '\b')))) {
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = REFG(undefined4, 0x1379694);
      if (REFG(undefined4, 0x1379694) == (undefined *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = F_00a5f290(REFG(undefined4, 0x1379694));
      }
      if (*(int *)((int)REFG(undefined4, 0x14c0cf8) + 0x21c) == 0) {
        F_00b09350(REFG(undefined4, 0x14c0cf8),this);
        *(undefined4 *)((int)this + 0x2ec) = 0;
        *(undefined4 *)((int)this + 0x2f0) = 0;
        if ((*(uint *)((int)this + 0x1c) >> 5 & 1) == 0) {
          F_00b07200((uint)*(byte *)((int)this + 0x323));
          *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x20;
        }
      }
      if (((uVar7 != 0) && (*(undefined * PTR32 *)((int)REFG(undefined4, 0x14c0cf8) + 0x21c) == this)) &&
         ((*(uint *)((int)this + 0x2ec) != (uint)*(byte *)(uVar7 + 0x1688) ||
          (*(uint *)((int)this + 0x2f0) != (uint)*(byte *)(uVar7 + 0x1689))))) {
        *(uint *)((int)this + 0x2ec) = (uint)*(byte *)(uVar7 + 0x1688);
        *(uint *)((int)this + 0x2f0) = (uint)*(byte *)(uVar7 + 0x1689);
        if (*(undefined * PTR32 *)((int)REFG(undefined4, 0x14c0cf8) + 0x21c) == this) {
          F_00a69750(&REFG(undefined4, 0x14b11f8));
        }
        bVar4 = F_00b073e0((*(undefined * PTR32 *)(gen_frame + 0x34)));
        pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x34));
        if (bVar4 != 0) {
          bVar4 = F_00b07420(this,(*(undefined * PTR32 *)(gen_frame + 0x34)));
          if (bVar4 == 0) {
            bVar4 = F_00b07460(this,pvVar8);
            if (bVar4 == 0) goto LAB_00b0afc0;
            uVar11 = 0x816;
          }
          else {
            uVar11 = 0x7ea;
          }
          F_00b0ab00(uVar11);
        }
      }
    }
LAB_00b0afc0: ;
    if ((*(char *)(gen_frame + 0x3f)) == '\0') {
      *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffffe;
      *(char *)((int)REFG(undefined4, 0x14c0cf8) + 0x232) = *(char *)((int)REFG(undefined4, 0x14c0cf8) + 0x232) + -1;
      if ((*(int *)((int)REFG(undefined4, 0x14c0cf8) + 0x21c) != 0) && (REFG(short, 0x14ab148) != 0)) {
        F_00a51200(0x58,(uint)*((ushort *)GEN_TOP((*(int *)((int)REFG(undefined4, 0x14c0cf8) + 0x21c) + 0x18))),0,0,0);
      }
      if (*(undefined * PTR32 *)((int)REFG(undefined4, 0x14c0cf8) + 0x21c) == this) {
        *(undefined4 *)((int)REFG(undefined4, 0x14c0cf8) + 0x21c) = 0;
        F_00a69780(&REFG(undefined4, 0x14b11f8));
      }
    }
  }
  if (((*(uint *)((int)this + 0x1c) >> 7 & 1) != 0) &&
     ((*(char *)((int)this + 0x2f8) == '\x02' || (*(char *)((int)this + 0x2f8) == '\b')))) {
    if (((float10)(*(float *)(gen_frame + 0x30)) < (float10)(*(float *)(gen_frame + 0x38))) &&
       ((*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x14))))),
       (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x14))))) < (float10)(*(float *)(gen_frame + 0x4)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((*(uint *)((int)this + 0x1c) >> 3 & 1) == 0) {
      if ((bVar3) &&
         (*(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 8,
         *(float *)((int)this + 0x2f4) <= 0.0)) {
        F_00a6e080(&REFG(undefined, 0x14a9e40),0x40,0,0);
        if ((*(byte *)((int)this + 0x1c) & 1) == 0) {
          F_00b0ab00(0x7d1);
          *(undefined4 *)((int)this + 0x2f4) = REFG(float, 0x10ec654);
        }
      }
    }
    else if (!bVar3) {
      *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffff7;
    }
  }
LAB_00b0b100: ;
  if ((((*(uint *)((int)this + 0x1c) >> 7 & 1) == 0) ||
      ((*(char *)((int)this + 0x2f8) != '\x02' && (*(char *)((int)this + 0x2f8) != '\b')))) &&
     (*(undefined * PTR32 *)((int)REFG(undefined4, 0x14c0cf8) + 0x21c) == this)) {
    *(undefined4 *)((int)REFG(undefined4, 0x14c0cf8) + 0x21c) = 0;
    F_00a69780(&REFG(undefined4, 0x14b11f8));
  }
  if (((*(uint *)((int)this + 0x1c) >> 7 & 1) != 0) &&
     ((*(char *)((int)this + 0x2f8) == '\x02' || (*(char *)((int)this + 0x2f8) == '\b')))) {
    iVar2 = *(int *)((int)this + 0x306);
    bVar3 = false;
    if ((iVar2 != 0) && (*(int *)((int)this + 0x31c) != iVar2)) {
      *(int *)((int)this + 0x31c) = iVar2;
      bVar3 = true;
    }
    if (*(int *)((int)this + 0x31c) != 0) {
      uVar7 = *(uint *)((int)this + 0x1c) >> 4;
      if (*(undefined * PTR32 *)((int)REFG(undefined4, 0x14c0cf8) + 0x21c) == this) {
        if (((uVar7 & 1) == 0) || (bVar3)) {
          if ((uVar7 & 1) != 0) {
            F_00ab6920();
          }
          *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x10;
          F_00ab6890(*(undefined4 *)((int)this + 0x31c));
        }
      }
      else if ((uVar7 & 1) != 0) {
        *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xffffffef;
        F_00ab6920();
        return 0;
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf5 */
byte F_00b0b1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0b1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00b0abc0(REFG(undefined4, 0x14c0cf8),param_1);
  return bVar1;
}

/* ref: FUN_00b0b1f0 */
uint F_00b0b1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0b1f0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  undefined4 * puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *puVar1 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = param_1;
    (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
    if (((*(uint * PTR32 *)(gen_frame + 0x20)) != (uint *)0x0) && (((*(char *)(gen_frame + 0x24)) != '\0' && ((*(char *)(gen_frame + 0x24)) == '\x01')))) {
      this = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
      if (*(int *)((int)this + 0x54) < 1) {
        F_0042c880(this);
        F_00406ad0(this);
      }
    }
    if (param_2 < 2) {
      uVar2 = 0x817;
    }
    else {
      (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x1c)) = 0;
      uVar2 = 0x818;
      (*(uint *)(gen_frame + 0x1c)) = param_2;
      (*(char *)(gen_frame + 0x24)) = '\0';
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
      F_004917c0(&(*(uint *)(gen_frame + 0x1c)));
    }
    F_00b07100(uVar2,REFG(undefined4, 0x1379694),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  }
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar3 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar3;
}

/* ref: FUN_00b0b310 */
uint F_00b0b310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0b310u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 * PTR32 * ppuVar9;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *puVar1 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x1c)) = param_1;
  (*(int * PTR32 *)(gen_frame + 0x20)) = &(*(int *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar5 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar5) {
    uVar5 = uVar5 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar5 * 4) == 0) {
    uVar2 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar5 * 4) = uVar2;
  }
  pvVar4 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar5 * 4);
  if (pvVar4 != (undefined *)0x0) {
    F_00492f50(pvVar4,&(*(int *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(int * PTR32 *)(gen_frame + 0x20)) != (int *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar4 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
    if (*(int *)((int)pvVar4 + 0x54) < 1) {
      F_0042c880(pvVar4);
      F_00406ad0(pvVar4);
    }
  }
  if (param_2 == 1) {
    uVar6 = 0x7da;
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x20)) = &(*(int *)(gen_frame + 0x1c));
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x1c)) = param_2;
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x1c)));
    if ((((*(int * PTR32 *)(gen_frame + 0x20)) != (int *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar4 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
      if (*(int *)((int)pvVar4 + 0x54) < 1) {
        F_0042c880(pvVar4);
        F_00406ad0(pvVar4);
      }
    }
    uVar6 = 0x7db;
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ppuVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  uVar8 = REFG(undefined4, 0x1379694);
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
  F_0046ab30(pvVar4,uVar6,uVar8,ppuVar9);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar7 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar7;
}

/* ref: FUN_00b0b4a0 */
uint F_00b0b4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0b4a0u, gen_a0, 0u, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  ushort * puVar7;
  int iVar8;
  bool bVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  int * PTR32 * ppiVar12;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  bVar9 = (param_1[1] & 1) == 1;
  uVar6 = 0;
  (*(undefined1 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0)) = bVar9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = ((undefined4 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)), 1, 3),bVar9)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(char *)(gen_frame + 0x2b)) = '\0';
  puVar7 = param_1 + 10;
  (*(int *)(gen_frame + 0x8)) = 4;
  do {
    if (*(int *)puVar7 != 0) {
      if (*(int *)(puVar7 + 2) == 0) {
        (*(char *)(gen_frame + 0x2b)) = '\x01';
      }
      else {
        uVar6 = *(undefined4 *)puVar7;
        (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(puVar7 + 2);
        F_00b0b1f0(uVar6,*(undefined4 *)(puVar7 + 2));
      }
    }
    puVar7 = puVar7 + 4;
    iVar8 = (*(int *)(gen_frame + 0x8)) + -1;
    (*(int *)(gen_frame + 0x8)) = iVar8;
  } while (iVar8 != 0);
  if ((*(char *)(gen_frame + 0x2b)) != '\0') {
    F_00b0aa80();
  }
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 == 0) {
    iVar8 = -1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar2 + 200))
            (piVar2,(uint)*param_1,(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(uint)*(byte *)((int)param_1 + 3),
             *(int *)(param_1 + 4) + *(int *)(param_1 + 2),*(undefined4 *)(param_1 + 6),iVar8,uVar6,
             (*(undefined4 *)(gen_frame + 0xc)));
  uVar3 = F_00a6e080(&REFG(undefined, 0x14a9e40),0x42,0,0);
  if (*(int *)(param_1 + 6) != 0) {
    (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x10)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x10));
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(param_1 + 6);
    (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
    (*(char *)(gen_frame + 0x34)) = '\0';
    if ((*(uint *)(gen_frame + 0x18)) <= (*(int *)(gen_frame + 0x20)) + 1U) {
      F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x10)),1);
    }
    uVar3 = (*(int *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x1c));
    if ((*(uint *)(gen_frame + 0x18)) <= uVar3) {
      uVar3 = uVar3 - (*(uint *)(gen_frame + 0x18));
    }
    if (*(int *)((*(int *)(gen_frame + 0x14)) + uVar3 * 4) == 0) {
      uVar4 = F_004296a0(0xc,0,0x2c4);
      *(uint *)((*(int *)(gen_frame + 0x14)) + uVar3 * 4) = uVar4;
    }
    puVar1 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x14)) + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 0xff;
      if (((*(char *)(gen_frame + 0x34)) != -1) && (puVar1 != &(*(undefined4 *)(gen_frame + 0x2c)))) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar1;
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
        if ((*(char *)(gen_frame + 0x34)) == '\0') {
          F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
        }
        else if ((*(char *)(gen_frame + 0x34)) == '\x01') {
          F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
        }
      }
    }
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x34)) != '\0')) && ((*(char *)(gen_frame + 0x34)) == '\x01')) {
      pvVar5 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x30));
      *(int *)((int)pvVar5 + 0x54) = *(int *)((int)pvVar5 + 0x54) + -1;
      if (*(int *)((int)pvVar5 + 0x54) < 1) {
        F_0042c880(pvVar5);
        F_00406ad0(pvVar5);
      }
    }
    ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x10));
    uVar11 = 0x4ea;
    uVar6 = REFG(undefined4, 0x1379694);
    pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046ab30(pvVar5,uVar11,uVar6,ppiVar12);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x10)));
    uVar10 = F_00429760((*(int * PTR32 *)(gen_frame + 0x10)),8,0x2c4);
    uVar3 = (uint)uVar10;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: FUN_00b0b6d0 */
uint F_00b0b6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0b6d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == 1) {
    uVar1 = F_00b0ab00(0x7e1);
  }
  else {
    uVar1 = param_1 - 2;
    if (uVar1 == 0) {
      uVar1 = F_00b0ab00(0x7e9);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b0b700 */
uint F_00b0b700(unsigned int gen_a0)
{
  GEN_ENTER(0xb0b700u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    uVar1 = F_00b0ab00(0x819);
  }
  return uVar1;
}

/* ref: FUN_00b0b720 */
uint F_00b0b720(unsigned int gen_a0)
{
  GEN_ENTER(0xb0b720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int in_ecx;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x220);
  if (puVar4 != *(undefined4 * PTR32 *)((int)this + 0x224)) {
    do {
      F_00b0acd0((undefined *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 * PTR32 *)((int)this + 0x224));
  }
  F_00b0a1e0((undefined *)((int)this + 0x10));
  uVar1 = *(ushort *)((int)this + 0x230);
  piVar2 = (int *)(uint)uVar1;
  if ((uVar1 != 0) &&
     (piVar2 = *(int * PTR32 *)((int)this + 0x220), piVar2 != *(int * PTR32 *)((int)this + 0x224))) {
    while (in_ecx = *piVar2, *(ushort *)(in_ecx + 0x18) != uVar1) {
      piVar2 = piVar2 + 1;
      if (piVar2 == *(int * PTR32 *)((int)this + 0x224)) {
        return (uint)piVar2;
      }
    }
    piVar2 = ((int *)GEN_TOP((*(uint *)(in_ecx + 0x1c) >> 7)));
    if (((uint)piVar2 & 1) != 0) {
      piVar2 = (int *)0x0;
      if (((*(byte *)(in_ecx + 0x2f8) == 2) ||
          (piVar2 = ((int *)GEN_TOP((*(byte *)(in_ecx + 0x2f8) - 8))), piVar2 == (int *)0x0)) &&
         (REFG(undefined4, 0x1379694) != (undefined *)0x0)) {
        uVar3 = F_00a5feb0(REFG(undefined4, 0x1379694));
        piVar2 = (int *)F_00b0c820(in_ecx,uVar3);
        if (((char)piVar2 == '\0') && (REFG(short, 0x14ab148) != 0)) {
          piVar2 = (int *)F_00b07170((uint)*(ushort *)((int)this + 0x230));
          *(undefined2 *)((int)this + 0x230) = 0;
        }
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00b0b7e0 */
uint F_00b0b7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0b7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  char cVar1;
  int * piVar2;
  uint * puVar3;
  uint uVar4;
  float * pfVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  ulonglong uVar9;
  float fVar10;
  int iVar11;
  undefined4 uVar12;
  undefined * pvVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0x18c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x190);
  for (piVar2 = *(int * PTR32 *)(REFG(int, 0x14c0cf8) + 0x220); piVar2 != *(int * PTR32 *)(REFG(int, 0x14c0cf8) + 0x224);
      piVar2 = piVar2 + 1) {
    if (*(short *)(*piVar2 + 0x18) == *(short *)((int)this + 4)) {
      (*(int *)(gen_frame + 0x24)) = *piVar2;
      goto LAB_00b0b841;
    }
  }
  (*(int *)(gen_frame + 0x24)) = 0;
LAB_00b0b841: ;
  if ((*(int *)((int)this + 0x10) != 0) &&
     (piVar2 = *(int * PTR32 *)((int)this + 8), piVar2 < *(int * PTR32 *)((int)this + 0xc))) {
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    puVar3 = ((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa0 + *(int *)((int)this + 8) * 4)));
    F_0042cc20(((char * PTR32 *)(gen_frame + 0xe8)),(*puVar3 & 0xffffff) + (int)puVar3,REFG(undefined4, 0x108cc50));
    (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)GEN_TOP((*(int *)((int)this + 0x10) + *(int *)((int)this + 8) * 0x14)));
    (*(char *)(gen_frame + 0x36)) = '\x01';
    ((int *)(gen_frame + 0x160))[2] = 0;
    (*(undefined1 *)(gen_frame + 0x170)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x16c)) = ((int *)(gen_frame + 0x160)) + 2;
    if ((*(int *)(gen_frame + 0x24)) == 0) {
      ((int *)(gen_frame + 0x160))[2] = 0;
    }
    else {
      ((int *)(gen_frame + 0x160))[2] = (uint)*(byte *)((*(int *)(gen_frame + 0x24)) + 0x321);
    }
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x8)),((int *)(gen_frame + 0x160)) + 2);
    F_004917c0(((int *)(gen_frame + 0x160)) + 2);
    if ((*(int *)((int)this + 8) + 1U < *(uint *)((int)this + 0xc)) &&
       ((cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 0x10) + (*(int *)((int)this + 8) * 5 + 5) * 4 + 0x11
                          ))), cVar1 == '\0' || (cVar1 == '\x04')))) {
      (*(char *)(gen_frame + 0x36)) = '\0';
    }
    if ((*((char * PTR32 *)(gen_frame + 0xe8))[0] != '\0') &&
       (piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x58))), piVar2 != (int *)0x0)) {
      puVar3 = (uint *)F_00ab3f40((*(int * PTR32 *)(gen_frame + 0x2c))[1]);
      ((uint *)(gen_frame + 0x184))[0] = *puVar3;
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xb8))(piVar2);
      if ((char)uVar4 != '\0') {
        (*(undefined * PTR32 *)(gen_frame + 0x20)) = REFG(undefined4, 0x1379694);
        pfVar5 = (float *)0x0;
        (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)0x0;
        (*(float *)(gen_frame + 0x4)) = 0.0;
        (*(char *)(gen_frame + 0x37)) = '\0';
        if ((char)(*(int * PTR32 *)(gen_frame + 0x2c))[4] == '\x01') {
          (*(char *)(gen_frame + 0x37)) = '\x01';
        }
        else if ((char)(*(int * PTR32 *)(gen_frame + 0x2c))[4] == '\x02') {
          ((int *)(gen_frame + 0x160))[0] = 0;
          ((int *)(gen_frame + 0x160))[1] = 0;
          (*(char *)(gen_frame + 0x37)) = '\x01';
          ((int *)(gen_frame + 0x160))[2] = GEN_FLT_TO(((int *)(gen_frame + 0x160))[2], REFG(float, 0x1087f04));
          uVar4 = F_00a5feb0(piVar2);
          uVar6 = F_00a5feb0((*(undefined * PTR32 *)(gen_frame + 0x20)));
          F_0046f4a0(((uint *)(gen_frame + 0x140)),uVar6,uVar4);
          fVar10 = F_00aae7a0(((uint *)(gen_frame + 0x140)),((int *)(gen_frame + 0x160)));
          (*(float *)(gen_frame + 0x30)) = gen_bits2f(piVar2[8]);
          fVar7 = ((float10)GEN_TOD(gen_bits2f(piVar2[8])));
          fVar8 = (float10)fVar10;
          if (fVar7 < fVar8) {
            (*(float *)(gen_frame + 0x30)) = (float)(fVar8 - fVar7);
            fVar10 = ((float)GEN_TOF((((float10)(float)(fVar8 - fVar7) * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                            (float10)*(double *)&REFG(undefined, 0x1080228))));
            (*(float *)(gen_frame + 0x30)) = fVar10;
            if (!((float10)*(float *)&REFG(undefined, 0x10ec5cc) < (float10)fVar10)) goto LAB_00b0ba89;
LAB_00b0bac5: ;
            fVar10 = F_00a5ffa0(piVar2,(*(undefined * PTR32 *)(gen_frame + 0x20)));
            (*(float *)(gen_frame + 0x4)) = fVar10;
            pfVar5 = &(*(float *)(gen_frame + 0x4));
          }
          else {
LAB_00b0ba89: ;
            pfVar5 = (*(float * PTR32 *)(gen_frame + 0x28));
            if (fVar8 < fVar7) {
              (*(float *)(gen_frame + 0x30)) = (float)(fVar7 - fVar8);
              fVar10 = ((float)GEN_TOF((((float10)(float)(fVar7 - fVar8) * (float10)*(double *)&REFG(undefined, 0x1080220))
                              / (float10)*(double *)&REFG(undefined, 0x1080228))));
              (*(float *)(gen_frame + 0x30)) = fVar10;
              if ((float10)*(float *)&REFG(undefined, 0x10ec5cc) < (float10)fVar10) goto LAB_00b0bac5;
            }
          }
        }
        iVar11 = *(*(int * PTR32 *)(gen_frame + 0x2c));
        if (iVar11 == 0) {
          if (pfVar5 != (float *)0x0) {
            uVar14 = 0;
            uVar12 = 1;
            iVar11 = 0x30f;
            uVar4 = F_00a5f290(piVar2);
            goto LAB_00b0bb3b;
          }
        }
        else {
          uVar14 = 0;
          uVar12 = 1;
          uVar4 = F_00a5f290(piVar2);
LAB_00b0bb3b: ;
          F_006d4be0(uVar4,iVar11,pfVar5,uVar12,uVar14);
        }
        if ((*(char *)(gen_frame + 0x37)) != '\0') {
          uVar12 = 1;
          pvVar13 = (*(undefined * PTR32 *)(gen_frame + 0x20));
          uVar4 = F_00a5f290(piVar2);
          F_006da750(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))),uVar4,pvVar13,uVar12);
        }
      }
      cVar1 = *(char *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x11);
      if ((cVar1 == '\0') || (cVar1 == '\x04')) {
        if (*((char * PTR32 *)(gen_frame + 0xe8))[0] != '\0') {
          F_00710cb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))),*(int *)((int)this + 0x14),
                       ((char * PTR32 *)(gen_frame + 0xe8)),&(*(int * PTR32 *)(gen_frame + 0x8)),piVar2,(uint)((*(char *)(gen_frame + 0x36)) == '\0'),(*(int * PTR32 *)(gen_frame + 0x2c))[3],0x3d,0,
                       ((uint *)(gen_frame + 0x184))[0],(*(int * PTR32 *)(gen_frame + 0x2c))[2],0,(uint)*(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x12),
                       (uint)((*(int * PTR32 *)(gen_frame + 0x2c))[1] == 1));
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
          goto LAB_00b0bc6f;
        }
      }
      else if ((cVar1 == '\x06') && (*((char * PTR32 *)(gen_frame + 0xe8))[0] != '\0')) {
        F_0042b630(((undefined1 *)(gen_frame + 0x90)));
        F_0042b630(((undefined1 *)(gen_frame + 0x38)));
        F_00ab0230(3,((undefined1 *)(gen_frame + 0x90)));
        F_00ab0230(4,((undefined1 *)(gen_frame + 0x38)));
        F_00710e70(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))),*(int *)((int)this + 0x14),((char * PTR32 *)(gen_frame + 0xe8)),
                     &(*(int * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x90)),((undefined1 *)(gen_frame + 0x38)),1,0,0);
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        F_0042c880(((undefined1 *)(gen_frame + 0x38)));
        F_0042c880(((undefined1 *)(gen_frame + 0x90)));
        goto LAB_00b0bc6f;
      }
    }
    uVar4 = ((uint *)(gen_frame + 0x184))[0];
    if (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x11) == '\x05') {
      if (((*(int *)(gen_frame + 0x24)) != 0) && (*(char *)((*(int *)(gen_frame + 0x24)) + 800) == '\x02')) {
        iVar11 = *(int *)((*(int *)(gen_frame + 0x24)) + 0x314);
        if (iVar11 != 0) {
          ((int *)(gen_frame + 0x160))[0] = iVar11;
          ((uint *)(gen_frame + 0x140))[0] = (uint)*(byte *)((*(int *)(gen_frame + 0x24)) + 0x2f9);
          (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x184))[0] + 0)) = 0;
          ((uint *)(gen_frame + 0x184))[0] = uVar4 & 0xffffff00;
        }
        uVar4 = (uint)(iVar11 != 0);
        F_00ba07c0(&REFG(undefined, 0x14b0f2c),((int *)(gen_frame + 0x160)),((uint *)(gen_frame + 0x140)),((uint *)(gen_frame + 0x184)),uVar4,
                     *(undefined4 *)((int)this + 0x14));
        if ((uVar4 != 0) && (uVar4 = F_00ba05d0(&REFG(undefined, 0x14b0f2c)), (char)uVar4 != '\0')) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x38)),&REFG(undefined, 0x10ec68b),REFG(undefined4, 0x108cc50));
          F_0042cc20(((undefined1 *)(gen_frame + 0x90)),&REFG(undefined, 0x10ec69b),REFG(undefined4, 0x108cc50));
          F_00ab0230(0x18f48,((undefined1 *)(gen_frame + 0x38)));
          F_00ab0230(0x18f49,((undefined1 *)(gen_frame + 0x90)));
          F_006b8c00();
          F_006c64b0(5,((undefined1 *)(gen_frame + 0x38)),((undefined1 *)(gen_frame + 0x90)),1);
          F_0042c880(((undefined1 *)(gen_frame + 0x90)));
          F_0042c880(((undefined1 *)(gen_frame + 0x38)));
LAB_00b0bc6f: ;
          F_0042c880(((char * PTR32 *)(gen_frame + 0xe8)));
          uVar4 = F_00493180(&(*(int * PTR32 *)(gen_frame + 0x8)));
          F_00c47745((*(uint *)(gen_frame + 0x18c)) ^ (uint)(uint)(gen_frame + 0x190));
          return CONCAT31((int3)(uVar4 >> 8),1);
        }
      }
      F_0042c880(((char * PTR32 *)(gen_frame + 0xe8)));
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
      uVar9 = F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
      piVar2 = (int *)uVar9;
      goto LAB_00b0bcd9;
    }
    F_0042c880(((char * PTR32 *)(gen_frame + 0xe8)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
    uVar9 = F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
    piVar2 = (int *)uVar9;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
LAB_00b0bcd9: ;
  F_00c47745((*(uint *)(gen_frame + 0x18c)) ^ (uint)(uint)(gen_frame + 0x190));
  return (uint)piVar2 & 0xffffff00;
}

/* ref: FUN_00b0be20 */
uint F_00b0be20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb0be20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  for (piVar1 = *(int * PTR32 *)(REFG(int, 0x14c0cf8) + 0x220); piVar1 != *(int * PTR32 *)(REFG(int, 0x14c0cf8) + 0x224);
      piVar1 = piVar1 + 1) {
    iVar3 = *piVar1;
    if (*(short *)(iVar3 + 0x18) == *(short *)((int)this + 4)) goto LAB_00b0be52;
  }
  iVar3 = 0;
LAB_00b0be52: ;
  if ((short)param_1 == 2) {
    if (((iVar3 == 0) || (*(char *)(iVar3 + 800) != '\x02')) || ((char)param_2 != '\0'))
    goto LAB_00b0be8e;
    *(undefined4 *)((int)this + 8) = 4;
    *(undefined4 *)((int)this + 0xc) = 6;
  }
  else if ((short)param_1 != 5) goto LAB_00b0be8e;
  uVar2 = F_00b0b7e0(this);
  if ((char)uVar2 != '\0') {
    return uVar2;
  }
LAB_00b0be8e: ;
  uVar2 = F_006f3a50(*(undefined * PTR32 *)((int)this + 0x14),0,0);
  return uVar2;
}

/* ref: FUN_00b0bea0 */
uint F_00b0bea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0bea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != -2) {
    if ((param_1 != -1) && (uVar1 = F_00b0b7e0(this), (char)uVar1 != '\0')) {
      return uVar1;
    }
    uVar1 = F_00b0b7e0(this);
    if ((char)uVar1 != '\0') {
      return uVar1;
    }
  }
  uVar1 = F_006f3a50(*(undefined * PTR32 *)((int)this + 0x14),0,0);
  return uVar1;
}

/* ref: FUN_00b0bee0 */
uint F_00b0bee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0bee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  if (param_1 == -2) {
    F_006f3a50(this_00,0,0);
    uVar1 = F_006f3a50(*(undefined * PTR32 *)((int)this + 0x14),0,0);
    return uVar1;
  }
  if (*(short *)((int)this_00 + 0x54) != 3) {
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 8) = 4;
      *(undefined4 *)((int)this + 0xc) = 6;
      uVar1 = F_006bcfc0(this_00,2,0,0);
      return uVar1;
    }
    *(undefined4 *)((int)this + 8) = 6;
    *(undefined4 *)((int)this + 0xc) = 8;
    uVar1 = F_006bcfc0(this_00,3,0,0);
    return uVar1;
  }
  if (param_1 == 0) {
    if (*(int *)this == 3) {
      if (*(int *)((int)this_00 + 0x58) == 0) {
        uVar2 = 0xe0000000;
      }
      else {
        uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0x58) + 0x74)));
      }
      F_00a51200(0x54,*(undefined4 *)((int)this + 4),uVar2,0,0);
    }
    *(undefined4 *)((int)this + 8) = 4;
    *(undefined4 *)((int)this + 0xc) = 6;
  }
  else {
    *(undefined4 *)((int)this + 8) = 6;
    *(undefined4 *)((int)this + 0xc) = 8;
  }
  uVar1 = F_00b0b7e0(this);
  if ((char)uVar1 == '\0') {
    uVar1 = F_006f3a50(*(undefined * PTR32 *)((int)this + 0x14),0,0);
  }
  return uVar1;
}

/* ref: FUN_00b0bfc0 */
uint F_00b0bfc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0bfc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined * this_01;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  ((uint *)(gen_frame + 0x0))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_1 == 0) {
    uVar5 = 0;
    this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d5);
    uVar3 = *(uint *)((int)this_00 + 0xc);
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        this_01 = (undefined *)F_00a37da0(this_00,uVar4);
        if (uVar5 < 10) {
          if (*(char *)((int)this_01 + 6) == '\0') {
            uVar2 = *(uint *)((int)this_01 + 8);
            if ((*(byte *)((int)this_01 + 0x14) & 1) != 0) {
              uVar2 = uVar2 + 1000000;
            }
          }
          else {
            pvVar1 = (undefined *)F_00a3a860(this_01);
            uVar2 = F_0046e5e0(pvVar1);
          }
          if (uVar2 != 0) {
            if (*(char *)((int)this_01 + 6) == '\0') {
              uVar2 = *(uint *)((int)this_01 + 8);
              if ((*(byte *)((int)this_01 + 0x14) & 1) != 0) {
                uVar2 = uVar2 + 1000000;
              }
            }
            else {
              pvVar1 = (undefined *)F_00a3a860(this_01);
              uVar2 = F_0046e5e0(pvVar1);
            }
            ((uint *)(gen_frame + 0x0))[(int)(uVar5)] = uVar2;
            uVar2 = F_00a3a8a0(this_01);
            ((uint *)(gen_frame + 0x0))[(int)(uVar5 + 1)] = uVar2;
            uVar5 = uVar5 + 2;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    F_00a36310(this_00);
    uVar3 = F_006bcfc0(*(undefined * PTR32 *)((int)this + 0x14),0,((uint *)(gen_frame + 0x0)),uVar5);
    F_00c47745(((uint *)(gen_frame + 0x0))[10] ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar3;
  }
  if (param_1 != -2) {
    *(undefined4 *)((int)this + 8) = 6;
    *(undefined4 *)((int)this + 0xc) = 8;
    uVar3 = F_00b0b7e0(this);
    if ((char)uVar3 != '\0') goto LAB_00b0c0cb;
  }
  uVar3 = F_006f3a50(*(undefined * PTR32 *)((int)this + 0x14),0,0);
LAB_00b0c0cb: ;
  F_00c47745(((uint *)(gen_frame + 0x0))[10] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_00b0c0e0 */
uint F_00b0c0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  uint uVar2;
  uint * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = F_006b8c00();
  if (*(int *)(uVar2 + 0x124) == 0) {
    uVar2 = 0;
  }
  else {
    puVar3 = (uint *)F_007512b0((undefined *)(uVar2 + 0x114));
    uVar2 = *puVar3;
  }
  if (uVar2 == *(uint *)((int)this + 0x14)) {
    *(undefined4 *)((int)this + 0x10) = param_1;
    *(undefined4 *)((int)this + 0xc) = 0;
    uVar2 = 0xa0;
    do {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      puVar4 = (undefined4 *)
               F_0042cc20(((undefined1 *)(gen_frame + 0x4)),(*((uint *)GEN_TOP((*(int *)((int)this + 0x10) + uVar2))) & 0xffffff) +
                                     *(int *)((int)this + 0x10) + uVar2,REFG(undefined4, 0x108cc50));
      cVar1 = *(char *)*puVar4;
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      if (cVar1 == '\0') break;
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0xc0);
    uVar2 = F_00b0b7e0(this);
    if ((char)uVar2 == '\0') {
      uVar2 = F_006f3a50(*(undefined * PTR32 *)((int)this + 0x14),0,0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00b0c1a0 */
uint F_00b0c1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0c1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  int * piVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar3 = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (param_2 != 0) {
    do {
      if (param_3 == 0xdd) {
        uVar2 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + (*(uint *)(gen_frame + 0x0)) * 4) + 4)));
        uVar3 = F_006b8c00();
        if (*(int *)(uVar3 + 0x124) == 0) {
          iVar6 = 0;
        }
        else {
          piVar7 = (int *)0x0;
          if ((*(int * PTR32 *)(uVar3 + 0x114) != (int *)0x0) &&
             (puVar5 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)(uVar3 + 0x114))), puVar5 != (undefined4 *)0x0)) {
            piVar7 = (int *)*puVar5;
          }
          uVar3 = (*(int *)(uVar3 + 0x124) + *(int *)(uVar3 + 0x120)) - 1;
          if (((piVar7 == (int *)0x0) || ((int *)*piVar7 == (int *)0x0)) ||
             (piVar7 = *(int * PTR32 *)*piVar7, piVar7 == (int *)0x0)) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar7;
          }
          uVar4 = uVar3 >> 2;
          if (*(uint *)(iVar6 + 8) <= uVar4) {
            uVar4 = uVar4 - *(uint *)(iVar6 + 8);
          }
          iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar4 * 4))) + (uVar3 & 3) * 4)));
        }
        if (iVar6 == *(int *)((int)this + 0x14)) {
          *(undefined4 *)((int)this + 0x10) = uVar2;
          *(undefined4 *)((int)this + 0xc) = 0;
          uVar3 = 0xa0;
          do {
            *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
            puVar5 = (undefined4 *)
                     F_0042cc20(((undefined1 *)(gen_frame + 0x4)),(*((uint *)GEN_TOP((*(int *)((int)this + 0x10) + uVar3))) & 0xffffff
                                           ) + *(int *)((int)this + 0x10) + uVar3,REFG(undefined4, 0x108cc50));
            cVar1 = *(char *)*puVar5;
            F_0042c880(((undefined1 *)(gen_frame + 0x4)));
            if (cVar1 == '\0') break;
            uVar3 = uVar3 + 4;
          } while (uVar3 < 0xc0);
          uVar3 = F_00b0b7e0(this);
          if ((char)uVar3 == '\0') {
            F_006f3a50(*(undefined * PTR32 *)((int)this + 0x14),0,0);
          }
        }
      }
      uVar3 = (*(uint *)(gen_frame + 0x0)) + 1;
      (*(uint *)(gen_frame + 0x0)) = uVar3;
    } while (uVar3 < param_2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_00b0c2d0 */
uint F_00b0c2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (*(int *)((int)this + 0x1c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x18);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x1c));
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x1c);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  *(uint *)((int)this + 0x18) = uVar2;
  puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar3,1,0xdd);
    puVar3[5] = 1;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10ecd58));
    puVar3[6] = this;
    puVar3[7] = ((code *)REFP(0xb0c1a0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x1c) = puVar3;
  F_00cb4540(puVar3,0,param_1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c));
  return uVar2;
}

/* ref: FUN_00b0c390 */
uint F_00b0c390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb0c390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  int iVar1;
  int * piVar2;
  uint uVar3;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  *(uint *)this = param_3 & 0xffff;
  *(undefined * PTR32 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 4) = *param_4;
  iVar1 = REFG(int, 0x1379694);
  switch((unsigned int)(uintptr_t)(param_3 & 0xffff)) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
    uVar3 = F_00b0c2d0(this,param_4[1]);
    return uVar3;
  case 4: ;
  case 6: ;
    if ((REFG(int, 0x1379694) != 0) && (param_2 != 0)) {
      uVar3 = F_006b8c00();
      this_00 = (undefined *)(uVar3 + 0x100);
      if ((*(int *)(uVar3 + 0x124) != 0) &&
         (piVar2 = (int *)F_007512b0((undefined *)(uVar3 + 0x114)), *piVar2 != 0)) {
        F_006da800(this_00,iVar1,1,0);
        F_006da800(this_00,iVar1,0,0);
      }
      F_006df030(this_00,in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,iVar1,param_2,0);
      uVar3 = F_006f1bb0(this_00,iVar1);
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      uVar3 = F_00b072d0(this);
      return uVar3;
    }
  }
  uVar3 = F_006f3a50(param_1,0,0);
  return uVar3;
}

/* ref: FUN_00b0c470 */
byte F_00b0c470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c470u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x5d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b0c480 */
uint F_00b0c480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0c480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006f3a50(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b0c490 */
uint F_00b0c490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x310) = param_2;
  return param_2;
}

/* ref: FUN_00b0c4a0 */
uint F_00b0c4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00b0c4d0 */
byte F_00b0c4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c4d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b0c4e0 */
uint F_00b0c4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c4e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_00b0c500 */
uint F_00b0c500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042e430((undefined *)((int)this + 0x20),param_1);
  return uVar1;
}

/* ref: FUN_00b0c530 */
ushort F_00b0c530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x30) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b0c540 */
byte F_00b0c540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 == '\0') * '\x02' ^ *(byte *)(in_ecx + 0x32)) & 2;
  *(byte *)(in_ecx + 0x32) = *(byte *)(in_ecx + 0x32) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00b0c560 */
uint F_00b0c560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0c560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  *(undefined4 *)((int)this + 8) = *param_3;
  *(undefined4 *)((int)this + 0xc) = param_3[1];
  *(undefined4 *)((int)this + 0x10) = param_3[2];
  F_00a6a6c0((undefined *)((int)this + 0x14));
  return (uint)this;
}

/* ref: FUN_00b0c5c0 */
uint F_00b0c5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c5c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  param_2[1] = *(undefined4 *)(in_ecx + 0xc);
  param_2[2] = *(undefined4 *)(in_ecx + 0x10);
  return (uint)param_2;
}

/* ref: FUN_00b0c630 */
uint F_00b0c630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c630u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x218) = param_2;
  return param_2;
}

/* ref: FUN_00b0c670 */
unsigned int F_00b0c670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(byte *)(in_ecx + 0x98) = *(byte *)(in_ecx + 0x98) | 1;
    return 0;
  }
  *(byte *)(in_ecx + 0x98) = *(byte *)(in_ecx + 0x98) & 0xfe;
  return 0;
}

/* ref: FUN_00b0c690 */
byte F_00b0c690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 != '\0') * '\x02' ^ *(byte *)(in_ecx + 0x96)) & 2;
  *(byte *)(in_ecx + 0x96) = *(byte *)(in_ecx + 0x96) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00b0c710 */
byte F_00b0c710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x2fa + in_ecx);
}

/* ref: FUN_00b0c730 */
byte F_00b0c730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 3) {
    return *(byte *)(param_2 + 0x300 + in_ecx);
  }
  return 0;
}

/* ref: FUN_00b0c750 */
byte F_00b0c750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c750u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 3) {
    return *(byte *)(param_2 + 0x303 + in_ecx);
  }
  return 0;
}

/* ref: FUN_00b0c780 */
uint F_00b0c780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x330);
  param_2[1] = *(undefined4 *)(in_ecx + 0x334);
  param_2[2] = *(undefined4 *)(in_ecx + 0x338);
  return (uint)param_2;
}

/* ref: FUN_00b0c7c0 */
uint F_00b0c7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb0c7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(uint *)((int)this + 0x28) = param_3;
  *(undefined4 *)((int)this + 0x2c) = param_4;
  return param_3;
}

/* ref: FUN_00b0c820 */
uint F_00b0c820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c820u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint in_EAX = 0;
  float10 fVar1;
  float10 fVar2;
  
  if ((!(0.0 < *(float *)(in_ecx + 0x344))) || (!(0.0 < *(float *)(in_ecx + 0x34c)))) {
    return in_EAX & 0xffffff00;
  }
  fVar1 = (float10)((float)GEN_TOF(((float10)param_2[2] - (float10)*(float *)(in_ecx + 0x338))));
  fVar2 = (float10)((float)GEN_TOF(((float10)*param_2 - (float10)*(float *)(in_ecx + 0x330))));
  if (((float10)(float)(fVar2 * fVar2 + fVar1 * fVar1) < (float10)*(float *)(in_ecx + 0x348)) &&
     ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)param_2[1] - (float10)*(float *)(in_ecx + 0x334)
                                          )))))) < (float10)*(float *)(in_ecx + 0x34c))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0c8e0 */
uint F_00b0c8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0c8e0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00b0c920 */
uint F_00b0c920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0c920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  F_0042ccf0((undefined *)((int)this + 0x10),param_1 + 4);
  puVar2 = param_1 + 0x19;
  puVar3 = (undefined4 *)((int)this + 100);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)((int)this + 0x98) = *(undefined1 *)(param_1 + 0x26);
  return (uint)this;
}

/* ref: FUN_00b0c980 */
uint F_00b0c980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0c980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd4c));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0ca10 */
uint F_00b0ca10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb0ca10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd58));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFateEvent_Fate_Game_Client_Game::vf1 */
uint F_00b0ca50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00b0ca70 */
uint F_00b0ca70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb0ca70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd64))
  ;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFateContext_Fate_Game_Client_Game::vf1 */
uint F_00b0cab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0cab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: SheetWaiter_VFateMessage_Fate_Game_Client_Game::vf0 */
uint F_00b0cad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0cb40 */
uint F_00b0cb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cb40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0cba0 */
uint F_00b0cba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cba0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0cbd0 */
uint F_00b0cbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0cc00 */
uint F_00b0cc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cc00u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0cc90 */
uint F_00b0cc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cc90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0ccf0 */
uint F_00b0ccf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ccf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x48,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0cd20 */
uint F_00b0cd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cd20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x48,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0cd50 */
uint F_00b0cd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cd50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0cde0 */
uint F_00b0cde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cde0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0ce10 */
uint F_00b0ce10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ce10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ce20 */
uint F_00b0ce20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ce20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ce70 */
uint F_00b0ce70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ce70u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b0ced0 */
uint F_00b0ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ced0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0cf00 */
uint F_00b0cf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cf00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0cfe0 */
uint F_00b0cfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0cfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d070 */
uint F_00b0d070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d0c0 */
uint F_00b0d0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d100 */
uint F_00b0d100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d100u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d130 */
uint F_00b0d130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d180 */
uint F_00b0d180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d1c0 */
uint F_00b0d1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d1e0 */
uint F_00b0d1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d230 */
uint F_00b0d230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d230u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00b0d260 */
uint F_00b0d260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d260u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d290 */
uint F_00b0d290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x321);
  return (uint)uVar1;
}

/* ref: FUN_00b0d2c0 */
uint F_00b0d2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d2c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d300 */
uint F_00b0d300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d300u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x321);
  return uVar1;
}

/* ref: FUN_00b0d350 */
uint F_00b0d350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d350u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00b0d360 */
uint F_00b0d360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 8;
  return (uint)this;
}

/* ref: FUN_00b0d380 */
uint F_00b0d380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d380u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x48;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d3a0 */
uint F_00b0d3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3b0 */
uint F_00b0d3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3c0 */
uint F_00b0d3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3d0 */
uint F_00b0d3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3e0 */
uint F_00b0d3e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d3f0 */
uint F_00b0d3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d3f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d400 */
uint F_00b0d400(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d400u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d410 */
uint F_00b0d410(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d450 */
unsigned int F_00b0d450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00b0d470 */
unsigned int F_00b0d470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00b0d490 */
unsigned int F_00b0d490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00b0d4b0 */
unsigned int F_00b0d4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b0d4d0 */
unsigned int F_00b0d4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b0d510 */
unsigned int F_00b0d510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00b0d530 */
unsigned int F_00b0d530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00b0d560 */
unsigned int F_00b0d560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d560u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0d580 */
uint F_00b0d580(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d580u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d590 */
uint F_00b0d590(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d590u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d5b0 */
uint F_00b0d5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d5b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0d5f0 */
uint F_00b0d5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d5f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d600 */
uint F_00b0d600(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d620 */
uint F_00b0d620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d620u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0d6a0 */
uint F_00b0d6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d6a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0d6e0 */
uint F_00b0d6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0d700 */
uint F_00b0d700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d700u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(in_ecx + 8) = param_3;
  return in_ecx;
}

/* ref: FUN_00b0d710 */
uint F_00b0d710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d710u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(in_ecx + 8) = param_3;
  return in_ecx;
}

/* ref: FUN_00b0d760 */
uint F_00b0d760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0d780 */
byte F_00b0d780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00b0d7b0 */
uint F_00b0d7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d7b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d7e0 */
uint F_00b0d7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d7e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d810 */
uint F_00b0d810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0d830 */
unsigned int F_00b0d830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b0d880 */
uint F_00b0d880(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d890 */
uint F_00b0d890(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0d8a0 */
uint F_00b0d8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0d8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ecd70));
  F_0042b630((int)this + 0x20);
  return (uint)this;
}

/* ref: FUN_00b0d8e0 */
uint F_00b0d8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042c880((undefined *)((int)this + 0x20));
  uVar1 = F_00cb4870(this);
  return uVar1;
}

/* ref: Client::Game::Fate::FateMessage::ExdWaiter::vf0 */
uint F_00b0d900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this + 0x20);
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Fate::FateDirector::vf143 */
unsigned int F_00b0d940(void)
{
  GEN_ENTER(0xb0d940u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf153 */
unsigned int F_00b0d950(void)
{
  GEN_ENTER(0xb0d950u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf154 */
unsigned int F_00b0d960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0d960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf155 */
unsigned int F_00b0d970(void)
{
  GEN_ENTER(0xb0d970u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf147 */
byte F_00b0d980(void)
{
  GEN_ENTER(0xb0d980u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf157 */
byte F_00b0d990(void)
{
  GEN_ENTER(0xb0d990u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf52 */
byte F_00b0d9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Fate::FateDirector::vf100 */
uint F_00b0d9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0d9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = (uint)*((ushort *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x328) + 0x54)));
  if ((uVar1 == 4) || (uVar1 = uVar1 - 6, uVar1 == 0)) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
    uVar1 = F_006f3a50(*(undefined * PTR32 *)(this + 0x328),&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
  }
  return uVar1;
}

/* ref: FUN_00b0d9e0 */
byte F_00b0d9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0d9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00a5f290(param_1);
    if (uVar1 != 0) {
      return *(byte *)(uVar1 + 0x1689) <= *(byte *)((int)this + 0x322);
    }
  }
  return 0;
}

/* ref: FUN_00b0da30 */
uint F_00b0da30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0da30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00a5f290(param_1);
    if (uVar1 != 0) {
      return (uint)(*(byte *)((int)this + 0x322) < *(byte *)(uVar1 + 0x1689));
    }
  }
  return 1;
}

/* ref: FUN_00b0da80 */
uint F_00b0da80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0da80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0da90 */
uint F_00b0da90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0da90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0daa0 */
uint F_00b0daa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0daa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0dab0 */
uint F_00b0dab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0dac0 */
unsigned int F_00b0dac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0dac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  if (0xb < param_1) {
                    
    F_00c457e7("invalid bitset<N> position");
  }
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  puVar1 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4)));
  if ((char)param_2 != '\0') {
    *puVar1 = *puVar1 | uVar2;
    return 0;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return 0;
}

/* ref: FUN_00b0db00 */
unsigned int F_00b0db00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0db00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  
  if (0xb < param_1) {
                    
    F_00c457e7("invalid bitset<N> position");
  }
  puVar1 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4)));
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  return 0;
}

/* ref: FUN_00b0db40 */
uint F_00b0db40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0db40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0xb < param_1) {
                    
    F_00c457e7("invalid bitset<N> position");
  }
  return (uint)((1 << ((byte)param_1 & 0x1f) & *((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4)))) != 0);
}

/* ref: FUN_00b0dc40 */
byte F_00b0dc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dc40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_00b0dc60 */
byte F_00b0dc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: CallbackSheetWaiter_VFateEvent_Fate_Game_Client_Game::vf0 */
uint F_00b0dc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFateContext_Fate_Game_Client_Game::vf0 */
uint F_00b0dcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0dd80 */
uint F_00b0dd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0dd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0dd90 */
byte F_00b0dd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0ddb0 */
uint F_00b0ddb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ddb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ddc0 */
byte F_00b0ddc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ddc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0dde0 */
uint F_00b0dde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0dde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0ddf0 */
byte F_00b0ddf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ddf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0de40 */
uint F_00b0de40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0de40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0de50 */
byte F_00b0de50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0de50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0de70 */
uint F_00b0de70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0de70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b0de80 */
byte F_00b0de80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0de80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b0ded0 */
unsigned int F_00b0ded0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ded0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return 0;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return 0;
}

/* ref: FUN_00b0df10 */
uint F_00b0df10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0df10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00b0df50 */
uint F_00b0df50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0df50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00b0df80 */
uint F_00b0df80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0df80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0df90 */
uint F_00b0df90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0df90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x48;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00b0dfe0 */
uint F_00b0dfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0dfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00b0e030 */
uint F_00b0e030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e040 */
uint F_00b0e040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00b0e070 */
uint F_00b0e070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e070u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) - param_2;
  return in_ecx;
}

/* ref: FUN_00b0e080 */
uint F_00b0e080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 8;
  return (uint)this;
}

/* ref: FUN_00b0e0a0 */
uint F_00b0e0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e0a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x48;
  return (uint)in_ecx;
}

/* ref: FUN_00b0e0c0 */
unsigned int F_00b0e0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b0e0e0 */
unsigned int F_00b0e0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b0e100 */
uint F_00b0e100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e100u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00b0e130 */
unsigned int F_00b0e130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00b0e150 */
unsigned int F_00b0e150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00b0e170 */
unsigned int F_00b0e170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b0e190 */
unsigned int F_00b0e190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b0e1b0 */
uint F_00b0e1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e1b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0e1e0 */
unsigned int F_00b0e1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b0e210 */
unsigned int F_00b0e210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00b0e270 */
unsigned int F_00b0e270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00b0e2a0 */
uint F_00b0e2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e2a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b0e2e0 */
uint F_00b0e2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0e2e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b0e2f0 */
uint F_00b0e2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e300 */
uint F_00b0e300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e300u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}

/* ref: FUN_00b0e310 */
uint F_00b0e310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e310u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}

/* ref: FUN_00b0e320 */
unsigned int F_00b0e320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_00b0e350 */
unsigned int F_00b0e350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 0x12;
    puVar3 = puVar2 + 0x12;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0x12; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00b0e380 */
uint F_00b0e380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)((int)this + 8);
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0e3f0 */
byte F_00b0e3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) != *(int *)(param_1 + 4);
}

/* ref: FUN_00b0e410 */
uint F_00b0e410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00b0e440 */
uint F_00b0e440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)this = 0xe0000000;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0e470 */
unsigned int F_00b0e470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b0e490 */
unsigned int F_00b0e490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b0e4b0 */
unsigned int F_00b0e4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b0e4f0 */
unsigned int F_00b0e4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: Client::Game::Fate::FateDirector::vf0 */
uint F_00b0e520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0e520u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_00b077a0(in_ecx,in_edi);
  if ((param_3 & 1) != 0) {
    F_00406ad0(in_ecx);
  }
  return in_ecx;
}

/* ref: FUN_00b0e560 */
unsigned int F_00b0e560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) | 1;
    return 0;
  }
  *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) & 0xfffffffe;
  return 0;
}

/* ref: FUN_00b0e590 */
unsigned int F_00b0e590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) | 8;
    return 0;
  }
  *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) & 0xfffffff7;
  return 0;
}

/* ref: FUN_00b0e5c0 */
unsigned int F_00b0e5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e5c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) | 0x10;
    return 0;
  }
  *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) & 0xffffffef;
  return 0;
}

/* ref: FUN_00b0e5f0 */
unsigned int F_00b0e5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e5f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) | 0x20;
    return 0;
  }
  *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) & 0xffffffdf;
  return 0;
}

/* ref: FUN_00b0e630 */
uint F_00b0e630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e640 */
uint F_00b0e640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e640u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0e660 */
uint F_00b0e660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e670 */
uint F_00b0e670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0e690 */
uint F_00b0e690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e6a0 */
uint F_00b0e6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e6a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0e6c0 */
uint F_00b0e6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e6d0 */
uint F_00b0e6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e6d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0e6e0 */
uint F_00b0e6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0e700 */
uint F_00b0e700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00b0e740 */
byte F_00b0e740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e760 */
byte F_00b0e760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e780 */
byte F_00b0e780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e7b0 */
uint F_00b0e7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b0e7c0 */
uint F_00b0e7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e7c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b0e7d0 */
byte F_00b0e7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e7f0 */
byte F_00b0e7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b0e810 */
uint F_00b0e810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e810u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e830 */
uint F_00b0e830(unsigned int gen_a0)
{
  GEN_ENTER(0xb0e830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0e870 */
uint F_00b0e870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e880 */
uint F_00b0e880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0e8a0 */
uint F_00b0e8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0e8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0e8e0 */
unsigned int F_00b0e8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0e8e0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  if (param_2 != 0) {
    *in_ecx = *in_ecx & 0xfff;
  }
  return 0;
}

/* ref: FUN_00b0e900 */
uint F_00b0e900(unsigned int gen_a0)
{
  GEN_ENTER(0xb0e900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0x321);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x321);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b0e9c0 */
uint F_00b0e9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0e9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x321);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b0e9f0 */
uint F_00b0e9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0e9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0ea30 */
unsigned int F_00b0ea30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ea30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return 0;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return 0;
}

/* ref: FUN_00b0ea70 */
unsigned int F_00b0ea70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ea70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_00b0eaa0 */
uint F_00b0eaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0eaa0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * -8;
  return (uint)in_ecx;
}

/* ref: FUN_00b0eac0 */
uint F_00b0eac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0eac0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * -0x48;
  return (uint)in_ecx;
}

/* ref: FUN_00b0eae0 */
uint F_00b0eae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0eae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (*piVar1 == *param_4) break;
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_3);
  }
  *param_1 = piVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0eb10 */
unsigned int F_00b0eb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0eb10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_00b0eb40 */
unsigned int F_00b0eb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0eb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 0x12;
    puVar3 = puVar2 + 0x12;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0x12; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00b0eb70 */
uint F_00b0eb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb0eb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if (param_3 != param_5) {
    do {
      uVar1 = uVar2 >> 2;
      if (*(uint *)(param_2 + 8) <= uVar1) {
        uVar1 = uVar1 - *(uint *)(param_2 + 8);
      }
    } while ((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 4) + uVar1 * 4))) + (uVar2 & 3) * 4))) != *param_6)
            && (uVar2 = uVar2 + 1, uVar2 != param_5));
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00b0ebc0 */
uint F_00b0ebc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0ebc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = param_4;
    return (uint)param_1;
  }
  *param_1 = *param_2;
  param_1[1] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00b0ebf0 */
uint F_00b0ebf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb0ebf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if (param_3 != param_5) {
    do {
      uVar1 = uVar2 >> 2;
      if (*(uint *)(param_2 + 8) <= uVar1) {
        uVar1 = uVar1 - *(uint *)(param_2 + 8);
      }
    } while ((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 4) + uVar1 * 4))) + (uVar2 & 3) * 4))) != *param_6)
            && (uVar2 = uVar2 + 1, uVar2 != param_5));
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00b0ec40 */
uint F_00b0ec40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ec40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)((int)this + 8);
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0ec80 */
unsigned int F_00b0ec80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ec80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0ecb0 */
unsigned int F_00b0ecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0ece0 */
unsigned int F_00b0ece0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ece0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_00b0ed10 */
uint F_00b0ed10(unsigned int gen_a0)
{
  GEN_ENTER(0xb0ed10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xe0000000;
  return (uint)param_1;
}

/* ref: FUN_00b0ed20 */
unsigned int F_00b0ed20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ed20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0ed50 */
unsigned int F_00b0ed50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ed50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0ed80 */
unsigned int F_00b0ed80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ed80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0edb0 */
uint F_00b0edb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0edb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0edf0 */
uint F_00b0edf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0edf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0ee30 */
uint F_00b0ee30(unsigned int gen_a0)
{
  GEN_ENTER(0xb0ee30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0ee70 */
uint F_00b0ee70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ee70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0ef00 */
uint F_00b0ef00(unsigned int gen_a0)
{
  GEN_ENTER(0xb0ef00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00b0e900(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x321);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b0ef30 */
uint F_00b0ef30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ef30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b0ef50 */
uint F_00b0ef50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ef50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00b0ef70 */
uint F_00b0ef70(unsigned int gen_a0)
{
  GEN_ENTER(0xb0ef70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0efb0 */
uint F_00b0efb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0efb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0f010 */
uint F_00b0f010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0f010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0f070 */
uint F_00b0f070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * -8;
  return (uint)param_1;
}

/* ref: FUN_00b0f090 */
uint F_00b0f090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f090u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3 * -0x48;
  return (uint)param_2;
}

/* ref: FUN_00b0f0b0 */
uint F_00b0f0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0f0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0f110 */
unsigned int F_00b0f110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_00b0f140 */
uint F_00b0f140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xb0f140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  byte * pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  if (((param_2 == (int *)0x0) || ((int *)*param_2 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 == (undefined4 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  pbVar2 = (byte *)F_00b0ebf0(((byte *)(gen_frame + 0xc)) + 8,uVar4,param_4,uVar3,param_7,param_8);
  uVar3 = *(undefined4 *)(pbVar2 + 4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = *(undefined4 *)pbVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar3;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0f1d0 */
uint F_00b0f1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb0f1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = param_4;
    return (uint)param_1;
  }
  *param_1 = *param_2;
  param_1[1] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00b0f210 */
unsigned int F_00b0f210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f210u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f240 */
unsigned int F_00b0f240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f240u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0f270 */
unsigned int F_00b0f270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f270u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f2a0 */
unsigned int F_00b0f2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f2a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f2d0 */
unsigned int F_00b0f2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f2d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f300 */
uint F_00b0f300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = 0xe0000000;
  return (uint)param_2;
}

/* ref: FUN_00b0f310 */
unsigned int F_00b0f310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f310u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f380 */
uint F_00b0f380(unsigned int gen_a0)
{
  GEN_ENTER(0xb0f380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00b0e900(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x321);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b0f3b0 */
unsigned int F_00b0f3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb0f3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b0f400 */
unsigned int F_00b0f400(unsigned int gen_a0)
{
  GEN_ENTER(0xb0f400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b0f460 */
unsigned int F_00b0f460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 - param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return 0;
}

/* ref: FUN_00b0f4a0 */
uint F_00b0f4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xb0f4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  byte * pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  if (((param_2 == (int *)0x0) || ((int *)*param_2 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 == (undefined4 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  pbVar2 = (byte *)F_00b0eb70(((byte *)(gen_frame + 0xc)) + 8,uVar4,param_4,uVar3,param_7,param_8);
  uVar3 = *(undefined4 *)(pbVar2 + 4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = *(undefined4 *)pbVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar3;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b0f540 */
unsigned int F_00b0f540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f540u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f570 */
unsigned int F_00b0f570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b0f5a0 */
unsigned int F_00b0f5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f5a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f5e0 */
unsigned int F_00b0f5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f5e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f610 */
unsigned int F_00b0f610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f610u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f640 */
unsigned int F_00b0f640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 0x12) {
    *puVar1 = 0xe0000000;
  }
  return 0;
}

/* ref: FUN_00b0f660 */
unsigned int F_00b0f660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f660u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f690 */
unsigned int F_00b0f690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 0x12) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 0x12;
  }
  return 0;
}

/* ref: Client::Game::Fate::FateContext::vf0 */
uint F_00b0f6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b094e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b0f700 */
uint F_00b0f700(unsigned int gen_a0)
{
  GEN_ENTER(0xb0f700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar2;
  }
  uVar1 = (*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - 1;
  if (((piVar4 == (int *)0x0) || ((int *)*piVar4 == (int *)0x0)) ||
     (piVar4 = *(int * PTR32 *)*piVar4, piVar4 == (int *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar4;
  }
  uVar3 = uVar1 >> 2;
  if (*(uint *)(iVar5 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar5 + 8);
  }
  return *((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar3 * 4))) + (uVar1 & 3) * 4;
}

/* ref: FUN_00b0f760 */
uint F_00b0f760(unsigned int gen_a0)
{
  GEN_ENTER(0xb0f760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0f7a0 */
uint F_00b0f7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (0x3fffffff - uVar6 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= 0x3fffffff - uVar7)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc) >> 2;
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x321);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x321);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00b0f920 */
uint F_00b0f920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0f920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,0x321);
    F_00b0f5a0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x321);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = param_1 * 8 + uVar3;
    *(uint *)((int)this + 4) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00b0f9c0 */
unsigned int F_00b0f9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f9c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0f9f0 */
unsigned int F_00b0f9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0f9f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fa20 */
unsigned int F_00b0fa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fa20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 0x12) {
    *puVar1 = 0xe0000000;
  }
  return 0;
}

/* ref: FUN_00b0fa40 */
unsigned int F_00b0fa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0fa40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fa70 */
unsigned int F_00b0fa70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0fa70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x12;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fab0 */
uint F_00b0fab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x321);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b0fb60 */
uint F_00b0fb60(unsigned int gen_a0)
{
  GEN_ENTER(0xb0fb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,0x321);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b0fba0 */
uint F_00b0fba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0fba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar3 = param_2;
  puVar2 = param_2;
  while (puVar2 = puVar2 + 2, puVar2 != puVar1) {
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3 = puVar3 + 2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -8;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b0fbe0 */
unsigned int F_00b0fbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(byte *)((int)this + 0xc) & 3) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_00b0f7a0(this,1);
  }
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)this + 8) * 4;
  }
  uVar4 = iVar3 - 1;
  uVar5 = uVar4 >> 2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x321);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) = uVar2;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) + (uVar4 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar4;
  return 0;
}

/* ref: FUN_00b0fc60 */
uint F_00b0fc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x321);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b0fd10 */
uint F_00b0fd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b0fab0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0fab0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b0fd80 */
uint F_00b0fd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b0f920(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0f920(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b0fdf0 */
unsigned int F_00b0fdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 0x12) {
    *puVar1 = 0xe0000000;
  }
  return 0;
}

/* ref: FUN_00b0fe20 */
uint F_00b0fe20(unsigned int gen_a0)
{
  GEN_ENTER(0xb0fe20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 0x12) {
      *puVar2 = 0xe0000000;
    }
    uVar4 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x48) * 0x48,0x321
                        );
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b0fe90 */
uint F_00b0fe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fe90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b0fc60(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0fc60(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b0ff00 */
uint F_00b0ff00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0ff00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x321);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x321);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b0ffb0 */
unsigned int F_00b0ffb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb0ffb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x12;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b0fff0 */
unsigned int F_00b0fff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb0fff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b0fd10(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b0fd10(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00b10060 */
uint F_00b10060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_00b0fd80(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b0fd80(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_00b100f0 */
unsigned int F_00b100f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb100f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x48) < param_1) {
    puVar1 = (undefined4 *)F_004296a0(param_1 * 0x48,0,0x321);
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar5 = puVar1;
    for (puVar2 = *(undefined4 * PTR32 *)this; puVar2 != puVar3; puVar2 = puVar2 + 0x12) {
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = puVar2;
        puVar7 = puVar5;
        for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar5 = puVar5 + 0x12;
    }
    puVar3 = *(undefined4 * PTR32 *)this;
    iVar4 = *(int *)((int)this + 4) - (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
      for (; puVar3 != puVar2; puVar3 = puVar3 + 0x12) {
        *puVar3 = 0xe0000000;
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x48) * 0x48,0x321);
    }
    *(undefined4 * PTR32 *)((int)this + 8) = puVar1 + param_1 * 0x12;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar1 + (iVar4 / 0x48) * 0x12;
    *(undefined4 * PTR32 *)this = puVar1;
  }
  return 0;
}

/* ref: FUN_00b10200 */
unsigned int F_00b10200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b0fe90(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b0fe90(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00b10270 */
uint F_00b10270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb10270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    puVar4 = param_3;
    while (puVar4 != puVar1) {
      puVar3 = puVar4 + 0x12;
      puVar6 = puVar2 + 0x12;
      puVar7 = puVar4;
      puVar8 = puVar2;
      for (iVar5 = 0x12; puVar2 = puVar6, puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (puVar4 = puVar2; puVar4 != puVar1; puVar4 = puVar4 + 0x12) {
      *puVar4 = 0xe0000000;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b102e0 */
unsigned int F_00b102e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb102e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x48;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x48;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_00b100f0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00b100f0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00b10370 */
uint F_00b10370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b0ff00(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b0ff00(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b103e0 */
unsigned int F_00b103e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb103e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b102e0(this,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar2) / 0x48) * 0x48)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b102e0(this,1);
    }
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x48;
  return 0;
}

/* ref: FUN_00b10450 */
uint F_00b10450(unsigned int gen_a0)
{
  GEN_ENTER(0xb10450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00b10270(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00b10470 */
uint F_00b10470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b10370(this,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b10370(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: Client::Game::Fate::FateMessage::ExdWaiter::vf1 */
unsigned int F_00b104e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb104e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00b0a090(*(undefined * PTR32 *)(this + 0x18),param_2,param_1,param_3,this);
  return 0;
}

/* ref: FUN_00b10500 */
uint F_00b10500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b09eb0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Fate::FateDirector::vf27 */
uint F_00b10530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb10530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00b0be20(this + 0x314,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf53 */
uint F_00b10540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != -2) {
    if ((param_1 != -1) && (uVar1 = F_00b0b7e0(this + 0x314), (char)uVar1 != '\0')) {
      return uVar1;
    }
    uVar1 = F_00b0b7e0(this + 0x314);
    if ((char)uVar1 != '\0') {
      return uVar1;
    }
  }
  uVar1 = F_006f3a50(*(undefined * PTR32 *)(this + 0x328),0,0);
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf55 */
uint F_00b10580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb10580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b0bee0(this + 0x314,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf59 */
uint F_00b10590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb10590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b0bfc0(this + 0x314,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::Game::Fate::FateDirector::vf24 */
uint F_00b105a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb105a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00b0c390(this + 0x314,this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b105d0 */
uint F_00b105d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb105d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed00c));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 8));
  return (uint)uVar1;
}

/* ref: FUN_00b105f0 */
uint F_00b105f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb105f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * _Dst;
  gen_size32 _Size;
  
  *(undefined2 *)((int)this + 4) = (undefined2)param_1;
  *(undefined2 *)((int)this + 6) = (undefined2)param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed00c));
  *(undefined2 *)((int)this + 0xc) = 0x3440;
  _Size = (int)*(short *)((int)this + 6) * (int)*(short *)((int)this + 4);
  _Dst = (undefined *)F_00406bb0(_Size,0,0);
  if (_Dst != (undefined *)0x0) {
    if (-1 < (int)(_Size - 1)) {
      F_00c48350(_Dst,0,_Size);
    }
    *(undefined * PTR32 *)((int)this + 8) = _Dst;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00b10660 */
uint F_00b10660(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb10660u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10943d8);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1094788);
  iVar3 = *(short *)(param_1 + 4) * param_4;
  local_8 = 0;
  local_c = 0;
  uVar2 = 1;
  if (*(short *)(param_1 + 4) < 1) {
    return 0;
  }
  do {
    if ((param_3 & uVar2) == 0) {
      local_10 = (undefined1)(int)TRUNC(((float10)0 * fVar4) * fVar5);
      *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + iVar3))) = local_10;
    }
    else {
      uVar1 = (uint)*((byte *)GEN_TOP((*(int *)(param_1 + 8) + iVar3))) +
              ((int)TRUNC(((float10)param_2 * fVar4) * fVar5) & 0xffU);
      if (0xff < uVar1) {
        uVar1 = 0xff;
      }
      *((byte *)GEN_TOP((*(int *)(param_1 + 8) + iVar3))) = (byte)uVar1;
      if (*(byte *)(param_1 + 0xc) < (byte)uVar1) {
        local_8 = local_8 | uVar2;
        *((undefined1 *)GEN_TOP((iVar3 + *(int *)(param_1 + 8)))) = *(undefined1 *)(param_1 + 0xd);
      }
    }
    local_c = local_c + 1;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    iVar3 = iVar3 + 1;
  } while (local_c < *(short *)(param_1 + 4));
  return local_8;
}

/* ref: FUN_00b10770 */
unsigned int F_00b10770(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb10770u, gen_a0, 0u, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 local_8;
  
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10943d8);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1094788);
  iVar3 = 0;
  if (*(short *)((*(int *)&gen_args[0]) + 4) < 1) {
    return 0;
  }
  do {
    if ((*(uint *)((*(int *)&gen_args[2]) + iVar3 * 4) & (*(uint *)&gen_args[3])) == 0) {
      local_8 = (undefined1)(int)TRUNC(((float10)0 * fVar4) * fVar5);
      *((undefined1 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + iVar3))) = local_8;
    }
    else {
      uVar2 = (uint)*((byte *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + iVar3))) +
              ((int)TRUNC(((float10)(*(float *)&gen_args[1]) * fVar4) * fVar5) & 0xffU);
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      *((byte *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + iVar3))) = (byte)uVar2;
      if (*(byte *)((*(int *)&gen_args[0]) + 0xc) < (byte)uVar2) {
        puVar1 = (uint *)((*(int *)&gen_args[2]) + iVar3 * 4);
        *puVar1 = *puVar1 | (*(uint *)&gen_args[4]);
        *((undefined1 *)GEN_TOP((iVar3 + *(int *)((*(int *)&gen_args[0]) + 8)))) = *(undefined1 *)((*(int *)&gen_args[0]) + 0xd);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < *(short *)((*(int *)&gen_args[0]) + 4));
  return 0;
}

/* ref: FUN_00b10870 */
uint F_00b10870(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb10870u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = (int)TRUNC(((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                     (float10)*(double *)&REFG(undefined, 0x1094788)) & 0xff;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *in_ecx = (char)uVar1;
  return uVar1;
}

/* ref: FUN_00b108d0 */
uint F_00b108d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb108d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined1 uVar2;
  undefined1 local_8;
  
  uVar1 = (uint)TRUNC(((float10)*(double *)&REFG(undefined, 0x10943d8) *
                      (float10)((float)GEN_TOF(((float10)(param_2 & 0xff) / (float10)*(double *)&REFG(undefined, 0x10943d8)
                                      )))) * (float10)*(double *)&REFG(undefined, 0x1094788));
  local_8 = (undefined1)uVar1;
  uVar2 = local_8;
  if (0xff < (uVar1 & 0xff)) {
    uVar2 = 0xff;
  }
  *param_1 = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00b10930 */
uint F_00b10930(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb10930u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  undefined1 uVar2;
  undefined1 local_8;
  
  uVar1 = (uint)TRUNC(((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                      (float10)*(double *)&REFG(undefined, 0x1094788));
  local_8 = (undefined1)uVar1;
  uVar2 = local_8;
  if (0xff < (uVar1 & 0xff)) {
    uVar2 = 0xff;
  }
  *in_ecx = uVar2;
  return (uint)in_ecx;
}

/* ref: FUN_00b10990 */
unsigned int F_00b10990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)*param_1 + (uint)*(byte *)this;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(char *)this = (char)uVar1;
  return 0;
}

/* ref: FUN_00b109c0 */
uint F_00b109c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb109c0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  return (uint)(*param_2 < *in_ecx);
}

/* ref: FUN_00b109e0 */
uint F_00b109e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb109e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00b109f0 */
uint F_00b109f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb109f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (int)TRUNC(((float10)(byte)param_1 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                     (float10)*(double *)&REFG(undefined, 0x1094788)) & 0xff;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(char *)this = (char)uVar1;
  return uVar1;
}

/* ref: Client::System::Input::RepeatCounter::vf0 */
uint F_00b10a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed00c));
  F_00406b30(*(undefined4 *)(this + 8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b10a80 */
uint F_00b10a80(unsigned int gen_a0)
{
  GEN_ENTER(0xb10a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  undefined * puVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed038));
  if (REFG(int, 0x14c0d40) == 0) {
    uVar6 = 0;
    puVar5 = &REFG(int, 0x14c0d40);
    puVar4 = &REFG(undefined, 0x1081724);
    uVar3 = 0x800;
    pHVar1 = gen_imp_GetModuleHandleA((LPCSTR)0x0);
    iVar2 = gen_imp_DirectInput8Create(pHVar1,uVar3,puVar4,puVar5,uVar6);
    if (iVar2 < 0) {
      REFG(int, 0x14c0d40) = 0;
      gen_imp_MessageBoxA((HWND)0x0,"DirectInput8Create failed","INFO",0);
      return (uint)this;
    }
  }
  *(int *)&REFG(undefined, 0x14c0d44) = *(int *)&REFG(undefined, 0x14c0d44) + 1;
  return (uint)this;
}

/* ref: FUN_00b10af0 */
unsigned int F_00b10af0(unsigned int gen_a0)
{
  GEN_ENTER(0xb10af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed038));
  *(int *)&REFG(undefined, 0x14c0d44) = *(int *)&REFG(undefined, 0x14c0d44) + -1;
  if ((*(int *)&REFG(undefined, 0x14c0d44) == 0) && (REFG(undefined4, 0x14c0d40) != (int *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14c0d40) + 8))))(REFG(undefined4, 0x14c0d40));
    REFG(undefined4, 0x14c0d40) = (int *)0x0;
  }
  return 0;
}

/* ref: Client::System::Input::InputDevice::vf0 */
uint F_00b10b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ed038));
  *(int *)&REFG(undefined, 0x14c0d44) = *(int *)&REFG(undefined, 0x14c0d44) + -1;
  if ((*(int *)&REFG(undefined, 0x14c0d44) == 0) && (REFG(undefined4, 0x14c0d40) != (int *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14c0d40) + 8))))(REFG(undefined4, 0x14c0d40));
    REFG(undefined4, 0x14c0d40) = (int *)0x0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b10b70 */
uint F_00b10b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  HMODULE hModule;
  FARPROC pFVar1;
  int * piVar2;
  uint uVar3;
  
  gen_imp_ImmDisableTextFrameService(0xffffffff);
  hModule = gen_imp_LoadLibraryA("imm32.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = gen_imp_GetProcAddress(hModule,"ImmDisableTextFrameService");
    if (pFVar1 != (FARPROC)0x0) {
      ((code *)pFVar1)(0xffffffff);
    }
    gen_imp_FreeLibrary(hModule);
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar3 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x11555c0),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x10ed068),&(*(int * PTR32 *)(gen_frame + 0x4)));
    piVar2 = (*(int * PTR32 *)(gen_frame + 0x4));
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  else {
    piVar2 = *(int * PTR32 *)((int)this + 4);
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,param_1,0,&(*(int * PTR32 *)(gen_frame + 0x8)));
  if ((-1 < (int)uVar3) && (uVar3 = 0, (*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0)) {
    uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
  }
  return uVar3;
}

/* ref: Client::System::Input::CUIElementSink::vf1 */
uint F_00b10c10(unsigned int gen_a0)
{
  GEN_ENTER(0xb10c10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 4) + 1;
  *(uint *)(param_1 + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00b10c30 */
byte F_00b10c30(unsigned int gen_a0)
{
  GEN_ENTER(0xb10c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                    (*(undefined4 * PTR32 *)((int)this + 0xc),&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)(gen_frame + 0x8)));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xc))
                      ((*(int * PTR32 *)(gen_frame + 0x8)),&REFG(undefined, 0x10ed078),this,(undefined4 *)((int)this + 0x10));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      return 1;
    }
    *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_00b10ca0 */
unsigned int F_00b10ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xb10ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x10) != -1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                      (*(undefined4 * PTR32 *)((int)this + 0xc),&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x10));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    }
  }
  return 0;
}

/* ref: FUN_00b10cf0 */
uint F_00b10cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x8)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                    (*(undefined4 * PTR32 *)((int)this + 0xc),&REFG(undefined, 0x10ed098),&(*(int * PTR32 *)(gen_frame + 0x4)));
  if (-1 < (int)uVar1) {
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x4)),param_1,&(*(uint *)(gen_frame + 0x8)));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)));
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: Client::System::Input::CCiceroEventSink::vf1 */
uint F_00b10d40(unsigned int gen_a0)
{
  GEN_ENTER(0xb10d40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 8) + 1;
  *(uint *)(param_1 + 8) = uVar1;
  return uVar1;
}

/* ref: Client::System::Input::CCiceroEventSink::vf3 */
uint F_00b10d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::CCiceroEventSink::vf4 */
uint F_00b10d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::CCiceroEventSink::vf6 */
uint F_00b10d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::CCiceroEventSink::vf7 */
uint F_00b10d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10d90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00b10da0 */
unsigned int F_00b10da0(unsigned int gen_a0)
{
  GEN_ENTER(0xb10da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x1c) != -1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10))))
                      (*(undefined4 * PTR32 *)((int)this + 0x10),&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x1c));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    }
  }
  return 0;
}

/* ref: FUN_00b10df0 */
unsigned int F_00b10df0(unsigned int gen_a0)
{
  GEN_ENTER(0xb10df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x20) != -1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))))
                      (*(undefined4 * PTR32 *)((int)this + 0x18),&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x20));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x20) = 0xffffffff;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 8))))(*(int * PTR32 *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_00b10e50 */
unsigned int F_00b10e50(unsigned int gen_a0)
{
  GEN_ENTER(0xb10e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
  if (*(int *)((int)this + 0x10) != -1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                      (*(undefined4 * PTR32 *)((int)this + 0xc),&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x10));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    }
  }
  return 0;
}

/* ref: Client::System::Input::CUIElementSink::vf0 */
uint F_00b10ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb10ea0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  uVar1 = F_004011f0(param_2,&REFG(undefined, 0x1082374));
  if ((uVar1 == 0) && (uVar1 = F_004011f0(param_2,&REFG(undefined, 0x10ed078)), uVar1 == 0)) {
    *param_3 = 0;
    return 0x80004002;
  }
  *param_3 = param_1;
  if (param_1 == (int *)0x0) {
    return 0x80004002;
  }
  ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  return 0;
}

/* ref: Client::System::Input::CUIElementSink::vf5 */
uint F_00b10f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb10f10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  uVar3 = (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3])))))(((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3])),&REFG(undefined, 0x10ed098),&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x18))))((*(int * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]));
  }
  piVar2 = (*(int * PTR32 *)(gen_frame + 0x8));
  if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
    (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
    uVar3 = ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x8)))((*(int * PTR32 *)(gen_frame + 0x8)),&REFG(undefined, 0x10ed0c4),&(*(int * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar3) {
      ((code *)*(gen_code32 *)(*(int *)piVar1[2] + 0x10))((int *)piVar1[2]);
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    }
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    return 0;
  }
  return 0x80070057;
}

/* ref: FUN_00b10fb0 */
uint F_00b10fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb10fb0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  code * pcVar6;
  uint uVar7;
  undefined * puVar8;
  
  uVar7 = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))))
                    (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&REFG(undefined, 0x10ed098),&(*(int * PTR32 *)(gen_frame + 0x14)));
  if (-1 < (int)uVar4) {
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x14)),(*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)(gen_frame + 0x10)));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)));
  }
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x10));
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((*(int * PTR32 *)(gen_frame + 0x10)) != (int *)0x0) {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = 0;
    (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
    uVar4 = ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x10)))((*(int * PTR32 *)(gen_frame + 0x10)),&REFG(undefined, 0x10ed0c4),&(*(int * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar4) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x28))))((*(int * PTR32 *)&gen_args[1]),puVar2);
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x24))))((*(int * PTR32 *)&gen_args[1]),&(*(uint *)(gen_frame + 0x18)));
      if ((*(uint *)(gen_frame + 0x18)) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(uint *)(gen_frame + 0x18)));
        uVar4 = 0;
        if ((*(uint *)(gen_frame + 0x18)) != 0) {
          do {
            uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x2c))))((*(int * PTR32 *)&gen_args[1]),uVar4,&(*(undefined * PTR32 *)(gen_frame + 0xc)));
            piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
            if ((int)uVar5 < 0) {
              pcVar6 = *(gen_code32 *)(*piVar1 + 4);
              uVar7 = uVar7 + 1;
              puVar8 = &REFG(undefined, 0x10ed064);
            }
            else {
              pcVar6 = *(gen_code32 *)(*piVar1 + 4);
              puVar8 = (*(undefined * PTR32 *)(gen_frame + 0xc));
            }
            (*pcVar6)(piVar1,puVar8);
            uVar4 = uVar4 + 1;
          } while (uVar4 < (*(uint *)(gen_frame + 0x18)));
        }
        if (uVar7 == (*(uint *)(gen_frame + 0x18))) {
          (*(uint *)(gen_frame + 0x18)) = 0;
          *(*(undefined4 * PTR32 *)&gen_args[2]) = 0;
        }
      }
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    }
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
  }
  return (*(uint *)(gen_frame + 0x18));
}

/* ref: Client::System::Input::CCiceroEventSink::vf0 */
uint F_00b110d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb110d0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int * piVar2;
  
  if (param_3 == (int *)0x0) {
    return 0x80070057;
  }
  uVar1 = F_004011f0(param_2,&REFG(undefined, 0x1082374));
  if ((uVar1 == 0) && (uVar1 = F_004011f0(param_2,&REFG(undefined, 0x1155bd0)), uVar1 == 0)) {
    uVar1 = F_004011f0(param_2,&REFG(undefined, 0x1155a40));
    if (uVar1 == 0) {
      *param_3 = 0;
      return 0x80004002;
    }
    *param_3 = (int)param_1;
  }
  else {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_1 + 1;
    }
    *param_3 = (int)piVar2;
  }
  if (*param_3 == 0) {
    return 0x80004002;
  }
  ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  return 0;
}

/* ref: FUN_00b11160 */
byte F_00b11160(unsigned int gen_a0)
{
  GEN_ENTER(0xb11160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)((int)this + 0x1c);
  if (*(int *)((int)this + 0x1c) != -1) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10))))
                      (*(undefined4 * PTR32 *)((int)this + 0x10),&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar2) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*puVar1);
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *puVar1 = 0xffffffff;
    }
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10))))
                    (*(undefined4 * PTR32 *)((int)this + 0x10),&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x4)));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x4)),&REFG(undefined, 0x1155a40),this,puVar1);
    if (-1 < (int)uVar2) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)));
      return 1;
    }
    *puVar1 = 0xffffffff;
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_00b11210 */
byte F_00b11210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11210u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) != -1) {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))))))
                      (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x4)));
    if (-1 < (int)uVar5) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x4)),*puVar1);
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)));
      *puVar1 = 0xffffffff;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  }
  piVar2 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  (*(byte *)(gen_frame + 0xb)) = 0;
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x18))))((*(int * PTR32 *)&gen_args[1]),piVar2);
  if (-1 < (int)uVar5) {
    puVar3 = (undefined4 *)*piVar2;
    if (puVar3 == (undefined4 *)0x0) {
      return 1;
    }
    uVar5 = ((code *)*(gen_code32 *)*puVar3)(puVar3,&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar5) {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]),&REFG(undefined, 0x1155bd0),(int)(*(undefined * PTR32 *)&gen_args[0]) + 4,puVar1);
      if ((int)uVar5 < 0) {
        *puVar1 = 0xffffffff;
      }
      else {
        (*(byte *)(gen_frame + 0xb)) = 1;
      }
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
      if ((*(byte *)(gen_frame + 0xb)) != 0) {
        return (*(byte *)(gen_frame + 0xb));
      }
    }
  }
  piVar4 = (int *)*piVar2;
  if (piVar4 == (int *)0x0) {
    return (*(byte *)(gen_frame + 0xb));
  }
  ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
  *piVar2 = 0;
  return (*(byte *)(gen_frame + 0xb));
}

/* ref: FUN_00b11310 */
uint F_00b11310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::System::Input::CUIElementSink::vf2 */
uint F_00b11340(unsigned int gen_a0)
{
  GEN_ENTER(0xb11340u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  piVar1 = (*(int * PTR32 *)&gen_args[0]) + 1;
  *piVar1 = *piVar1 + -1;
  uVar3 = (*(int * PTR32 *)&gen_args[0])[1];
  if (*piVar1 == 0) {
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
    if ((*(int * PTR32 *)&gen_args[0])[4] != -1) {
      uVar3 = (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3])))))
                        (((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3])),&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)&gen_args[0]));
      if (-1 < (int)uVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),piVar2[4]);
        ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]));
        piVar2[4] = -1;
      }
    }
    F_00406ad0(piVar2);
    uVar3 = 0;
  }
  return uVar3;
}

/* ref: Client::System::Input::CUIElementSink::vf3 */
uint F_00b113b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb113b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  *(*(undefined4 * PTR32 *)&gen_args[2]) = 0;
  uVar1 = F_00b10fb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 * PTR32 *)&gen_args[2]));
  if (uVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(undefined4 * PTR32 *)&gen_args[2]));
    return 0;
  }
  return 0x80070057;
}

/* ref: Client::System::Input::CUIElementSink::vf4 */
uint F_00b11400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11400u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00b10fb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]));
  if (uVar1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(undefined4 *)&gen_args[1]),uVar1 - 1)
    ;
    return 0;
  }
  return 0x80070057;
}

/* ref: Client::System::Input::CCiceroEventSink::vf5 */
uint F_00b11440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00b11210(param_1,param_2);
  return 0;
}

/* ref: FUN_00b11460 */
uint F_00b11460(unsigned int gen_a0)
{
  GEN_ENTER(0xb11460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int * piVar2;
  bool bVar3;
  uint uVar4;
  uint extraout_EAX = 0;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  bVar3 = false;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
    if (puVar1[4] != -1) {
      uVar4 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)puVar1[3])))((undefined4 *)puVar1[3],&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)(gen_frame + 0x8)));
      if (-1 < (int)uVar4) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),puVar1[4]);
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
        puVar1[4] = 0xffffffff;
      }
    }
    F_00406ad0(puVar1);
    *(undefined4 *)((int)this + 8) = 0;
    bVar3 = true;
  }
  piVar2 = *(int * PTR32 *)((int)this + 4);
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (bVar3) {
    gen_imp_CoUninitialize();
    uVar4 = extraout_EAX;
  }
  return uVar4;
}

/* ref: FUN_00b114f0 */
byte F_00b114f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb114f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPVOID * ppv;
  LPVOID pvVar1;
  byte bVar2;
  HRESULT HVar3;
  uint uVar4;
  undefined4 * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 8) != 0) {
    return 1;
  }
  HVar3 = gen_imp_CoInitialize((LPVOID)0x0);
  if (HVar3 < 0) {
    F_00b10b70(this,param_1);
    return 0;
  }
  if (param_2 == 0) {
    F_00b10b70(this,param_1);
    gen_imp_CoUninitialize();
    return 0;
  }
  ppv = (LPVOID *)((int)this + 4);
  HVar3 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x11555c0),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x10ed0d4),ppv);
  if (-1 < HVar3) {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)*ppv + 0x38))(*ppv,&(*(undefined * PTR32 *)(gen_frame + 0x8)),4);
    if (-1 < (int)uVar4) {
      this_00 = (undefined4 *)F_00406b90(0x14,0,0);
      if (this_00 == (undefined4 *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        pvVar1 = *ppv;
        *this_00 = (*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
        this_00[1] = 1;
        this_00[2] = param_2;
        this_00[3] = pvVar1;
        this_00[4] = 0xffffffff;
      }
      *(undefined4 * PTR32 *)((int)this + 8) = this_00;
      bVar2 = F_00b10c30(this_00);
      if (bVar2 != 0) {
        return 1;
      }
    }
    F_00b10b70(this,param_1);
    F_00b11460(this);
    return 0;
  }
  F_00b10b70(this,param_1);
  gen_imp_CoUninitialize();
  return 0;
}

/* ref: FUN_00b11610 */
uint F_00b11610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb11610u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(int * PTR32 *)&gen_args[3]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = (*(undefined4 *)&gen_args[2]);
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[8])REFP(0x10ed0fc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[4])REFP(0x10ed0e8));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 1;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 7;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  F_00b11160((*(undefined * PTR32 *)&gen_args[0]));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),&(*(int * PTR32 *)&gen_args[3]));
  if ((-1 < (int)uVar1) && ((*(int * PTR32 *)&gen_args[3]) != (int *)0x0)) {
    F_00b11210((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[3]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 8))))((*(int * PTR32 *)&gen_args[3]));
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00b11690 */
unsigned int F_00b11690(unsigned int gen_a0)
{
  GEN_ENTER(0xb11690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10ed0fc));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[4])REFP(0x10ed0e8));
  if (*(int *)((int)this + 0x20) != -1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))))
                      (*(undefined4 * PTR32 *)((int)this + 0x18),&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x20));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x20) = 0xffffffff;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 8))))(*(int * PTR32 *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  if (*(int *)((int)this + 0x1c) != -1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10))))
                      (*(undefined4 * PTR32 *)((int)this + 0x10),&REFG(undefined, 0x1155ed0),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x1c));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    }
  }
  if (7 < *(uint *)((int)this + 0x38)) {
    F_00406ad0(*(undefined4 *)((int)this + 0x24));
  }
  *(undefined4 *)((int)this + 0x38) = 7;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  return 0;
}

/* ref: Client::System::Input::CCiceroEventSink::vf2 */
uint F_00b11760(unsigned int gen_a0)
{
  GEN_ENTER(0xb11760u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)((int)param_1 + 8);
  *piVar1 = *piVar1 + -1;
  uVar2 = *(uint *)((int)param_1 + 8);
  if (*piVar1 == 0) {
    F_00b11690(param_1);
    F_00406ad0(param_1);
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00b11790 */
uint F_00b11790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x38))(param_1,param_2,&(*(int *)(gen_frame + 0x4)));
  while ((uVar1 == 0 && ((*(int *)(gen_frame + 0x4)) == 0))) {
    (*(int *)(gen_frame + 0x0)) = 0xff;
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,param_2,1,((undefined2 *)(gen_frame + 0x8)),0xff,&(*(int *)(gen_frame + 0x0)));
    if (-1 < (int)uVar1) {
      ((undefined2 *)(gen_frame + 0x8))[(int)((*(int *)(gen_frame + 0x0)))] = 0;
      F_00b124c0((undefined *)((int)this + 0x24),((undefined2 *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0x0)));
    }
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x38))(param_1,param_2,&(*(int *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return uVar1;
}

/* ref: FUN_00b11840 */
uint F_00b11840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar3 = (undefined4 *)((int)this + 0x24);
  (*(uint *)(gen_frame + 0x30)) = 7;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined2 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar2 & 0xffff0000;
  F_00b123c0(((uint *)(gen_frame + 0x1c)),puVar3,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = 0;
  puVar1 = puVar3;
  if (7 < *(uint *)((int)this + 0x38)) {
    puVar1 = (undefined4 *)*puVar3;
  }
  *(undefined2 *)puVar1 = 0;
  uVar2 = ((code *)*(gen_code32 *)*param_1)(param_1,&REFG(undefined, 0x1155ad0),&(*(int * PTR32 *)(gen_frame + 0xc)));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x10))((*(int * PTR32 *)(gen_frame + 0xc)),&(*(int * PTR32 *)(gen_frame + 0x18)));
    if (-1 < (int)uVar2) {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x18)),1,&(*(int * PTR32 *)(gen_frame + 0x14)),0);
      while (uVar2 == 0) {
        uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x14)),&(*(int * PTR32 *)(gen_frame + 0x10)));
        if (-1 < (int)uVar2) {
          F_00b11790(this,(*(int * PTR32 *)(gen_frame + 0x10)),param_2);
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 8))((*(int * PTR32 *)(gen_frame + 0x10)));
        }
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)));
        uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x18)),1,&(*(int * PTR32 *)(gen_frame + 0x14)),0);
      }
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 8))((*(int * PTR32 *)(gen_frame + 0x18)));
    }
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 8))((*(int * PTR32 *)(gen_frame + 0xc)));
  }
  if (7 < *(uint *)((int)this + 0x38)) {
    puVar3 = (undefined4 *)*puVar3;
  }
  uVar2 = F_00b11d00(((uint *)(gen_frame + 0x1c)),0,(*(undefined4 *)(gen_frame + 0x2c)),puVar3,*(undefined4 *)((int)this + 0x34));
  if (7 < (*(uint *)(gen_frame + 0x30))) {
    uVar2 = F_00406ad0(((uint *)(gen_frame + 0x1c))[0]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: FUN_00b11980 */
uint F_00b11980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb11980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  F_00b11840((undefined *)(param_1 + -4),param_2,param_3);
  uVar1 = ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,1,0,0,&(*(int * PTR32 *)(gen_frame + 0x10)));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x10)),1,&(*(int * PTR32 *)(gen_frame + 0x14)),0);
    while (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x38))((*(int * PTR32 *)(gen_frame + 0x14)),param_3,&(*(int *)(gen_frame + 0x8)));
      while ((uVar1 == 0 && ((*(int *)(gen_frame + 0x8)) == 0))) {
        (*(int *)(gen_frame + 0xc)) = 0xff;
        uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x14)),param_3,1,((undefined2 *)(gen_frame + 0x18)),0xff,&(*(int *)(gen_frame + 0xc)));
        if (-1 < (int)uVar1) {
          ((undefined2 *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0xc)))] = 0;
        }
        uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x38))((*(int * PTR32 *)(gen_frame + 0x14)),param_3,&(*(int *)(gen_frame + 0x8)));
      }
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)));
      uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x10)),1,&(*(int * PTR32 *)(gen_frame + 0x14)),0);
    }
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 8))((*(int * PTR32 *)(gen_frame + 0x10)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
  return 0;
}

/* ref: FUN_00b11ae0 */
uint F_00b11ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11ae0u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  ushort * puVar1;
  ushort * puVar2;
  int iVar3;
  
  puVar1 = param_1;
  puVar2 = param_2;
  iVar3 = param_3;
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    if (*puVar1 != *puVar2) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  }
  return (-(uint)(*puVar1 < *puVar2) & 0xfffffffe) + 1;
}

/* ref: FUN_00b11b50 */
uint F_00b11b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11b50u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  ushort * puVar1;
  ushort * puVar2;
  int iVar3;
  
  puVar1 = param_1;
  puVar2 = param_2;
  iVar3 = param_3;
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    if (*puVar1 != *puVar2) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  }
  return (-(uint)(*puVar1 < *puVar2) & 0xfffffffe) + 1;
}

/* ref: FUN_00b11c00 */
uint F_00b11c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00b11c20 */
byte F_00b11c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  
  if (param_1 != (undefined *)0x0) {
    pvVar1 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar1 = *(undefined * PTR32 *)this;
    }
    if (pvVar1 <= param_1) {
      pvVar1 = this;
      if (7 < *(uint *)((int)this + 0x14)) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP(((int)pvVar1 + *(int *)((int)this + 0x10) * 2)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b11c80 */
uint F_00b11c80(unsigned int gen_a0)
{
  GEN_ENTER(0xb11c80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x80000000) && (uVar1 = F_004069f0(param_1 * 2), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00b11d00 */
uint F_00b11d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb11d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  ushort * puVar2;
  ushort * puVar3;
  uint uVar4;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar1 = *(uint *)((int)this + 0x10) - param_1;
  uVar4 = param_2;
  if (uVar1 < param_2) {
    uVar4 = uVar1;
  }
  uVar1 = uVar4;
  if (param_4 <= uVar4) {
    uVar1 = param_4;
  }
  if (7 < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  puVar2 = (ushort *)((int)this + param_1 * 2);
  puVar3 = param_3;
  do {
    if (uVar1 == 0) {
LAB_00b11d66: ;
      if (param_4 <= uVar4) {
        return (uint)(uVar4 != param_4);
      }
      return 0xffffffff;
    }
    if (*puVar2 != *puVar3) {
      uVar1 = (-(uint)(*puVar2 < *puVar3) & 0xfffffffe) + 1;
      if (uVar1 != 0) {
        return uVar1;
      }
      goto LAB_00b11d66;
    }
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    uVar1 = uVar1 - 1;
  } while( true );
}

/* ref: FUN_00b11da0 */
unsigned int F_00b11da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)((int)this + 0x10) = param_1;
  if (7 < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  *(undefined2 *)((int)this + param_1 * 2) = 0;
  return 0;
}

/* ref: FUN_00b11dd0 */
uint F_00b11dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb11dd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x80000000) && (uVar1 = F_004069f0(param_1 * 2), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00b11e20 */
uint F_00b11e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ed0ac));
  if (*(int *)((int)this + 0x10) != -1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xc))))
                      (*(undefined4 * PTR32 *)((int)this + 0xc),&REFG(undefined, 0x10ed088),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar1) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x10));
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    }
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b11eb0 */
uint F_00b11eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb11eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = F_00b11d00(this,0,*(undefined4 *)((int)this + 0x10),puVar1,param_1[4]);
  return uVar2;
}

/* ref: FUN_00b11ee0 */
unsigned int F_00b11ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((char)param_1 != '\0') && (7 < *(uint *)((int)this + 0x14))) {
    uVar1 = *(undefined4 *)this;
    if (param_2 != 0) {
      F_00c46aa0(this,uVar1,param_2 * 2);
    }
    F_00406ad0(uVar1);
  }
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined2 *)((int)this + param_2 * 2) = 0;
  return 0;
}

/* ref: FUN_00b11f30 */
uint F_00b11f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = *(uint *)((int)this + 0x10) - param_1;
  uVar5 = param_2;
  if (uVar2 < param_2) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    pvVar4 = this;
    pvVar1 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((undefined *)((int)pvVar4 + param_1 * 2),((undefined *)GEN_TOP(((int)pvVar1 + (param_1 + uVar5) * 2))),
               (uVar2 - uVar5) * 2);
    iVar3 = *(int *)((int)this + 0x10) - uVar5;
    *(int *)((int)this + 0x10) = iVar3;
    if (7 < *(uint *)((int)this + 0x14)) {
      *(undefined2 *)(*(int *)this + iVar3 * 2) = 0;
      return (uint)this;
    }
    *(undefined2 *)((int)this + iVar3 * 2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00b11fc0 */
uint F_00b11fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb11fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_1 | 7;
  uVar6 = param_1;
  if (uVar5 < 0x7fffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar3 = uVar1 >> 1;
    uVar6 = uVar5;
    if ((uVar5 / 3 < uVar3) && (uVar6 = uVar3 + uVar1, 0x7ffffffe - uVar3 < uVar1)) {
      uVar6 = 0x7ffffffe;
    }
  }
  uVar5 = uVar6 + 1;
  pvVar4 = (undefined *)0x0;
  if ((uVar5 != 0) &&
     ((0x7fffffff < uVar5 || (pvVar4 = (undefined *)F_004069f0(uVar5 * 2), pvVar4 == (undefined *)0x0)))) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  }
  if (param_2 != 0) {
    pvVar2 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(pvVar4,pvVar2,param_2 * 2);
  }
  if (7 < *(uint *)((int)this + 0x14)) {
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined * PTR32 *)this = pvVar4;
  *(uint *)((int)this + 0x14) = uVar6;
  *(int *)((int)this + 0x10) = param_2;
  if (7 < uVar6) {
    this = pvVar4;
  }
  *(undefined2 *)((int)this + param_2 * 2) = 0;
  return 0;
}

/* ref: FUN_00b120e0 */
uint F_00b120e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb120e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x3f);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_00b12110 */
uint F_00b12110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb12110u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar1 = (undefined4 *)*param_2;
  }
  uVar2 = F_00b11d00(param_1,0,*(undefined4 *)((int)param_1 + 0x10),puVar1,param_2[4]);
  return (uint)(uVar2 == 0);
}

/* ref: FUN_00b12140 */
unsigned int F_00b12140(unsigned int gen_a0)
{
  GEN_ENTER(0xb12140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (7 < *(uint *)((int)this + 0x14)) {
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  return 0;
}

/* ref: FUN_00b12170 */
uint F_00b12170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb12170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (0x7ffffffe < param_1) {
                    
    F_00c4579a("string too long");
  }
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 < param_1) {
    F_00b11fc0(this,param_1,*(undefined4 *)((int)this + 0x10));
    return (uint)(param_1 != 0);
  }
  if (((char)param_2 != '\0') && (param_1 < 8)) {
    uVar3 = *(uint *)((int)this + 0x10);
    if (param_1 < uVar3) {
      uVar3 = param_1;
    }
    if (7 < uVar1) {
      uVar2 = *(undefined4 *)this;
      if (uVar3 != 0) {
        F_00c46aa0(this,uVar2,uVar3 * 2);
      }
      F_00406ad0(uVar2);
    }
    *(uint *)((int)this + 0x10) = uVar3;
    *(undefined4 *)((int)this + 0x14) = 7;
    *(undefined2 *)((int)this + uVar3 * 2) = 0;
    return (uint)(param_1 != 0);
  }
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (7 < uVar1) {
      this = *(undefined * PTR32 *)this;
    }
    *(undefined2 *)this = 0;
  }
  return (uint)(param_1 != 0);
}

/* ref: FUN_00b12230 */
uint F_00b12230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb12230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b10d40(param_1 + -4);
  return uVar1;
}

/* ref: FUN_00b12240 */
uint F_00b12240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb12240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b110d0(param_1 + -4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00b12250 */
uint F_00b12250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb12250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b11690(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b12280 */
uint F_00b12280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb12280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = param_1[4] - param_2;
  uVar5 = param_3;
  if (uVar2 < param_3) {
    uVar5 = uVar2;
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (-iVar1 - 1U <= uVar5) {
                    
    F_00c4579a("string too long");
  }
  if (uVar5 != 0) {
    uVar2 = iVar1 + uVar5;
    if (0x7ffffffe < uVar2) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar2) {
      F_00b11fc0(this,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (7 < *(uint *)((int)this + 0x14)) {
        **(undefined2 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined2 *)this = 0;
      return (uint)this;
    }
    puVar4 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    pvVar3 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(((undefined *)GEN_TOP(((int)pvVar3 + *(int *)((int)this + 0x10) * 2))),(int)puVar4 + param_2 * 2,
               uVar5 * 2);
    *(uint *)((int)this + 0x10) = uVar2;
    if (7 < *(uint *)((int)this + 0x14)) {
      *(undefined2 *)(*(int *)this + uVar2 * 2) = 0;
      return (uint)this;
    }
    *(undefined2 *)((int)this + uVar2 * 2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00b12390 */
uint F_00b12390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb12390u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar1 = (undefined4 *)*param_2;
  }
  uVar2 = F_00b11d00(param_1,0,*(undefined4 *)((int)param_1 + 0x10),puVar1,param_2[4]);
  return (uint)(uVar2 != 0);
}

/* ref: FUN_00b123c0 */
uint F_00b123c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb123c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar4 = param_1[4] - param_2;
  if (param_3 < uVar4) {
    uVar4 = param_3;
  }
  if (this == param_1) {
    F_00b11f30(this,uVar4 + param_2,0xffffffff);
    F_00b11f30(this,0,param_2);
    return (uint)this;
  }
  if (0x7ffffffe < uVar4) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < uVar4) {
    F_00b11fc0(this,uVar4,*(undefined4 *)((int)this + 0x10));
    if (uVar4 == 0) {
      return (uint)this;
    }
  }
  else if (uVar4 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (7 < *(uint *)((int)this + 0x14)) {
      **(undefined2 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined2 *)this = 0;
    return (uint)this;
  }
  puVar3 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar3 = (undefined4 *)*param_1;
  }
  pvVar2 = this;
  if (7 < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  iVar1 = uVar4 * 2;
  F_00c46aa0(pvVar2,(int)puVar3 + param_2 * 2,iVar1);
  *(uint *)((int)this + 0x10) = uVar4;
  if (*(uint *)((int)this + 0x14) < 8) {
    *(undefined2 *)(iVar1 + (int)this) = 0;
    return (uint)this;
  }
  *(undefined2 *)(iVar1 + *(int *)this) = 0;
  return (uint)this;
}

/* ref: FUN_00b124c0 */
uint F_00b124c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb124c0u, gen_a0, gen_a1, gen_a2, 0u);
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
        uVar2 = F_00b12280(this,this,(int)param_1 - (int)((int)(uintptr_t)pvVar3) >> 1,param_2);
        return uVar2;
      }
    }
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (-iVar1 - 1U <= param_2) {
                    
    F_00c4579a("string too long");
  }
  if (param_2 != 0) {
    uVar2 = iVar1 + param_2;
    if (0x7ffffffe < uVar2) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar2) {
      F_00b11fc0(this,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
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
    F_00c46aa0(((undefined *)GEN_TOP(((int)pvVar3 + *(int *)((int)this + 0x10) * 2))),param_1,param_2 * 2);
    *(uint *)((int)this + 0x10) = uVar2;
    if (7 < *(uint *)((int)this + 0x14)) {
      *(undefined2 *)(*(int *)this + uVar2 * 2) = 0;
      return (uint)this;
    }
    *(undefined2 *)((int)this + uVar2 * 2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00b125e0 */
uint F_00b125e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb125e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b11760(param_1 + -4);
  return uVar1;
}

/* ref: FUN_00b125f0 */
uint F_00b125f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb125f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  F_00b123c0(this,param_1,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00b12630 */
uint F_00b12630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb12630u, gen_a0, gen_a1, gen_a2, 0u);
  DWORD in_eax = (DWORD)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  HIMC param_3 = (HIMC)gen_a2;
  uint uVar1;
  DWORD dwBufLen;
  GEN_LPANY lpCandList;
  DWORD DVar2;
  undefined * PTR32 * ppuVar3;
  int iVar4;
  uint local_8;
  
  dwBufLen = gen_imp_ImmGetCandidateListW(param_3,in_eax,(GEN_LPANY)0x0,0);
  if (dwBufLen != 0) {
    lpCandList = (GEN_LPANY)F_00406a50(dwBufLen);
    *in_esi = (int)lpCandList;
    DVar2 = gen_imp_ImmGetCandidateListW(param_3,in_eax,lpCandList,dwBufLen);
    if (DVar2 != 0) {
      ((code *)REFG(gen_code32, 0x14c0d54))(*(undefined4 *)(*in_esi + 8));
      local_8 = 0;
      if (*(int *)(*in_esi + 8) != 0) {
        iVar4 = 0x18;
        do {
          uVar1 = *(uint *)(iVar4 + *in_esi);
          if (uVar1 < dwBufLen) {
            ppuVar3 = (undefined * PTR32 *)(*in_esi + uVar1);
          }
          else {
            ppuVar3 = &REFG(undefined * PTR32, 0x10ed11c);
          }
          ((code *)REFG(gen_code32, 0x14c0d58))(ppuVar3);
          local_8 = local_8 + 1;
          iVar4 = iVar4 + 4;
        } while (local_8 < *(uint *)(*in_esi + 8));
      }
      REFG(undefined4, 0x14c0d68) = dwBufLen;
      return dwBufLen;
    }
  }
  return 0;
}

/* ref: FUN_00b126f0 */
uint F_00b126f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb126f0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (REFG(int, 0x14c0d68) == 0) {
    uVar2 = 0;
    if (in_eax != 0) {
      uVar1 = F_00b12630(0,&(*(int *)(gen_frame + 0x8)),in_eax);
      uVar2 = 0;
      if (uVar1 != 0) {
        ((code *)REFG(gen_code32, 0x14c0d5c))(*(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0xc));
        uVar3 = F_00406b30((*(int *)(gen_frame + 0x8)));
        return (uint)uVar3;
      }
    }
  }
  else {
    uVar2 = ((code *)REFG(gen_code32, 0x14c0d64))();
    REFG(int, 0x14c0d68) = 0;
    if (in_eax != 0) {
      uVar1 = F_00b12630(0,&(*(int *)(gen_frame + 0x8)),in_eax);
      uVar2 = 0;
      if (uVar1 != 0) {
        ((code *)REFG(gen_code32, 0x14c0d5c))(*(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0xc));
        uVar3 = F_00406b30((*(int *)(gen_frame + 0x8)));
        uVar2 = (uint)uVar3;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b12780 */
uint F_00b12780(unsigned int gen_a0)
{
  GEN_ENTER(0xb12780u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (REFG(int, 0x14c0d68) != 0) {
    uVar1 = 0;
    if (in_eax != 0) {
      uVar2 = F_00b12630(0,&(*(int *)(gen_frame + 0x8)),in_eax);
      uVar1 = 0;
      if (uVar2 != 0) {
        ((code *)REFG(gen_code32, 0x14c0d60))(*(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0xc),*(int *)((*(int *)(gen_frame + 0x8)) + 8) + -1);
        uVar3 = F_00406b30((*(int *)(gen_frame + 0x8)));
        uVar1 = (uint)uVar3;
      }
    }
    return uVar1;
  }
  uVar1 = F_00b126f0(in_eax);
  return uVar1;
}

/* ref: FUN_00b127d0 */
unsigned int F_00b127d0(void)
{
  GEN_ENTER(0xb127d0u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x14c0d68) != 0) {
    ((code *)REFG(gen_code32, 0x14c0d64))();
    REFG(int, 0x14c0d68) = 0;
  }
  return 0;
}

/* ref: FUN_00b127f0 */
uint F_00b127f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb127f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  HIMC param_2 = (HIMC)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  LONG LVar2;
  int iVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  (*(uint *)(gen_frame + 0x808)) = uVar1;
  if (param_2 != (HIMC)0x0) {
    if (param_3 < 0x110) {
      if (param_3 != 0x10f) {
        if (param_3 == 0x51) {
          ((code *)REFG(gen_code32, 0x14c0d48))();
          *param_6 = 1;
          F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
          return 0;
        }
        if (param_3 != 0x10d) {
          if (param_3 == 0x10e) {
            if (REFG(char, 0x14c0d6c) == '\0') {
              ((code *)REFG(gen_code32, 0x14c0d50))(&REFG(undefined, 0x10ed120));
            }
            REFG(char, 0x14c0d6c) = 0;
            *param_6 = 1;
            F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
            return 0;
          }
          goto LAB_00b12a29;
        }
      }
      if ((*param_5 & 0x800) != 0) {
        LVar2 = gen_imp_ImmGetCompositionStringW(param_2,0x800,((undefined2 *)(gen_frame + 0x408)),0x1ff);
        if (LVar2 < 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = LVar2 >> 1;
        }
        ((undefined2 *)(gen_frame + 0x408))[(int)(iVar3)] = 0;
        ((code *)REFG(gen_code32, 0x14c0d50))(((undefined2 *)(gen_frame + 0x408)));
        REFG(char, 0x14c0d6c) = '\x01';
      }
      if ((*param_5 & 8) != 0) {
        LVar2 = gen_imp_ImmGetCompositionStringW(param_2,8,((undefined2 *)(gen_frame + 0x8)),0x1ff);
        if (LVar2 < 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = LVar2 >> 1;
        }
        ((undefined2 *)(gen_frame + 0x8))[(int)(uVar1)] = 0;
        LVar2 = gen_imp_ImmGetCompositionStringW(param_2,0x10,((undefined1 *)(gen_frame + 0x608)),0x1ff);
        ((undefined1 *)(gen_frame + 0x608))[(int)((LVar2 < 0) - 1 & uVar1)] = 0;
        LVar2 = gen_imp_ImmGetCompositionStringW(param_2,0x80,(LPVOID)0x0,0);
        ((code *)REFG(gen_code32, 0x14c0d4c))(((undefined2 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x608)),uVar1,LVar2);
        REFG(char, 0x14c0d6c) = '\0';
      }
      *param_6 = 1;
      F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
      return 0;
    }
    if (param_3 == 0x281) {
      *param_5 = *param_5 & 0x3ffffff0;
    }
    else if (param_3 == 0x282) {
      if (param_4 == 3) {
        if (((char *)REFP(0x133a324))[0x16] != '\0') {
          F_00b12780(param_2);
        }
        *param_6 = 1;
        F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
        return 0;
      }
      if (param_4 == 4) {
        if (((char *)REFP(0x133a324))[0x16] != '\0') {
          F_00b127d0();
        }
        *param_6 = 1;
        F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
        return 0;
      }
      if (param_4 == 5) {
        if (((char *)REFP(0x133a324))[0x16] != '\0') {
          F_00b126f0(param_2);
        }
        *param_6 = 1;
        F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
        return 0;
      }
    }
  }
LAB_00b12a29: ;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x80c));
  return 0;
}

/* ref: FUN_00b12aa0 */
uint F_00b12aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb12aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10ed128));
  F_00b105f0((undefined *)((int)this + 4),0xa0,1);
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10ed150));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10ed148));
  return (uint)this;
}

/* ref: Client::System::Input::KeyboardDevice::vf2 */
unsigned int F_00b12ae0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb12ae0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  F_00b10770(param_1 + 4,param_2,&REFG(undefined4, 0x14c0d74),1,8);
  iVar2 = 8;
  uVar3 = REFG(undefined4, 0x14c1200);
  do {
    if ((*(byte *)(&REFG(undefined4, 0x14c0d74) + iVar2) & 8) != 0) {
      uVar1 = uVar3 + 1 & 0x3f;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = CONCAT11((char)iVar2,8);
      if (REFG(undefined4, 0x14c11fc) != uVar1) {
        *(undefined4 *)(&REFG(undefined, 0x14c0ff4) + uVar3 * 8) = (*(undefined4 *)(gen_frame + 0x4));
        *(undefined4 *)(&REFG(undefined, 0x14c0ff8) + REFG(undefined4, 0x14c1200) * 8) = 0;
        uVar3 = uVar1;
        REFG(undefined4, 0x14c1200) = uVar1;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xa0);
  return 0;
}

/* ref: Client::System::Input::KeyboardDevice::vf5 */
unsigned int F_00b12b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb12b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = 0xe;
  if ((char)param_1 != '\0') {
    uVar1 = 0xf;
  }
  REFG(undefined4, 0x14c0d70) = 0;
  REFG(undefined4, 0x14c11fc) = 0;
  REFG(undefined4, 0x14c1200) = 0;
  puVar2 = &REFG(undefined4, 0x14c0d74);
  do {
    *puVar2 = *puVar2 & ~uVar1;
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x14c0ff4);
  return 0;
}

